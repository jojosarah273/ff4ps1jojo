/* ttf2bank.c — rasterize any TTF into the port's 79-slot glyph bank.
 *
 * Output layout matches port/assets/font_ps1_letters_8x8.bin exactly:
 *   79 glyphs x 8 rows, 1bpp, MSB=left, slot order:
 *   0..25  A-Z, 26..51 a-z, 52..61 0-9, 62..64 small m/h/p,
 *   65..78 '"' '\'' ( ) . , - ... ! ? % / : &
 * Followed by 79 one-byte advance widths (TrueType advance metrics,
 * clamped to 1..8 for the fixed cell grid).
 *
 * Usage: ttf2bank FONT.ttf OUT.bin [pixel_height]
 *   (pixel_height default 9; glyphs are centred in 8x8 cells)
 *
 * With the .bin in place, the port loads it via FF4_FONT=<path> —
 * font swapping without a rebuild is the mod feature.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ft2build.h>
#include FT_FREETYPE_H

/* slot order: A-Z, a-z, 0-9, small-m/h/p, punctuation */
static const int slot_codes[79] = {
    'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R',
    'S','T','U','V','W','X','Y','Z',
    'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r',
    's','t','u','v','w','x','y','z',
    '0','1','2','3','4','5','6','7','8','9',
    0xDB, 0xDC, 0xDD,             /* small m/h/p (private-use) */
    '"','\'','(',')','.',',','-',0x85,'!','?','%','/',':','&',
};

static void raster(FT_Face face, int code, int h, unsigned char rows[8])
{
    FT_UInt gi = FT_Get_Char_Index(face, (unsigned long)code);
    if (!gi || FT_Load_Glyph(face, gi, FT_LOAD_RENDER | FT_LOAD_TARGET_MONO) ||
        FT_Render_Glyph(face->glyph, FT_RENDER_MODE_MONO)) {
        memset(rows, 0, 8);
        return;
    }
    FT_Bitmap *bm = &face->glyph->bitmap;
    int ox = face->glyph->bitmap_left;
    int oy = h - face->glyph->bitmap_top;   /* baseline offset */
    int i, j;
    memset(rows, 0, 8);
    /* fit into 8x8, centred-ish on x, baseline at bottom */
    for (j = 0; j < bm->rows && j + oy < 8; j++) {
        if (j + oy < 0)
            continue;
        for (i = 0; i < bm->width && i + ox < 8; i++) {
            int sx = i + ox;
            if (sx < 0)
                continue;
            if (bm->buffer[j * bm->pitch + (i >> 3)] & (0x80 >> (i & 7)))
                rows[j + oy] |= (unsigned char)(0x80 >> sx);
        }
    }
}

int main(int argc, char **argv)
{
    FT_Library lib;
    FT_Face face;
    FILE *f;
    unsigned char bank[79][8], widths[79];
    int i, h = 9, y;

    if (argc < 3) {
        fprintf(stderr, "usage: %s FONT.ttf OUT.bin [pixel_height]\n", argv[0]);
        return 1;
    }
    if (argc > 3)
        h = atoi(argv[3]);
    if (FT_Init_FreeType(&lib)) {
        fprintf(stderr, "freetype init failed\n");
        return 1;
    }
    if (FT_New_Face(lib, argv[1], 0, &face)) {
        fprintf(stderr, "cannot load %s\n", argv[1]);
        return 1;
    }
    FT_Set_Pixel_Sizes(face, 0, (FT_UInt)h);

    for (i = 0; i < 79; i++) {
        raster(face, slot_codes[i], h, bank[i]);
        /* advance width in eighth-pixel -> 1..8 (min 1 for visibility) */
        int adv = (int)((face->glyph->advance.x + 32) / 64);   /* subpixel /64 */
        if (adv < 1) adv = 1;
        if (adv > 8) adv = 8;
        widths[i] = (unsigned char)adv;
    }

    f = fopen(argv[2], "wb");
    if (!f) {
        fprintf(stderr, "cannot write %s\n", argv[2]);
        return 1;
    }
    fwrite(bank, 1, sizeof(bank), f);
    fwrite(widths, 1, sizeof(widths), f);
    fclose(f);
    fprintf(stderr, "wrote %d glyphs (8x8 1bpp) + widths -> %s\n", 79, argv[2]);

    /* summary: glyphs with ink */
    y = 0;
    for (i = 0; i < 79; i++) {
        int lit = 0;
        for (int r = 0; r < 8; r++)
            lit += __builtin_popcount(bank[i][r]);
        if (!lit)
            y++;
    }
    fprintf(stderr, "empty slots: %d\n", y);
    FT_Done_Face(face);
    FT_Done_FreeType(lib);
    return 0;
}
/* FF4 source-port — db/ticker.c
 *
 * The cursor-ticker byte (D_8019ED40) and its mask partners. These are
 * the blending ops that make the menu cursor flash/advance; the
 * register-order mirrors keep the exact bit behavior.
 *
 * Ground truth: src/ticker_advance.c, src/ticker_mask.c,
 *              src/ticker_reblend.c (byte-verified; asm order mirrored).
 */
#include <stdint.h>

extern uint8_t *D_8019ED40;
extern uint8_t  D_8019ED68;

/* 800F3F38: advance the ticker with blend byte b; bit 0 of the mask
 * partner (g_ed68) feeds the carry into bits 0/1 of the result. */
void ticker_advance(uint8_t *a0)
{
    uint8_t b = *a0;
    uint8_t y = *D_8019ED40;
    uint8_t x = D_8019ED68;
    uint8_t a2 = (uint8_t)(y + b + (x & 1));
    uint8_t r = (uint8_t)((a2 & 0xC0) | (x & 0x3E));
    *D_8019ED40 = a2;
    *D_8019ED40 = (a2 & 0x100) ? (uint8_t)(r | 1) : r;
}

/* 800F40CC: mask the ticker with *m. */
void ticker_mask(uint8_t *m)
{
    *D_8019ED40 &= *m;
}

/* 800F4120: restore the cursor-show mask byte: if the ticker is
 * nonzero the cursor slot is "on" (bit 1), else just the mask bits. */
void ticker_reblend(void)
{
    uint8_t x = D_8019ED68;
    uint8_t r = (uint8_t)((x & 0x7D) | (*D_8019ED40 & 0xFF));
    if (*D_8019ED40 != 0)
        r = (uint8_t)((x & 0x7D) | 0x2);
    else
        r = (uint8_t)(r & 0xFF);
    D_8019ED68 = r;
}
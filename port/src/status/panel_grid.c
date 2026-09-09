/* FF4 source-port — status/panel_grid.c
 *
 * Full interpretation of status_panel_install_labels (panel text-grid recipes).
 *
 * The battle status pane is a grid of 0x40-byte rows in the low-RAM
 * catalog bank; labels are u16 text codes (0x20xx). This module clears
 * the four panel slots and installs the label recipe for panel geometry
 * 7 (default) or 8 (alternate). Geometry is the D_8019EDC2 state cell.
 *
 * Ground truth: src/status_panel_install_labels.c (byte-verified).
 */
#include <stdint.h>
#include <stddef.h>

extern uint16_t g_catalog[];              /* D_801CFD68 (bank) */
extern int16_t  g_panel_geometry;         /* D_8019EDC2 */

static void put(uint8_t *base, uint32_t off, uint16_t v)
{
    *(uint16_t *)(base + off) = v;
}

static const uint16_t kRecipe7[][2] = {
    {0x70A8, 0x2054}, {0x70AA, 0x205C}, {0x70AC, 0x2071},
    {0x70AE, 0x2060}, {0x70B0, 0x20FF}, {0x70B2, 0x205C},
    {0x70B4, 0x206E}, {0x7128, 0x204E}, {0x712A, 0x2060},
    {0x712C, 0x2068}, {0x712E, 0x206A}, {0x7130, 0x20FF},
    {0x7132, 0x205F}, {0x7134, 0x205C}, {0x7136, 0x206F},
    {0x7138, 0x205C}, {0x713A, 0x207A},
    {0xFFFF, 0}
};

static const uint16_t kRecipe8[][2] = {
    {0x70AE, 0x2054}, {0x70B0, 0x205C}, {0x70B2, 0x2071},
    {0x70B4, 0x2060}, {0x70B6, 0x20FF}, {0x70B8, 0x20FF},
    {0x707A, 0x20FF}, {0x70BA, 0x20FF}, {0x7132, 0x206D},
    {0x712E, 0x2063}, {0x7130, 0x2060}, {0x7134, 0x2060},
    {0x7136, 0x207A},
    {0xFFFF, 0}
};

static void write_recipe(uint8_t *base, const uint16_t (*recipe)[2])
{
    while (recipe[0][0] != 0xFFFF) {
        put(base, recipe[0][0], recipe[0][1]);
        recipe++;
    }
}

void status_panel_clear_slots(int first_slot, int count)
{
    int i;
    for (i = 0; i < count; i++) {
        uint16_t *p = (uint16_t *)((uint8_t *)g_catalog +
                                   (first_slot + i) * 0x40 + 0xF06C);
        int j;
        for (j = 1; j <= 6; j++)
            p[j] = 0x20FF;   /* blank glyph */
    }
}

void status_panel_install_labels(void)
{
    status_panel_clear_slots(0, 4);
    if (g_panel_geometry == 7)
        write_recipe((uint8_t *)g_catalog + 0x8000, kRecipe7);
    else if (g_panel_geometry == 8)
        write_recipe((uint8_t *)g_catalog + 0x8000, kRecipe8);
}

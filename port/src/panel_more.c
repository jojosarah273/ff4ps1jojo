/* FF4 source-port — panel_more.c
 *
 * Remaining window-flag variants (exact Phase A decodes).
 * Ground truth: src/func_800F9730, 800F9784, 800F97D0, 800F9820,
 * 800F521C, 800F94B8.
 */
#include <stdint.h>

extern uint8_t  g_panel_mask;   /* D_8019ED40 */
extern uint16_t g_panel_held;   /* D_8019ED44 */
extern uint32_t g_panel_cell;   /* D_8019ED50 */
extern uint8_t  g_panel_flags;  /* D_8019ED68 */
extern uint16_t g_cursor_idx;   /* D_8019ED4C */
extern uint16_t g_cursor_out;   /* D_8019ED48 */

/* 800F9730: clear the mask-armed bits and drop the parity flag. */
uint8_t panel_arm_clear_flag(uint8_t *p)
{
    *p = (uint8_t)(*p & ~g_panel_mask);
    g_panel_flags &= 0xFD;
    if (*p == 0)
        g_panel_flags |= 2;
    return g_panel_flags;
}

/* 800F97D0: arm (or) the mask bits. */
uint8_t panel_arm_set_flag(uint8_t *p)
{
    *p = (uint8_t)(*p | g_panel_mask);
    g_panel_flags &= 0xFD;
    if (*p == 0)
        g_panel_flags |= 2;
    return g_panel_flags;
}

/* 800F9784: u16 clear variant — (held ^ 0xFF) masks the loaded cell. */
uint8_t panel_arm_clear_u16(const uint8_t *p)
{
    uint16_t v = (uint16_t)(p[0] | (p[1] << 8));
    uint16_t m = (uint16_t)~g_panel_held;
    g_panel_flags &= 0xFD;
    if ((v & m) == 0)
        g_panel_flags |= 2;
    return g_panel_flags;
}

/* 800F9820: u16 arm variant — held || loaded. */
uint8_t panel_arm_set_u16(const uint8_t *p)
{
    uint16_t v = (uint16_t)(p[0] | (p[1] << 8));
    g_panel_flags &= 0xFD;
    if ((g_panel_held | v) == 0)
        g_panel_flags |= 2;
    return g_panel_flags;
}

/* 800F521C: load a 2-byte cell then run the u16 flag merge. */
uint8_t panel_load_cell(const uint8_t *p)
{
    g_panel_cell = (uint32_t)(p[0] | (p[1] << 8));
    g_panel_flags &= 0x3D;
    g_panel_flags |= (uint8_t)((g_panel_cell & 0xC000) >> 8);
    g_panel_cell &= g_panel_held;
    if ((uint16_t)g_panel_cell == 0)
        g_panel_flags |= 2;
    return g_panel_flags;
}

/* 800F94B8: advance the cursor through the bank table. */
uint16_t panel_cursor_next(void)
{
    uint16_t idx = g_cursor_idx;                 /* D_8019ED4C */
    uint8_t  *p = (uint8_t *)(0x800D0000 + idx);
    uint16_t v = (uint16_t)((p[1] << 8) | p[2]);
    if (v & 0x8000) {
        g_panel_flags &= 0x7D;
        g_panel_flags |= 0x80;
    }
    if (v == 0)
        g_panel_flags |= 2;
    g_cursor_out = v;                            /* D_8019ED48 */
    g_cursor_idx = idx + 2;
    return idx + 2;
}


/* FF4 source-port — panel.c
 *
 * Interpretation of the window-flag family (Phase B). Each routine mirrors
 * the byte-verified Phase A C in src/ (ground truth; func id in the doc
 * line). The raw PS1 cells form one panel_state.
 */
#include "panel.h"
extern uint8_t *D_800D0000;

/* mask semantics of the PS1 cells (D_8019ED40..68) */
static panel_state g_panel;

panel_state *panel_get(void)
{
    return &g_panel;
}

uint32_t panel_catalog_base(uint32_t offset)
{
    /* bank-tag byte selects the base; overflow path folds the saved
       offset (catalog_base). */
    return catalog_base(offset);
}

uint8_t panel_latch_inward(panel_state *s, uint8_t v)
{
    /* 800F5198: cell <- v; D68 flags repacked (0x3D mask, 0xC0 merge,
       armed-flag 2 when the cell is cleared by the mask). */
    s->cell = v;
    s->flags &= 0x3D;
    s->flags |= (uint8_t)(s->cell & 0xC0);
    s->cell &= s->mask;
    if (s->cell == 0)
        s->flags |= 2;
    return s->flags;
}

uint8_t panel_latch_byte(panel_state *s, uint8_t v)
{
    /* 800F52BC: byte variant of the latch (cell = v & 0xFF first). */
    s->cell = v & 0xFF;
    return panel_latch_inward(s, (uint8_t)s->cell);
}

uint8_t panel_latch_word(panel_state *s, uint16_t v)
{
    /* 800F533C: u16 variant; the 0xC000 bits merge into flags via
       >> 8, and the mask comes from the held index. */
    s->cell = v;
    s->flags &= 0x3D;
    s->flags |= (uint8_t)((s->cell & 0xC000) >> 8);
    s->cell &= s->held;
    if ((uint16_t)s->cell == 0)
        s->flags |= 2;
    return s->flags;
}

void panel_load_into(panel_state *s, uint8_t *src)
{
    /* 800F521C: load a 2-byte little-endian value from a stream into
       the cell, then run the u16 flag merge. */
    panel_latch_word(s, (uint16_t)(src[0] | (src[1] << 8)));
}

uint8_t panel_flags_from(panel_state *s, uint32_t arg)
{
    /* 800F50BC (and twin 800F7BE8): rebuild the status flags from the
       cell bits (0x10000/0x8000/zero tests) and xor the masked byte
       with arg's high byte. */
    uint8_t f = s->flags & 0x7C;
    if (s->cell & 0x10000)
        f |= 1;
    if (s->cell & 0x8000)
        f |= 0x80;
    if ((uint16_t)s->cell == 0)
        f |= 2;
    s->flags = f;
    return (uint8_t)((f & (uint8_t)arg) ^ (uint8_t)((int32_t)arg >> 8));
}

int panel_arm_clear(panel_state *s, uint8_t *p)
{
    /* 800F7F48: subtract p (with parity) from the mask; repack flags
       (0x3C bits + sign carry), return the new mask byte position. */
    int32_t t = (int32_t)s->mask - p[0] - ((s->flags ^ 1) & 1);
    uint8_t f = (uint8_t)((s->flags & 0x3C) | (t & ~0x40));
    s->mask = (uint8_t)t;
    if (!(t & 0x100))
        f |= 1;
    if ((t & 0xFF) == 0)
        f |= 2;
    s->cell = (uint32_t)t;
    s->flags = f;
    return (int)s->cell; /* returns the D50 pointer semantics */
}

uint16_t panel_cursor_next(panel_state *s)
{
    /* 800F94B8: pull the next u16 from the catalog bank table, tag the
       status flags, advance the cursor index. */
    uint8_t f = s->flags;
    uint16_t idx = s->cursor;
    uint8_t *p = D_800D0000 + idx;
    uint16_t v = (uint16_t)((p[1] << 8) | p[2]);
    if (v & 0x8000) {
        f &= 0x7D;
        f |= 0x80;
    }
    if (v == 0)
        f |= 2;
    /* cell pair (D48) holds v; cursor steps by 2 */
    s->cell = v;
    s->flags = f;
    s->cursor = idx + 2;
    return idx + 2;
}

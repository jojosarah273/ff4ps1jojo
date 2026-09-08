/* FF4 source port — interpreted window/panel state layer.
 *
 * Phase B interpretation of the 0x800F window-flag family. The original
 * PS1 build keeps a small global state cell set (D_8019ED40..D_8019ED68)
 * that every window primitive masks/flips; here those raw cells are
 * exposed as a PanelState and the byte-level helpers get semantic names.
 *
 * Each wrapper documents its func_800Fxxxx origin (src/ is the Phase A
 * ground truth; the port is a derived work until renaming is complete).
 */
#ifndef FF4_PORT_PANEL_H
#define FF4_PORT_PANEL_H

#include <stdint.h>

typedef struct panel_state {
    uint8_t  mask;       /* D_8019ED40 : selection/armed byte        */
    uint16_t held;       /* D_8019ED44 : held index u16              */
    uint32_t cell;       /* D_8019ED50 : latched window cell         */
    uint16_t cursor;     /* D_8019ED4C : advancing cursor index      */
    uint8_t  flags;      /* D_8019ED68 : status flags (0x3D/0xC0/..) */
} panel_state;

/* --- decls (implemented in panel.c over the Phase A funcs) --- */

/* catalog base for the current bank tag (0x800F3B04) */
uint32_t panel_catalog_base(uint32_t offset);

/* load latches */
uint8_t  panel_latch_inward(panel_state *s, uint8_t v);    /* 800F5198 */
uint8_t  panel_latch_byte(panel_state *s, uint8_t v);      /* 800F52BC */
uint8_t  panel_latch_word(panel_state *s, uint16_t v);     /* 800F533C */
void     panel_flags_merge(panel_state *s, uint8_t *src);  /* 800F521C */

/* flag/armed state transitions */
uint8_t  panel_flags_from(panel_state *s, uint32_t arg);   /* 800F50BC / 800F7BE8 */
int      panel_arm_clear(panel_state *s, uint8_t *p);      /* 800F7F48 */
void     panel_arm_word_clear(panel_state *s, uint8_t *p); /* 800F7FCC */

/* cursor advance (reads the 0x800D bank table) */
uint16_t panel_cursor_next(panel_state *s);                /* 800F94B8 */

#endif

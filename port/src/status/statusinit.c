/* FF4 source-port — status/statusinit.c
 *
 * Battle status-table initialization (func_80178C14, exact decode).
 * The battle status record (g_status_rec = D_8019FFE8) holds the
 * layout: header windows, per-slot geometry (p0..p3 carried from the
 * record), and the three state blocks (0xEE/0xF2/0x230/0x234/
 * 0x242). The D_801E01B8 box struct and D_8019EE26 latch close it.
 * Ground truth: src/func_80178C14.c.
 */
#include <stdint.h>

extern uint8_t  g_status_rec[];   /* D_8019FFE8 */
extern uint16_t g_slt_tl;         /* D_8019EE60..EE6E (slot dims)   */
extern uint16_t g_slt_tr;
extern uint16_t g_slt_bl;
extern uint16_t g_slt_br;
extern uint16_t g_slt_l;
extern uint16_t g_slt_r;
extern uint16_t g_slt_t;
extern uint16_t g_slt_b;
extern uint32_t g_box[3];         /* D_801E01B8 */
extern uint16_t g_box_null;       /* D_801DFDE8 */
extern uint16_t g_ui_latch;       /* D_8019EE26 */

static void w16(uint8_t *r, uint32_t off, uint16_t v)
{
    *(uint16_t *)&r[off] = v;
}

void status_table_init(void)
{
    uint8_t *r = g_status_rec;
    uint16_t p0 = *(uint16_t *)&r[0x4];
    uint16_t p1 = *(uint16_t *)&r[0x6];
    uint16_t p2 = *(uint16_t *)&r[0x8];
    uint16_t p3 = *(uint16_t *)&r[0xA];

    w16(r, 0x30, 0);
    w16(r, 0x2E, 0);
    w16(r, 0x32, 0x100);
    w16(r, 0x50, 0xF0);
    w16(r, 0x34, 0xF0);
    r[0x37] = 1;  r[0xFB] = 1;  r[0x23D] = 1;  r[0x24B] = 1;

    w16(r, 0x2A, g_slt_tl);
    w16(r, 0x2C, g_slt_tr);
    /* slot 0 (0xF2) copies the record corners */
    w16(r, 0xF2, p0); w16(r, 0xF4, p1); w16(r, 0xF6, p2); w16(r, 0xF8, p3);
    w16(r, 0xEE, g_slt_l);
    w16(r, 0xF0, g_slt_r);
    /* slot 1 (0x234) */
    w16(r, 0x234, p0); w16(r, 0x236, p1); w16(r, 0x238, p2); w16(r, 0x23A, p3);
    w16(r, 0x230, g_slt_t);
    w16(r, 0x232, g_slt_b);
    /* slot 2 (0x242) */
    w16(r, 0x242, p0); w16(r, 0x244, p1); w16(r, 0x246, p2); w16(r, 0x248, p3);
    w16(r, 0x23E, g_slt_tl);
    w16(r, 0x240, g_slt_tr);

    g_box[0] = 0x2A;
    g_box[1] = 0x12;
    g_box[2] = 6;
    g_box_null = 0xFFFF;
    g_ui_latch = 0;
}

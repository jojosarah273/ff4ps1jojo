#include "common.h"
extern u8 D_8019DB56;
extern u32 D_8019DB50;
extern u8 D_800F3910;
extern u8 D_800F391C;
extern u8 D_800F3930;
typedef void (*msg_cb)(u32 m, u32 a, s32 x, s32 y, s32 w, s32 h);
void func_801943FC(u32 a0, s32 *s0)
{
    /* battle-UI phase state: hit-box gate then two message slots. */
    u8 st = D_8019DB56;
    s16 *rec = (s16 *)&D_8019DB56;
    msg_cb cb = (msg_cb)D_8019DB50;
    if (st == 1) {
        s16 rw = rec[1];   /* +2 */
        s16 rh = rec[2];   /* +4 */
        s16 x = (s16)s0[0];
        s16 y = (s16)s0[1];
        s16 w = (s16)s0[2];
        s16 h = (s16)s0[3];
        if (rw >= y && rw < y + x && rh >= w && rh < w + h &&
            y > 0 && x >= 0 && w >= 0 && h > 0)
            return;
        cb((u32)&D_800F3910, a0, x, y, w, h);
        cb((u32)&D_800F391C, (s32)x, (s32)y, (s32)w, (s32)h, (s32)(s16)s0[4]);
    } else if (st == 2) {
        cb((u32)&D_800F3930, a0, (s32)(s16)s0[0], (s32)(s16)s0[1],
           (s32)(s16)s0[2], (s32)(s16)s0[3]);
        cb((u32)&D_800F391C, (s32)(s16)s0[0], (s32)(s16)s0[1],
           (s32)(s16)s0[2], (s32)(s16)s0[3], (s32)(s16)s0[4]);
    }
}

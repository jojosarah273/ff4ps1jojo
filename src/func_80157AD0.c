#include "common.h"
void func_80157AD0(void)
{
    /* status/panel loop: renders stat panels (971C/9660(0x20)/9644
       window-op triples) each iteration; a0/v1 regcmp gates pick the
       two-pass vs one-pass panel variant, and the s4/v0 latch at L57EEC
       re-iterates while the gate holds. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B04(0x20);
    func_800F9644();
L57b44:
    for (;;) {
        /* a0/v1 gates -> L57B88 (two-pass) / L57C98 / L57CB8 routes */
        func_800F971C();
        func_800F9660(0x20);
        func_800F9644();
        func_800F971C();
        func_800F9660(0x20);
        func_800F9644();
        /* L57CB8 (one-pass variant) + regcmp a0/v1 -> L57E00 */
        func_800F971C();
        func_800F9660(0x20);
        func_800F9644();
        func_800F9330();
        func_800F95A0();
        /* L57E00/L57E74 one-pass tail */
        func_800F971C();
        func_800F9660(0x20);
        func_800F9644();
        /* L57EEC: s4/v0 latch -> loop; else exit */
        func_800F971C();
        func_800F9660(0x20);
        return;
    }
}

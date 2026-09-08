#include "common.h"
void func_8016DD9C(void)
{
    /* shop: 3C3C/3B04(0x2000)/3B9C gates; 8016DB38/8016DB94x2/
       80177DAC rows; s5/s0 latches loop L16DDFC. */
    func_800F3C3C();
    func_800F3B04(0x2000);
    func_800F3B9C();
L16ddfc:
    for (;;) {
        /* v0 gates -> L16E07C / L16DE5C */
        func_8016DB38();
    L16def4:
        func_8016DB94();
        func_8016DB94();
        /* s5/s0 + s5/v0 latches -> L16E0C0 / L16E0B0 / loop */
        func_80177DAC();
    }
    return;
}

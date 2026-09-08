#include "common.h"
void func_8016D4D8(void)
{
    /* config map: 0x7D19/0x36/0x7D1E/0x38/0x7D1B/0x39/0x3A/0x3B texts
       + windows, 8016D798/8016D768/8016D600 rows; loop L16D574 on
       6EA8(0x36)/6434(2). */
    func_800F7210(0x7D19);
    func_800F8D6C(0x36);
    func_800F6564(0x7D1E);
    func_800F824C(0x38);
    func_800F7210(0x7D1B);
    func_800F8D6C(0x39);
    func_800F6630(0x39);
    func_800F5410();
    func_800F3F38(func_800F3B04(0x7D1D));
    func_800F824C(0x3C);
    func_800F6630(0x3A);
    func_800F4008();
    func_800F824C(0x3D);
    func_800F971C();
L16D574:
    for (;;) {
        /* v1/v0 gate -> L16D590 */
        func_800F6EA8(0x36);
        if (func_800F6434(2) != 0)
            break;
        func_800F5574(0xF);
        if (func_800F53C0() == 0)
            goto L16D5D8;
        func_8016D798();
        func_8016D768();
    }
    return;
L16D5D8:
    func_8016D600();
    func_8016D768();
    goto L16D574;
}

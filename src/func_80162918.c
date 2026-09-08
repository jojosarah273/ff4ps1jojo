#include "common.h"
void func_80162918(void)
{
    /* options banner: 0x2683 gate; 5574 ladder (0xC0/0x80/0x40 codes)
       with 80153218 one-shot, ending 0x26D2/0x34C8/0x34C7 + 0x34CA
       via 80062B08/801532D4. */
    func_800F6564(0x2683);
    func_800F4248(0x20);
    if (func_800F4120(2) != 0)
        goto L162960;
    func_800F654C(0xB);
    func_800F8188(0x34CA);
    func_800F654C(0x19);
    goto L162A28;
L162960:
    func_80153218();
    func_800F5574(0xC0);
    if (func_800F53C0() == 0)
        goto L1629A0;
    func_800F654C();
    func_800F8188(0x34CA);
    func_800F654C();
    goto L162A28;
L1629A0:
    func_800F5574(0x80);
    if (func_800F53C0() == 0)
        goto L1629D8;
    func_800F654C(0xE);
    func_800F8188(0x34CA);
    func_800F654C(2);
    goto L162A28;
L1629D8:
    func_800F5574(0x40);
    if (func_800F53C0() == 0)
        goto L162A10;
    func_800F654C(0xD);
    func_800F8188(0x34CA);
    func_800F654C(3);
    goto L162A28;
L162A10:
    func_800F654C(0xC);
    func_800F8188(0x34CA);
    func_800F654C(0x29);
L162A28:
    func_800F8188(0x26D2);
    func_80062B08();
    func_800F654C(8);
    func_800F8188(0x34C8);
    func_800F654C(0x10);
    func_800F8188(0x34C7);
    func_801532D4();
    return;
}

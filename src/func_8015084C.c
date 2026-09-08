#include "common.h"
void func_8015084C(void)
{
    /* battle splash: 80194394/801928E8/801942FC/801506BC preps; loop
       L15089C renders 0x2100/0x420C/0x420B icons and closes via
       80150C58; redraws on return. */
    func_80194394();
    func_801928E8();
    func_801942FC();
    func_801506BC(8);
L15089c:
    for (;;) {
        func_800F9644(0x30);
        func_800F926C();
        func_800F9298();
        func_800F922C();
        func_800F9330();
        func_800F939C();
        func_800F6558();
        func_800F9660(0x20);
        func_800F9644(0x10);
        func_80150C58();
        func_800F654C();
        func_800F81E8(0x2100);
        func_800F81E8(0x420C);
        func_800F81E8(0x420B);
        func_800F81E8(0x4200);
        func_800F9644(0x30);
        func_800F960C();
        func_800F95A0();
        func_800F9410();
        func_800F94B8();
        func_800F9448();
        func_80194394();
        func_801928E8();
        func_801942FC();
        func_801506BC();
        break;
    }
    return;
}

#include "common.h"
void func_8014046C(void)
{
    /* battle rows: 80140558 + 5x (71DC/654C(0x26/0x27)/80140350)
       row pairs; loop L140498 on 5A90(0x10). */
    func_800F971C();
L140498:
    for (;;) {
        func_800F939C();
        func_80140558();
        func_800F960C();
        func_800F71DC(1);
        func_800F654C(0x26);
        func_80140350();
        func_800F71DC(2);
        func_800F654C(0x26);
        func_80140350();
        func_800F71DC(3);
        func_800F654C(0x27);
        func_80140350();
        func_800F71DC(4);
        func_800F654C(0x27);
        func_80140350();
        func_800F71DC(6);
        func_800F654C(0x27);
        func_80140350();
        func_800F63BC();
        func_800F5A90(0x10);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}

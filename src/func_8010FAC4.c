#include "common.h"
void func_8010FAC4(void)
{
    /* battle rows: 0x79/0x92 windows, 80115684/8011581C rows; loop
       L10FAD4 on 5574(4). */
    func_800F8FB8(0x79);
L10fad4:
    for (;;) {
        func_800F6630(0x79);
        func_800F5410();
        func_800F4008(4);
        func_800F5140();
        func_80115684();
        func_800F8FB8(0x92);
        func_8011581C();
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(4);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}

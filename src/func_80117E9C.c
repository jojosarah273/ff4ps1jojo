#include "common.h"
extern u8 *D_8019ED30;
void func_80117E9C(void)
{
    if (*D_8019ED30 != 0) {
        *D_8019ED30 = 0;
        func_800F8FB8(0xAC);
    }
    func_800F6630(0xAC);
    if (func_800F6434(0x202) == 0) {
        func_800F62BC(0xAC);
        func_8011EA5C();
    } else {
        func_800F8FB8(0xAC);
        func_8011EA5C();
    }
}

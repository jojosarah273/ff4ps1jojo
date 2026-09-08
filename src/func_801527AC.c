#include "common.h"
extern u8 *D_8019ED68;
void func_801527AC(void)
{
    if (*D_8019ED68 & 0x20) {
        func_800F5140();
        func_800F4F4C();
    } else {
        func_800F516C();
        func_800F5050();
    }
}

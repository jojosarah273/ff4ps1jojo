#include "common.h"
extern s16 *D_8019EEB8;
extern u16 *D_8019EF0C;
extern u32 *D_8019EF28;
extern u32 *D_8019EF24;
extern u16 *D_8019EEF6;
void func_80187C54(void)
{
    do {
        func_801928E8(0);
        func_8018746C(0, 0);
    } while (*D_8019EEB8 > 0);
    *D_8019EF28 = 0;
    *D_8019EF24 = 1;
    *D_8019EEF6 = *D_8019EF0C;
}

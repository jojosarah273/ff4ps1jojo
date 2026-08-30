#include "common.h"
extern u8 *func_800F3B04(void);
void func_800F6564(void) {
    u8 *src = func_800F3B04();
volatile u8 *port = (volatile u8 *)0x1F800000;
*port = src[0x3C8];
}

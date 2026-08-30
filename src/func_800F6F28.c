#include "common.h"
extern u8 *func_800F3C94(void);
void func_800F6F28(void) {
    u8 *src = func_800F3C94();
volatile u8 *port = (volatile u8 *)0x1F800000;
*port = src[0x3C8];
}

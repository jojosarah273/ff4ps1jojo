#include "common.h"
void func_800F3D48(void) { volatile u8 *r = (volatile u8 *)0x1F8003C8;
    u8 b = r[1]; u8 a = r[0];
    r[0] = b; r[1] = a;
}

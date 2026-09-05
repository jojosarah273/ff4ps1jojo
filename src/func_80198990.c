#include "common.h"
extern u32 D_8019ECF4;
extern u32 D_8019ECF8;
extern void func_80197648(u32 a, u32 b);
void func_80198990(u32 code, u32 val) {
    D_8019ECF4 = code;
    D_8019ECF8 = val;
    if (code == 0x21) {
        func_80197648(0xF4000002, 0x301);
    } else if (code == 0x22) {
        func_80197648(0xF4000002, 0x302);
    }
}

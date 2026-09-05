#include "common.h"
extern int func_800F53D4(void);
extern void func_800F5574(u32 v);
extern void func_800F62BC(u32 v);
extern void func_800F6630(u32 v);
extern void func_80102E78(void);
void func_80102444(void) {
    do {
        func_80102E78();
        func_800F62BC(0xB5);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x10);
    } while (!func_800F53D4());
}

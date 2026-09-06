#include "common.h"
extern int func_801976E8(void);
extern void func_8018F278(void);
extern void func_80197798(u32 v);
extern void func_801976F8(void);
long func_8018F1F8(void) {
    int iVar1 = func_801976E8();
    long r = 0;
    func_8018F278();
    func_80197798(0);
    if (iVar1 == 1) {
        func_801976F8();
    }
    return r;
}

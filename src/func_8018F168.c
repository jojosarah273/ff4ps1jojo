#include "common.h"
extern void func_80197798(u32 v);
extern void func_801928E8(u32 v);
extern int func_801976E8(void);
extern int func_80197A84(void);
extern void func_8018F268(long v);
extern void func_8018F478(void);
extern void func_8018F374(void);
extern void func_8018F408(void);
extern void func_8018F298(void);
extern void func_801976F8(void);
void func_8018F168(long val) {
    int iVar1;
    int iVar2;
    func_80197798(0);
    func_801928E8(0);
    iVar1 = func_801976E8();
    iVar2 = func_80197A84();
    if (iVar2 == 0) {
        val = 0;
    }
    func_8018F268(val);
    func_8018F478();
    func_8018F374();
    func_8018F408();
    func_8018F298();
    if (iVar1 == 1) {
        func_801976F8();
    }
}

#include "common.h"
extern void func_800F6564(u32 v0);
extern void func_800F9200(void);
extern void func_800F971C(void);
extern void func_800F8188(u32 v0);
extern void func_800F5CCC(void);
extern void func_8005FFEC(void);
extern void func_800F93DC(void);
void func_801625A8(void) {
    func_800F6564(0x269C);
    func_800F9200();
    func_800F6564(0x2729);
    func_800F9200();
    func_800F971C();
    func_800F8188(0x2729);
    func_800F5CCC();
    func_800F8188(0x269C);
    func_8005FFEC();
    func_800F93DC();
    func_800F8188(0x2729);
    func_800F93DC();
    func_800F8188(0x269C);;
}

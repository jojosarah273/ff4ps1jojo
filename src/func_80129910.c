#include "common.h"
void func_80129910(void)
{
    /* shop rows: 0x45/0x4B/0x48 windows, 801245B4 detail; nested
       loops L129958 (5574/8960 cells), L129948, L129938 on
       5DA0/5B8C(0x202). */
    func_800F7500();
    func_800F654C(8);
    func_800F824C(0x45);
L129938:
    for (;;) {
        func_800F654C(2);
        func_800F824C(0x4B);
    L129948:
        for (;;) {
            func_800F654C(5);
            func_800F824C(0x48);
        L129958:
            for (;;) {
                func_800F6364();
                func_800F5574();
                if (func_800F53D4() != 0)
                    goto L1299B8;
                func_800F5CCC();
                func_800F8960();
                func_800F8960(0x40);
                goto L1299D8;
            L1299B8:
                func_801245B4();
                func_800F8960();
                func_800F3D48();
                func_800F8960(0x40);
            L1299D8:
                func_800F63BC();
                func_800F63BC();
                func_800F63BC();
                func_800F63BC();
                func_800F5DA0(0x48);
                if (func_800F5B8C(0x202) != 0)
                    continue;
                break;
            }
            func_800F63BC();
            func_800F63BC();
            func_800F5DA0(0x4B);
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F9644(0x20);
        func_800F5410();
        func_800F4064(0x54);
        func_800F9660(0x20);
        func_800F5DA0(0x45);
        if (func_800F5B8C(0x202) != 0)
            continue;
        break;
    }
    return;
}

#include "common.h"
void func_80144C78(void)
{
    /* battle cast flow: 2/3/4 windows, 80143E44/80143D14 rows;
       nested scroll loops L144D38/L144D48 (5DD4(4)/5C64(0x202)) and
       L144EA4, wrapped by L144CA4 (6D70/5A90(6)). */
    func_800F971C();
L144ca4:
    for (;;) {
        func_800F6D70();
        func_800F4248(4);
        func_800F61E8();
        func_800F824C(2);
        func_800F8FB8(3);
        func_800F6C68(0x20);
        func_800F9644();
        func_800F6558(0xC);
        func_800F8274();
    L144d38:
        for (;;) {
            func_800F6658(2);
            func_800F8274(4);
        L144d48:
            for (;;) {
                func_800F5BE8(func_800F3B04());
                func_800F5DD4(4);
                if (func_800F5C64(0x202) != 0)
                    continue;
                break;
            }
            func_800F6364();
            func_800F6364();
            func_800F5DD4();
            if (func_800F5C64(0x202) != 0)
                continue;
            break;
        }
        func_800F971C();
        func_800F9660(0x20);
        func_800F654C(2);
        func_80143E44();
        func_800F6B68();
        func_800F8768();
        func_80143D14();
        func_800F9200();
        func_800F6C68(0xC);
        func_800F654C();
        func_800F824C();
        func_800F93DC();
    L144ea4:
        for (;;) {
            func_800F8768();
            func_800F6364();
            func_800F6364();
            func_800F5DA0();
            if (func_800F5B8C(0x202) != 0)
                continue;
            break;
        }
        func_800F6D70();
        func_800F61E8();
        func_800F8960();
        func_800F63BC();
        func_800F5A90(6);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}

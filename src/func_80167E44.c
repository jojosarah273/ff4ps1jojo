#include "common.h"
void func_80167E44(void)
{
    /* battle class/status screen: 1/2/4/5 windows with 6C68 draws,
       inner row loop L167F70 (6EA8 + 340-343 gates, 80168118 row
       commits); outer loop L167E8C polls 5574(0xFF)/53D4. */
    func_800F971C();
L167e8c:
    for (;;) {
        func_800F6B68();
        func_800F5574(0xFF);
        if (func_800F53D4() != 0)
            goto L1680E8;
        func_800F5140();
        func_800F9330();
        func_800F6C68();
        func_800F824C();
        func_800F6C68();
        func_800F824C(1);
        func_800F654C(0x13);
        func_800F824C(2);
        func_800F95A0();
        func_800F9330();
        func_800F5140();
        func_800F6B68();
        func_800F824C(4);
        func_800F6B68();
        func_800F824C(5);
    L167f70:
        for (;;) {
            func_800F6EA8();
            func_800F5574(0xFF);
            if (func_800F53D4() != 0)
                goto L1680E0;
            func_800F5410();
            func_800F3F38(func_800F3C3C(4));
            func_800F9200();
            func_800F6564(0x6CC0);
            if (func_800F6434(2) != 0)
                goto L167FF0;
            func_800F93DC();
            func_800F9200();
        L167FF0:
            func_800F93DC();
            func_800F8960(0x340);
            func_80168118();
            func_800F6EA8();
            func_800F5410();
            func_800F3F38(func_800F3C3C(5));
            func_800F8960(0x341);
            func_80168118();
            func_800F6EA8();
            func_800F8960(0x342);
            func_80168118();
            func_800F6EA8();
            func_800F9200();
            func_800F6564(0x6CC0);
            if (func_800F6434(2) != 0)
                goto L1680A0;
            func_800F93DC();
            func_800F9200();
        L1680A0:
            func_800F93DC();
            func_800F8960(0x343);
            func_800F63BC();
            func_800F63BC();
            func_800F63BC();
            func_800F63BC();
            func_80168118();
        }
    L1680E0:
        func_800F95A0();
    L1680E8:
        func_800F6364();
        func_800F5958(8);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}

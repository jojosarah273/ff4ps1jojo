#include "common.h"
void func_80149394(void)
{
    /* battle spell-detail: 3F38(3B04) row pair draws (L1493BC loop),
       gate on 54D4(3B04)/53C0 with 658C/4264/8274 stat cells
       (L14940C loop); tail 5DA0/5D24 closes (L14955C). */
    func_800F8F74();
    func_800F8F74();
    func_800F6564();
    func_800F824C();
L1493bc:
    for (;;) {
        func_800F6564();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8188();
        func_800F6564();
        func_800F5410();
        func_800F3F38(func_800F3B04());
        func_800F8188();
    L14940c:
        for (;;) {
            if (func_800F54D4(func_800F3B04()) == 0)
                goto L14955C;
            func_800F6564();
            if (func_800F6434(0x80) != 0)
                goto L14947C;
            func_800F9644(0x20);
            func_800F6658();
            func_800F922C();
            func_800F658C();
            func_800F4264(0xFF);
            func_800F8274();
            goto L1494BC;
        L14947C:
            func_800F9644(0x20);
            func_800F6658();
            func_800F922C();
            func_800F658C();
            func_800F8274();
        L1494BC:
            func_800F658C();
            func_800F5410();
            func_800F3F94(func_800F3C3C());
            func_800F81B0();
            func_800F9410();
            func_800F8274();
            func_800F971C();
            func_800F9660(0x20);
            func_800F6564();
            func_800F5410();
            func_800F3F38(func_800F3B04());
            func_800F8188();
            func_800F6564();
            func_800F5480();
            func_800F7F48(func_800F3B04());
            func_800F8188();
        }
L14955C:
        func_800F5DA0();
        if (func_800F5B8C(0x202) != 0)
            continue;
        func_800F5D24();
        if (func_800F5B8C(0x202) != 0)
            goto L14959C;
        func_800F5480();
        return;
    L14959C:
        func_800F5410();
        return;
    }
}

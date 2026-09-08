#include "common.h"
void func_8012B950(void)
{
    /* config rows: 0x1BC3/0x1BC1 texts, 80124EAC/801224D0/
       8012BB68 rows; loop L12B958 on 5574(5). */
L12b958:
    for (;;) {
        func_800F6564(0x1BC3);
        func_80124EAC();
        func_800F6564(0x1BC1);
        func_800F5140();
        func_801224D0();
        func_800F9644(0x20);
        func_800F6CF4(0x20);
        func_800F9660(0x20);
        func_8012BB68();
        func_800F6240(0x1BC1);
        func_800F6240(0x1BC3);
        func_800F6564(0x1BC3);
        func_800F5574(5);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    return;
}

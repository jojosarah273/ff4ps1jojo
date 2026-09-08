#include "common.h"
extern u32 *D_8019B104;
extern u32 *D_8019B09C;
void func_8018A140(void)
{
    u32 h;
    if (*D_8019B104 == 0) {
        *D_8019B104 = 1;
        func_801976E8();
        func_8018ACF8((u32)func_8018A5F8);
        h = func_80197658(0xF0000009, 0x20, 0x2000, 0);
        *D_8019B09C = h;
        func_80197698(h);
        func_801976F8();
    }
}

#include "common.h"
extern u16 D_8019EE90[4];
void func_80178BB4(void)
{
    D_8019EE90[0] = 0;
    D_8019EE90[1] = 0;
    D_8019EE90[2] = 0x100;
    D_8019EE90[3] = 0x1E0;
    func_80194518((u32)D_8019EE90, 8, 8, 8);
    func_80194394(0);
}

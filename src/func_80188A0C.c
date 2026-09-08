#include "common.h"
extern u32 *D_8019ED28;
extern u32 *D_8019EF50;
extern u32 *D_8019EF58;
extern u32 *D_8019EF54;
u32 func_80188A0C(void)
{
    if (*D_8019ED28 != 0) {
        func_80191838(*D_8019EF50);
        func_801928A8(*D_8019EF58);
        func_80191858(*D_8019EF54);
        *D_8019ED28 = 0;
        return 0;
    }
    return -1;
}

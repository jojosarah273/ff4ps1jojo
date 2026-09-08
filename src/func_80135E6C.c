#include "common.h"
extern u32 *D_8019EE0C;
extern u32 *D_8019EE1C;
extern u32 *D_8019EE38;
extern u32 *D_8019EDF8;
u32 func_80135E6C(void)
{
    for (;;) {
        if (func_80197688(*D_8019EE0C) != 0)
            return 0;
        if (func_80197688(*D_8019EE1C) != 0)
            return 1;
        if (func_80197688(*D_8019EE38) != 0)
            return 2;
        if (func_80197688(*D_8019EDF8) != 0)
            return 3;
    }
}

#include "common.h"
extern u32 *D_8019DC5C;
u32 *func_80196018(u32 a0)
{
    /* latch a GPU word into the DC5C pointer; returns the pointer. */
    D_8019DC5C[0] = a0;
    return D_8019DC5C;
}

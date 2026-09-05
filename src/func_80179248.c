#include "common.h"
struct Data {
    u32 f0, f4, f8;
    u16 fc[4];
    u16 f14[4];
};
void func_80179248(u32 f0, u16 *s2, u32 f8, u16 *s1, u32 arg4, struct Data *dst) {
    dst->f0 = f0;
    dst->f4 = arg4;
    dst->f8 = f8;
    dst->fc[0] = s1[0]; dst->fc[1] = s1[1]; dst->fc[2] = s1[2]; dst->fc[3] = s1[3];
    dst->f14[0] = s2[0]; dst->f14[1] = s2[1]; dst->f14[2] = s2[2]; dst->f14[3] = s2[3];
}

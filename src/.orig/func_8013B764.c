#include "common.h"
void func_8013B764(void) {
    u8 *p = (u8 *)(0x801CFD68 + 0x8000);
    *(u16 *)(p + 0x50D8) = 0x204E;
    *(u16 *)(p + 0x50DA) = 0x2070;
    *(u16 *)(p + 0x50DC) = 0x2067;
    *(u16 *)(p + 0x5096) = 0x20FF;
    *(u16 *)(p + 0x509A) = 0x20FF;
    *(u16 *)(p + 0x50D6) = 0x20FF;
    *(u16 *)(p + 0x50DE) = 0x206F;
    *(u16 *)(p + 0x50E0) = 0x2064;
    *(u16 *)(p + 0x50E2) = 0x20FF;
    *(u16 *)(p + 0x50E4) = 0x20FF;
}

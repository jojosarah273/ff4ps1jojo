#include "common.h"
extern u8 *D_8019BCB0;
extern u8 *D_8019BCC0;
extern u8 *D_8019BCB4;
extern u8 *D_8019BCBC;
void func_80190F50(u8 *p) {
    *D_8019BCB0 = 2;
    *D_8019BCC0 = p[0];
    *D_8019BCB4 = p[1];
    *D_8019BCB0 = 3;
    *D_8019BCBC = p[2];
    *D_8019BCC0 = p[3];
    *D_8019BCB4 = 0x20;
}

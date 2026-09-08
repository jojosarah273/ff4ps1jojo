#include "common.h"
extern u16 *D_8019ED44;
extern u16 *D_8019ED58;
void func_80152F0C(void)
{
    func_800F6564(0x3553);
    if (func_800F6434(0x202) == 0) {
        func_800F6630(0xCD);
        if (func_800F6434(0x8080) == 0) {
            func_800F4248(0x7F);
            func_800F5410();
            func_800F4008(5);
        }
        func_80152CDC();
        func_800F7270(0xA6);
        func_800F971C();
        *D_8019ED58 = *D_8019ED44;
        do {
            func_800F6D70(0x2680);
            func_800F8768(0x2000);
            func_800F6364();
            func_800F63BC();
            func_800F5A90(0x80);
        } while (func_800F53D4() == 0);
    }
    func_800F6630(0xCE);
    if (func_800F6434(0x8080) == 0) {
        func_800F4248(0x7F);
        func_800F5410();
        func_800F4008(5);
    }
    func_80152CDC();
    func_800F7270(0xA6);
    func_800F971C();
    *D_8019ED58 = *D_8019ED44;
    do {
        func_800F6D70(0x2700);
        func_800F8768(0x2000);
        func_800F6364();
        func_800F63BC();
        func_800F5A90(0x80);
    } while (func_800F53D4() == 0);
}

#include "common.h"
void func_800FF024(void)
{
    /* shop flow: the buy-row chain 80171194/80171608/801719C8/
       801724D0/80172BA8/80173008/80173780/801721E8/8011B6B4, then
       a 5574 gate picks 80171F90. */
    func_80171194();
    func_80171608();
    func_801719C8();
    func_801724D0();
    func_80172BA8();
    func_80173008();
    func_80173780();
    func_801721E8();
    func_800F654C(0x3E);
    func_8011B6B4();
    func_800F5574();
    if (func_800F53D4() != 0)
        return;
    func_80171F90();
    return;
}

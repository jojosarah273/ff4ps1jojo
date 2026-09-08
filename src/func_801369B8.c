#include "common.h"
extern u8 *D_8019ED40;
void func_801369B8(void)
{
    func_800F9200();
    func_800F824C(0x57);
    func_8012D204();
    if (func_800F53D4() != 0)
        goto end;
    func_800F8D6C(0xE5);
    func_80134AF8();
    if (func_800F53C0() == 0)
        goto end;
    func_800F6630(0x57);
    {
        u8 *p = D_8019ED40;
        *p = (u8)(*p << 2);
    }
    func_801224D0();
    func_800F654C(8);
    func_800F8768(0xFE15);
end:
    func_800F93DC();
}

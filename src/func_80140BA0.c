#include "common.h"
void func_80140BA0(void)
{
    /* battle judge: 80140CFC/80140AC0 preps, 0x48/0x2000 texts,
       80097D34/80097D54/80140D94 rows. */
    func_80140CFC();
    func_800F6564(0x48);
    func_800F9200();
    func_800F6564();
    func_800F8188(0x48);
    func_80097D34();
    func_80140AC0();
    func_800F971C();
    func_800F8960();
    func_800F6B68(0x2000);
    func_800F9200();
    func_800F93DC();
    func_800F8768();
    func_80097D54();
    func_800F93DC();
    func_800F8188(0x48);
    func_80140D94();
    return;
}

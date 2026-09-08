#include "common.h"
void func_80143DB4(void)
{
    /* battle rows: two 3F38(3B04) pair reads; linear. */
    func_800F9200();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8768();
    func_800F93DC();
    func_800F5410();
    func_800F3F38(func_800F3B04());
    func_800F8768();
    return;
}

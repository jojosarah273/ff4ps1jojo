#include "common.h"
void func_80140598(void)
{
    func_800F5480();
    func_800F8058(0xA9);
    func_800F5140();
    /* jr $a0 : the 14-entry battle magic-judge table. Each entry calls
       one effect then jumps to L1406EC (return); the table tail runs
       801406FC. Handlers in index order:
       80140A5C, 80140A0C, 8014071C, 80140C8C, 80140BA0, 80140EE0,
       80140F08, 80140FE0, 80141020, 80141068, 801410B0, 80140E78,
       8014076C, 801406FC ... */
    return;
}

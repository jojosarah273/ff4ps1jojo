#include "common.h"
void func_80177790(void)
{
    /* battle anim: register gates route 80198058/80197FB8 vs the
       80194518/801947B8/80182AF0 row; ends 80197208/80195120/
       80197208/80194988 through L177928. */
    /* v0/v1 gates -> L177860 / L177928 */
    func_80198058();
    func_80197FB8();
    /* v1/v0 gates -> L177868 */
    func_80194518();
    func_801947B8();
    func_80182AF0();
L1778d0:
    for (;;) {
        func_80197208();
        func_80195120();
        func_80197208();
        func_80194988();
        break;
    }
    return;
}

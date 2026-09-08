#include "common.h"
void func_801793F8(void)
{
    /* battle anim: 80194394/801928E8/801942FC preps; v1/v0 gate picks
       8008CB5C/800888C0 rows; 801792D0 closes. */
    func_80194394();
    func_801928E8();
    func_801942FC();
    /* v1/v0 latch -> L179438 */
    if (func_801792D0() != 0)
        func_8008CB5C();
    else
        func_800888C0();
    if (func_800F54D4(1) != 0)
        func_801942FC();
    func_80194394();
    func_801792D0();
    return;
}

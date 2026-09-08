#include "common.h"
void func_8017FA2C(void)
{
    /* battle anim: v0 spin loops with 2x 80194640; closes
       801971A8(1)/8017F9FC. */
    /* spin loops L17FAD4/L17FAC4/L17FAB8 */
    func_80194640();
    /* spin loops L17FB70/L17FB64 */
    func_80194640();
    func_801971A8(1);
    func_8017F9FC();
    return;
}

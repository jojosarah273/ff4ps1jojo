#include "common.h"
void func_80178F20(void)
{
    /* battle anim loops: 2x (80178988/97458/97468/79248 + 94640x2)
       pre-roll, then two 971E8 wait loops. */
    func_80178988();
    func_80197458();
    func_80197468();
    func_80179248();
    func_80194640();
    func_80194640();
    func_80178988();
    func_80197458();
    func_80197468();
    func_80179248();
    func_80194640();
    func_80194640();
L179140:
    for (;;) {
        if (func_801971E8() != 0)
            continue;
        break;
    }
    func_80178988();
    func_80197458();
    func_80197468();
    func_80179248();
    func_80194640();
    func_80194640();
L1791f4:
    for (;;) {
        if (func_801971E8() != 0)
            continue;
        break;
    }
    return;
}

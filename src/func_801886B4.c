#include "common.h"
void func_801886B4(void)
{
    /* battle: 8018E4E8 gate (called twice); row chain 80188FD0/
       8018C608/8018DDEC/8018B4C8/80191858/8018DFA0/8018DFC4/
       8018DFE8. */
    if (func_8018E4E8() == 0)
        goto L188724;
    func_8018E4E8();
L188724:
    func_80188FD0();
    func_8018C608();
    func_8018DDEC();
    func_8018B4C8();
    func_80191858();
    func_8018DFA0();
    func_8018DFC4();
    func_8018DFE8();
    return;
}

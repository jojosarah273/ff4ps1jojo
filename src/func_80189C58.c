#include "common.h"
void func_80189C58(void)
{
    /* event: v0 gate on 8018C3E8(1); 8018BA38/8018B838(1) rows. */
    if (func_800F53D4() != 0)
        goto L189CA8;
    func_8018C3E8(1);
L189CA8:
    func_8018BA38();
    func_8018B838(1);
    return;
}

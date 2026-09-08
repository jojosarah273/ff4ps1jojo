#include "common.h"
extern s16 *D_8019EF98;
void func_80189CF4(void)
{
    if (*D_8019EF98 == 0)
        return;
    func_8018C438(0, 0xFFFFFF);
    func_8018B838(0);
    func_8018C3E8(0);
    *D_8019EF98 = 0;
}

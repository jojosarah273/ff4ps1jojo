#include "common.h"
void func_80197E78(void)
{
    /* event: 801976E8 prep; loop L197EA8 on 80197608/801976F8. */
    func_801976E8();
    do {
        func_80197608();
        func_801976F8();
    } while (func_800F53D4() != 0);
    return;
}

#include "common.h"
void func_80119D48(void)
{
    /* battle rows: 0x2106 text; loop L119D58 on 5574(0x40). */
    func_800F8FB8(0x79);
L119d58:
    for (;;) {
        func_800FE7B0();
        func_800F6630(0x79);
        func_800F7864();
        func_800F6C68();
        func_800F8188(0x2106);
        func_800F62BC(0x79);
        func_800F62BC(0x79);
        func_800F6630(0x79);
        func_800F5574(0x40);
        if (func_800F53D4() == 0)
            continue;
        break;
    }
    func_8011EA5C();
    return;
}

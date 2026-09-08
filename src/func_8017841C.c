#include "common.h"
void func_8017841C(void)
{
    /* battle anim: twin v0 gate ladders (L178480..L178504,
       L1785C0..L178644); 80194018(1)/80187D1C/80178890/80178BB4/
       80187B00/80194394/80197708/801776E8 tail chain. */
    /* gate ladders (regcmp v0/v1 + v0 beqz runs) -> L178534/L178570
       then L1786B0 */
    func_80194018(1);
    func_80187D1C();
    func_80178890();
    func_80178BB4();
    func_80187B00();
    func_80194394();
    func_80197708();
    func_801776E8();
    return;
}

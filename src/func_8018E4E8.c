#include "common.h"
void func_8018E4E8(void)
{
    /* event: gate ladders with jr-$v0 sub-dispatches (L18E5D0/
       L18E6CC); 8018EAE8 row; 2x 8018AB08 rows (L18E790/L18E7B0);
       returns at L18E814+. */
    /* gates -> L18E520/L18E564/L18E580/L18E5C0/L18E6A0 */
    func_8018EAE8();
    /* jr $v0 :: L18E658 slots */
    func_8018AB08();
    func_8018AB08();
    return;
}

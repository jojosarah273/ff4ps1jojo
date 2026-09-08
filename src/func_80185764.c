#include "common.h"
void func_80185764(void)
{
    /* battle cutscene driver: s2/v0 latches pick 801856CC/80185714
       vs 80185634/8018567C row loops; returns at L185AA0. */
    /* s2/v0 latches -> L185914 / L1859B4 / L185AA0 */
    func_801856CC();
    func_80185714();
    /* L18582C loop: 80185714 while 801856CC != 0 */
    func_8018567C();
    func_80185634();
    /* L185A18 loop: 8018567C while 80185634 != 0 */
    return;
}

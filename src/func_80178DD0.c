#include "common.h"
void func_80178DD0(void)
{
    /* battle anim: 801976E8 + 8x 80197658 rows + 801976F8/80197B24/
       8018F168(1)/8018F1F8/8018F0D8 preps; loop L178F08 on
       80197BB4. */
    func_801976E8();
    func_80197658();
    func_80197658();
    func_80197658();
    func_80197658();
    func_80197658();
    func_80197658();
    func_80197658();
    func_80197658();
    func_801976F8();
    func_80197B24();
    func_8018F168(1);
    func_8018F1F8();
    func_8018F0D8();
L178f08:
    for (;;) {
        func_80197BB4();
        return;
    }
}

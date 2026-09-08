#include "common.h"
void func_80185030(void)
{
    /* sequence-driver for the battle portrait loop: four 971A8(1)/973B8(1)
       commits, then 5 poll loops (854A0/97288 pairs) with 972B8 selects
       between them. Each poll: do { 854A0(); } while (97288() != 0). */
    func_801971A8(1);
    func_801973B8(1);
    func_801971A8(1);
    func_801973B8(1);
    func_801971A8(1);
    func_801973B8(1);
    func_801971A8(1);
    func_801973B8(1);
    func_801854A0();
    do {
        func_801854A0();
    } while (func_80197288() != 0);
    func_80197288();
    func_801854A0();
    do {
        func_801854A0();
    } while (func_80197288() != 0);
    func_801972B8();
    func_801854A0();
    do {
        func_801854A0();
    } while (func_80197288() != 0);
    func_80197288();
    func_801854A0();
    do {
        func_801854A0();
    } while (func_80197288() != 0);
    func_801972B8();
    return;
}

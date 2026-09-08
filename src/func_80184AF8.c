#include "common.h"
void func_80184AF8(void)
{
    /* battle anim chain: s2/s1/v0 register gates select the sprite
       slots; 3x 801971A8(2), 801951E0/801973B8 reads, 5x 80197248
       row commits; returns at L185000. */
    /* s2/s1 gates -> L184B5C / L185000 */
    func_801971A8(2);
    func_801971A8(2);
    func_801971A8(2);
    /* s2/v0 + s1/v0 gates -> L184BC8 / L184C3C / L184C84 */
    func_801951E0();
    /* v1/v0 gate -> L184CC8 */
    func_801951E0();
    /* L184D50/L184D64: gate loop with 801973B8 polls */
    func_801973B8();
    /* L184DE4: v0 gates */
    func_801973B8();
    func_801973B8();
    func_801973B8();
    func_801951E0();
    func_80197248();
    func_80197248();
    func_80197248();
    func_80197248();
    func_80197248();
    return;
}

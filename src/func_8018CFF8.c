#include "common.h"
void func_8018CFF8(void)
{
    /* event: spin L18D01C; v1/a2 + v1/v0 gate tree; 8018E4B8/
       8018ABE8 rows then 8018A75C(2/1/3); returns at L18D194. */
    for (;;) {
        if (func_800F53D4() != 0)
            break;
        if (func_800F53D4() != 0)
            continue;
        break;
    }
    /* v1/a2 latch -> L18D0B8; v1/v0 gates -> L18D068/L18D07C/
       L18D088/L18D194 */
    func_8018E4B8();
    func_8018ABE8();
L18D114:
    func_8018A75C(2);
    func_8018A75C();
    func_8018A75C(1);
    func_8018A75C(3);
    return;
L18D194:
    return;
}

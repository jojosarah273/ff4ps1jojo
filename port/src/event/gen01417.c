/* FF4 source-port — interpreted module for func_80188940.
 * Ground truth: src/func_80188940.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80188940(void)
{
    /* event: 8018F538/801917D8/80191838/801928A8/80191858 rows;
       spin L1889B8; 80191878(0xE) closes. */
    if (io_just() == 0)
        goto L188968;
    func_80188940();
    return;
L188968:
    func_8018F538();
    func_801917D8();
    func_80191838();
    func_801928A8();
    func_80191858();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
    func_80191878(0xE);
    return;
}

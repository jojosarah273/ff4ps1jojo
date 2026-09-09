/* FF4 source-port — interpreted module for func_80197E78.
 * Ground truth: src/func_80197E78.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80197E78(void)
{
    /* event: 801976E8 prep; loop L197EA8 on 80197608/801976F8. */
    func_801976E8();
    do {
        func_80197608();
        func_801976F8();
    } while (io_just() != 0);
    return;
}

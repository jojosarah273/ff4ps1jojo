/* FF4 source-port — interpreted module for func_80183A80.
 * Ground truth: src/func_80183A80.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80183A80(void)
{
    /* battle anim: 3x 801971A8(1)/80197208 spin loops plus a final
       801971A8(1)/80197208 pair. */
    do {
        func_801971A8(1);
        func_80197208();
    } while (io_just() != 0);
    do {
        func_801971A8(1);
        func_80197208();
    } while (io_just() != 0);
    do {
        func_801971A8(1);
        func_80197208();
    } while (io_just() != 0);
    func_801971A8(1);
    func_80197208();
    do {
        func_801971A8(1);
        func_80197208();
    } while (io_just() != 0);
    func_801971A8(1);
    func_80197208();
    return;
}

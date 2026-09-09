/* FF4 source-port — interpreted module for func_80181C20.
 * Ground truth: src/func_80181C20.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80181C20(void)
{
    /* battle anim: s5/v0 + s5/s6 latches; 801808D8 row loop;
       801817EC then 801971A8/8017F9FC closes. */
    /* s5/v0 latch -> L181CBC */
    do {
        func_801808D8();
    } while (io_just() != 0);
    func_801817EC();
    func_801971A8(1);
    /* s5/s6 latch -> L181D40 */
    goto L181D74;
L181D58:
    func_801971A8(1);
    goto L181D74;
L181D74:
    func_8017F9FC();
    return;
}

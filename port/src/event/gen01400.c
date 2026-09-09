/* FF4 source-port — interpreted module for func_80192C8C.
 * Ground truth: src/func_80192C8C.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_80192C8C(void)
{
    /* event: 80193194/801931B8 gates; 80192D64/801976D8/801931C8/
       801932E8/80197630/801976F8 rows; returns at L192D54. */
    if (io_just() != 0)
        return;
    func_80193194();
    func_801931B8();
    if (io_just() == 0)
        goto L192D04;
    func_80192D64();
L192D04:
    func_801976D8();
    func_801931C8();
    func_801932E8();
    func_80197630();
    func_801976F8();
    return;
}

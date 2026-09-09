/* FF4 source-port — battle/cbs.c
 *
 * The callback-slot dispatch tables (D_8019DB4C / D_8019DB50) and the
 * two trampolines that fire a slot. The PS1 always arms the slot
 * before dispatch; on the host the arms may not have run yet, so a
 * zero slot is skipped (host-safety epsilon, documented).
 *
 * Exact mirrors otherwise.
 * Ground truth: src/cb_slot2.c, 80194394 (byte-verified).
 */
#include <stdint.h>

/* exported callback tables (were raw PS1 cells) */
uint32_t D_8019DB4C[8];    /* battle anim cb slots             */
uint32_t D_8019DB50[16];   /* msg/menu cb slots                */

/* 80194640: fire cb slot 2 of the anim table. */
void cb_slot2(void)
{
    void (*f)(void) = (void (*)(void))D_8019DB4C[2];
    if (f)
        f();
}

/* 80194394: fire cb slot 15 of the msg table. */
void cb_slot15(void)
{
    void (*f)(void) = (void (*)(void))D_8019DB50[15];
    if (f)
        f();
}

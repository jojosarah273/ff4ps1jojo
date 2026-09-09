/* FF4 source-port — shop/machine.c
 *
 * Shop buy/sell state machine (func_8016DD9C, exact decode): the
 * s5/s0 latch loop drives the DB38/DB94 rows and the 80177DAC
 * feeder.
 * Ground truth: src/func_8016DD9C.c (byte-verified).
 */
#include <stdint.h>

void state_open(void);      /* 800F3C3C/3B04(0x2000)/3B9C */
void shop_row_a(void);      /* 8016DB38  */
void shop_row_b(void);      /* 8016DB94  */
void shop_feeder(void);     /* 80177DAC  */

void shop_machine_run(void)
{
    state_open();
    for (;;) {
        shop_row_a();
        shop_row_b();
        shop_row_b();
        shop_feeder();
    }
}

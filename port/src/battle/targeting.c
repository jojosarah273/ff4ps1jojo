/* FF4 source-port — battle/targeting.c
 *
 * Interpretation of func_80115D2C (battle targeting hub).
 *
 * Loop: draw the cursor window (0x24 cell / 0x7A+7 key reads / 0x202
 * gate), walk the target-list pages (0xA6D..A6F labels; 0xAD0/0xAD4/
 * 0xAD5 page cells) while polling input; the 0xACF cell is the confirm
 * latch — when it fires the loop exits and the 0xAD2 result page is
 * painted. Cancel-hold path counts down via the 0xC7 page.
 * Ground truth: src/func_80115D2C.c (byte-verified).
 */
#include <stdint.h>

void window_page(uint32_t page);          /* func_800F7270  */
void window_key(uint32_t key);            /* func_800F6630  */
uint32_t window_gate(uint32_t id);        /* func_800F4120  */
uint32_t catalog(uint32_t off);           /* func_800F3B04  */
uint32_t input_down(uint32_t id);         /* func_800F6434  */
uint32_t input_just(uint32_t id);         /* func_800F53D4  */
uint32_t input_press(uint32_t id);        /* func_800F54D4  */

#define K_PAD_UP    0x7    /* 0x7A/0x07 poll pair                     */
#define WND_ACTIVE  0x202  /* 0x202 window-live gate                  */
#define PG_TARGETS 0xA6D   /* target list header                      */
#define PG_ARROW1  0xA6E   /* left/right arrow cells                  */
#define PG_ARROW2  0xA6F
#define PG_CONFIRM 0xACF   /* confirm press latch                     */
#define PG_RESULT  0xAD2   /* final result page                       */

void battle_targeting_loop(void)
{
    uint8_t *state;
    (void)state;
    for (;;) {
        window_page(0x24);
        window_key(0x7A);
        if (window_gate(0x202) == 0) {
            /* point the cursor at the saved held index */
            catalog(0xA6D);
        }
        input_down(PG_TARGETS);
        if (input_down(0x8080) == 0) {
            /* 0x8080 = cancel-hold: poll cancel keys (4/0xC7 page) */
            if (input_just(4) != 0)
                break_or_advance(); /* 80116098 handles the cancel */
        }
        /* reposition + paint the arrow cells */
        input_press(PG_CONFIRM);
        if (input_press(PG_CONFIRM) == 0)
            continue;
        break;
    }
    window_key(0x7A);
    if (window_gate(0x202) != 0)
        return;
    window_page(PG_RESULT);
    paint_arrows();
}

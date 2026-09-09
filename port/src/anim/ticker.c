/* FF4 source-port — anim/ticker.c
 *
 * Frame/turn counters and the DF input timer (Phase A decodes).
 * Ground truth: src/func_80179958, 801860A0.
 */
#include <stdint.h>

extern int16_t g_anim_pause;   /* D_8019EEB0 */
extern uint16_t g_df_count;    /* D_8019EEF8 */
extern int16_t  g_df_delay;    /* D_8019EF02 */
extern uint32_t g_df_phase;    /* D_8019EF24 */
extern int32_t  g_df_hold;     /* D_8019EF28 */

/* 80179958: cascading 1/60 counters at 0x800D16A3. */
void tick_counters(void)
{
    volatile uint8_t *p = (volatile uint8_t *)0x800D16A3;
    if (g_anim_pause != 0)
        return;
    p[0]++;
    if ((p[0] & 0xFF) < 0x3C)
        return;
    p[1]++;
    p[0] = 0;
    if ((p[1] & 0xFF) != 0)
        return;
    p[2]++;
    if ((p[2] & 0xFF) != 0)
        return;
    p[3]++;
}

/* 801860A0: DF/battle timer + panel index animation. */
void df_timer(uint32_t cmd)
{
    if (g_df_delay > 0) {
        g_df_delay = (int16_t)((uint16_t)g_df_delay - 1);
        return;
    }
    if (cmd != 0)
        g_df_delay = 0xA;
    if (cmd == 1)
        g_df_count += 1;
    else if (cmd == 2)
        g_df_count -= 1;
    else if (cmd == 3) {
        g_df_phase = 1;
        g_df_hold = g_df_count;
    }
}

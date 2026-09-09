/* FF4 source-port — status/state.c
 *
 * UI state-change dispatch (Phase A decodes).
 * Ground truth: src/func_8019418C, 8019429C.
 */
#include <stdint.h>

extern uint8_t g_ui_state;      /* D_8019DB56 */
extern uint8_t g_ui_state2;     /* D_8019DB54 */
extern uint8_t g_ui_state3;     /* D_8019DB57 */
extern uint32_t g_msg_cb;       /* D_8019DB50 (function pointer)   */
extern int32_t  g_ui_slot;      /* D_8019DB56 + 0xA (u32 slot)     */

typedef void (*msg_cb_t)(uint32_t m, uint32_t a, uint32_t x,
                         uint32_t y, uint32_t w, uint32_t h);

enum { MSG_UIV1 = 0x388c, MSG_UIV2 = 0x38cc, MSG_UIV3 = 0x391c };

/* 8019418C: latch new state; if non-zero, dispatch the UI message. */
uint8_t ui_state_change(uint8_t next)
{
    uint8_t old = g_ui_state;
    g_ui_state = next;
    if (next != 0) {
        msg_cb_t cb = (msg_cb_t)g_msg_cb;
        cb(MSG_UIV1, next, g_ui_state2, g_ui_state3, 0, 0);
    }
    return old;
}

/* 8019429C: dispatch while phase < 2, then store the arg slot. */
int32_t ui_state_slot(uint32_t arg)
{
    uint8_t *p = &g_ui_state;
    if (p[0] < 2) {
        msg_cb_t cb = (msg_cb_t)g_msg_cb;
        cb(MSG_UIV2, arg, 0, 0, 0, 0);
    }
    {
        int32_t old = *(int32_t *)&p[0xA];
        *(int32_t *)&p[0xA] = (int32_t)arg;
        return old;
    }
}

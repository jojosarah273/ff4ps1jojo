/* FF4 source-port — battle/targeting.c
 *
 * Interpretation of func_80115D2C (battle targeting hub).
 *
 * The window/input primitive mapping below names the 0x800F calls that
 * Phase A decoded (src/func_80115D2C.c is ground truth). Data cells are
 * 0xADxx catalog pages; 0x202 / 0x8080 are the standard armed and
 * cancel-hold gate ids used across the battle UI web.
 */
#include <stdint.h>

uint32_t catalog(uint32_t off); /* 800F3B04 */

/* primitive mapping (window layer; see port/src/panel.c) */
void     wnd_page(uint32_t page);          /* 800F7270 */
void     wnd_key(uint32_t key);            /* 800F6630 */
void     wnd_read(uint32_t id);            /* 800F4248 */
uint32_t wnd_gate(uint32_t id);            /* 800F4120 (0x202 = live) */
void     txt_label(uint32_t id);           /* 800F6B68 */
void     txt_draw(uint32_t id);            /* 800F8768 */
void     txt_set(uint32_t id);             /* 800F6564 */
uint32_t cell_poke_func(uint32_t base, uint32_t idx); /* 6048(3B04(base+idx)) */
void     cell_poke(uint32_t v);            /* 800F3F38(800F3B04(v)) */
void     page_paint(uint32_t id);          /* 800F90EC */
uint32_t inp_held(uint32_t mask);          /* 800F6434 */
uint32_t inp_just(uint32_t key);           /* 800F53D4 */
void     inp_poll(uint32_t key);           /* 800F5574 */
uint32_t inp_press(uint32_t cell);         /* 800F54D4(800F3B04(cell)) */
void     wnd_clear(uint32_t id);           /* 800F654C */
void     cell_refresh(void);               /* 8010D9D4 */
void     cancel_handler(void);             /* 80116098 */
uint32_t wnd_held(void);                   /* D_8019ED54 cursor cell */
void     paint_arrows(void);               /* 800F5E48 + 8D00(0xAD2) */

#define GATE_LIVE   0x202
#define CANCEL_HOLD 0x8080

void battle_targeting_loop(void)
{
    for (;;) {
        wnd_page(0x24);
        wnd_key(0x7A);
        wnd_read(7);
        /* if the window is not live, follow the saved held index */
        if (wnd_gate(GATE_LIVE) == 0) {
            cell_poke_func(0xA6D, wnd_held());  /* 6048(3B04(0xA6D+D54[0])) */
        }
        txt_label(0xA6D);
        if (inp_held(CANCEL_HOLD) == 0)
            goto poll_cursor;
        if (inp_just(4) == 0)
            goto cancel;
        /* move onto the target cells */
        wnd_key(0x7A);
        wnd_read(7);
        if (wnd_gate(GATE_LIVE) != 0)
            goto cancel;
        wnd_key(0xE5);                     /* page-turn key */
        if (inp_held(GATE_LIVE) != 0)
            goto keep_label;
        /* first page: paint the arrow pair rows */
        page_paint(0xA6D);
        wnd_key(0xC7);                     /* cancel counter page */
        if (inp_held(GATE_LIVE) != 0)
            goto second_page;
        txt_set(0xAD0);
        cell_refresh();
        cell_poke(0xAD4);
        wnd_page(0x24);
        txt_draw(0xA6E);
        txt_set(0xAD1);
        cell_refresh();
        cell_poke(0xAD5);
        wnd_page(0x24);
        txt_draw(0xA6F);
        goto cancel;
second_page:
        wnd_key(0xC7);
        cell_refresh();
        cell_poke(0xAD4);
        txt_draw(0xA6E);
        cell_poke(0xAD5);
        txt_draw(0xA6F);
        goto cancel;
keep_label:
        wnd_clear(0xFF);
        txt_draw(0xA6D);
poll_cursor:
        wnd_key(0x24);
        wnd_read(4);
        wnd_clear(0x24);
        if (inp_press(0xACF) == 0)
            continue;   /* keep polling targets */
        break;          /* confirm pressed */
cancel:
        cancel_handler();
    }
    /* epilogue: if the window is still live we return clean; else
       paint the 0xAD2 result page */
    wnd_key(0x7A);
    wnd_read(7);
    if (wnd_gate(GATE_LIVE) != 0)
        return;
    wnd_page(0xAD2);
    paint_arrows();
}
/* catalog idx offset: 800F3B04(0xA6D + held) -> 800F6048 dispatch */
uint32_t cell_poke_func(uint32_t base, uint32_t held_idx)
{
    return catalog(base + held_idx);
}

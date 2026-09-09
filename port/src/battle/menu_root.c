/* FF4 source-port — battle/menu_root.c
 *
 * Master battle-menu driver (func_80116720, ~230-call chain).
 * The flow: open the command window, idle until the menu button
 * (0x03), run the command sub-screen (items 0x8FE/0x908), then the
 * big 40-slot jr-$a0 dispatch (each slot = a battle-menu screen,
 * listed in menu_screens.md). 8010DA88 (battle-command table, 73
 * entries) is the final slot.
 * Ground truth: src/func_80116720.c (ordered chain).
 */
#include <stdint.h>

void wnd_open(uint32_t id);       /* 800F71DC  */
void txt_cell(uint32_t id);       /* 800F6B68  */
void txt_draw(uint32_t id);       /* 800F8188  */
void io_poll(uint32_t k);         /* 800F5574  */
uint32_t io_go(void);             /* 800F53C0  */
uint32_t io_just(void);           /* 800F53D4  */
void page(uint32_t id);           /* 800F7270  */
void step(void);                  /* 800F6364  */
void clear(void);                 /* 800F8D6C  */
uint32_t gate(uint32_t id);       /* 800F6434  */
void open2(uint32_t id);          /* 800F8FB8  */
void set(uint32_t id);            /* 800F6564  */
void cmd_subscreen(void);         /* 8010B010  */
void battle_commands(void);       /* 8010DA88 (73-entry table) */

void menu_screen_0(void);
void menu_screen_1(void);
void menu_screen_2(void);
void menu_screen_3(void);
void menu_screen_4(void);
void menu_screen_5(void);
void menu_screen_6(void);
void menu_screen_7(void);
void menu_screen_8(void);
void menu_screen_9(void);
void menu_screen_10(void);
void menu_screen_11(void);
void menu_screen_12(void);
void menu_screen_13(void);
void menu_screen_14(void);
void menu_screen_15(void);
void menu_screen_16(void);
void menu_screen_17(void);
void menu_screen_18(void);
void menu_screen_19(void);
void menu_screen_20(void);
void menu_screen_21(void);
void menu_screen_22(void);
void menu_screen_23(void);
void menu_screen_24(void);
void menu_screen_25(void);
void menu_screen_26(void);
void menu_screen_27(void);
void menu_screen_28(void);
void menu_screen_29(void);
void menu_screen_30(void);
void menu_screen_31(void);
void menu_screen_32(void);
void menu_screen_33(void);
void menu_screen_34(void);
void menu_screen_35(void);
void menu_screen_36(void);
void menu_screen_37(void);

/* 40-slot menu-screen dispatch (jr-$a0 index order) */
void (*const g_menu_screens[40])(void) = {
    menu_screen_0,  menu_screen_1,  menu_screen_2,  menu_screen_3,
    menu_screen_4,  menu_screen_5,  menu_screen_6,  menu_screen_7,
    menu_screen_8,  menu_screen_9,  menu_screen_10, menu_screen_11,
    menu_screen_12, menu_screen_13, menu_screen_14, menu_screen_15,
    menu_screen_16, menu_screen_17, menu_screen_18, menu_screen_19,
    menu_screen_20, menu_screen_21, menu_screen_22, menu_screen_23,
    menu_screen_24, menu_screen_25, menu_screen_26, menu_screen_27,
    menu_screen_28, menu_screen_29, menu_screen_30, menu_screen_31,
    menu_screen_32, menu_screen_33, menu_screen_34, menu_screen_35,
    menu_screen_36, menu_screen_37, battle_commands, /* 38: cmd table */
    0
};

void battle_menu_run(void)
{
    /* phase 1: open + idle */
    wnd_open(0);
    for (;;) {
        page(0xB3);
        txt_cell(0x9D5);
        txt_draw(0xA16);
        io_poll(0xFF);
        if (io_just() != 0)
            break;
        io_poll(0xC0);
        if (io_go() != 0)
            option_screen_d();      /* 801172DC */
        step();
        clear(0xB3);
    }
    /* phase 2: command gate + item screens */
    clear_done();
    open2(0xD5);
    set(0x1700);
    io_poll(0x03);
    if (io_just() == 0)
        goto state_idle;
    cmd_subscreen();
    item_screen();                  /* 80170C14 + 8010B010 */
    /* phase 3: item page + poll */
    if (gate(2) != 0)
        goto state_idle;
    page(0x3D);
    txt_cell(0x908);
    if (gate(0x202) != 0)
        goto state_idle;
    page_paint(0x90C);
    page(0x3D);
    page(0xB3);
    dispatch_menu();
state_idle:
    l1_draw();
    dispatch_menu();
}

void dispatch_menu(void)
{
    /* jr-$a0 dispatch over g_menu_screens (order preserved) */
    menu_screen_tramp();
}

void option_screen_d(void);
void clear_done(void);
void item_screen(void);
void l1_draw(void);
void page_paint(uint32_t id);
void menu_screen_tramp(void);

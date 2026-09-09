/* FF4 source-port — config/root.c
 *
 * Configuration menu root (func_801539C4, 344-call chain). The asm
 * order is preserved; segments are named. This is the driver the
 * options rows (options.c) slot into.
 * Ground truth: src/func_801539C4.c (ordered call chain).
 */
#include <stdint.h>

void txt_set(uint32_t id);
void label(uint32_t id);
void cell_put(uint32_t id);
void page_open(uint32_t id);
void sep(void);
void latch(uint32_t id);
void tail(uint32_t id);
uint32_t gate(uint32_t id);
uint32_t io_just(void);
void poll_t(uint32_t t);
void poll_h(uint32_t t);
void row_paint(uint32_t id);
void panel_draw(void);
void options_row_main(void);
void options_row_latch(void);
void ability_row_cc74(void);
void status_pane_build(void);
void status_panel_install_labels(void);

/* segment: title bar + launcher state */
static void seg_title(void)
{
    txt_set(0x1800);
    key_poll(0xB6);
    if (io_just() == 0) {
        key_poll(0xB7);
        if (io_just() == 0)
            return;
    }
    txt_set(0x1801);
    if (gate(2) != 0)
        return;
    txt_set(0x3881);
}

/* segment: main option list */
static void seg_list(void)
{
    options_row_main();
    options_row_latch();
    status_pane_build();
    status_panel_install_labels();
    row_paint(0x29A2);
}

/* segment: value pages */
static void seg_values(void)
{
    poll_h(0x10);
    option_pages();
    option_commit_flags();
}

void config_menu_run(void)
{
    seg_title();
    seg_list();
    seg_values();
    final_row();
}

void key_poll(uint32_t k);
void option_pages(void);
void option_commit_flags(void);
void final_row(void);

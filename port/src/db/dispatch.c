/* FF4 source-port — db/dispatch.c
 *
 * The higher-level sequences that drive screens through the window
 * API: window fx triggers, god-text sequences, pad-region clears, the
 * battle/shop view dispatchers, and the catalog dispatcher (which is
 * an asm register ladder and stays a documented stub until the lanes
 * are mapped). Exact mirrors of the Phase A sources.
 *
 * Ground truth: src/func_800FE778.c, FE7B0, FC84, E870, 3D64, FD718,
 * FE7D8, FF024, CCBC, 9868 (byte-verified).
 */
#include <stdint.h>

uint32_t txt_draw(uint32_t id);
uint32_t latch(uint32_t id);
uint32_t cell_put(uint32_t id);
uint32_t key_page(uint32_t id);
uint32_t io_poll();
uint32_t io_just(void);
uint32_t gate(uint32_t id);
void cell_cur_save54(void);
void cell_add16(void);
void cell_clear_bank(void);
extern uint8_t *D_800D0000;

uint32_t catalog_dispatch(uint32_t a0);

/* externs for the not-yet-interpreted 800F/801x dispatcher targets */
extern void func_80177DAC(void);
extern void func_80169128(void);
extern void func_800FE110(void);
extern void func_800FDBBC(void);
extern void func_800FDD8C(void);
extern void func_800FDF34(void);
extern void func_80175494(void);
extern void func_801769B4(void);
extern void func_80174F64(void);
extern void func_80175004(void);
extern void func_80171194(void);
extern void func_80171608(void);
extern void func_801719C8(void);
extern void func_801724D0(void);
extern void func_80172BA8(void);
extern void func_80173008(void);
extern void func_80173780(void);
extern void func_801721E8(void);
extern void func_8011B6B4(void);
extern void func_80171F90(void);

/* 800FE778: cursor-icon 0x7d fx: latch + put + tail + keypage. */
void wnd_fx_7d(void)
{
    latch(1);
    cell_put(0x7d);
    func_80177DAC();
    key_page(0x7d);
}

/* 800FE7B0: tail + keypage 0x7d (b variant). */
void wnd_fx_7d_b(void)
{
    func_80177DAC();
    key_page(0x7d);
}

/* 800FCC84: god-text tags + latch sequence. */
void wnd_fx_tags(void)
{
    cell_clear_bank();
    latch(0x18);
    txt_draw(0x4301);
    cell_clear_bank();
}

/* 800FE870: pad-region clears (0xF0 fill, then zero fill). */
void cell_clear_pad(void)
{
    int32_t i = 0x1FC;
    uint8_t *p = D_800D0000 + 0x4FD;
    do {
        *p = 0xF0;
        i -= 4;
        p -= 4;
    } while (i >= 0);
    int32_t j = 0x1F;
    uint8_t *q = D_800D0000 + 0x51F;
    do {
        *q = 0;
        j--;
        q--;
    } while (j >= 0);
}

/* 800F3D64: battle gate wait (two add16 gates, spin on io_just). */
void battle_wait_just(void)
{
    cell_add16();
    cell_add16();
    for (;;) {
        if (io_just() != 0)
            continue;
        break;
    }
}

/* 800FD718: battle rows: 0x1704/0x1700/0xFE2 texts, 0x1E01/0x1E00
 * cells, 80169128 row; gates 6434(2)/5574(3). */
void battle_rows_run(void)
{
    txt_draw(0x1704);
    if (gate(2) != 0)
        goto L_FD780;
    txt_draw(0x1704);
    cell_cur_save54();
    txt_draw(0x1E01);
    latch(3);
    goto L_FD7E4;
L_FD780:
    txt_draw(0x1700);
    io_poll(3);
    if (io_just() != 0)
        goto L_FD7CC;
    cell_cur_save54();
    goto L_FD7D4;
L_FD7CC:
    txt_draw(0xFE2);
L_FD7D4:
    txt_draw(0x1E01);
    latch(1);
L_FD7E4:
    txt_draw(0x1E00);
    func_80169128();
}

/* 800FE7D8: shop view dispatcher (0x1700 gate). */
void shop_view_run(void)
{
    wnd_fx_7d_b();
    txt_draw(0x1700);
    if (gate(0x202) != 0)
        goto L_E818;
    func_800FE110();
    func_800FDBBC();
    goto L_E848;
L_E818:
    io_poll(1);
    if (io_just() == 0)
        goto L_E848;
    func_800FDD8C();
    func_800FDF34();
    func_80175494();
L_E848:
    func_801769B4();
    func_80174F64();
    func_80175004();
}

/* 800FF024: shop buy-row chain dispatcher. */
void shop_buy_run(void)
{
    func_80171194();
    func_80171608();
    func_801719C8();
    func_801724D0();
    func_80172BA8();
    func_80173008();
    func_80173780();
    func_801721E8();
    latch(0x3E);
    func_8011B6B4();
    io_poll();
    if (io_just() != 0)
        return;
    func_80171F90();
}

/* 800FCCBC: catalog dispatch with bank tag 0. */
void catalog_dispatch_0(void)
{
    catalog_dispatch(0);
}

/* 800F9868: catalog dispatcher — asm register ladder (jr-$a0 sub-tables,
 * scratch-armed banks). No C-level flow is recoverable; documented stub.
 * Interpreted when the dispatch lanes are mapped (Phase B later pass). */
uint32_t catalog_dispatch(uint32_t a0)
{
    (void)a0;
    return 0;
}
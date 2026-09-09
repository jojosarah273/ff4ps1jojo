/* FF4 source-port — interpreted module for func_801317F0.
 * Ground truth: src/func_801317F0.c (byte-verified).
 * Primitives: port/include/ff4_window.h.
 */
#include "ff4_window.h"
void func_801317F0(void)
{
    /* ability/select screen: 0x1B91 text, 0xE8/0x54/0x55/0x57/0x41
       windows, 80124EAC cursor; loops L1318D0 (5DD4/5C64 scroll),
       L13193C (6B38(0x1B8B)/58BC wait), L1319F4 (80131A2C pick). */
    latch_cur();
    stat_sync();
    txt_set(0x1B91);
    row_prep(0x20);
    cell_pull9_hi(0x1B91);
    row_prep_close();
    row_page(0xE8);
    func_80124EAC();
    txt_cell(0x18);
    cell_set50_from40();
    cell_put(0x54);
    open_row(0x55);
    latch_cur();
    stat_sync();
    txt_cell(0x18);
    cell_tick_half();
    row_prep(0x20);
    sep_a();
    cell_peek0(cell_state(0x1B91));
    cell_put_hi9(0x57);
L1318d0:
    for (;;) {
        sep_a();
        cell_peek0(cell_state(0x57));
        func_800F5DD4(0x54);
        if (poll_go(0x202) != 0)
            continue;
        break;
    }
    cell_put_hi9(0x57);
    row_prep_close();
    row_prep_close();
    func_800F7248(0x41);
L13193c:
    for (;;) {
        func_800F6B38(0x1B8B);
        if (gate(2) != 0)
            goto L13195C;
        func_800F6390();
    L13195C:
        func_800F6338();
        func_800F58BC(5);
        if (io_just() == 0)
            continue;
        break;
    }
    row_prep(0x10);
    txt_set(0x1BBB);
    if (gate(2) != 0)
        goto L1319CC;
    row_prep(0x20);
    row_read2(0x57);
    goto L1319DC;
L1319CC:
    row_prep(0x20);
    row_read2(0x57);
L1319DC:
    cell_put_hi9(0x45);
    row_prep_close();
    latch_cur();
L1319f4:
    for (;;) {
        func_80131A2C();
        cell_set50_from40();
        io_poll(5);
        if (io_just() == 0)
            continue;
        break;
    }
    return;
}

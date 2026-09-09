# FF4 port — function catalog

Every Phase A function and where it lives in the port. The `name`
column is the semantic 0x800F primitive name (tool:
`tools/port_names.py`, header: `port/include/ff4_window.h`);
`module` is the interpreted module that owns the function;
`bv` marks byte-verified. Unassigned rows are stubbed until the
register machines are interpreted (Avenue 2).

- functions: 2516   interpreted: 1416   stub-only: 1100
- byte-verified: 827   named primitives: 237

| id | name | module fn | module | bv | role |
|----|------|-----------|--------|----|------|
| 800F3A68 | - | - | - |  | register-only stub (0x4); see asm for exact dataflow. |
| 800F3A70 | cell_bank_sel | - | - |  |  |
| 800F3AB4 | - | - | - |  |  |
| 800F3B04 | catalog_base | - | - |  | catalog base + offset. Bank tag byte at scratch 0x1F8003D2 selects the base; overflow path uses the saved bank offset. |
| 800F3B9C | cell_add16 | - | - |  | byte-verified: the scratch-base machinery computes into an unused register; the only observable output is (u16)a0. |
| 800F3C3C | cell_addr16 | - | - |  |  |
| 800F3C6C | cell_read32 | - | - | Y |  |
| 800F3C94 | cell_window | - | - | Y |  |
| 800F3CC4 | cell_merge | - | - | Y | menu cell: base 0x7FFC8000, upgrades to ROM 0x800D0000 when the cursor offset overflows 0x7FFF; merges 2 bytes into D50, catalog callback +  |
| 800F3D48 | scratch_swap_status | - | - |  |  |
| 800F3D64 | battle_wait_just | - | - |  | battle: 3B9C x2 gates; spin loop L800F3DF0. |
| 800F3E50 | - | - | - |  | battle: 3B9C x2 rows. |
| 800F3F38 | ticker_advance | - | - |  |  |
| 800F3F94 | cell_pos_fwd2 | - | - |  |  |
| 800F4008 | row_open_w | - | - |  |  |
| 800F4064 | cell_pos_fwd | - | - |  |  |
| 800F40CC | ticker_mask | - | - | Y |  |
| 800F40E8 | cell_flags_tick2 | - | - |  |  |
| 800F4120 | ticker_reblend | - | - |  |  |
| 800F4170 | - | - | - |  |  |
| 800F41A4 | - | - | - |  |  |
| 800F41E8 | cell_flags_pos0 | - | - |  |  |
| 800F4248 | row_read | - | - | Y |  |
| 800F4264 | cell_pos_mask | - | - | Y |  |
| 800F4280 | cell_tick_and2 | - | - |  |  |
| 800F42B0 | - | - | - |  |  |
| 800F42F8 | - | - | - |  |  |
| 800F4328 | - | - | - |  |  |
| 800F4370 | cell_tick_and | - | - |  |  |
| 800F43A0 | - | - | - |  |  |
| 800F43E8 | - | - | - |  |  |
| 800F442C | - | - | - |  |  |
| 800F4470 | - | - | - |  |  |
| 800F44CC | - | - | - |  |  |
| 800F4528 | - | - | - |  |  |
| 800F4578 | - | - | - |  |  |
| 800F45C8 | - | - | - |  |  |
| 800F4630 | - | - | - |  |  |
| 800F4698 | - | - | - |  |  |
| 800F46E8 | - | - | - |  |  |
| 800F4738 | - | - | - |  |  |
| 800F47A0 | - | - | - |  |  |
| 800F4808 | - | - | - |  |  |
| 800F4844 | - | - | - |  |  |
| 800F4880 | - | - | - |  |  |
| 800F48D4 | - | - | - |  |  |
| 800F4928 | - | - | - |  |  |
| 800F4960 | - | - | - |  |  |
| 800F4998 | - | - | - | Y |  |
| 800F49E8 | - | - | - |  |  |
| 800F4A38 | - | - | - |  |  |
| 800F4A7C | - | - | - |  |  |
| 800F4AC0 | - | - | - |  |  |
| 800F4B1C | - | - | - |  |  |
| 800F4B78 | - | - | - | Y |  |
| 800F4BB0 | - | - | - | Y |  |
| 800F4BE8 | - | - | - |  |  |
| 800F4C38 | - | - | - |  |  |
| 800F4C88 | - | - | - |  |  |
| 800F4CC0 | - | - | - |  |  |
| 800F4D10 | - | - | - |  |  |
| 800F4D4C | - | - | - |  |  |
| 800F4DA0 | - | - | - |  |  |
| 800F4DD0 | - | - | - |  |  |
| 800F4E18 | - | - | - |  |  |
| 800F4E50 | - | - | - |  |  |
| 800F4E88 | - | - | - |  |  |
| 800F4ED8 | - | - | - |  |  |
| 800F4F28 | row_arm2 | - | - | Y |  |
| 800F4F4C | row_sel_cell2 | - | - |  |  |
| 800F4FAC | cell_flags_zero50 | - | - |  |  |
| 800F5024 | cell_pair_dbl2 | - | - | Y |  |
| 800F5050 | row_arm_s2 | - | - |  |  |
| 800F50BC | - | - | - |  | window flags: repack D68 status bits from D50 state; xor the latched byte with a0's high byte. |
| 800F5140 | row_sel_cell | - | - |  |  |
| 800F516C | row_arm_s | - | - | Y |  |
| 800F5198 | - | - | - |  | window state: latch byte -> D50; mask D68 0x3D; merge 0xC0 bits; mask D50 with D40; flag bit in D68. |
| 800F521C | - | - | - |  | window load u16: D50 <- u16(a0); flag merge (0x3D/0xC000/2). |
| 800F52BC | - | - | - |  | window state (byte variant): D50 <- a0&0xFF; same flags. |
| 800F533C | - | - | - |  | window state (u16 variant): D50 <- a0&0xFFFF; merge 0xC000 bits >> 8; mask with D44. |
| 800F53C0 | io_go | - | - | Y |  |
| 800F53D4 | io_just | - | - | Y |  |
| 800F53E8 | - | - | - | Y |  |
| 800F53FC | cell_flags_hi7 | - | - | Y |  |
| 800F5410 | sep_a | - | - | Y |  |
| 800F542C | - | - | - | Y |  |
| 800F5448 | cell_flags_clr4 | - | - | Y |  |
| 800F5464 | - | - | - | Y |  |
| 800F5480 | sep_b | - | - | Y |  |
| 800F549C | - | - | - | Y |  |
| 800F54B8 | cell_flags_set4 | - | - | Y |  |
| 800F54D4 | io_press | - | - |  |  |
| 800F5520 | cell_flags_cmp_pos | - | - |  |  |
| 800F5574 | io_poll | - | - |  |  |
| 800F55C0 | cell_flags_cmp3 | - | - |  |  |
| 800F560C | - | - | - |  |  |
| 800F56AC | cell_flags_cmp | - | - |  |  |
| 800F5764 | - | - | - | Y |  |
| 800F5804 | - | - | - |  |  |
| 800F58BC | - | - | - | Y |  |
| 800F5958 | poll_t | - | - | Y |  |
| 800F59F4 | - | - | - |  |  |
| 800F5A90 | poll_t | - | - |  |  |
| 800F5B2C | - | - | - | Y |  |
| 800F5B4C | - | - | - |  |  |
| 800F5B8C | poll_go | - | - |  |  |
| 800F5BE8 | - | - | - | Y |  |
| 800F5C14 | - | - | - |  |  |
| 800F5C64 | poll_go | - | - |  |  |
| 800F5CCC | poll_spin | - | - | Y |  |
| 800F5CF8 | row_scan | - | - |  |  |
| 800F5D24 | cell_dec_bank | - | - |  |  |
| 800F5D58 | - | - | - |  |  |
| 800F5DA0 | poll_pair | - | - |  |  |
| 800F5DD4 | cell_dec_cell | - | - |  |  |
| 800F5E1C | - | - | - |  |  |
| 800F5E48 | cell_set50_from54 | - | - |  |  |
| 800F5E74 | - | - | - |  |  |
| 800F5EA0 | poll_pair | - | - |  |  |
| 800F5ECC | cell_tick_xor | - | - | Y |  |
| 800F5EE8 | - | - | - |  |  |
| 800F5F20 | - | - | - |  |  |
| 800F5F70 | - | - | - |  |  |
| 800F5FA4 | - | - | - |  |  |
| 800F5FE8 | - | - | - |  |  |
| 800F6048 | cell_dispatch | - | - | Y |  |
| 800F6068 | - | - | - |  |  |
| 800F60A8 | - | - | - |  |  |
| 800F6104 | - | - | - |  |  |
| 800F6130 | - | - | - |  |  |
| 800F6180 | - | - | - |  |  |
| 800F61E8 | cell_set50_from40 | - | - |  |  |
| 800F6214 | row_done2 | - | - | Y |  |
| 800F6240 | page_paint2 | - | - |  |  |
| 800F6274 | - | - | - |  |  |
| 800F62BC | key_page | - | - |  |  |
| 800F62F0 | cell_inc_cell | - | - |  |  |
| 800F6338 | - | - | - |  |  |
| 800F6364 | cell_step | - | - |  |  |
| 800F6390 | - | - | - |  |  |
| 800F63BC | step2 | - | - |  |  |
| 800F63E8 | - | - | - | Y |  |
| 800F63F8 | cell_flags_scr | - | - |  |  |
| 800F6434 | gate | - | - |  |  |
| 800F6488 | - | - | - | Y |  |
| 800F64A8 | - | - | - |  |  |
| 800F64EC | cell_flags_pos0 | - | - |  |  |
| 800F654C | latch | - | - | Y |  |
| 800F6558 | row_sync2 | - | - | Y |  |
| 800F6564 | txt_set | - | - |  |  |
| 800F658C | cell_push9 | - | - |  |  |
| 800F65C8 | cell_push_c8_cur | - | - |  |  |
| 800F65F0 | cell_sink89_c | - | - |  |  |
| 800F6630 | row_page | - | - |  |  |
| 800F6658 | row_read2 | - | - |  |  |
| 800F6698 | - | - | - |  |  |
| 800F66D8 | cell_push_c8_sel | - | - |  |  |
| 800F6718 | - | - | - |  |  |
| 800F6764 | cell_push89_sel | - | - |  |  |
| 800F67B0 | - | - | - |  |  |
| 800F67FC | cell_push_c8_b4o | - | - |  |  |
| 800F6848 | - | - | - |  |  |
| 800F68A0 | - | - | - |  |  |
| 800F68F8 | - | - | - |  |  |
| 800F6940 | - | - | - |  |  |
| 800F6988 | - | - | - |  |  |
| 800F69E4 | - | - | - |  |  |
| 800F6A40 | - | - | - |  |  |
| 800F6A78 | cell_push_c8_c2 | - | - |  |  |
| 800F6AB0 | - | - | - |  |  |
| 800F6AF4 | - | - | - |  |  |
| 800F6B38 | - | - | - |  |  |
| 800F6B68 | txt_cell | - | - |  |  |
| 800F6B98 | - | - | - |  |  |
| 800F6BE0 | cell_sink8_9 | - | - |  |  |
| 800F6C28 | - | - | - |  |  |
| 800F6C68 | cell_push_c8 | - | - |  |  |
| 800F6CA8 | - | - | - |  |  |
| 800F6CF4 | cell_push9_bank | - | - |  |  |
| 800F6D40 | - | - | - |  |  |
| 800F6D70 | cell_push_c8_d58 | - | - |  |  |
| 800F6DA0 | - | - | - |  |  |
| 800F6DE8 | cell_sink89 | - | - |  |  |
| 800F6E30 | cell_push_c8_lo | - | - |  |  |
| 800F6E60 | - | - | - |  |  |
| 800F6EA8 | cell_push_c8_b4 | - | - |  |  |
| 800F6EDC | - | - | - |  |  |
| 800F6F28 | - | - | - |  |  |
| 800F6F50 | - | - | - |  |  |
| 800F6F8C | - | - | - |  |  |
| 800F6FBC | - | - | - |  |  |
| 800F6FEC | - | - | - |  |  |
| 800F7030 | - | - | - |  |  |
| 800F7074 | - | - | - | Y |  |
| 800F7084 | - | - | - |  |  |
| 800F70BC | - | - | - |  |  |
| 800F710C | - | - | - | Y |  |
| 800F712C | - | - | - |  |  |
| 800F7170 | cell_flags_pack | - | - |  |  |
| 800F71D0 | - | - | - | Y |  |
| 800F71DC | wnd_open | - | - | Y |  |
| 800F71E8 | - | - | - |  |  |
| 800F7210 | page_open | - | - |  |  |
| 800F7248 | - | - | - |  |  |
| 800F7270 | page | - | - |  |  |
| 800F72A8 | - | - | - |  |  |
| 800F72E0 | - | - | - |  |  |
| 800F7328 | - | - | - | Y |  |
| 800F7358 | - | - | - | Y |  |
| 800F7398 | - | - | - | Y |  |
| 800F73A8 | - | - | - |  |  |
| 800F73E0 | - | - | - |  |  |
| 800F7430 | - | - | - | Y |  |
| 800F7450 | - | - | - |  |  |
| 800F7494 | - | - | - |  |  |
| 800F74F4 | - | - | - | Y |  |
| 800F7500 | draw_pad | - | - | Y |  |
| 800F750C | - | - | - |  |  |
| 800F7534 | cell_push60 | - | - |  |  |
| 800F756C | - | - | - |  |  |
| 800F7594 | cell_fmt2 | - | - |  |  |
| 800F75CC | - | - | - |  |  |
| 800F7604 | - | - | - |  |  |
| 800F764C | - | - | - | Y |  |
| 800F767C | - | - | - | Y |  |
| 800F76BC | cell_word_half | - | - |  |  |
| 800F76E8 | cell_flags_repack | - | - |  |  |
| 800F7728 | cell_flags_nz50 | - | - |  |  |
| 800F7780 | - | - | - |  |  |
| 800F77CC | - | - | - |  |  |
| 800F780C | - | - | - |  |  |
| 800F7864 | cell_tick_half | - | - |  |  |
| 800F7894 | row_sel2 | - | - |  |  |
| 800F78C4 | cell_tick_or | - | - | Y |  |
| 800F78E0 | - | - | - |  |  |
| 800F7918 | ticker_reblend2 | - | - |  |  |
| 800F7968 | - | - | - |  |  |
| 800F799C | - | - | - |  |  |
| 800F79E0 | - | - | - |  |  |
| 800F7A40 | row_sel2 | - | - |  |  |
| 800F7A68 | cell_flags_repack2 | - | - |  |  |
| 800F7AC8 | - | - | - |  |  |
| 800F7B40 | cell_pair_dbl | - | - |  |  |
| 800F7B7C | cell_flags_overflow | - | - |  |  |
| 800F7BE8 | - | - | - |  | window flags (twin of 800F50BC): repack D68 status bits from D50 state; xor the latched byte with a0's high byte. |
| 800F7C6C | cell_tick_dbl | - | - |  |  |
| 800F7C98 | - | - | - |  |  |
| 800F7CC8 | cell_word_half_s | - | - |  |  |
| 800F7D0C | cell_flags_pack3 | - | - |  |  |
| 800F7D68 | - | - | - |  |  |
| 800F7DDC | - | - | - |  |  |
| 800F7E20 | - | - | - |  |  |
| 800F7E78 | - | - | - |  |  |
| 800F7EE8 | - | - | - |  |  |
| 800F7F18 | - | - | - |  |  |
| 800F7F48 | cell_tick_sub | - | - |  | window subtract: D40 -= a0 (with parity bit); repack flags; store new D40/D50; returns the D50 pointer. |
| 800F7FCC | cell_pos_sub16 | - | - |  | window subtract u16: D44 -= u16(a0) (with parity bit); repack flags incl. D40[1] hi bits; returns the D50 pointer. |
| 800F8058 | cell_pos_back | - | - |  |  |
| 800F80D0 | cell_pos_back2 | - | - |  |  |
| 800F814C | - | - | - | Y |  |
| 800F8160 | - | - | - | Y |  |
| 800F8188 | txt_draw | - | - |  |  |
| 800F81B0 | cell_pull9_hi | - | - |  |  |
| 800F81E8 | cell_pull_c8_lo | - | - |  |  |
| 800F8210 | - | - | - |  |  |
| 800F824C | cell_put | - | - |  |  |
| 800F8274 | cell_put_hi9 | - | - |  |  |
| 800F82B0 | - | - | - |  |  |
| 800F82EC | cell_pull_c8_bank | - | - |  |  |
| 800F8328 | - | - | - |  |  |
| 800F8378 | cell_pull89_bank | - | - |  |  |
| 800F83C8 | - | - | - |  |  |
| 800F8410 | - | - | - |  |  |
| 800F8458 | - | - | - |  |  |
| 800F84B0 | - | - | - |  |  |
| 800F8508 | - | - | - |  |  |
| 800F8550 | - | - | - |  |  |
| 800F8598 | - | - | - |  |  |
| 800F85EC | - | - | - |  |  |
| 800F8640 | - | - | - |  |  |
| 800F8674 | - | - | - |  |  |
| 800F86A8 | - | - | - |  |  |
| 800F86F0 | - | - | - |  |  |
| 800F8738 | - | - | - |  |  |
| 800F8768 | cell_draw | - | - |  |  |
| 800F8798 | - | - | - |  |  |
| 800F87DC | cell_stamp8_9 | - | - |  |  |
| 800F8820 | - | - | - |  |  |
| 800F885C | cell_pull_c8_off | - | - |  |  |
| 800F8898 | - | - | - |  |  |
| 800F88E4 | cell_pull89_fn | - | - |  |  |
| 800F8930 | - | - | - |  |  |
| 800F8960 | cell_pull_c8 | - | - |  |  |
| 800F8990 | - | - | - |  |  |
| 800F89D4 | cell_stamp8_9_b | - | - |  |  |
| 800F8A18 | cell_pull_c8_sel2 | - | - |  |  |
| 800F8A48 | - | - | - |  |  |
| 800F8A8C | - | - | - |  |  |
| 800F8AC0 | - | - | - |  |  |
| 800F8B08 | - | - | - |  |  |
| 800F8B30 | - | - | - |  |  |
| 800F8B68 | - | - | - |  |  |
| 800F8B98 | - | - | - |  |  |
| 800F8BC8 | - | - | - |  |  |
| 800F8C08 | - | - | - |  |  |
| 800F8C48 | - | - | - | Y |  |
| 800F8C5C | - | - | - | Y |  |
| 800F8C84 | - | - | - | Y |  |
| 800F8C98 | - | - | - | Y |  |
| 800F8CC0 | - | - | - | Y |  |
| 800F8CC8 | - | - | - | Y |  |
| 800F8CD4 | - | - | - |  |  |
| 800F8D00 | label | - | - |  |  |
| 800F8D40 | - | - | - |  |  |
| 800F8D6C | tail | - | - |  |  |
| 800F8DAC | - | - | - |  |  |
| 800F8DE0 | - | - | - |  |  |
| 800F8E24 | - | - | - |  |  |
| 800F8E50 | cell_pull60 | - | - |  |  |
| 800F8E90 | - | - | - |  |  |
| 800F8EBC | row_info | - | - |  |  |
| 800F8EFC | - | - | - |  |  |
| 800F8F30 | - | - | - |  |  |
| 800F8F74 | cell_clear_bank | - | - |  |  |
| 800F8F94 | cell_clear_bank2 | - | - | Y |  |
| 800F8FB8 | open_row | - | - |  |  |
| 800F8FD8 | - | - | - |  |  |
| 800F8FFC | - | - | - |  |  |
| 800F902C | - | - | - |  |  |
| 800F905C | - | - | - |  |  |
| 800F9090 | - | - | - |  |  |
| 800F90C4 | - | - | - | Y |  |
| 800F90EC | page_paint | - | - | Y |  |
| 800F9114 | - | - | - | Y |  |
| 800F9140 | - | - | - | Y |  |
| 800F916C | - | - | - |  |  |
| 800F91A4 | - | - | - |  |  |
| 800F9200 | cell_cursor_dec | - | - |  |  |
| 800F922C | cell_cursor_ret2 | - | - |  |  |
| 800F926C | row_open2 | - | - |  |  |
| 800F9298 | row_open3 | - | - |  |  |
| 800F92D8 | - | - | - |  |  |
| 800F9304 | - | - | - |  |  |
| 800F9330 | row_open | - | - |  |  |
| 800F9370 | - | - | - |  |  |
| 800F939C | row_sync | - | - |  |  |
| 800F93DC | row_close2 | - | - |  |  |
| 800F9410 | cell_cursor_adv2 | - | - |  |  |
| 800F9448 | row_pad | - | - |  |  |
| 800F94B8 | cell_cursor_read | - | - |  | window cursor: reads the u16 table entry at 0x800D0000 + idx, sets flags, advances idx by 2. |
| 800F9538 | - | - | - |  |  |
| 800F956C | - | - | - |  |  |
| 800F95A0 | row_close | - | - |  |  |
| 800F95D8 | - | - | - |  |  |
| 800F960C | row_done | - | - |  |  |
| 800F9644 | row_prep | - | - | Y |  |
| 800F9660 | row_prep_close | - | - | Y |  |
| 800F967C | - | - | - | Y |  |
| 800F9690 | cell_cur_save54 | - | - | Y |  |
| 800F96A4 | - | - | - | Y |  |
| 800F96B8 | - | - | - | Y |  |
| 800F96CC | - | - | - | Y |  |
| 800F96E0 | cell_cur_save58 | - | - | Y |  |
| 800F96F4 | - | - | - | Y |  |
| 800F9708 | - | - | - | Y |  |
| 800F971C | sep | - | - | Y |  |
| 800F9730 | - | - | - |  |  |
| 800F9784 | - | - | - |  | window state (u16 clear): D68 &= 0xFD; flag if the D44-masked u16 from a0 == 0. |
| 800F97D0 | - | - | - |  |  |
| 800F9820 | - | - | - |  | window state (u16 set): D44 |= u16(a0); flag if zero. |
| 800F9868 | catalog_dispatch | - | - |  | catalog dispatch (0x368): a0/v0 regcmp ladder routes into a jr-$a0 sub-table (L800F990C..); each slot resolves a scratch-armed bank and disp |
| 800F9BD0 | - | - | - |  | rows: 800F9C98/800F9CE8 pair. |
| 800F9C90 | - | - | - | Y |  |
| 800F9C98 | - | - | - |  |  |
| 800F9CE8 | - | - | - |  |  |
| 800FA460 | - | - | - | Y |  |
| 800FA5B8 | - | - | - |  | battle item-use confirm: 0xD5/0x50/2 window gates, 0x1700/0x1704 headers, 0xA04 name row, 801163E8 executes the use. |
| 800FA834 | - | - | - | Y |  |
| 800FA9B4 | - | - | - |  |  |
| 800FAA04 | - | - | - |  |  |
| 800FAD48 | - | - | - |  |  |
| 800FB09C | shop_view2_run | - | - | Y |  |
| 800FB160 | - | - | - | Y |  |
| 800FB224 | - | - | - | Y |  |
| 800FB2E8 | - | - | - | Y |  |
| 800FB3A0 | - | - | - | Y |  |
| 800FB3F8 | wnd_fx_2100 | - | - | Y |  |
| 800FB430 | - | func_800FB430 | src/config/screen_f.c |  | MAIN SYSTEM MENU root (0xA14): register dispatch ladder L800FB520..L800FBE08 (v0/v1 gates per segment). Linear call chain with constants pul |
| 800FBE44 | - | - | - |  | shop rows: 0x47/0x45/0x60/0x61 windows, 0x2800 texts, 801766B0 rows + 8017F8F8 preps; ends 80194700/80194394. |
| 800FBF50 | - | - | - |  | shop rows: 0x47/0x61 windows, loop L8FBF94 on 4120(0x202); 4064(8)/8274(0x61) cells. |
| 800FC07C | - | - | - | Y |  |
| 800FC0DC | - | - | - |  |  |
| 800FC110 | - | - | - |  | battle rows: 0x3F/0x212C/0x79 windows, 0x420C texts, 0xAD window, 800FC2AC close; loop L8FC140 on 5574(0x28). |
| 800FC1CC | - | - | - |  | battle rows: 0x3F/0x212C/0x79 windows, 0x2106/0xC6 texts, 800FD37C/800FC2AC rows; loop L8FC200 on 5574(0x2A). |
| 800FC2AC | - | - | - |  | battle confirm-dialog: two 5958/53C0 key-gates select the 0x1802 header, then the 0x1700-0x1702 option rows, then 0x1803 dispatch (801762D0/ |
| 800FC548 | - | - | - | Y |  |
| 800FC5A8 | - | - | - | Y |  |
| 800FC5D8 | - | - | - |  | battle confirm-dialog: 0x1700 test branches to the 0x2105 help (800FFADC/8017F9A8) vs 0x2120 detail (800FFB1C/8010CA74) rows; fee-check 0xFE |
| 800FC8E8 | - | - | - |  | shop banner: 0x7F window, 0x5800 cells; loops LFC918/LFC968 (5A90(0x100) gate). |
| 800FCA08 | - | - | - |  | battle item: 0xFD8 text, 0x2115/0x4300-0x4305 cells; gate 5574(0xE). |
| 800FCAB8 | - | - | - | Y |  |
| 800FCC0C | - | - | - | Y |  |
| 800FCC84 | wnd_fx_tags | - | - | Y |  |
| 800FCCBC | catalog_dispatch_0 | - | - | Y |  |
| 800FCCDC | - | func_800FCCDC | src/menu/screen_k.c |  |  |
| 800FD37C | - | - | - | Y |  |
| 800FD404 | - | - | - | Y |  |
| 800FD494 | - | - | - |  | battle vertical-menu: 3D/3E label windows, 0xC0 window row gate, 0x17EE text with the 60A8(0x202) check; key ladder 0x2B-0xFC advances the c |
| 800FD6B8 | - | - | - | Y |  |
| 800FD6E8 | - | - | - | Y |  |
| 800FD718 | battle_rows_run | - | - |  | battle rows: 0x1704/0x1700/0xFE2 texts, 0x1E01/0x1E00 cells, 80169128 row; gates 6434(2)/5574(3). |
| 800FD804 | wnd_fx_pads | - | - | Y |  |
| 800FD85C | shop_rows_run | - | - |  | shop rows: 0x82/0x79/0x80 windows, 0x2100 text; loop L8FD87C on 4370(0x82)/4120(0x202). |
| 800FD914 | shop_rows2_run | - | - | Y |  |
| 800FD9FC | - | - | - | Y |  |
| 800FDA4C | - | - | - | Y |  |
| 800FDA9C | - | - | - |  |  |
| 800FDAFC | - | - | - | Y |  |
| 800FDB5C | - | - | - | Y |  |
| 800FDBBC | - | - | - |  | shop title-screen: 0x7C window with 800FDA9C/8018226C rows and the 0x2115/0x2116/0x420B/0x4300-0x4305 register rows (801820F4 commit); 0x200 |
| 800FDD28 | - | - | - |  |  |
| 800FDD8C | - | - | - |  | shop title rows: 0x7C window gate, 0x6/0x7 windows with 885C fill loops (L8FDE30/L8FDEB8 on 5C64(0x202)); 4248(0xF8)/ 9690/4008(0x47) reads. |
| 800FDF34 | - | - | - |  | shop title: 0x7C window, 0x2115 title + 0x4209 row, 800FDA9C + 8018226C(0x3800); close via 62BC(0x7C). |
| 800FE028 | - | - | - |  | shop fills: two 885C/5958(0x100) loops. |
| 800FE110 | - | - | - |  |  |
| 800FE5D4 | - | - | - | Y |  |
| 800FE634 | - | - | - |  |  |
| 800FE6E4 | battle_gate_early | - | - |  | battle: 3C3C + a1/v0 latch. |
| 800FE778 | wnd_fx_7d | - | - | Y |  |
| 800FE7B0 | wnd_fx_7d_b | - | - | Y |  |
| 800FE7D8 | shop_view_run | - | - | Y | shop view dispatcher: 0x1700 gate picks 800FE110/800FDBBC vs 800FDD8C/800FDF34/80175494; tail always runs 801769B4/ 80174F64/80175004. |
| 800FE870 | cell_clear_pad | - | - |  |  |
| 800FE8B4 | - | - | - |  | battle: 3C3C/3B04 gates; 6364 loop on a0/v1 latch. |
| 800FE978 | - | - | - | Y |  |
| 800FE9F8 | - | - | - |  | shop rows: 0x7F/0x79/0x6F windows, 0x4209 texts; 6434/0xB1 gates close on 0x2100/0x4200 titles. |
| 800FEB10 | - | - | - |  | shop rows: 0x79 window + 0x6F/0x6E stamp rows, 0x4209/0x2126/ 0x2127 texts, 0x677/0xA1 windows; closes on 0x2A5 text. |
| 800FEC74 | - | - | - | Y |  |
| 800FED3C | - | - | - |  | shop banner: 0xD9/0x7A/0x79/0xB1 windows, 0x2100/0x4200 texts, 80178BB4 row; loop L8FED94 on 5DA0(0x79)/5B8C; closes via 6434(0x202) gate. |
| 800FEE34 | - | - | - |  | item/order sub-screen: 0x4211 text, 0xD9/0xDF/0xDA windows with 800FE9F8/80109774/801069E0 gates; 0x7F + 0x94B8/9448 close. |
| 800FEF7C | - | - | - |  | shop/battle: v0 + v1/v0 gates pick 800FEE34 pair, 80138F68 pair or 80073D58 row; returns at L800FF014. |
| 800FF024 | shop_buy_run | - | - |  | shop flow: the buy-row chain 80171194/80171608/801719C8/ 801724D0/80172BA8/80173008/80173780/801721E8/8011B6B4, then a 5574 gate picks 80171 |
| 800FF0AC | - | - | - | Y |  |
| 800FF1C0 | - | - | - |  |  |
| 800FF54C | - | - | - | Y |  |
| 800FF5EC | - | - | - |  | shop buy rows: 0x1705/0x1704 texts, 0x79 window, 80172BA8/80173008 rows; loop LFF614 on 5574(0x30)/53D4. |
| 800FF704 | - | - | - |  | shop buy-flow: 0x1706/0x1707 headers, 0x1700-0x1704 name rows, 64/6D/6E/79/B7/B8 windows; 800FB09C + 80172BA8/80173008 render the buy list;  |
| 800FF978 | - | - | - |  | shop inventory rows: 0x4C/0x4E/0x4A/0x49 windows, two 80170458 renders (0x4200/0x4300 gates); loops LFFA20/LFFA24/LFFA6C poll the 0xE5B cell |
| 800FFADC | - | - | - | Y |  |
| 800FFB1C | - | - | - | Y |  |
| 800FFB5C | - | - | - | Y |  |
| 800FFCAC | - | - | - | Y |  |
| 800FFE0C | - | - | - |  | shop gates: 0xB1/0x5A/0x5C/0x2/0x54/0xEA windows with 4120/6434 gates; 800FFEFC/8010A964 rows close. |
| 800FFEFC | - | func_800FFEFC | src/menu/screen_r.c |  |  |
| 801004D4 | - | func_801004D4 | src/battle/gen468.c | Y | battle stats: 0x16A0-0x16A2 texts, 0x30-0x32 windows rows via 3F38(3C3C); 5574 cursor ladder. |
| 801005DC | - | func_801005DC | src/battle/gen59.c |  | battle help-dialog: 0x8FB header, 0x1804-0x180B ruler rows, 0x1440/0x1441 progress counters, sub-screen calls 800FAD48 / 8010CA74 / 80170C14 |
| 80100894 | - | func_80100894 | src/battle/gen914.c |  | rows: 4x 65F0 cells + 0x700-0x706 texts via 81B0; linear. |
| 80100978 | - | func_80100978 | src/battle/gen01517.c |  |  |
| 801009E8 | - | func_801009E8 | src/battle/gen741.c | Y |  |
| 80100A98 | - | func_80100A98 | src/battle/gen913.c |  | shop rows: 0x8FC/0x1701 texts; gate 6434(2) picks the 0x8FC reads. |
| 80100B30 | - | func_80100B30 | src/battle/gen688.c |  | shop rows: 0x1702/0x3D/0x3E windows, 0x1701 text; 4F28/7A40 label pairs, then 62BC gates. |
| 80100BE0 | - | func_80100BE0 | src/battle/gen453.c |  | shop buy row: 0x711 gate, 0x3D/0x18/0x19/0x77 windows, 0xFE7/ 0x8FC texts, 80100B30/80100978 rows; loop L100C10 on 54D4(3B04(0x711)). |
| 80100D50 | - | func_80100D50 | src/battle/gen14.c |  |  |
| 80101230 | - | func_80101230 | src/battle/gen534.c |  | shop own-row: 0x172C text, 0x1700-0x1705 texts with 0x172E/ 0x172F cells; branch on 5574(3), closes with 0xC0 reads. |
| 80101350 | - | func_80101350 | src/battle/gen29.c |  |  |
| 80101788 | - | func_80101788 | src/battle/screen_c.c |  | settings menu (1704, items 4/5) |
| 80102414 | - | func_80102414 | src/battle/gen01516.c | Y |  |
| 80102444 | - | func_80102444 | src/battle/gen983.c | Y |  |
| 80102494 | - | func_80102494 | src/battle/gen79.c |  |  |
| 801026EC | - | func_801026EC | src/battle/gen01724.c |  | battle: 3C3C gate; v0/v1 run -> L102760. |
| 80102770 | - | func_80102770 | src/battle/gen28.c |  |  |
| 80102C30 | - | func_80102C30 | src/battle/gen327.c | Y |  |
| 80102D68 | - | func_80102D68 | src/battle/gen01515.c |  | battle/menu: 3C3C/3B04 gates; v0 gate tree; returns L102E68. |
| 80102E78 | - | func_80102E78 | src/battle/gen711.c | Y |  |
| 80102ED8 | - | func_80102ED8 | src/battle/gen710.c | Y |  |
| 80102F38 | - | func_80102F38 | src/battle/gen1038.c | Y |  |
| 80102F70 | - | func_80102F70 | src/battle/gen865.c | Y | shop buy rows: 0x1715/0x1706/0x1716/0x1707/0x1704 texts + 0xAC window, 800FD718/80102414 rows; gate 5574(1). |
| 80102FF8 | - | func_80102FF8 | src/battle/gen1069.c | Y |  |
| 80103030 | - | func_80103030 | src/battle/gen658.c | Y | shop rows: 0x1704/0xAC/0x1701/0x171B/0x1705 texts/windows, 801030F8/800FD718/80102ED8 rows; loop L1030B0 on 5574(4). |
| 801030F8 | - | func_801030F8 | src/battle/gen369.c | Y |  |
| 801031F0 | - | txt_set | src/shop/confirm.c | Y | shop confirm: 0x1286 gate, 0x1704/0x1705/0xAC/0xE1/0xB1/0xAD/ 0xB7/0x79 windows, 8017559C/801030F8/80103310/800FD718 rows. |
| 80103310 | - | func_80103310 | src/battle/gen657.c | Y | shop rows: 0x7A/0xB7 windows, 80102E78/8017559C rows; loops L103328 and L103370 (4008(0x10) reads). |
| 801033E0 | - | func_801033E0 | src/battle/gen452.c | Y |  |
| 801034E0 | - | func_801034E0 | src/battle/gen656.c | Y | shop rows (B8 twin of 80103310): 0x7A/0xB8 windows, 80102E78/8017559C rows. |
| 801035B0 | - | func_801035B0 | src/battle/gen740.c | Y |  |
| 80103660 | - | func_80103660 | src/battle/gen493.c | Y | shop rows: 0x7A/0xB9 windows, 80102E78 rows, 6FB/AD cells, 8017559C / 801038D4 / 80103790 sub-screens; loops L103678 and L1036C0 chain. |
| 80103790 | - | func_80103790 | src/battle/gen687.c |  | shop rows (alt of 801038D4): 0x1706/0x1708/0x5A windows, 80103A28/80103F40/8017F8F8/80103B98/80103DD8/800FB224/ 8017559C rows. |
| 801038D4 | - | func_801038D4 | src/battle/gen533.c |  | shop buy rows: 0x1706/0x170C texts, 0x5A window, 80103A28/ 8017F8F8/80103F94/80103B98/80103DD8/80103AC8/800FB09C/ 8017559C rows; 0x2100/0x42 |
| 80103A28 | - | func_80103A28 | src/battle/gen864.c | Y |  |
| 80103AC8 | - | func_80103AC8 | src/battle/gen709.c | Y |  |
| 80103B38 | - | func_80103B38 | src/battle/gen863.c | Y |  |
| 80103B98 | - | func_80103B98 | src/battle/gen78.c |  | shop list: 0x5C/0x70-0x73 window rows, 0x4200 title, 0x79 current row; two loops (L103BF8 menu / L103CEC detail) with 8010408C + 80103F00 re |
| 80103DD8 | - | func_80103DD8 | src/battle/gen622.c |  | shop rows: 0x5C/0xDF/0x79 windows, 0x420C/0x6E/0x6F texts, 80103F00/8010408C rows; loop L103E0C on 5574(0xFF). |
| 80103EAC | - | func_80103EAC | src/battle/gen01723.c |  |  |
| 80103F00 | - | func_80103F00 | src/battle/gen1037.c | Y |  |
| 80103F40 | - | func_80103F40 | src/battle/gen862.c | Y |  |
| 80103F94 | - | func_80103F94 | src/battle/gen861.c | Y |  |
| 80103FE8 | - | func_80103FE8 | src/battle/gen509.c | Y |  |
| 8010408C | - | func_8010408C | src/battle/gen860.c |  | battle rows: 0x300/0x301/0x2F/0x303/0x200 cells via 8010D9D4; loop L1040A4 on 5A90(). |
| 8010415C | - | func_8010415C | src/battle/gen326.c |  | battle menu rows: 0x70/0x7/0x3D/0x3E windows, two symmetric halves (L104198 and L104280) separated by 824C(0x7)+8F74(0x2115) +71DC(0x40) mid |
| 80104354 | - | func_80104354 | src/battle/gen218.c |  |  |
| 801046F4 | - | func_801046F4 | src/battle/gen555.c |  | shop buy rows: 0x1705/0x7A/0x79 windows, 0x6F8/0x1701/0x171B/ 0x1706/0x1719 texts, 800FF024 row; loop L104724 on 5574 keys. |
| 80104804 | - | func_80104804 | src/battle/gen686.c |  | shop rows: 0x1705/0x7A/0x79 windows, 0x6F8 texts, 800FF024 row; loop L104834 on 5574(0x40). |
| 801048EC | - | func_801048EC | src/battle/gen01722.c |  |  |
| 80104934 | - | func_80104934 | src/battle/gen19.c |  |  |
| 80104DB4 | - | func_80104DB4 | src/battle/gen1068.c | Y |  |
| 80104E14 | - | func_80104E14 | src/battle/gen580.c |  | shop sell rows: 0xB1/0xA1/0xD2 windows, 0x6A1/0x709 texts, 80104F1C; 6434(2)/4120(2) gates. |
| 80104F1C | - | func_80104F1C | src/battle/gen427.c |  | shop buy-row: 0x709/0x1706/0x1707 texts, 0xD2/0xC/0xE/0x3D/0xEE windows, 8010D54C; 6A78(0xA1) gate. |
| 80105098 | - | func_80105098 | src/battle/gen554.c |  | shop sell rows: 0xAB/0xD2 windows, 0x6A1/0x6A1 texts + 0x1706/ 0x1707 texts with 0xC/0xE/0xAE windows, 8010D4EC row; 4120(2) gates. |
| 801051A8 | - | func_801051A8 | src/battle/gen685.c | Y |  |
| 80105230 | - | txt_set | src/shop/confirm.c | Y | shop detail cells: 0xE/0x19/0x18/0xC windows with 76BC/7CC8 pairs and 3F38(3C3C(0x18)) rows; 4248(0x10)/4120 gate. |
| 80105358 | - | func_80105358 | src/battle/gen912.c |  | rows (twin of 80100894): 4x 65F0 + 85B0 texts; linear. |
| 8010543C | - | func_8010543C | src/battle/gen215.c |  |  |
| 80105828 | - | func_80105828 | src/battle/gen93.c |  | shop purchase-verify screen: reads 1704; confirm/cancel gates route through the buy amounts (1719-1726 detail rows); L15A78 closes the list  |
| 80105AF0 | - | func_80105AF0 | src/battle/gen92.c |  | shop list render: 2115/4300/4304 header + 4 item rows (2882/28B2/ 28E2/2912 desc, 4302/4305 cells, 420B cursor); loop L105C48 polls 634/70 k |
| 80105D2C | - | func_80105D2C | src/battle/gen553.c | Y |  |
| 80105DB4 | - | func_80105DB4 | src/battle/gen72.c |  |  |
| 801060A8 | - | func_801060A8 | src/battle/gen51.c |  |  |
| 801062E8 | - | func_801062E8 | src/battle/gen579.c | Y |  |
| 80106370 | - | func_80106370 | src/battle/gen12.c |  |  |
| 80106830 | - | func_80106830 | src/battle/gen1276.c | Y |  |
| 80106860 | - | func_80106860 | src/battle/gen953.c | Y |  |
| 801068B0 | - | func_801068B0 | src/battle/gen859.c | Y |  |
| 80106908 | - | func_80106908 | src/battle/gen810.c | Y |  |
| 80106960 | - | func_80106960 | src/battle/gen01514.c |  |  |
| 801069E0 | - | func_801069E0 | src/battle/gen809.c |  | shop choose: 0x7F/0xDA/0xBB windows, 0x4209/0x420A texts; gate 6434(0x202) picks the 0xDA vs 0x4200 paths. |
| 80106B1C | - | func_80106B1C | src/battle/gen325.c |  | shop detail: 0xDA/0xE7/0x8D/0xBA windows, 0x2115 title; 5574(8) gate; 3F38(3C3C)/76BC/7CC8 cell pairs on 0x8C/0x8B, 0x4B/0x4A; closes on 8D6 |
| 80106CD4 | - | func_80106CD4 | src/battle/gen01721.c |  | battle dispatch: v0 + v1/v0 gates pick 80106D6C / 80071D4C / 8016CA94 rows. |
| 80106D6C | - | func_80106D6C | src/battle/gen05.c |  |  |
| 80107530 | - | func_80107530 | src/battle/gen38.c |  |  |
| 80107830 | - | func_80107830 | src/battle/gen226.c |  |  |
| 80107B74 | - | func_80107B74 | src/battle/gen578.c |  | config rows: 0x712/0x1440/0x1441 texts, 0x1441 window; loops L107B84 (5958(0x60)) and L107BBC (73E0 gates). |
| 80107C98 | config_sub_screen | - | - |  | config sub-screen: 0xEA confirm wait, 0x8F4/0x8F6 save-check texts, 80108458 status table + 80177DAC scroll; loops at L107CB8/L107D54/ L107D |
| 80107F3C | config_confirm_loop_a | - | - | Y |  |
| 80107FC4 | - | func_80107FC4 | src/battle/gen436.c |  | shop rows: 0x1702/0x3E/0x3D/0xB2 windows, 0x1762 row texts, 8017F9A8/800FED3C/800FAA04 sub-rows; loops L108098 on 6434(0x202)/5C64(0x202) ga |
| 801082C8 | - | func_801082C8 | src/battle/gen01720.c |  |  |
| 80108330 | - | func_80108330 | src/battle/gen01719.c |  |  |
| 80108398 | - | func_80108398 | src/battle/gen01718.c |  |  |
| 80108400 | - | func_80108400 | src/battle/gen1036.c | Y |  |
| 80108458 | - | func_80108458 | src/battle/gen01.c |  | status table + modulo state machine (0xF20): register gate ladder; linear call chain with constants, in order. |
| 80109378 | - | func_80109378 | src/battle/gen01513.c |  | battle: key 0x42; on 53C0()==0 latch 0x42 into D40. |
| 801093B8 | - | func_801093B8 | src/battle/gen858.c |  | shop rows: 0x42 key gate routes the 3D48/95A0 fills. |
| 801094A0 | - | func_801094A0 | src/battle/gen1140.c | Y |  |
| 801094D8 | - | func_801094D8 | src/battle/gen1035.c |  | shop rows: 0x776/0xDD windows, gates 6434(0x202) route the 0x6C68 read chains; register latches pick the tails. |
| 801096F0 | - | func_801096F0 | src/battle/gen01512.c |  |  |
| 80109774 | - | func_80109774 | src/battle/gen808.c |  | shop choose (twin): 0x7F/0xDF/0xBB windows, 0x4209/0x420A texts; gate 6434(0x202). |
| 801098C8 | - | func_801098C8 | src/battle/gen259.c | Y |  |
| 80109A28 | - | func_80109A28 | src/battle/gen380.c | Y |  |
| 80109B08 | - | func_80109B08 | src/battle/gen37.c | Y |  |
| 80109D68 | - | - | - |  | battle FSM (0x49C): a2/v1+a2/v0 latch ladder (L80109DD0..) then a jr-$a0 sub-table (L80109E04) with v1/v0 gates into the L80109EAC/L8010A0A0 |
| 8010A204 | - | func_8010A204 | src/battle/gen451.c | Y |  |
| 8010A2AC | - | func_8010A2AC | src/battle/gen256.c |  | shop/battle dialog: 0xC5/0xE9/0xD1 windows, 0xFE6 name text, 0x774/0x834 stat rows, 80109378 cursor math; four loops (L10A344/L10A398/L10A44 |
| 8010A5A0 | - | func_8010A5A0 | src/battle/gen621.c |  | shop banner: 0xE9 window + 0x2115 gate; spins on L10A620, then 0x834/0x774 text rows (L10A748/L10A84C) before restoring 0x2115. |
| 8010A964 | - | func_8010A964 | src/battle/rowf.c |  |  |
| 8010AF2C | - | func_8010AF2C | src/battle/gen779.c |  | battle rows: 0x903 text; loop L10AF5C on 5958/53D4; then 78C4(3B04)/7918(0x202) gates with 0x902 alternate. |
| 8010B010 | state_ok | - | - |  | battle: 3C3C/3B04/3B9C gates; wide v0 + a3/v0 gate tree (L10B084..L10B454) around the 8010B5DC row loop L10B2A8; v0/v1 latch loops close at  |
| 8010B5DC | - | func_8010B5DC | src/battle/gen1275.c |  | battle: 3C3C/3B04 gates; v0 run to L10B6D0. |
| 8010B6EC | - | func_8010B6EC | src/battle/gen1067.c |  | stat-refresh/verify driver; loops until the v0==v1 latch at L10C000 breaks. Register gates decide which stat-rows are recomputed (8010C1AC / |
| 8010C1AC | - | func_8010C1AC | src/battle/gen1176.c |  | battle rows: 3B9C(0xEDB)/3B04/3C3C gates then 9330; 95A0 close. |
| 8010C368 | - | func_8010C368 | src/battle/gen1274.c |  | key-dialog flow for a status submenu. 9200/93DC pairs are the wait/read-input helpers; the v0 gates route confirm vs cancel tails; the L10CA |
| 8010CA74 | - | func_8010CA74 | src/battle/gen952.c |  | battle rows: 0xAE/0x9D1/0x9CF texts, 8010D61C row; loop L10CA98 on 5574(0xC). |
| 8010CB08 | - | func_8010CB08 | src/battle/rowg.c |  |  |
| 8010D0D8 | - | func_8010D0D8 | src/battle/gen413.c |  | shop stat row: 0x3E/0x3D windows with 76BC/7CC8 pairs, 0xE5B cells; loops L10D170/L10D1C4 poll 5C64(0x202)/4248(0xF) gates. |
| 8010D24C | - | func_8010D24C | src/battle/gen857.c | Y |  |
| 8010D2A0 | - | func_8010D2A0 | src/battle/gen1273.c |  | battle rows: 3C3C/3B9C + 9330 + 8010D54C + 95A0; linear. |
| 8010D34C | - | func_8010D34C | src/battle/gen1139.c |  | battle rows: 3C3C/3B9C + 9330 gates; 8010D54C + 95A0 tail. |
| 8010D458 | - | func_8010D458 | src/battle/gen620.c | Y |  |
| 8010D4EC | - | func_8010D4EC | src/battle/gen01717.c |  |  |
| 8010D54C | - | func_8010D54C | src/battle/gen532.c | Y |  |
| 8010D61C | - | func_8010D61C | src/battle/gen684.c | Y |  |
| 8010D6A0 | - | func_8010D6A0 | src/battle/gen309.c |  | battle item confirm: 5574 key ladders (0x11/0x30/0x46 codes) pick the 0x4A window header color rows, 80170458 shop row render. |
| 8010D894 | - | func_8010D894 | src/battle/gen467.c |  | battle row: 0x7/0x3D/0x3E windows, 0xFE5/0x1701 texts, 0x12E0 gate; loop L10D96C (5A90/53D4). |
| 8010D9D4 | battle_row_linear | - | - |  | battle rows: 3C3C/3B9C/9330/95A0; linear. |
| 8010DA88 | - | func_8010DA88 | src/battle/gen1034.c |  | jr $a0 : the ~73-entry master battle-command jump table (invoked by func_80116720). Each entry calls one battle-command screen then jumps to |
| 8010DF98 | - | func_8010DF98 | src/battle/gen739.c |  | battle rows: 0x1000-0x1004/0x1008 cells, 5574(0xB) gate, 80117DF8 row; loop L10DFA8 on 5958(0x140). |
| 8010E050 | - | func_8010E050 | src/battle/gen1033.c | Y |  |
| 8010E0A8 | - | - | - | Y |  |
| 8010E0D0 | - | func_8010E0D0 | src/battle/gen01511.c | Y |  |
| 8010E100 | - | - | - | Y |  |
| 8010E128 | - | func_8010E128 | src/battle/gen01510.c | Y |  |
| 8010E158 | - | func_8010E158 | src/battle/gen508.c |  | battle rows: 0x7B/0x7A windows, 0x64/0x89 windows, 8010543C/80102770/80172BA8/8011EA5C rows; loop L10E180 on row reads. |
| 8010E278 | - | func_8010E278 | src/battle/gen1271.c | Y |  |
| 8010E2B8 | - | func_8010E2B8 | src/battle/gen1270.c | Y |  |
| 8010E2F8 | - | func_8010E2F8 | src/battle/gen1269.c | Y |  |
| 8010E338 | - | func_8010E338 | src/battle/gen951.c | Y |  |
| 8010E388 | - | func_8010E388 | src/battle/gen387.c |  | battle spell screen: 0xACF-0xAD8 texts, 0xE3/0x89 windows, 80115BCC/80115D2C sub-renders; loop L10E428 (5C64(0x202)) scrolls rows. |
| 8010E58C | - | func_8010E58C | src/battle/gen43.c |  |  |
| 8010E878 | - | func_8010E878 | src/battle/gen655.c |  | battle rows: 0x300-0x303/0x200 cells, 0xFF window, 8010D9D4 rows; loop L10E898 on 5A90(0x200). |
| 8010E98C | - | func_8010E98C | src/battle/gen412.c |  | battle row: 0xAD/0x20 windows, 0x420C text, 8010E0D0/8017559C/ 8010E128/8011EA5C rows; 3 loops (L10E9B4 menu, L10EA2C confirm, L10EA7C secon |
| 8010EB14 | - | func_8010EB14 | src/battle/gen233.c |  | spin on s1 (register) |
| 8010F08C | - | func_8010F08C | src/battle/gen856.c | Y |  |
| 8010F11C | - | func_8010F11C | src/battle/gen01509.c | Y |  |
| 8010F144 | - | func_8010F144 | src/battle/gen602.c | Y |  |
| 8010F1D4 | - | func_8010F1D4 | src/battle/gen654.c | Y |  |
| 8010F254 | - | func_8010F254 | src/battle/gen807.c | Y |  |
| 8010F2F4 | - | func_8010F2F4 | src/battle/gen450.c |  |  |
| 8010F484 | - | func_8010F484 | src/battle/gen806.c | Y |  |
| 8010F4DC | - | func_8010F4DC | src/battle/gen341.c |  | battle spell-cast helper: 0xC7/0x48/0xC/0xE/0xCF windows, 0xACF- 0xAD8 texts, 801105A4/801187C0/8010F484/80116398/8011053C/80115BCC sub-rend |
| 8010F68C | - | func_8010F68C | src/battle/gen68.c |  | battle command-row screen: 0x20/0x24/0x7A/0x22 row windows, 8010543C/80102770 sub-renders, 801105A4 + 80173780 commits; loops until 5574(3)/ |
| 8010F944 | - | func_8010F944 | src/battle/gen379.c |  | battle row info: 0xEF/0xF1/0xF3/0xF5/0x89 windows with 8010FCA8 header; loop L10F9A4 (weights on 5958(0xC0/0x138)) with the 80117F40/80115D2 |
| 8010FAC4 | - | func_8010FAC4 | src/battle/gen950.c |  | battle rows: 0x79/0x92 windows, 80115684/8011581C rows; loop L10FAD4 on 5574(4). |
| 8010FB58 | - | func_8010FB58 | src/battle/gen426.c |  | battle rows (twin of 8010F944): 0xEF/0xF1/0xF3/0xF5/0x89 windows, 8010FCA8/80115D2C/80110474/8011EA5C; loop L10FBB8 (5958(0x140) weights). |
| 8010FCA8 | - | func_8010FCA8 | src/battle/gen683.c | Y |  |
| 8010FD30 | - | func_8010FD30 | src/battle/gen601.c |  | battle rows: 0x89/0x7A windows, 0xAD4/0xAD5/0xAD0/0xAD1 texts, 80115D2C/80110474/8011EA5C rows; loop L10FD60 on 5C64(0x202). |
| 8010FEEC | - | func_8010FEEC | src/battle/gen449.c |  | battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/ 8011EA5C; loops L10FF14 and L10FF8C on 5958(0x20). |
| 80110024 | - | func_80110024 | src/battle/gen778.c | Y |  |
| 801100BC | - | func_801100BC | src/battle/gen448.c |  | battle rows: 0x3B0/0x3B1/0x410/0x411 cells with 3F38(3C3C) pairs, 0x4C/0x4D/0x7A windows; loop L1100CC on 5A90(0x10). |
| 801101E4 | - | func_801101E4 | src/battle/gen411.c |  | battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/ 8011EA5C rows; loops L11020C (row read) and L11029C (7F48 detail). |
| 80110334 | - | func_80110334 | src/battle/gen410.c |  | battle single-row: 0x89/0x7A windows, 0x2100 text, 0xC/0xE/0x91/ 0x8F/0x92 windows, 0x411/0x415 texts, 8011581C/80110474/ 80110024/8011EA5C; |
| 80110474 | - | func_80110474 | src/battle/gen777.c | Y |  |
| 8011050C | - | func_8011050C | src/battle/gen01508.c | Y |  |
| 8011053C | - | func_8011053C | src/battle/gen776.c | Y |  |
| 801105A4 | - | func_801105A4 | src/battle/gen653.c |  | battle rows: 0xC/0xE windows, 0x340-0x343 cells, 800FC0DC row; loop L1105B8 on 5A90(0x18). |
| 80110664 | - | func_80110664 | src/battle/gen466.c |  | battle spell row: 0xCA/0x89 windows, 0x2100/0xAD4/0xAD5 texts, 80115D2C/80110474/8011EA5C; loop L110694 on 5C64(0x202). |
| 801107A0 | - | func_801107A0 | src/battle/gen805.c | Y |  |
| 80110818 | - | func_80110818 | src/battle/gen386.c |  |  |
| 801109A8 | battle_spell_run | - | - | Y | battle spell helper: 0x6C8/0x7A/0x24/0xB9/0x26/0xC8 windows, 80110F2C/80110FA4/80110B08/80173780/80110BC8/8011EA5C rows; loops L1109C8/L110A |
| 80110B08 | - | func_80110B08 | src/battle/gen738.c |  | battle rows: 0x68/0x78 windows, 0x300-0x307 text cells with 0x7A window reads. |
| 80110BC8 | - | func_80110BC8 | src/battle/gen855.c |  | battle rows: 0x7A/0x21 windows, 0xEBB cell via 87DC/6214; loop L110C10 on 5958(0x10). |
| 80110CFC | - | func_80110CFC | src/battle/gen280.c |  | battle spell-cast row: 0x1FC1/0x6C8 texts, 0x26/0xB9/0x7A/0x22/ 0x24 windows, 80110F2C/80110FA4 sub-renders, 80173780 cast body, 80110BC8 ta |
| 80110F2C | - | func_80110F2C | src/battle/gen737.c | Y |  |
| 80110FA4 | - | func_80110FA4 | src/battle/gen1268.c | Y |  |
| 80110FE4 | - | func_80110FE4 | src/battle/gen1032.c | Y |  |
| 8011102C | - | func_8011102C | src/battle/gen854.c | Y |  |
| 8011107C | - | func_8011107C | src/battle/gen911.c | Y |  |
| 801110CC | - | func_801110CC | src/battle/gen804.c | Y |  |
| 80111134 | - | func_80111134 | src/battle/gen1267.c | Y |  |
| 8011117C | - | func_8011117C | src/battle/gen1138.c | Y |  |
| 801111C4 | - | - | - |  |  |
| 8011124C | - | func_8011124C | src/battle/gen217.c |  |  |
| 801115F0 | - | func_801115F0 | src/battle/gen253.c |  | s0 branch |
| 801118CC | - | func_801118CC | src/battle/gen435.c |  | battle rows: 0x81/0x89/0x79 windows, 0x1705/0x340-0x343 texts, 0x300-0x303 cells, 80111B14/80111ADC/8011EA5C rows; loop L111914 on 5C64(0x20 |
| 80111ADC | - | func_80111ADC | src/battle/gen1266.c | Y |  |
| 80111B14 | - | func_80111B14 | src/battle/gen736.c | Y |  |
| 80111BBC | - | func_80111BBC | src/battle/gen735.c | Y |  |
| 80111C2C | - | func_80111C2C | src/battle/gen361.c |  | battle rows: 0xC/0xE windows, 0x2C/0x2E cells, 0x300-0x303 scroll gates; loop L11C54 (3F38(3C3C) + 4008(0x10) row reads), closes via 8011416 |
| 80111DC8 | - | func_80111DC8 | src/battle/gen600.c |  | battle rows: 0x7A/0x79 windows, 0xAAF/0xE1D texts; loop L111E54 on 6D70(0xAAF)+5A90 gates. |
| 80111EF4 | - | func_80111EF4 | src/battle/gen1031.c | Y |  |
| 80111F34 | - | func_80111F34 | src/battle/gen949.c | Y |  |
| 80111F94 | - | func_80111F94 | src/battle/gen1265.c | Y |  |
| 80111FCC | - | func_80111FCC | src/battle/gen465.c |  | shop detail: 0xCA window, 0x172C/0x172E-0x172F/0x1726/0x1706- 0x1707 texts, 8011AB18/80169128/800FD718 rows; 5574(0xFB) gate. |
| 801120F4 | - | func_801120F4 | src/battle/gen682.c |  | battle rows: 0x1700/0x7070/0x300/0x1A03 texts, 800FF024/ 8011EA5C rows; 5574(3) gate. |
| 801121C4 | - | func_801121C4 | src/battle/gen229.c |  | s2 branch (register) |
| 801126A0 | - | func_801126A0 | src/battle/gen308.c |  | battle item-status (twin of 8011285C): 0x1706/0x1700 headers, 0xACF-0xAD8 texts, 80115BCC/80115D2C sub-renders; loop L1127C0 scrolls on 7170 |
| 8011285C | - | func_8011285C | src/battle/gen255.c |  | battle item/status detail: 0xEC window + 0x1800-0x1802 title, 0xFD6/0xAD-series texts, 800FC1CC/800FD6E8/80176060/800FB09C/ 80116398/8016912 |
| 80112A68 | - | func_80112A68 | src/battle/screen_n.c |  |  |
| 801130C0 | - | func_801130C0 | src/battle/gen910.c |  | battle rows: 0x2C window, 0x60 key + 0x2115 gate; loop L113140 on 5958(0x10) with 4x 6C68. |
| 801133B0 | - | func_801133B0 | src/battle/gen775.c |  | battle rows: 0x60/0xAD4/0xAD5 texts, 8011356C row; loop L11340C on 5574(0x10). |
| 8011356C | - | func_8011356C | src/battle/gen397.c | Y |  |
| 80113644 | - | func_80113644 | src/battle/gen1264.c | Y |  |
| 8011368C | - | func_8011368C | src/battle/gen1137.c | Y |  |
| 801136D4 | - | func_801136D4 | src/battle/gen409.c |  | battle status row: 0x79/0x23/0x20 windows, 0xACF-0xAD8 texts, 80119AC8/80115D2C/80115BCC/8011EA5C rows; loops L1136E4 and L11379C. |
| 8011383C | - | func_8011383C | src/battle/gen62.c |  |  |
| 80113C04 | - | func_80113C04 | src/battle/gen948.c | Y |  |
| 80113C54 | - | func_80113C54 | src/battle/gen734.c | Y |  |
| 80113CCC | - | func_80113CCC | src/battle/gen531.c |  | battle rows: 0xAD/0x6FB texts, 0x24/0x8F/0x90/0x91 windows, 80113F3C/8011EA5C rows; loop L113D24 on 5574(0x5F). |
| 80113DCC | - | func_80113DCC | src/battle/gen1175.c | Y |  |
| 80113E04 | - | func_80113E04 | src/battle/gen1174.c | Y |  |
| 80113E3C | - | func_80113E3C | src/battle/gen530.c |  | battle rows (twin of 80113CCC): 0x8F/0x5F/0xAD/0x17C/0x6FB/0x24 windows, 80113F3C/8011EA5C rows; loop L113E84 on 41E8(2). |
| 80113F3C | - | func_80113F3C | src/battle/gen425.c |  | battle rows: 0x20/0x21/0x31/0x24/0x26/0x8F/0x91 windows, 0x6FB/ 0x302/0x303/0x90 cells, 8011416C/80174F0C/801140A4/80113C04/ 80113C54; loop  |
| 801140A4 | - | func_801140A4 | src/battle/gen1030.c |  | battle rows: 800FE634 prep + 0x70/0x22/0x21 window cells. |
| 8011416C | cell_fill_aa | - | - | Y |  |
| 80114194 | - | func_80114194 | src/battle/gen408.c | Y |  |
| 801142FC | - | func_801142FC | src/battle/gen324.c |  | battle skills list: 0x65/0x11D/0x5/0x80/0x89/0xAD windows, 0x1706/0x1707 headers; 801146F0/80114680/801144B4/80114618 rows; 4 loops (L11432C |
| 801144B4 | - | func_801144B4 | src/battle/gen708.c |  | battle rows: 0x4/0xD5/0xC/0xE/0x91/0x8F/0xD/0xF/0x92 windows, 8010543C/80102770/80115A34/8011581C rows; loop L1144F8 on 5A90(0x50). |
| 80114618 | - | func_80114618 | src/battle/gen1029.c | Y |  |
| 80114680 | - | func_80114680 | src/battle/gen982.c | Y |  |
| 801146F0 | - | func_801146F0 | src/battle/gen577.c | Y |  |
| 80114788 | - | func_80114788 | src/battle/gen01507.c | Y |  |
| 801147C0 | - | func_801147C0 | src/battle/gen507.c | Y |  |
| 80114880 | - | func_80114880 | src/battle/gen707.c |  | battle rows: 0x70/0x2C/0x2E/0x89 windows, 80114D18/8011EA5C rows; loop L1148B8 on 5958(0x80/0x100). |
| 80114938 | - | func_80114938 | src/battle/gen288.c |  | battle magic list: 0x2C/0x2E/0x89/0xC/0xE/0xF/0x91/0x92 windows, 0x2100 title, 80114C98/8011581C/80115A34/8011EA5C rows; the L114970 loop po |
| 80114AF0 | - | func_80114AF0 | src/battle/gen396.c | Y |  |
| 80114BC0 | - | func_80114BC0 | src/battle/gen378.c | Y |  |
| 80114C98 | - | func_80114C98 | src/battle/gen652.c | Y |  |
| 80114D18 | - | func_80114D18 | src/battle/gen506.c | Y |  |
| 80114DC8 | - | func_80114DC8 | src/battle/gen681.c |  | battle rows: 0xC0/0x89 windows, 80114FD0/80172BA8/80115080/ 8011511C/80115038/8011EA5C rows; loop L114DE8 on row reads. |
| 80114EBC | - | func_80114EBC | src/battle/gen576.c |  | battle rows: 0xB6/0x89/0x2C/0x2E windows, 80114FD0/80172BA8/ 80115080/8011511C/80115038/8011EA5C rows; loop L114EDC on row reads. |
| 80114FD0 | - | func_80114FD0 | src/battle/gen803.c | Y |  |
| 80115038 | - | func_80115038 | src/battle/gen1263.c | Y |  |
| 80115080 | - | func_80115080 | src/battle/gen947.c |  | battle rows: 0x7A window + 0x1F/0x70 reads, 0x2C/0x2D/0x2E/0x2F windows. |
| 8011511C | - | func_8011511C | src/battle/gen552.c | Y |  |
| 801151BC | - | func_801151BC | src/battle/gen237.c |  |  |
| 80115488 | - | func_80115488 | src/battle/gen505.c |  | battle rows: 0x79/0xF3/0xF5/0xC/0xE windows, 8011581C/ 80115A34 rows; loop L1154A8 on 5574(4). |
| 80115684 | - | func_80115684 | src/battle/gen599.c |  | battle rows: 0xEF/0xF1/0xC/0xE/0x91/0x8F windows, custom 4264(7)/7894/4064(0x144) cells. |
| 8011581C | battle_rows_300 | - | - |  | battle rows: 0x300/0x7A cells, 801714C4 picker; loop L1158A4 on 4248(0xF)/4120(0x202). |
| 80115A34 | battle_item_rows | - | - |  | battle items: 0xAD/0x7A/0xC/0xD/0xE windows, 0x350-0x35B cells, 801714C4 picker; 5574(0x20) gate, 7728(0x101) check; two detail blocks (4120 |
| 80115BCC | battle_row_e5 | - | - |  | battle rows: 0xE5/0xACD/0xACE texts, gates 6434(0x202); loops L115C20 (0xDD4/0xDFC cells) and L115C90 (0xA6D/0x40 reads). |
| 80115D2C | battle_window_24 | - | - |  |  |
| 80116098 | - | func_80116098 | src/battle/gen360.c |  | battle party-status rows: 0xA6D-0xA6F texts, 0x20/0x21/0x24 windows, 0x300-0x303 cells, 0xACD/0xACE texts, 800FC0DC commit; loop L116180 on  |
| 801162F8 | - | func_801162F8 | src/battle/gen853.c | Y |  |
| 80116348 | - | func_80116348 | src/battle/gen01506.c |  |  |
| 80116398 | - | func_80116398 | src/battle/gen909.c | Y |  |
| 801163E8 | - | func_801163E8 | src/battle/gen220.c |  |  |
| 80116720 | menu_screen_tramp | - | - |  | jr $a0 : the ~50-entry main-battle-command jump table. Each entry calls one handler then jumps to return. Handlers: 80119BDC, 80119C24, 8011 |
| 80116DA0 | - | func_80116DA0 | src/battle/optionscall.c |  |  |
| 801172DC | - | func_801172DC | src/battle/gen275.c |  | battle item pick: 5574 key ladders on 53C0/53D4 route the item rows (0x4/0x5/0x6/0x7 windows), 0x1705/0x1709 texts, 0x1804 save row; 8010543 |
| 80117594 | battle_tick_text | - | - | Y |  |
| 801175C4 | - | func_801175C4 | src/battle/gen1066.c | Y |  |
| 80117628 | - | func_80117628 | src/battle/gen01505.c | Y |  |
| 80117660 | - | func_80117660 | src/battle/gen1344.c | Y |  |
| 80117698 | - | - | - |  |  |
| 8011770C | - | func_8011770C | src/battle/gen1262.c | Y |  |
| 80117754 | - | func_80117754 | src/battle/gen01504.c | Y |  |
| 8011777C | - | func_8011777C | src/battle/gen21.c |  |  |
| 80117CB8 | - | func_80117CB8 | src/battle/gen479.c |  | battle rows: 0xE4 window + 0x1100/0x1180/0x10C0 gates, 0xAD6/ 0x1000 texts; loops L117CF8/L117D30 (5958 pacing) and L117D70 (5A90(5) gate wi |
| 80117DF8 | rows_swap44_54 | - | - |  | rows: u16 D44<->D54 swap chain with 5410/6558(0). |
| 80117E64 | - | func_80117E64 | src/battle/gen1172.c | Y |  |
| 80117E9C | - | func_80117E9C | src/battle/gen1171.c |  |  |
| 80117F10 | - | func_80117F10 | src/battle/gen01716.c | Y |  |
| 80117F40 | - | func_80117F40 | src/battle/gen1343.c | Y |  |
| 80117F78 | - | func_80117F78 | src/battle/gen01715.c | Y |  |
| 80117FA8 | - | func_80117FA8 | src/battle/gen337.c |  | battle stat rows: 0xB3/0x3D windows, 0x1000/0x9D5 gates, 0x1001- 0x1008 cells, 8011818C/801183D8/80118244 rows; loop L117FD0 (4008(0x40) row |
| 8011818C | - | func_8011818C | src/battle/gen706.c |  | battle rows: 0x40/0x7/0x3D windows, 0x1140/0x1000 cells; loop L1181F4 on 5DA0(7)/5B8C(0x202). |
| 80118244 | - | func_80118244 | src/battle/gen377.c |  | battle rows: 0x40/0x7/0x3D windows with three 1000/102D/1037/ 103F stat-cell loops (5DA0(7)/5B8C(0x202) latch each), closing via 801183D8. |
| 801183B0 | - | func_801183B0 | src/battle/gen01714.c | Y |  |
| 801183D8 | - | func_801183D8 | src/battle/gen1342.c |  |  |
| 80118428 | - | func_80118428 | src/battle/gen619.c |  | battle rows: 0x7/0x3D windows, 0x1030/0x1032 texts, 80150A30 row; loop L11849C on 5DA0(7)/5B8C(0x202). |
| 80118534 | - | func_80118534 | src/battle/gen301.c |  | battle row pick: 0xB3/0x3D/0x3E/0x40/0x7 windows, 0x1000/ 0x1140/0x1143-0x1146/0x9D5 gates, 8011EA5C closes; loops L11855C (5A90(0x140)) and |
| 80118750 | - | func_80118750 | src/battle/gen1170.c | Y |  |
| 801187C0 | - | func_801187C0 | src/battle/gen351.c |  | battle rows: 0x6/0x83/0x82/0x79/0x81 windows, 0x2130/0x212D texts, 8017EA90 icon; loop L118860 polls 4120(0x202) and 54D4(3C3C(0x81)). |
| 80118938 | - | func_80118938 | src/battle/gen529.c |  | battle rows: 0x79/0x83/0x82/0x81 windows, 0x212D/0xFE4/0x2130/ 0x2131 texts, 8017EA90 icon; loops L118948 on 4120(0x202)/ 5B8C. |
| 80118A40 | - | func_80118A40 | src/battle/gen908.c | Y |  |
| 80118AA8 | - | func_80118AA8 | src/battle/gen774.c |  | battle rows: 0x9D5 text, 0x18/0x1560 window/cell, 80117594 + 8011EA5C rows; loop L118B30 on 6D70(0x1560)/6434(2). |
| 80118B80 | - | func_80118B80 | src/battle/gen376.c |  | battle stat row: 0x1003 gate, 0x18-0x1B windows, 0x30 window cells, 80174F0C/80117DF8/8011EA5C; loops L118BE0 (H16: 6BE0 (0x1007)/5520 rows) |
| 80118D20 | - | func_80118D20 | src/battle/gen375.c |  | battle stat row (twin): 0x100B gate, 0x100F/0x1011 cells, 80174F0C/80117DF8/8011EA5C; loops L118D80/L118E48. |
| 80118EC0 | - | func_80118EC0 | src/battle/gen01713.c | Y |  |
| 80118EF8 | - | func_80118EF8 | src/battle/gen650.c |  | battle rows: 0x6/0x1440/0x1441/0x1033/0x1034 texts/windows; loops L118F18 (5A90/53D4) and L118F78 (54D4(3C3C(6)) gates). |
| 80119020 | - | func_80119020 | src/battle/gen907.c |  | battle rows: 0x6/0x1003 cells, 80117DF8 row; loop L119040 on 5958(0x140). |
| 801190A8 | - | func_801190A8 | src/battle/gen01503.c |  |  |
| 80119128 | - | func_80119128 | src/battle/gen906.c |  | battle rows (twin with 78C4): 0x6/0x1003 cells, 80117DF8 row; loop L119148 on 5958(0x140). |
| 801191B0 | - | func_801191B0 | src/battle/gen1136.c | Y |  |
| 80119210 | - | func_80119210 | src/battle/gen528.c |  | battle rows: 0x18-0x1B windows, 0x16A0-0x16A2 texts, 80174F0C row; 53C0 gate closes 0x16A0-0x16A2 fills. |
| 801192F8 | - | func_801192F8 | src/battle/gen680.c |  | battle rows: 0x6/0x1000 gate, 54D4(3C3C(6)) latch; loop L119320 ends with 0xCC window + 0x1703 text. |
| 801193F8 | - | func_801193F8 | src/battle/gen385.c |  | battle store/equip screen: 0x8F8-0x8FA texts, 0x1A/0xB2/0x30/0x31/ 0x32 windows; 801082C8/80107C98(row family)/801196F8/80174CE4/ 801196B0 p |
| 801196B0 | - | func_801196B0 | src/battle/gen1027.c | Y |  |
| 801196F8 | - | func_801196F8 | src/battle/gen1026.c | Y |  |
| 80119740 | - | func_80119740 | src/battle/gen478.c | Y | battle rows: 0x89/0x8A windows with 4F28/7A40 pairs, 0x1700 text gate (800FF024 vs 80170C14/8010B010); loop L1197D8 on 5C64(0x202). |
| 80119860 | - | func_80119860 | src/battle/gen1135.c |  | battle rows: 0xB2 window, 80108330/80107C98/80105DB4/ 80107F3C/80109A28 rows, 0x9D5 text; 6434(2) gate via 801175C4/8011EA5C. |
| 801198F0 | - | func_801198F0 | src/battle/gen492.c |  | battle buy detail: 0xB3 window, 0x8FB/0x9D5 texts; 80106370 + 80109A28 preps, 801082C8/80107C98/80107F3C item rows; loops L119A00 on 54D4(3B |
| 80119A98 | - | func_80119A98 | src/battle/gen1261.c | Y |  |
| 80119AC8 | - | func_80119AC8 | src/battle/gen852.c |  | battle rows: 8010D9D4 prep; gates 5574(0x80); 0x5C/0x5D/0x60/ 0x61 window rows. |
| 80119BDC | - | func_80119BDC | src/battle/gen01712.c |  |  |
| 80119C24 | - | func_80119C24 | src/battle/gen851.c | Y |  |
| 80119C7C | - | func_80119C7C | src/battle/gen01711.c |  | event: v0 spin loop L119CEC; 8017F5C0 tail. |
| 80119D48 | - | func_80119D48 | src/battle/gen905.c |  | battle rows: 0x2106 text; loop L119D58 on 5574(0x40). |
| 80119DE4 | - | func_80119DE4 | src/battle/gen904.c | Y | shop buy: 0x1700 gate picks 80103790/801038D4; then 79/7A/7B windows + 0x81/0x4200 titles via 8011EA5C. |
| 80119E7C | - | func_80119E7C | src/battle/gen58.c |  |  |
| 8011A204 | - | func_8011A204 | src/battle/gen323.c | Y |  |
| 8011A334 | - | func_8011A334 | src/battle/gen322.c |  | shop buy-list: 0xE2 window gate, 0x2115 title, then 8 name/price rows (7210 A17/A27 + 7210() pairs with A19/A29 texts). |
| 8011A690 | - | func_8011A690 | src/battle/tailcmd.c |  |  |
| 8011AB18 | - | func_8011AB18 | src/battle/gen491.c |  | shop main: 0xCA window + 0x1700 gate picks the buy (800FEC74/ 800FD914/800FB09C/800FB160/800FB224/800FAA04) sub-rows; tail via 8017F9A8/800F |
| 8011AC64 | - | func_8011AC64 | src/battle/gen01710.c | Y |  |
| 8011ACAC | - | - | - |  |  |
| 8011AD14 | - | func_8011AD14 | src/battle/gen01709.c | Y |  |
| 8011AD5C | - | func_8011AD5C | src/battle/gen01708.c | Y |  |
| 8011ADA4 | - | func_8011ADA4 | src/battle/gen01707.c | Y |  |
| 8011ADEC | - | - | - | Y |  |
| 8011AE1C | - | - | - | Y |  |
| 8011AE4C | - | - | - | Y |  |
| 8011AE7C | - | - | - | Y |  |
| 8011AEAC | - | func_8011AEAC | src/battle/gen67.c |  | battle item-select (right-side variant): 62/61 label window, 64/65 slot rows, BE/BF select rows; 8011B6B4 row draw, 801163E8 use. |
| 8011B158 | - | func_8011B158 | src/battle/gen252.c |  | battle item-selection flow: 62/61 label window, 64/65 + BC/BD item slot rows, AB result rows. 8011B6B4/8011B448 draw the row halves; 801163E |
| 8011B448 | - | func_8011B448 | src/battle/gen802.c | Y |  |
| 8011B4A4 | - | func_8011B4A4 | src/battle/gen981.c | Y |  |
| 8011B51C | - | func_8011B51C | src/battle/gen980.c | Y |  |
| 8011B594 | - | func_8011B594 | src/battle/gen979.c |  | battle rows: 8011B744 prep; loop L11B5AC on 5A90/53D4; closes with 0x3D/0x1280 reads. |
| 8011B61C | - | func_8011B61C | src/battle/gen978.c |  | battle rows (twin with 3B9C/4832): 8011B7B4 prep; loop L11B634 on 5A90/53D4. |
| 8011B6B4 | - | func_8011B6B4 | src/battle/gen850.c |  | battle rows: 8011B744 prep + 0x3D/0x1280 cells; loop L11B6DC on 5A90/53D4. |
| 8011B744 | - | func_8011B744 | src/battle/gen01706.c |  |  |
| 8011B7B4 | - | func_8011B7B4 | src/battle/gen801.c |  | battle rows: 0x3D/0x3E windows, 0xFE5/0x1701 texts; gates 6434(0x80/2) route the 4008(0x20) reads. |
| 8011B874 | - | func_8011B874 | src/battle/gen25.c |  |  |
| 8011BCD8 | - | func_8011BCD8 | src/battle/gen618.c | Y |  |
| 8011BD88 | - | func_8011BD88 | src/battle/gen24.c |  |  |
| 8011C1F8 | - | func_8011C1F8 | src/battle/gen551.c | Y |  |
| 8011C27C | - | func_8011C27C | src/battle/gen946.c | Y |  |
| 8011C2C8 | - | func_8011C2C8 | src/battle/screen_v.c |  |  |
| 8011C768 | - | func_8011C768 | src/battle/screen_t.c |  |  |
| 8011CC98 | - | func_8011CC98 | src/battle/gen550.c |  | shop rows: 0x3D/0x18/0x19 windows, 5024 cells + ADB/B1B texts; loop L11CCAC on 5A90(0x40). |
| 8011CE18 | - | func_8011CE18 | src/battle/gen246.c |  |  |
| 8011D068 | - | func_8011D068 | src/battle/gen232.c |  | shop item-cell pair: 0x99/0x44/0x9A windows with 76BC/7CC8 pair draws; then the 0x43/0x9A detail gate (4278/4120) with the 76BC (0x9A) + 7CC |
| 8011D218 | - | func_8011D218 | src/battle/gen08.c |  |  |
| 8011D658 | - | func_8011D658 | src/battle/gen45.c |  |  |
| 8011D8E0 | - | func_8011D8E0 | src/battle/gen374.c | Y |  |
| 8011D9F0 | - | func_8011D9F0 | src/battle/gen575.c | Y |  |
| 8011DA88 | - | func_8011DA88 | src/battle/gen350.c | Y | shop sale rows: 0xAB/0x99/0x95/0x9B/0x9D/0x9F windows, 0x2115/ 0x4300/0x2116/0x4302/0x4305/0xADB/0xB1B texts; 4120(0x202)/ 6434(0x202) gates |
| 8011DBF0 | - | func_8011DBF0 | src/battle/gen50.c | Y |  |
| 8011DE40 | - | func_8011DE40 | src/battle/gen424.c |  | shop sale confirm: 0xAB/0x6FA/0x70A texts, 0x3D/0x93/0x3E/0x44 windows, 8011DFE4/8017583C/8011E16C/8011E318 rows; 4120(0x202)/ 6434(0x202) g |
| 8011DFE4 | - | func_8011DFE4 | src/battle/gen1065.c |  | battle: 3C3C/3B9C gates; a1/v0 latch loops L11E044/L11E068. |
| 8011E16C | - | func_8011E16C | src/battle/gen423.c |  | battle verdict (twin of 8011E318): 3D/3E/40 rows with 885C fills, 6434(2) exit gate; loops L11E1B0 and L11E214. |
| 8011E318 | - | func_8011E318 | src/battle/gen315.c |  | battle verdict driver: 3D/3E/40 rows with 885C color fills, 6434(0x202) gate; loops L11E35C (885C/5C64), L11E3C0 (key spin), L11E4D4 (fill t |
| 8011E534 | - | func_8011E534 | src/battle/gen07.c |  |  |
| 8011E9EC | - | func_8011E9EC | src/battle/gen01502.c | Y |  |
| 8011EA14 | - | func_8011EA14 | src/battle/gen01501.c | Y |  |
| 8011EA3C | - | func_8011EA3C | src/battle/gen01500.c | Y |  |
| 8011EA5C | battle_wndfx_run | - | - | Y |  |
| 8011EA7C | - | - | - | Y |  |
| 8011EA9C | - | - | - | Y |  |
| 8011EABC | - | - | - | Y |  |
| 8011EADC | - | - | - | Y |  |
| 8011EAFC | - | - | - | Y |  |
| 8011EB1C | - | - | - | Y |  |
| 8011EB3C | - | - | - | Y |  |
| 8011EB5C | - | - | - | Y |  |
| 8011EB7C | - | - | - | Y |  |
| 8011EB9C | - | - | - | Y |  |
| 8011EBBC | - | func_8011EBBC | src/battle/gen549.c | Y |  |
| 8011EC44 | - | func_8011EC44 | src/battle/gen1341.c |  | ability wrapper: 8016EA9C/80123D3C/8017F8F8x3 in the L11ECD0 loop with 801225C0/80126610/80122114; 0x1A65 text; v1/v0 latch back to L11EC58. |
| 8011EDA4 | - | func_8011EDA4 | src/battle/gen903.c | Y |  |
| 8011EDF4 | - | func_8011EDF4 | src/battle/gen1025.c | Y |  |
| 8011EE34 | - | func_8011EE34 | src/battle/gen340.c | Y |  |
| 8011EF0C | battle_state_dc400 | - | - | Y |  |
| 8011EF30 | battle_rows_sync | - | - |  | battle rows: 3C3C/939C/926C/9448 x2 + 8011F030 + 960C. |
| 8011F030 | - | func_8011F030 | src/battle/gen679.c |  | column rows: 0x29/0x2B/0x31/0x33 windows, 0xF7/0xFC codes, 8011F118/8011F210 rows; loop L11F0D8 on 5DA0(0x32). |
| 8011F118 | - | func_8011F118 | src/battle/gen477.c |  | column cells: 0x30/0x2F/0x2D/0x31 windows, 80122334 row; loop L11F178 on 5DA0(0x31)/5B8C(0x202). |
| 8011F210 | - | func_8011F210 | src/battle/gen490.c |  | column cells: 0x30/0x2F/0x2D/0x31 windows, 0xFA/0xFB codes; loop L11F270 on 5DA0(0x31)/5B8C(0x202). |
| 8011F300 | - | - | - | Y |  |
| 8011F320 | midrow_pad88 | - | - | Y |  |
| 8011F360 | - | func_8011F360 | src/battle/gen849.c | Y | rows: 0x45 window; loop L11F370 on 5480/53C0; closes via 6434(0x202)/4008(0x80) gates. |
| 8011F3F8 | - | func_8011F3F8 | src/battle/gen270.c |  | shared scroll-column: 0x5A window, 0x3E8/0x4200 gates, 0x15B/0x15D texts, 0x5E window cells; L11F430 wait loop, then the 8011F67C icon rows, |
| 8011F67C | - | - | - | Y |  |
| 8011F684 | midrow_pad88_run | - | - | Y |  |
| 8011F6A4 | anim_noop | - | - | Y |  |
| 8011F6AC | - | func_8011F6AC | src/battle/gen01498.c | Y |  |
| 8011F6D4 | - | func_8011F6D4 | src/battle/gen01497.c | Y |  |
| 8011F6FC | - | func_8011F6FC | src/battle/gen01496.c | Y |  |
| 8011F724 | row_latch_7e | - | - |  |  |
| 8011F7D4 | - | func_8011F7D4 | src/battle/gen733.c | Y |  |
| 8011F844 | - | - | - | Y |  |
| 8011F864 | - | - | - | Y |  |
| 8011F884 | midrow_degen | - | - |  |  |
| 8011F8D4 | - | func_8011F8D4 | src/battle/gen773.c |  | rows: 0x100/0x29 windows, 8011FD34 close; 3F94(3C3C(0x29)) + 926C/9298/9330 preps. |
| 8011F9C4 | row_prep2_close | - | - |  | config confirm: 0x29 window, 801245B4 + 885C cell rows; loops L11FA70 (6434(2) gate) and L11FAFC (3F94(3C3C(0x29)) refresh). |
| 8011FB74 | - | - | - | Y |  |
| 8011FBA4 | battle_rows_29 | - | - |  | rows: 0x29/0x100 windows, 8011FD34 close; 3F94(3C3C(0x29)) + 926C/9298/9330 preps. |
| 8011FD34 | - | func_8011FD34 | src/battle/gen732.c |  | config dialog: 6434(2)/5574(1) gates; 801245B4 + 885C/3D48 cell rows; loops L11FD3C (regcmp latch) and L11FE24 (3F94(3C3C(0x29)) refresh). |
| 8011FF40 | - | func_8011FF40 | src/battle/gen1023.c | Y |  |
| 8011FF80 | - | func_8011FF80 | src/battle/gen847.c |  | ability gates: v1/v0 branches route 801360AC / 801360EC+ 80136148 / 8011F320+8011F884+78C4 rows; the 7918(2) read loops back to L11FF9C. |
| 80120070 | - | func_80120070 | src/config/gen800.c |  | open-depth guard in the menu-region byte buffer |
| 801206DC | - | func_801206DC | src/config/gen945.c |  | rows: 8011F360 prep, 0x29/0x1D/0x1E window cells; linear. |
| 80120774 | - | func_80120774 | src/config/gen574.c |  | rows: 0x29 window cells, 0x5A/0x5B/0x5D/0x5E windows, 8011F3F8 row; ends on 0x95A0+8960 writes. |
| 801208C8 | - | func_801208C8 | src/config/gen649.c |  | rows: 0x29 window cells, 0x5A-0x5E windows with 8960 writes, 8011F3F8 row. |
| 80120A0C | - | func_80120A0C | src/config/gen527.c |  | shop row: 0x29/0x45 windows, 0x41/0x1500 texts, 801245B4 row; loop L120AFC on 5DA0(0x45)/5B8C(0x202). |
| 80120B6C | - | func_80120B6C | src/config/gen731.c | Y |  |
| 80120BDC | - | func_80120BDC | src/config/gen772.c |  | battle rows: 8011F320/8011EE34/8013B764/8013B7B8 rows, 0x45 window; loop L120BE4 on 5DA0(0x45)/5B8C(0x202). |
| 80120CA4 | - | func_80120CA4 | src/config/gen307.c | Y |  |
| 80120DB4 | - | func_80120DB4 | src/config/gen902.c | Y |  |
| 80120E2C | midrow_paint_b | - | - | Y |  |
| 80120E9C | - | func_80120E9C | src/config/gen846.c | Y |  |
| 80120F1C | config_row_d600b | - | - | Y |  |
| 80120F94 | - | - | - | Y |  |
| 80120FBC | - | func_80120FBC | src/config/gen596.c | Y |  |
| 8012102C | - | func_8012102C | src/config/gen573.c | Y |  |
| 801210AC | midrow_paint_a | - | - | Y |  |
| 80121124 | - | func_80121124 | src/config/gen251.c |  | v0/s0 branch |
| 80121678 | - | func_80121678 | src/config/gen489.c |  | battle row: 6A78(0xA2)/6434 gate routes the 6AF4(0xA1) stat cells (0x1D/0x89/0x8B windows); 53C0 check. |
| 801217EC | - | func_801217EC | src/config/gen678.c |  | battle rows: 0x64/0x65/0x63/0x1D windows, 0xF7-0xF9 codes, 80121E6C/80121F64/80121C0C rows; 53C0 gate + loop L121894 on 5DA0/5B8C(0x202). |
| 801218EC | - | func_801218EC | src/config/gen677.c |  | battle rows (twin variant): 0x66/0x65/0x63/0x1D windows, 80121E94/80121D64/80121CE4 rows. |
| 801219EC | - | func_801219EC | src/config/gen771.c | Y |  |
| 80121A74 | - | - | - | Y |  |
| 80121A9C | - | func_80121A9C | src/config/gen1022.c | Y |  |
| 80121B04 | - | func_80121B04 | src/config/gen944.c | Y |  |
| 80121B5C | - | func_80121B5C | src/config/gen770.c | Y |  |
| 80121BE4 | - | - | - | Y |  |
| 80121C0C | - | func_80121C0C | src/config/gen1064.c | Y |  |
| 80121C4C | - | func_80121C4C | src/config/gen943.c |  | rows: 0x43/0x29 windows with 3F94(3C3C) reads; linear. |
| 80121CE4 | - | func_80121CE4 | src/config/gen1063.c | Y |  |
| 80121D24 | - | func_80121D24 | src/config/gen1062.c | Y |  |
| 80121D64 | - | - | - | Y |  |
| 80121D8C | - | func_80121D8C | src/config/gen01705.c |  |  |
| 80121E0C | - | func_80121E0C | src/config/gen1169.c |  |  |
| 80121E6C | - | - | - | Y |  |
| 80121E94 | - | - | - | Y |  |
| 80121EBC | - | func_80121EBC | src/config/gen1061.c | Y |  |
| 80121F14 | - | func_80121F14 | src/config/gen1339.c |  |  |
| 80121F64 | - | - | - | Y |  |
| 80121F8C | - | func_80121F8C | src/config/gen1021.c | Y |  |
| 80121FDC | - | func_80121FDC | src/config/gen1020.c | Y |  |
| 8012202C | - | - | - | Y |  |
| 80122054 | - | func_80122054 | src/config/gen1133.c | Y |  |
| 801220A4 | - | func_801220A4 | src/config/gen1019.c | Y |  |
| 801220EC | - | - | - | Y |  |
| 80122114 | - | func_80122114 | src/config/gen01495.c | Y |  |
| 8012214C | - | - | - | Y |  |
| 8012216C | - | func_8012216C | src/config/gen01494.c | Y |  |
| 8012219C | - | func_8012219C | src/config/gen01493.c | Y |  |
| 801221C4 | - | func_801221C4 | src/config/gen01704.c | Y |  |
| 801221EC | config_row_221ec | - | - | Y |  |
| 8012224C | - | func_8012224C | src/config/gen1060.c | Y |  |
| 801222A4 | - | - | - | Y |  |
| 801222C4 | - | func_801222C4 | src/config/gen1132.c |  | rows: u16 D44<->D54 swap with 922C prep + 9410 close. |
| 80122334 | - | func_80122334 | src/config/gen1131.c |  | rows: u16 D44<->D58 swap with 922C prep + 9410 close. |
| 801223A4 | - | func_801223A4 | src/config/gen901.c |  | rows: 0x29 window, 885C/63BC fills; loop L12244C on 6434(2). |
| 801224D0 | battle_put43 | - | - | Y |  |
| 801224F8 | - | - | - |  |  |
| 80122518 | - | - | - |  |  |
| 80122538 | - | - | - |  |  |
| 801225C0 | - | func_801225C0 | src/config/gen300.c |  | config confirm screen: 0x7E window, 0x1A03/0x16B7/0x1A76/0x1A77 texts; 80123CB4 + 801386C8 preps; loops at L122620 with the 8012B168/8012007 |
| 8012281C | - | - | - | Y |  |
| 80122844 | - | - | - |  |  |
| 801228B4 | - | - | - |  |  |
| 80122904 | - | func_80122904 | src/config/gen01492.c | Y |  |
| 80122934 | - | func_80122934 | src/config/gen01491.c | Y |  |
| 80122964 | - | func_80122964 | src/config/gen01490.c | Y |  |
| 80122994 | - | func_80122994 | src/config/gen01489.c | Y |  |
| 801229C4 | - | func_801229C4 | src/config/gen1259.c | Y |  |
| 801229F4 | - | func_801229F4 | src/config/gen1258.c | Y |  |
| 80122A24 | - | func_80122A24 | src/config/gen942.c | Y |  |
| 80122A9C | - | func_80122A9C | src/config/gen900.c |  | config rows: 8012281C/80120E2C/8011EF30/80120F1C/8011FB74 rows, 0x1A02 text, 0x24 window; gate 6434(0x202). |
| 80122B54 | - | func_80122B54 | src/config/gen422.c |  | row picker: 0x60/0x61 windows, 0x45/0x43 windows, 0x16A8 text, 6434(2)/4120 gates; 6D70/4248(0x3F) detail. |
| 80122CF0 | - | func_80122CF0 | src/config/gen01703.c | Y |  |
| 80122D20 | equip_cells_render | - | - |  | equip sub-cell renderer (called by the 80130C74/80130F90 family): 0x48/0x4B/0x4D/0x4F/0x46/0x57/0x49/0x51/0x4A/0x4E/0x4C/0xC7 stat cells thr |
| 80122F2C | - | func_80122F2C | src/config/gen648.c |  | rows with 6764/8768 writes on 0x5A-0x5E windows, 8011F3F8 row; 0x45/0x48 cells. |
| 80122FF4 | - | func_80122FF4 | src/config/gen49.c |  |  |
| 80123320 | - | func_80123320 | src/config/gen225.c |  |  |
| 8012371C | - | func_8012371C | src/config/gen595.c | Y |  |
| 801237A8 | - | func_801237A8 | src/config/gen730.c |  | rows: 0x16A4/0x73/0x16A5/0x74 texts/windows, 80123958 (x2) + 80123908/8011F360/80123878 rows; 53C0 gate. |
| 80123878 | - | func_80123878 | src/config/gen571.c | Y |  |
| 80123908 | - | func_80123908 | src/config/gen1338.c |  |  |
| 80123958 | - | func_80123958 | src/config/gen421.c | Y | rows: 0x1D window, 0x73-0x75 windows with 7A40/7A68 triples; loop L1239B8 (5E48/5C64) with 5574(0x3C) gate. |
| 80123A70 | - | - | - | Y |  |
| 80123AA8 | - | - | - |  |  |
| 80123B00 | - | func_80123B00 | src/config/gen395.c | Y |  |
| 80123BD8 | shop_rows_37 | - | - |  | shop rows: 0x37/0x29/0x45 windows, 801222C4 row; loop L123C54 on 5DA0(0x37)/5B8C(0x202). |
| 80123CB4 | - | func_80123CB4 | src/config/gen548.c | Y |  |
| 80123D3C | - | func_80123D3C | src/config/gen61.c |  |  |
| 80123FB4 | - | - | - | Y |  |
| 80123FEC | - | func_80123FEC | src/config/gen1337.c | Y |  |
| 80124024 | - | func_80124024 | src/config/gen1336.c |  | battle rows: 3C3C(0x73)/3A70/3B04. |
| 801240A8 | - | func_801240A8 | src/config/gen01702.c | Y |  |
| 801240D0 | - | func_801240D0 | src/config/gen01488.c | Y |  |
| 801240F8 | - | func_801240F8 | src/config/gen1335.c | Y |  |
| 80124130 | - | func_80124130 | src/config/gen01701.c | Y |  |
| 80124158 | - | func_80124158 | src/config/gen01700.c | Y |  |
| 80124180 | - | func_80124180 | src/config/gen1334.c | Y |  |
| 801241B8 | midrow_paint_c | - | - |  | rows: 0x300/0x302/0x500 cells via 88E4(768/12288/770/1280); loops L1241D8/L124238 on 5C64(0x202). |
| 80124298 | - | func_80124298 | src/config/gen647.c |  | rows: 0xE4 window, 80124EAC cursor, 0x1A67/0x1A68 texts, 80124358 row; loop L1242A8 on 5574(5). |
| 80124358 | - | func_80124358 | src/config/gen336.c |  | equip/status row: 0x5A/0x5C/0x5B window + 0x22/0x42/0x45 cells, 801224D0/8011F320/8011EE34/801813C0 rows; loop L124530 (5DA0(0x45)/5B8C(0x20 |
| 801245B4 | - | func_801245B4 | src/config/gen646.c |  | rows: 5574(0x42) gate fills via 3D48/95A0; else 0xFF/95A0. |
| 8012468C | - | func_8012468C | src/config/gen01487.c |  |  |
| 80124704 | - | func_80124704 | src/config/gen17.c |  |  |
| 80124B74 | - | func_80124B74 | src/config/gen594.c |  | shop rows: 0x73/0x75 windows, 0x163 text, 0x1D window, 80124C64 row; loops L124B9C (5958(7)) and L124BCC (78C4 cells). |
| 80124C64 | - | func_80124C64 | src/config/gen01699.c |  | rows: 3C3C with v0 gates; returns at L124CD0. |
| 80124D08 | - | func_80124D08 | src/config/gen704.c |  | rows: 0x163 text, 0x41/0x29 windows, 80124B74 row; loop L124D70 on 6B68(0x163)/5958(7). |
| 80124DC8 | - | func_80124DC8 | src/config/gen617.c |  | rows: 0x29/0x45/0x46 windows, 8012371C row; 3F94(3C3C(0x29)) + 3F38(3C3C(0x45)) reads. |
| 80124EAC | cell_cur_save54_b | - | - |  |  |
| 80124F28 | - | func_80124F28 | src/config/gen1130.c | Y |  |
| 80124F60 | - | func_80124F60 | src/config/gen321.c |  | equip cell: 0x43/0x29/0x41 rows, 0xDB/0x34/0x45 windows, 801245B4 in the L125068 loop; 78C4(3C3C(0x34)) cells, 5DA0(0x45)/5B8C latch. |
| 80125100 | - | func_80125100 | src/config/gen01486.c | Y |  |
| 80125130 | config_row_1d | - | - |  |  |
| 80125528 | - | func_80125528 | src/config/gen977.c |  | rows: 0x1D/0x29 windows, 801255E8 close; 4064(0x340) reads. |
| 801255C0 | - | func_801255C0 | src/config/gen01698.c | Y |  |
| 801255E8 | - | func_801255E8 | src/config/gen570.c | Y |  |
| 80125670 | - | func_80125670 | src/config/gen569.c |  | status row: 0x1A71 text, 0x45/0x41 windows; loop L1256A8 on 5DD4(0x45)/5C64(0x202). |
| 801257BC | - | func_801257BC | src/config/gen488.c |  | status row: 0x16A8/0x1A71/0x1A73 texts, 0x45/0x41 windows, 801224D0 cursor; loop L125810 on 5DD4(0x45)/5C64(0x202). |
| 80125934 | - | func_80125934 | src/config/gen434.c |  | sub-menu: 0x1A73/0x1A75 texts, 80125130 row; loop L1259C4 (6DE8/8274(0x1D)/8274(2) cells) on 5C64(0x202). |
| 80125A64 | - | func_80125A64 | src/config/gen1017.c | Y |  |
| 80125ACC | - | func_80125ACC | src/config/gen71.c |  | config/equip-form confirm: 0x45/0x46/0x43/0x15 windows, 0x1BC0/ 0x1BBF texts; 8012D204 gate; L125B14 renders the 1/3 option rows (801224D0 + |
| 80125DF8 | - | func_80125DF8 | src/config/gen799.c |  | rows: 0x145 text; loops L125E28 (6D70/5C64) and L125EAC (63BC/5C64) with the 5D24(0x145)/5B8C latch. |
| 80125F38 | - | func_80125F38 | src/config/gen568.c |  | shop rows: 0x45/0x46 windows, 0x1/0x43 texts, 8012D204 gate; renders the 0x45 rows with 4064/3454 values. |
| 80126070 | - | func_80126070 | src/config/gen249.c |  |  |
| 80126330 | - | - | - | Y |  |
| 80126368 | - | func_80126368 | src/config/gen1016.c | Y |  |
| 801263C8 | - | - | - | Y |  |
| 801263F0 | - | - | - | Y |  |
| 80126418 | - | func_80126418 | src/config/gen1257.c | Y |  |
| 80126458 | - | - | - | Y |  |
| 80126480 | - | func_80126480 | src/config/gen1256.c | Y |  |
| 801264C0 | - | - | - | Y |  |
| 801264E8 | config_row_7800 | - | - | Y |  |
| 80126528 | config_row_26528 | - | - | Y |  |
| 80126550 | - | func_80126550 | src/config/gen1254.c | Y |  |
| 80126590 | - | func_80126590 | src/config/gen01485.c |  |  |
| 80126610 | battle_row_88 | - | - |  | rows: 0x88 window, 0x2100 text, 8011F320/8011F844 rows; 6434(0x80) gate; loop L126618 on 5B8C. |
| 801266A0 | - | - | - | Y |  |
| 801266C8 | - | - | - | Y |  |
| 801266F0 | - | func_801266F0 | src/config/gen729.c |  | rows: 0x100/0x1C/0x41 windows, 86F0(0x89) cell; loop L126740 on 5C64(0x202). |
| 801267A0 | - | func_801267A0 | src/config/gen845.c | Y |  |
| 801267E8 | - | func_801267E8 | src/config/gen844.c | Y |  |
| 80126830 | - | func_80126830 | src/config/gen1129.c | Y |  |
| 80126878 | - | func_80126878 | src/config/gen1128.c | Y |  |
| 801268C0 | - | func_801268C0 | src/config/gen01697.c |  |  |
| 80126920 | - | func_80126920 | src/config/gen01484.c |  |  |
| 80126990 | - | func_80126990 | src/config/gen258.c |  | equip window cells: 0xD2/0xBE gates with the 0x59/0xB9/0xBA rows (3F38(3C3C) / 7F48(3C3C) value cells), 0xC0/0xBF/0xBB/0xBC bottom row, and  |
| 80126B88 | - | func_80126B88 | src/config/gen1253.c | Y |  |
| 80126BB8 | - | func_80126BB8 | src/config/gen616.c |  | ability main: 1B9A text gate + 1BE4/1A5F/1A3C rows; calls 80126E08 (sub-dispatcher); loop L126BE4 on 6EA9C/56AC(!=0) with 80128480/80128B3C/ |
| 80126D48 | - | func_80126D48 | src/config/gen645.c |  | rows: 0x48 window, 80132178 row; loop L126D58 (4120(0x202) gate), closes on 0xE7/0x1B3E/0x1B2A texts. |
| 80126E08 | - | func_80126E08 | src/config/gen675.c |  | ability/status screen. s0 = cursor; v0/s0 regcmp gates route the cursor-row recompute (L26FB4 vs L27048); the v1/v0 latch at L2712C loops ba |
| 80127168 | - | func_80127168 | src/config/gen283.c |  | ability-move sub-screen: 1A3C/1B47 texts, two browse loops (L127294 equip, L127354 detail) with 801282D4 row-commit; exits via 80136148 or t |
| 80127408 | - | func_80127408 | src/config/gen504.c |  | status: 8012214C header + 65F0/81B0(!=) cells + 4 x 801287B8 blocks, then the 0x34 window save row (801210AC/8011EF30/ 8011EF0C); closes wit |
| 80127538 | - | func_80127538 | src/config/gen420.c |  | status rows: 0x73/0x74 windows, 0xA/0xC/0x5A/0x5B/0x5D/0x5E cells, 80123958/8011F360/8011F3F8 rows. |
| 80127668 | - | func_80127668 | src/config/gen843.c |  | rows: 0x46/0x45 windows, 0x1000/0x7FF/0x7000 values, 80135B54 close; gate 5B8C(0x80). |
| 80127718 | - | func_80127718 | src/config/gen476.c | Y |  |
| 80127808 | - | func_80127808 | src/config/gen83.c |  | s2 branch |
| 80127C70 | - | func_80127C70 | src/config/gen394.c |  | ability/status details screen: 80126610..80136014 header chain, 0x1BE4/0x17FE stat block, 0x1B47/0x1B46 detail rows with the s2/6434(2) gate |
| 80127F2C | status_panel_install_labels | - | - |  | menu text-grid: clears 4 slots, then installs the panel label recipe for panel geometry 7 or 8. |
| 8012807C | - | func_8012807C | src/config/gen842.c | Y |  |
| 801280D4 | - | func_801280D4 | src/config/gen526.c |  | status row: 0x30/0xC1/0x1D/0x1E/0x1A3C/0x5A windows, 8012807C/801241B8/801224D0/80125130 rows; loop L1281AC on 5DA0(0x5A)/5B8C(0x202). |
| 8012821C | - | func_8012821C | src/config/gen1168.c | Y |  |
| 80128264 | - | func_80128264 | src/config/gen674.c | Y |  |
| 801282D4 | - | func_801282D4 | src/config/gen1127.c |  |  |
| 8012833C | - | func_8012833C | src/config/gen593.c |  | shop rows: 0x51/0x46/0x45 windows, 801387D8 row; gates 5A90(0x1BE4)/5520(3B9C). |
| 80128480 | - | func_80128480 | src/config/gen547.c |  | shop/status: 0x48/0x49 windows, 80127718/8012833C rows; loop L1284A0 on 5574(4); 0x1000/0x7FF/0x7E70 gates. |
| 80128598 | - | func_80128598 | src/config/gen320.c |  | party-stat block: 0x1B9A gate; main path renders the 0x88/0x4E windows and the L128628 row loop (801266C8 + 5DD4 cells) with the 80128750/80 |
| 80128750 | - | func_80128750 | src/config/gen841.c | Y |  |
| 801287B8 | - | func_801287B8 | src/config/gen250.c |  | config/save screen: 0x4B/0x48/0x49 windows, 80120070 config dispatcher, 8012833C save-check; L128954 gate loop (6BE0/4264/ 55C0), then the 8 |
| 80128AD4 | - | func_80128AD4 | src/config/gen673.c | Y |  |
| 80128B3C | - | func_80128B3C | src/config/gen768.c |  | battle/status: 4x 5520(3B9C()) checks on 0x1BE4 cells; gates -> 80128C4C/8012821C/80126D48 row block; 53D4 latches. |
| 80128C4C | - | func_80128C4C | src/config/gen314.c | Y |  |
| 80128D4C | - | func_80128D4C | src/config/screen_g.c |  |  |
| 80129808 | - | - | - | Y |  |
| 80129838 | - | func_80129838 | src/config/gen01483.c |  |  |
| 801298A0 | - | func_801298A0 | src/config/gen1126.c |  |  |
| 80129910 | - | func_80129910 | src/config/gen393.c |  | shop rows: 0x45/0x4B/0x48 windows, 801245B4 detail; nested loops L129958 (5574/8960 cells), L129948, L129938 on 5DA0/5B8C(0x202). |
| 80129AAC | - | func_80129AAC | src/config/gen01696.c | Y |  |
| 80129AD4 | - | - | - |  |  |
| 80129B04 | - | func_80129B04 | src/config/gen703.c |  | rows: 0x41/0x60/0x45/0x5D windows, 3F38(3C3C(0x45)) + 3F38(3A70(0x5D)) reads; v1/v0 gates route the L129BF8 etc tails; 5574 close. |
| 80129C54 | - | func_80129C54 | src/config/gen349.c | Y |  |
| 80129D2C | - | func_80129D2C | src/config/gen1252.c | Y |  |
| 80129D64 | - | func_80129D64 | src/config/gen567.c | Y |  |
| 80129DFC | - | func_80129DFC | src/config/gen566.c | Y |  |
| 80129E94 | - | func_80129E94 | src/config/gen1333.c |  |  |
| 80129EF4 | - | func_80129EF4 | src/config/gen728.c | Y |  |
| 80129F54 | - | func_80129F54 | src/config/gen464.c |  | main-menu option 0 (config tab): 0x210C header + 0x1F/0x1C/0x1B/ 0xAE windows, 0x1BA5/0x1BC9/0x1B1D rows; home-row renders through 80121124/ |
| 8012A190 | - | func_8012A190 | src/config/gen20.c |  |  |
| 8012A678 | - | func_8012A678 | src/config/gen348.c |  | config block: 0x1B23/0x1B22/0x1B19/0x1B25 texts, 0x3F window, 8011F724 rows, 8012B0D8 alt; gates on 6434(2). |
| 8012A868 | - | func_8012A868 | src/config/gen1015.c | Y |  |
| 8012A8A8 | - | func_8012A8A8 | src/config/gen347.c |  | config sub-options: 0x5D/0x5E windows, 0x34 window; 8012CB34 page, 8012AE00 save-load, 8012AB18 detail row; loop L12A8C0. |
| 8012AA80 | - | func_8012AA80 | src/config/gen1014.c | Y |  |
| 8012AAC0 | - | - | - |  |  |
| 8012AB18 | - | func_8012AB18 | src/config/gen66.c |  | config status row: 0x1BCC gate, 0x5D/0x5A/0x40/0xDB/0x5C windows, 80125100 stat block + 801206DC menu row; two symmetric branches (L8012AB84 |
| 8012AE00 | - | func_8012AE00 | src/config/gen268.c |  | save/load status screen: 0x1B1F cancel gate, 0x1BC9 open dialog (8013441C), 0x1BC8 arrows; 0x1B12 row reads; 0x34 window with 0xDB cell writ |
| 8012B050 | - | func_8012B050 | src/config/gen976.c | Y |  |
| 8012B0B0 | - | func_8012B0B0 | src/config/gen01482.c | Y |  |
| 8012B0D8 | animation_row_310 | - | - | Y |  |
| 8012B100 | - | func_8012B100 | src/config/gen727.c | Y |  |
| 8012B168 | - | func_8012B168 | src/config/gen01480.c | Y |  |
| 8012B190 | - | func_8012B190 | src/config/rowh.c |  |  |
| 8012B950 | - | func_8012B950 | src/config/gen898.c |  | config rows: 0x1BC3/0x1BC1 texts, 80124EAC/801224D0/ 8012BB68 rows; loop L12B958 on 5574(5). |
| 8012BA14 | - | func_8012BA14 | src/config/gen840.c |  | config row: 0x30/0x3F windows, 0x1B22 text, 801267E8/ 8011F320/8011EF0C/801210AC/8011EF30/8011FBA4/8012B950 rows; gates 6434(2). |
| 8012BAF8 | - | func_8012BAF8 | src/config/gen1125.c | Y |  |
| 8012BB68 | - | func_8012BB68 | src/config/gen236.c |  |  |
| 8012BE34 | - | func_8012BE34 | src/config/gen274.c |  | item/equip sub-screen: 0x1B3E/0x1B22 texts, 0x70/0x8/0xE8/0x5D windows; 8012D194 cursor gate and 801224D0 detail; loops at L2BE3C/L2BEFC/L2B |
| 8012C0A8 | - | func_8012C0A8 | src/config/gen384.c |  | config save-flow: 0x60/0x45 windows, 0x1B3B/0x1B84/0x1B86 texts, 801221EC/801210AC/8011EF30/8011FBA4/801263F0/8012C250 rows; 4120(2) gate. |
| 8012C250 | - | func_8012C250 | src/config/gen941.c |  | config rows: 0x1B3C/0x1B3B/0x1440 texts, 0xE8 window, 8012B168/8011F684/8012219C/8011FF40 rows; gates 5574(3)/ 6434(0x202). |
| 8012C2F8 | - | - | - |  |  |
| 8012C360 | - | func_8012C360 | src/config/gen672.c |  | config rows: 8012C0A8 prep, 0x60/0x45 windows; 53C0 gate picks 6764(0x60) fills. |
| 8012C42C | - | func_8012C42C | src/config/gen671.c |  | config rows (twin of 8012C360 with 0xB const): 8012C0A8 prep, 0x60/0x45 windows. |
| 8012C4F8 | - | func_8012C4F8 | src/config/gen644.c | Y |  |
| 8012C584 | - | func_8012C584 | src/config/gen487.c |  | config row: 0x60 window, 0x43/0x3F windows, 8012C2F8 alt + 801221EC close; 4120(0x202)/53C0 gates. |
| 8012C6B8 | - | func_8012C6B8 | src/config/gen940.c |  | config rows: 0x60 window, gates 6434()/8012C2F8; closes via 8218? cells + 801221EC. |
| 8012C74C | - | func_8012C74C | src/config/gen939.c | Y |  |
| 8012C794 | - | func_8012C794 | src/config/gen938.c | Y |  |
| 8012C7E4 | - | func_8012C7E4 | src/config/gen937.c | Y |  |
| 8012C82C | - | func_8012C82C | src/config/gen592.c | Y |  |
| 8012C8A4 | - | func_8012C8A4 | src/config/gen643.c |  | config rows: 0x1B3B/0xD5/0x60 texts/windows, 801221EC/8012C2F8/ 8012C980 rows; gate 53D4. |
| 8012C980 | - | func_8012C980 | src/config/gen383.c |  | config save-screen: 0x1B23/0x1B1A texts, 0x1440/0x45/0x54 windows, 801210AC/801224D0/8011EF30 preps; L12CA7C confirm loop on 53D4/6434(0x202 |
| 8012CB34 | - | func_8012CB34 | src/config/gen486.c |  | config dead-key row: 0x5D window, 0x45/0x29/0x41 cells, 4264(1)/41E8(2) gates; 4 cell writes on 0x4/0x2/0x40/0x42. |
| 8012CC4C | - | func_8012CC4C | src/config/gen01479.c | Y |  |
| 8012CC74 | - | func_8012CC74 | src/config/gen01478.c |  | config rows: 0x1A02 text, 0x202 cell gate; 8012C250 vs 8012CEA8 rows. |
| 8012CD6C | - | func_8012CD6C | src/config/gen975.c |  | config rows: 0x1A04/0x1A03/0x1B19/0x93/0x1BA5/0x1A65 texts; gate 4120(2) picks 8012CC4C. |
| 8012CE00 | - | func_8012CE00 | src/config/gen1332.c | Y |  |
| 8012CE54 | - | func_8012CE54 | src/config/gen1331.c | Y |  |
| 8012CEA8 | - | - | - |  |  |
| 8012CF18 | - | func_8012CF18 | src/config/gen306.c |  | config sub-menu (file save): 0x45 window, 0x1B3B text, 0x15C0 wait gate; 8012D204 cursor, 8012C250/80120A0C/801210AC/8011FB74/ 8012FBB0/8012 |
| 8012D124 | - | - | - |  |  |
| 8012D194 | - | func_8012D194 | src/config/gen1251.c | Y |  |
| 8012D1D0 | - | func_8012D1D0 | src/config/gen01477.c | Y |  |
| 8012D204 | midrow_prep_a | - | - | Y |  |
| 8012D23C | - | func_8012D23C | src/config/rowi.c |  |  |
| 8012DB6C | - | func_8012DB6C | src/config/gen1250.c | Y |  |
| 8012DB9C | - | func_8012DB9C | src/config/gen565.c |  | config saves: 8011EF30/8011FBA4 rows, 0xC3/0xC6 windows with 12/11 8188 row writes. |
| 8012DC80 | - | func_8012DC80 | src/config/gen564.c | Y |  |
| 8012DD30 | - | func_8012DD30 | src/config/gen01476.c | Y |  |
| 8012DD58 | - | func_8012DD58 | src/config/gen245.c |  |  |
| 8012E160 | - | func_8012E160 | src/config/gen1167.c | Y |  |
| 8012E1C0 | - | func_8012E1C0 | src/config/gen1330.c |  | rows: 5140 + 801224D0 + 9644(0x20)/9660(0x20) windows. |
| 8012E264 | - | func_8012E264 | src/config/gen615.c | Y |  |
| 8012E33C | - | func_8012E33C | src/config/gen407.c |  | formation summary: 0xD9/0xDA windows, 0x43 window cells, 0x1B9C/ 0x1B9F/0x1B9D row texts, 80D0/53C0 gate; 81B0 cell pairs. |
| 8012E5A8 | - | func_8012E5A8 | src/config/gen463.c | Y | party-formation screen: 0xD5/0xD7 rows, 0x1B9D/0x1B9F/0x1B9C texts, 8012E264/8012E7CC/8012E33C/8012E700/801255C0 rows; loops L12E5C0 (5DA0(0 |
| 8012E700 | - | func_8012E700 | src/config/gen936.c | Y |  |
| 8012E758 | - | func_8012E758 | src/config/gen1013.c |  |  |
| 8012E7CC | - | func_8012E7CC | src/config/gen726.c | Y |  |
| 8012E844 | - | func_8012E844 | src/config/gen73.c |  | party-form/formation screen: 0x1D/0x1F/0x23/0x25/0x21 stat cells (3A70/54D4/3F38(3A70(...)) row reads), 8012EAC0 commit; three nested loops  |
| 8012EAC0 | - | func_8012EAC0 | src/config/gen447.c |  | formation row: 0x1D/0x23/0x25/0x21 windows; loops L12EAC8 (6434(0x514)/5A90 gates) and L12EB10 (8A18 cell reads). |
| 8012EBF8 | - | - | - |  |  |
| 8012EC48 | - | func_8012EC48 | src/config/rowj.c |  |  |
| 8012F3F0 | - | func_8012F3F0 | src/config/rowk.c |  |  |
| 8012F9A0 | - | - | - | Y |  |
| 8012F9D0 | - | cell_put | src/config/store.c |  | config store: 0x43/0x48/0x5E/0x5B/0x5A/0x41 windows, 80120FBC + 8012FBB0 rows; loops L12FA78 (5DA0(0x5D)/5B8C(0x202)) and L12FA88 (5DA0(0x93 |
| 8012FBB0 | - | func_8012FBB0 | src/config/gen23.c |  |  |
| 8012FF9C | - | func_8012FF9C | src/config/gen974.c |  | ability rows: 0x1B83/0x1B84 texts, 0x46/0x45 windows. |
| 80130058 | - | func_80130058 | src/config/screen_l.c |  |  |
| 80130884 | - | func_80130884 | src/config/gen01475.c | Y |  |
| 801308B4 | - | func_801308B4 | src/config/gen767.c |  | ability rows: 0x1D/0x1E windows, 0x45/0x1D cells, 80130884 prep; linear. |
| 8013095C | - | func_8013095C | src/config/gen766.c | Y | ability tabs: 0x24 window, 0x130/0x1B0/0x230 consts, 0x1B81 text, 80130A74 rows, 6434(0x202)/5574(1) gates, 80130A24 close. |
| 80130A24 | - | func_80130A24 | src/config/gen897.c | Y |  |
| 80130A74 | - | func_80130A74 | src/config/gen1249.c | Y |  |
| 80130AA4 | - | func_80130AA4 | src/config/gen485.c |  | ability detail: 0x1B87/0x1B83/0x1B84 texts, 0x45/0x1B93 windows, 801308B4 row; gates 6434(2). |
| 80130BC8 | - | func_80130BC8 | src/config/gen725.c |  | ability rows: 0x45/0x1B93 cells/windows; linear render. |
| 80130C74 | - | func_80130C74 | src/config/gen77.c |  |  |
| 80130F90 | - | func_80130F90 | src/config/gen91.c |  | ability/equip screen (twin of 80130C74): 1B83-1B93 texts, 0x28 cursor window, 0x29 cells; 801308B4/8012FBB0/801206DC/80122D20 sub-renders, 5 |
| 80131294 | - | - | - | Y |  |
| 801312BC | ability_rows_29 | - | - |  | ability rows: 0x29 window + 80124704 row; 6CF4/9330 preps. |
| 80131358 | - | func_80131358 | src/config/gen335.c |  | ability/spell screen: 0x1B9B/0x1B8B texts, 0x45/0x46/0x43 windows, 801224D0 cursor, 8011F724 commit; L1313A8 row loop on 5DA0(0x45)/5B8C(0x2 |
| 80131534 | - | func_80131534 | src/config/gen896.c |  | ability wrapper: 80132428/80177178 preps + 80120070 config dispatcher + the 80126B88/8012F9D0/80130C74 sub-screens; ends with 80126528/80122 |
| 80131644 | - | - | - |  |  |
| 80131678 | - | - | - |  |  |
| 801316AC | - | func_801316AC | src/config/gen1248.c | Y |  |
| 801316E0 | - | func_801316E0 | src/config/gen1012.c | Y |  |
| 80131760 | - | func_80131760 | src/config/gen895.c |  | ability rows: 0x1B8B/0x16 texts, 0x43 window, 801224D0 + 80132178 rows; gates 6434(2/0x80). |
| 801317F0 | - | func_801317F0 | src/config/gen267.c |  | ability/select screen: 0x1B91 text, 0xE8/0x54/0x55/0x57/0x41 windows, 80124EAC cursor; loops L1318D0 (5DD4/5C64 scroll), L13193C (6B38(0x1B8 |
| 80131A2C | - | func_80131A2C | src/config/gen546.c |  | ability pick: 0x1BC6/0x1B8B texts, 0x43/0x45 windows, 801224D0/80124EAC/80132178 rows; 6434(2)/4120(0x202) gates. |
| 80131B38 | - | func_80131B38 | src/config/gen1011.c | Y |  |
| 80131B80 | - | func_80131B80 | src/config/gen642.c | Y |  |
| 80131BF8 | - | func_80131BF8 | src/config/gen935.c | Y |  |
| 80131C50 | - | func_80131C50 | src/config/gen838.c |  | ability rows: 0x1BC9/0x1B93 texts, 0xE8/0x43 windows, 80124EAC row; 6BE0(0xB)/87DC(0xB) cells; gate 6434(0x202). |
| 80131CD8 | - | func_80131CD8 | src/config/gen525.c |  | ability tab: 0x1BC6/0x1B8B/0x16 texts, 0x43 window, 801321B4 row; 6BE0(9)/87DC(7) latch and 6240(0x1BC9) tail. |
| 80131DF8 | - | func_80131DF8 | src/config/gen934.c | Y |  |
| 80131E50 | - | func_80131E50 | src/config/gen446.c | Y |  |
| 80131F08 | - | func_80131F08 | src/config/gen1247.c | Y |  |
| 80131F38 | - | func_80131F38 | src/config/gen1246.c | Y |  |
| 80131F68 | - | func_80131F68 | src/config/gen1245.c | Y |  |
| 80131F98 | - | func_80131F98 | src/config/gen1059.c |  |  |
| 80132010 | - | func_80132010 | src/config/gen702.c |  | ability header: 0x1B8B text, 0x4E/0x50/0x49/0x48/0x4E windows, 801224D0/801321B4 rows; 6434(2) gate. |
| 801320E8 | - | func_801320E8 | src/config/gen837.c | Y |  |
| 80132130 | - | func_80132130 | src/config/gen1123.c | Y |  |
| 80132178 | - | - | - |  |  |
| 801321B4 | - | func_801321B4 | src/config/gen1244.c | Y |  |
| 801321E8 | - | func_801321E8 | src/config/gen1243.c | Y |  |
| 80132248 | - | func_80132248 | src/config/gen1242.c |  |  |
| 801322AC | - | func_801322AC | src/config/gen1241.c | Y |  |
| 80132310 | - | - | - |  |  |
| 80132378 | - | func_80132378 | src/config/gen894.c |  | ability rows: 0x1B8B/0x4 texts, 801224D0/80132178 rows; loop L132388 on 5574(5). |
| 80132428 | - | func_80132428 | src/config/gen973.c | Y |  |
| 80132490 | - | func_80132490 | src/config/gen765.c | Y |  |
| 801324F8 | - | func_801324F8 | src/config/gen06.c |  |  |
| 80132C0C | - | func_80132C0C | src/config/gen933.c |  | ability rows: 80139CA4 prep, 0x1B4A/0x1B4B texts, 0x43 window, 80126070 close; gate 6434(0x80). |
| 80132CA4 | - | func_80132CA4 | src/config/gen798.c | Y |  |
| 80132CFC | - | func_80132CFC | src/config/gen231.c |  |  |
| 801330F8 | - | func_801330F8 | src/config/gen475.c |  | ability banner: 0x1B window, 0x2100/0x15/0x145 texts, 80139AFC tail; loops L133170 (6D70/5C64 pairs) and L1331EC. |
| 8013327C | - | func_8013327C | src/config/screen_u.c |  |  |
| 8013389C | - | func_8013389C | src/config/screen_e.c |  |  |
| 8013441C | - | func_8013441C | src/config/gen462.c |  | config weapon sub-menu: 0x1EB/0x1B37/0x1B39 texts; 8013463C/ 80134AF8/801224D0/801345B4 rows; 53C0/53D4 ladders route the 4C40/5F4D/6C61 opt |
| 801345B4 | ability_rows_45 | - | - |  | ability rows: 0x45/0x46 windows with 54D4 gates pick the 5480/5410 tails. |
| 8013463C | - | func_8013463C | src/config/gen90.c |  | config/weapon-switch screen: 1B37-1B3A texts; 801224D0/801345B4 renders; 4C44/4300/6C61/5354/5F54 option texts; exit 5480. |
| 80134948 | - | func_80134948 | src/config/gen563.c |  | ability rows: 0x41 window, 54D4(3B04) gate routes the 0x1441/ 0xE3 check; loops L134968 (5EA0/5C64(0x202)) and L134998. |
| 80134A50 | - | func_80134A50 | src/config/gen932.c | Y |  |
| 80134AB0 | - | func_80134AB0 | src/config/gen836.c | Y |  |
| 80134AF8 | - | func_80134AF8 | src/config/gen406.c |  | weapon sub-menu: 0x1B39 text, 0x45/0x48/0x49/0xE5 windows, 801224D0 row; loop L134BFC (5DD4(0x48)/5C64(2)), gate 43A0(0x45)/41E8(0x202). |
| 80134C74 | - | func_80134C74 | src/config/gen524.c |  | ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2 rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls 80194700/80194394. |
| 80134E74 | - | func_80134E74 | src/config/gen591.c |  | ability summary: 0x48C0/0x1A71/0x1A01/0x1A02 texts, 80120F1C/8012807C/801257BC/8011EF30/80135298/8011F8D4/ 8011FBA4 rows; linear render. |
| 80134FBC | - | - | - |  |  |
| 80134FF4 | - | func_80134FF4 | src/config/gen334.c |  | ability/config screen: 1BB1 text, 45/46 windows; header renders (L135054 vs L13507C variants) with 80124298/80134FBC/801264C0/ 80126590/8012 |
| 80135298 | - | - | - |  |  |
| 801352F0 | - | func_801352F0 | src/config/gen1122.c | Y |  |
| 80135330 | - | func_80135330 | src/config/gen503.c |  | ability/skill screen: 0x34 window + 0xDB cell, 0x1B7C/0x1BCB texts; 80134948/80125934/8012B168/80120FBC/801241B8/80120F1C home row, then 801 |
| 8013554C | - | - | - | Y |  |
| 80135574 | - | func_80135574 | src/config/gen31.c |  |  |
| 80135B54 | - | - | - |  | ability bank select: D_8019EE56 <- D_8019A068[bank-char][idx]. |
| 80135BE4 | - | func_80135BE4 | src/config/gen01474.c |  | ability: v1/v0 gates pick 80135EE4/8018F0E8 or 80135DE4 rows; v0 latch closes; returns L135DD4. |
| 80135DE4 | - | - | - |  | ability: 4x 80197688 rows; v0 gates pick L135E5C. |
| 80135E6C | - | - | - |  |  |
| 80135EE4 | - | - | - |  | ability: 8x 80197688 cell rows; linear. |
| 80135F7C | - | - | - |  | ability: 8x 80197698 cell rows; linear. |
| 80136014 | - | - | - |  | ability: 8x 801976A8 cell rows; linear. |
| 801360AC | - | - | - | Y | ability: when the panel cell is 8, run 80135F7C and reset the drag/selection cells. |
| 801360EC | - | - | - |  |  |
| 80136148 | - | - | - |  |  |
| 80136174 | - | func_80136174 | src/config/gen1121.c | Y |  |
| 801361A4 | - | func_801361A4 | src/config/gen89.c |  | item/equip configuration screen. Two 6434(0x202) sub-loops (equip browse L362AC / detail L36324); 4008(0x50) reads the confirm key before th |
| 80136494 | - | func_80136494 | src/config/rowl.c |  |  |
| 801368E8 | - | func_801368E8 | src/config/gen724.c |  | ability rows: 0x1B7B/0x1B55 texts, 801224D0 row, 801369B8 loop; gates 6434(0x202)/5574(0xCE). |
| 801369B8 | - | func_801369B8 | src/config/gen972.c |  |  |
| 80136A58 | - | func_80136A58 | src/config/rowm.c |  |  |
| 80136FFC | - | func_80136FFC | src/config/rown.c |  |  |
| 801376B0 | - | func_801376B0 | src/config/gen931.c | Y |  |
| 801376F0 | - | func_801376F0 | src/config/gen333.c |  | ability page: 0x1B7A/0x1B7C gates, 0x76/0x75/0x7A/0x79/0x73/0x77 windows, 80124D08/801223A4 rows; loop L137790 with 3F94(3C3C) cells. |
| 801378B0 | - | func_801378B0 | src/config/gen1240.c | Y |  |
| 801378E0 | - | func_801378E0 | src/config/gen971.c | Y |  |
| 80137938 | - | func_80137938 | src/config/gen287.c |  | ability page: four 4120(2)-gated blocks; each reads 0x1B7A/0x1B7C and writes 0x1BCB through 6240 after the 537D/53C0 key checks. |
| 80137B18 | - | func_80137B18 | src/config/gen1166.c |  |  |
| 80137BB8 | - | func_80137BB8 | src/config/gen373.c |  | v1/v0 branch |
| 8013813C | - | - | - |  | stat table header: hash the 3-byte code, hash cell, relocate to the 0x81/0x8B-marked tile and pack its two 2-byte pairs. |
| 801382C8 | - | func_801382C8 | src/config/gen1329.c |  | rows: 0x1A3C text + 5CCC spin loop L13831C. |
| 8013836C | - | - | - |  |  |
| 801383B8 | - | - | - |  |  |
| 80138408 | - | - | - |  |  |
| 80138458 | status_pane_build | - | - |  | menu text-grid: clears 8 slots then writes the status-pane label recipe. |
| 80138620 | - | - | - |  |  |
| 80138664 | - | - | - |  |  |
| 801386C8 | - | - | - | Y |  |
| 80138730 | - | func_80138730 | src/config/gen1009.c | Y |  |
| 80138788 | - | func_80138788 | src/config/gen1120.c | Y |  |
| 801387D8 | - | func_801387D8 | src/config/gen641.c |  | rows: 0x4E/0x41 windows, 0x7FA text, 801224D0 row; loop L1388B4 on 3F94(3AB4(0x4E))/5C64(0x202) gates. |
| 80138920 | - | func_80138920 | src/config/gen797.c |  | ability wrapper: 0x1A88 text, 8016EA9C/80138A6C/80122114 rows + the 0x100 prelude; linear. |
| 80138A34 | - | func_80138A34 | src/config/gen1328.c | Y |  |
| 80138A6C | - | func_80138A6C | src/config/gen445.c |  | ability/status wrapper: 80123D3C render + 0x1A73 title + 0x204/ 0x206 stat cells, then the L138BDC loop calling 80138D24 (the sub-dispatcher |
| 80138CB0 | - | func_80138CB0 | src/config/gen1165.c |  | rows: 0x48C0/0x1A71 texts, 0xE0 window, 8012807C/801257BC/ 80120E2C/8011EF30/8011FB74 rows. |
| 80138D24 | - | func_80138D24 | src/config/gen346.c |  | ability/party screen: 0x1A88/0x1BB4/0x1BB0-0x1BB5 texts, sub-dispatchers 8012E844/80120070 and stat rows 80126070/ 80126528/8012B168/8012B0D |
| 80138F68 | - | func_80138F68 | src/config/gen701.c |  | config rows: 0x1E0/0x1E0/0x19A texts, 0x212C window, 0x1E0 gate picks the 0x1F/0x1E2 route. |
| 801390DC | - | func_801390DC | src/config/gen1119.c |  | ability rows: 80120E2C/8011FBA4/80126528/80120E9C/8012AAC0/ 8011EF30/801264C0/801391D4 rows, 0x11/0xE2/0x99 window/cells. |
| 80139184 | - | - | - |  |  |
| 801391D4 | - | func_801391D4 | src/config/gen42.c |  |  |
| 8013954C | - | func_8013954C | src/config/gen930.c |  | ability rows: 0x99 cells, 801395E4/8011F684/801264E8/ 8011F884/801391D4 rows; loop L139554 on 5DA0/5B8C(0x202). |
| 801395E4 | - | func_801395E4 | src/config/gen835.c |  | ability rows: 0x1BB0/0x1BB1 texts, 0x5B/0x5A windows, 8011F724/80176BFC rows; gates 6434(2). |
| 80139694 | - | func_80139694 | src/config/gen893.c | Y |  |
| 80139704 | - | func_80139704 | src/config/gen368.c |  | ability stat-cast: 0x1440/0x1340/0x1441/0x1442 gates, 0x45/0x41 windows, 80139694 intro; loop L13978C (3F38(3B04) rows), then the L139874 st |
| 801398F4 | - | func_801398F4 | src/config/gen670.c |  | ability detail: 0x1340/0x1440 texts, 0x45/0x41 windows, 80139694 prep, 80120E2C/8011FBA4/80126528/801399EC/ 801264C0 rows; loops L139934 (5D |
| 801399EC | - | - | - | Y |  |
| 80139A24 | - | func_80139A24 | src/config/gen01695.c |  |  |
| 80139AA4 | - | func_80139AA4 | src/config/gen796.c | Y |  |
| 80139AFC | - | func_80139AFC | src/config/gen834.c | Y |  |
| 80139B44 | - | func_80139B44 | src/config/gen764.c | Y | ability rows: 80139CA4/80139694 preps, 0x1BAF text, 0x1340/ 0x1440 gates, 80139C0C row; loop L139BD4 on 5574(5). |
| 80139C0C | - | func_80139C0C | src/config/gen523.c | Y |  |
| 80139CA4 | - | func_80139CA4 | src/config/gen929.c | Y |  |
| 80139CF4 | - | func_80139CF4 | src/config/gen669.c |  | config row: 0x30/0x31 windows, 0x8D/0x8A/0x1D/0x1F/0x121/0x122 texts, 801266F0/8016EA7C/80126610/8011EE34/801241B8/8011F6A4/ 8011F864/80139E |
| 80139E34 | - | func_80139E34 | src/config/rowo.c |  |  |
| 8013A8C4 | - | - | - | Y |  |
| 8013A8CC | - | func_8013A8CC | src/config/gen1058.c |  | battle rows: 7270(0x41) then 8960/63BCx2/6364 loop on 5958(9). |
| 8013A950 | - | func_8013A950 | src/config/gen763.c |  | ability rows: 0x1BA9/0x1BA8/0x1BAA texts, 0x43/0x45/0x46 windows; linear render. |
| 8013AA08 | - | func_8013AA08 | src/config/gen892.c |  |  |
| 8013AAA8 | - | func_8013AAA8 | src/config/gen1164.c | Y |  |
| 8013AAF0 | - | - | - | Y |  |
| 8013AB18 | - | func_8013AB18 | src/config/rowp.c |  |  |
| 8013AFA4 | - | func_8013AFA4 | src/config/gen970.c |  | ability rows: 0x16AE-0x16B0 texts with 54D4(3B04) gates; 8013B04C/8012219C tails. |
| 8013B04C | - | - | - |  |  |
| 8013B0C4 | - | - | - |  |  |
| 8013B118 | - | func_8013B118 | src/config/gen1057.c | Y |  |
| 8013B160 | - | func_8013B160 | src/config/gen01694.c |  |  |
| 8013B1A8 | - | func_8013B1A8 | src/config/gen01693.c |  |  |
| 8013B1E8 | - | func_8013B1E8 | src/config/gen01692.c |  |  |
| 8013B228 | - | func_8013B228 | src/config/gen01691.c |  |  |
| 8013B270 | - | func_8013B270 | src/config/gen224.c |  | ability/spell screen: 0x48/0x49 windows, 0x1BC7 text, 801210AC/ 80124EAC/80120A0C/801224F8/80122518/80122334/801241B8/8011F684/ 80120B6C/801 |
| 8013B764 | - | - | - |  |  |
| 8013B7B8 | - | - | - | Y |  |
| 8013B7C0 | - | func_8013B7C0 | src/config/gen1118.c | Y |  |
| 8013B804 | - | func_8013B804 | src/config/gen1239.c | Y |  |
| 8013B840 | - | func_8013B840 | src/config/gen1008.c | Y |  |
| 8013B88C | - | func_8013B88C | src/config/gen1056.c | Y |  |
| 8013B8D4 | - | func_8013B8D4 | src/config/gen891.c | Y |  |
| 8013B92C | - | func_8013B92C | src/config/gen1238.c | Y |  |
| 8013B95C | cell_step2 | - | - |  | ability/party screen: 0x41/0x45 windows, 0x1804/0x1A83 texts; 8016EA9C/80123D3C/8013BB0C/80126610/80122114 rows; loop L13B9F8 (5DA0(0x45)/5B |
| 8013BB0C | - | func_8013BB0C | src/config/gen833.c |  | ability menu: 0x93/0x9F/0x60 windows, 0x1B1D/0x1BC6 texts, 8013CB94/8012A868/8013C2FC/8013CA70 sub-rows; loop L13BC38 (80194700/80194394) an |
| 8013BD04 | - | func_8013BD04 | src/config/gen60.c |  | battle summon/party-cast screen: 0x41 window + 0x48/0x45 rows; outer/ inner loops (L3BD24/L3BD54) with 6D70/54D4 confirm gates; L3BE64 advan |
| 8013BFFC | - | func_8013BFFC | src/config/gen1117.c | Y | ability rows: 0x1A83 text; loop L13C024 on 6434(2)/53C0 with 8013C2FC/8013CA70/8013BD04/8013C50C rows. |
| 8013C094 | - | func_8013C094 | src/config/gen254.c |  | ability/skill screen: 1BB3/1BB4 headers, 5B/5A/60 windows; 8011F724/8011F684/8011F884 + 8012B100 renders; loops to L13C09C while 4120(2) hol |
| 8013C2FC | - | func_8013C2FC | src/config/gen545.c |  | ability menu: 0x60 window, 0x1A83 text, 801210AC/8011FBA4/ 8013C44C/8011F684/80126418/8011F884/8013BFFC rows; loop L13C304 on 4120(2). |
| 8013C44C | - | func_8013C44C | src/config/gen890.c | Y |  |
| 8013C4B4 | - | func_8013C4B4 | src/config/gen01473.c | Y |  |
| 8013C50C | - | - | - |  |  |
| 8013C554 | - | func_8013C554 | src/config/screen_y.c |  | ability/skill detail (twin of 8013C094): 1BB5/1BB6/1BB7 texts, 0x46/0x45/0x60 windows, 8012B168/801266C8/8011F884/8013C4B4 rows; loops L13C5 |
| 8013CA70 | - | func_8013CA70 | src/config/gen668.c |  | ability menu: 0x41 window; 5574 ladder (0x19/0xC8/0xEE codes) routes to the 801210AC/8011FB74/801263F0/8012219C/8011FF40/ 801240A8/8011EF30  |
| 8013CB94 | - | func_8013CB94 | src/config/gen01690.c |  |  |
| 8013CBF0 | - | func_8013CBF0 | src/config/gen53.c |  |  |
| 8013CF08 | - | func_8013CF08 | src/config/gen562.c |  | battle rows: 80143D64/80143D14/8013D040 rows; loop L13CF50 on 5958(8). |
| 8013D040 | - | func_8013D040 | src/config/gen640.c |  | battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. |
| 8013D12C | battle_row_wrap | - | - | Y |  |
| 8013D14C | - | func_8013D14C | src/config/gen98.c |  | battle magic list: 0x34C4 intro, 0x65/0x2 windows, 8014D528 + 801409BC sub-renders, then the L13D2CC loop pulling 80140558/ 8013D428/8014937 |
| 8013D3B0 | - | func_8013D3B0 | src/config/gen969.c | Y |  |
| 8013D428 | - | func_8013D428 | src/config/gen700.c | Y |  |
| 8013D4C8 | - | func_8013D4C8 | src/config/gen699.c |  | battle rows (twin of 8013D040): 0x342/0x341/0x343 cells with 0x3F/0x7F cursor codes; gates 6434(0x202). |
| 8013D598 | - | func_8013D598 | src/config/gen1237.c | Y |  |
| 8013D5C8 | - | func_8013D5C8 | src/config/gen762.c |  | battle rows: 8013D690 prep, 0x340/0x342/0x380/0x382 cells; loop L13D600 on 5A90(0x40). |
| 8013D690 | - | func_8013D690 | src/config/gen522.c | Y |  |
| 8013D720 | - | func_8013D720 | src/config/rowq.c |  |  |
| 8013DC04 | - | func_8013DC04 | src/config/gen433.c |  | battle magic-name flow: 0x38E2/0x4E gates, 8013D12C prep, 0x4E window rows; loops L13DC70 (5A90(5)), L13DCA0/L13DCDC (4FAC (0x101) rows), L1 |
| 8013DE38 | - | func_8013DE38 | src/config/gen97.c |  |  |
| 8013E200 | - | func_8013E200 | src/config/gen561.c |  | battle item rows: 0x1/0x2/0x3/0x4/0x5 windows, 80143D64 + 80143D14 + 8013DE38 rows. |
| 8013E2F8 | - | func_8013E2F8 | src/config/gen279.c |  | battle magic-cast flow: 8013D12C/80148DE8 prep, wait loop L13E340 (43E44/5958), row read L13E3EC (4FAC(0x101)/6434(0x80) gates), 8013E200 ca |
| 8013E588 | - | - | - |  |  |
| 8013E5D0 | - | func_8013E5D0 | src/config/gen461.c |  | battle rows: 0x4/0x1 windows, 8013E588 rows; 76BC(3C3C(4))/ 7728(0x101) gate with the 3F38(3B9C) cell writes; loop L13E604 on 5958(8). |
| 8013E73C | - | func_8013E73C | src/config/gen313.c |  | battle magic rows: 0x4/0x2 windows, 8013E5D0 row, 0x6CD8 gate loop L13E7D8, then the L13E864 pair loop on 3F38(3B04) cells. |
| 8013E984 | - | func_8013E984 | src/config/gen544.c |  | battle rows: 0x1802 text, 0x6 window, 8013EB2C/8013EAFC/ 8013ED14 rows; loop L13EA9C on 5958(0x440). |
| 8013EAFC | - | func_8013EAFC | src/config/gen1116.c | Y |  |
| 8013EB2C | - | func_8013EB2C | src/config/gen367.c |  | battle rows: 0x16/0x2/0x4/0x5 windows, 0x6EFD cells, 67FC row reads; loop L13EBD4 on 5958(0x280). |
| 8013ED14 | - | func_8013ED14 | src/config/gen543.c |  | battle rows: 0x2/0x3/0x4 windows, 0x6CFD cells; loop L13ED2C on 5DA0(0x4)/5B8C(0x202). |
| 8013EE18 | - | func_8013EE18 | src/config/gen1236.c |  | event: 3C3C/3B04(0x2000)x2 gates (one 0x80); s0/a1+s0/a2 regcmp loops; 8013F2C4 spin rows; v1/s5+s0/s3 latches. |
| 8013EF78 | - | - | - | Y |  |
| 8013EF98 | - | func_8013EF98 | src/config/gen1115.c | Y |  |
| 8013EFD8 | - | func_8013EFD8 | src/config/gen968.c |  | event: 3B04/3C3C rows with 3A70 loops on s1/s5/s4 latches; 922C/9410 spins; 5410/971C tail. |
| 8013F124 | - | func_8013F124 | src/config/gen1055.c |  | event: 3C3C/3B04/3A70 rows with a2/s0 + a2/a0 spin latches; closes 8013EFD8. |
| 8013F2C4 | - | func_8013F2C4 | src/config/gen1235.c |  | event: 3C3C/3B04(0x2000)x2 + 5410; linear. |
| 8013F354 | - | func_8013F354 | src/config/gen372.c | Y | battle class rows: 0x1C/0x22/0x1E windows, 3F94(3C3C) + 7FCC cells, 64EC(2) gates; loop L13F3BC (7B40/5C64). |
| 8013F49C | - | func_8013F49C | src/config/gen590.c |  | battle rows: 0x47/0x1C/0x1E/0x22/0x20 windows, 8013F354 row, 0x2A16/0x2A1E texts. |
| 8013F5A8 | - | func_8013F5A8 | src/config/gen30.c |  |  |
| 8013F96C | - | func_8013F96C | src/config/gen1007.c |  | battle rows: 6C68/8960/63BCx2 cells; loop L13F9B8 on 5958(5). |
| 8013FA08 | - | func_8013FA08 | src/event/screen_h.c |  |  |
| 801401CC | - | func_801401CC | src/battle/gen1054.c | Y |  |
| 80140224 | - | func_80140224 | src/battle/gen542.c |  | battle rows: 2x4 87DC cell sets (0x7612-0x77B6 and +2); loop L140260 on 5958(0x8C). |
| 80140310 | config_row_8468 | - | - | Y |  |
| 80140350 | - | func_80140350 | src/battle/gen667.c |  | battle rows: 0x2A window, 3F94(3C3C) reads; linear cell fill. |
| 8014046C | - | func_8014046C | src/battle/gen698.c |  | battle rows: 80140558 + 5x (71DC/654C(0x26/0x27)/80140350) row pairs; loop L140498 on 5A90(0x10). |
| 80140558 | gpu_driver_run | - | - | Y |  |
| 80140578 | - | - | - | Y |  |
| 80140598 | - | func_80140598 | src/battle/gen1327.c |  | jr $a0 : the 14-entry battle magic-judge table. Each entry calls one effect then jumps to L1406EC (return); the table tail runs 801406FC. Ha |
| 801406FC | - | - | - | Y |  |
| 8014071C | - | func_8014071C | src/battle/gen1006.c | Y |  |
| 8014076C | - | func_8014076C | src/battle/gen01472.c |  |  |
| 801407EC | - | func_801407EC | src/battle/gen01689.c | Y |  |
| 80140814 | - | func_80140814 | src/battle/gen1005.c | Y |  |
| 8014086C | - | func_8014086C | src/battle/gen01688.c | Y |  |
| 80140894 | - | func_80140894 | src/battle/gen01687.c | Y |  |
| 801408BC | - | func_801408BC | src/battle/gen01686.c | Y |  |
| 801408E4 | - | func_801408E4 | src/battle/gen832.c | Y |  |
| 80140944 | - | func_80140944 | src/battle/gen01685.c | Y |  |
| 8014096C | - | func_8014096C | src/battle/gen01471.c | Y |  |
| 80140994 | - | func_80140994 | src/battle/gen01684.c | Y |  |
| 801409BC | - | func_801409BC | src/battle/gen01470.c | Y |  |
| 801409E4 | - | func_801409E4 | src/battle/gen01469.c | Y |  |
| 80140A0C | - | func_80140A0C | src/battle/gen1326.c | Y |  |
| 80140A5C | - | func_80140A5C | src/battle/gen1114.c |  |  |
| 80140AC0 | - | func_80140AC0 | src/battle/gen967.c |  | battle rows: 80147414 row; loop L140AEC on 5A90(5) with 0x2001/0xF cells; closes via 0x971C. |
| 80140BA0 | - | func_80140BA0 | src/battle/gen831.c |  | battle judge: 80140CFC/80140AC0 preps, 0x48/0x2000 texts, 80097D34/80097D54/80140D94 rows. |
| 80140C8C | - | - | - |  |  |
| 80140CFC | - | func_80140CFC | src/battle/gen1053.c |  | battle rows: loop L140D28 on 6B68(0x34C2)/8768(0x34C2)x2/ 6364/5958(8). |
| 80140D94 | - | func_80140D94 | src/battle/gen1113.c |  | battle rows: D54 <- D44; loop on 6B68(0xF476)/8768(0x34C2)/ 6364/5958(8). |
| 80140E00 | - | func_80140E00 | src/battle/gen966.c | Y |  |
| 80140E78 | - | func_80140E78 | src/battle/gen1325.c | Y |  |
| 80140EA8 | - | func_80140EA8 | src/battle/gen01468.c | Y |  |
| 80140EE0 | - | func_80140EE0 | src/battle/gen01467.c | Y |  |
| 80140F08 | - | func_80140F08 | src/battle/gen1324.c |  |  |
| 80140F68 | - | func_80140F68 | src/battle/gen1323.c |  |  |
| 80140FB8 | - | func_80140FB8 | src/battle/gen01466.c | Y |  |
| 80140FE0 | - | func_80140FE0 | src/battle/gen1322.c | Y |  |
| 80141020 | - | func_80141020 | src/battle/gen1233.c | Y |  |
| 80141068 | - | func_80141068 | src/battle/gen1232.c | Y |  |
| 801410B0 | - | func_801410B0 | src/battle/gen1163.c | Y |  |
| 80141100 | - | func_80141100 | src/battle/gen1321.c |  | battle: 3C3C/3B04 gates; 801411BC/80141240 pair rows. |
| 801411BC | - | func_801411BC | src/battle/gen01465.c |  | battle: 3C3C/80072720/5410 rows. |
| 80141240 | - | func_80141240 | src/battle/gen1112.c | Y |  |
| 80141290 | - | func_80141290 | src/battle/gen1320.c |  | battle: 3C3C/3A70/3B04 rows. |
| 80141334 | - | func_80141334 | src/battle/gen560.c |  | battle cast: 0x4800/0x4880 text gates, 0x1A window, 800723D0 + 800761C8 rows; loop L141390 on 5A90(8). |
| 80141468 | - | func_80141468 | src/battle/gen889.c |  | battle rows: gate 6434(0x202); loop L1414E0 on 5A90(6). |
| 80141530 | - | func_80141530 | src/battle/gen282.c |  | battle spell-tab flow: 0x38E8/0x38E9 rows, 0x388E/0x388F texts, 0x1E00/0x1E02 level gate, 0x352D/0x388B/0x4218/0x1811/0x1812 detail rows; 80 |
| 80141760 | - | func_80141760 | src/battle/gen244.c |  |  |
| 80141A80 | - | func_80141A80 | src/battle/gen795.c |  | battle rows: 80140558/80140310 loop L141AB8 on 5958(0x14), with 80D0(8)/81B0 cells. |
| 80141B30 | - | func_80141B30 | src/battle/gen888.c |  | battle rows: 80140558/80140310 loop L141B5C on 5958(0x15). |
| 80141BD4 | - | func_80141BD4 | src/battle/gen1111.c |  | battle: 3C3C/3B04/3B9C gate; 80141C98 rows with 0x40/0x80 variants; linear. |
| 80141C98 | - | func_80141C98 | src/battle/gen1162.c |  | battle: 3C3C(4)/3A70/3B04 rows; 6EA8 + s1/v1 latch route to 5410. |
| 80141DA0 | - | - | - | Y |  |
| 80141DC0 | - | func_80141DC0 | src/battle/gen794.c |  | battle rows: 0x4E window, 80140558 row; loop L141DD0 on 5574(0x10); closes via 0x38/0x34 codes. |
| 80141E80 | - | func_80141E80 | src/battle/gen666.c |  | battle cast: 0x6CC0 test, 53D4/6434(2) gates; 8058(8) reads. |
| 80141F54 | - | func_80141F54 | src/battle/gen1231.c | Y |  |
| 80141F84 | - | - | - | Y |  |
| 80141FC4 | - | - | - | Y |  |
| 80141FEC | - | func_80141FEC | src/battle/gen1161.c | Y |  |
| 8014202C | - | func_8014202C | src/battle/gen1230.c | Y |  |
| 80142064 | - | func_80142064 | src/battle/gen1160.c | Y |  |
| 801420B4 | - | - | - | Y |  |
| 801420D4 | - | func_801420D4 | src/battle/gen57.c |  | chara/status sub-screen: 8013D12C/8013EF78 prep, poll loop L142128 (4008 0x10/0x70 reads + 8768 row draws), then detail rows and the L1422D8 |
| 80142394 | - | func_80142394 | src/battle/gen697.c |  | battle rows: 4x 6B68/8768 cell pairs; loop L1423C0 on 5958(3), then 4x 5D24 close. |
| 80142450 | - | func_80142450 | src/battle/gen345.c |  | battle magic-status: 0x340-0x343 cells, 0x6CC0 gate with 8058(0x10) alt row; loop L142498 on 5958(8). |
| 801425FC | - | func_801425FC | src/battle/gen240.c |  |  |
| 801428FC | - | func_801428FC | src/battle/gen305.c |  | battle item-cast: 8013D12C prep, 0x1900 gate + 80142B4C intro, wait loop L142938, L142988/L1429BC/L142A6C cast loops (801431E8/80177DCC/8014 |
| 80142B4C | - | - | - |  |  |
| 80142BCC | - | func_80142BCC | src/battle/gen541.c |  | battle rows: 0x1/0x2/0x4/0x6 windows with 4008(0x20) reads; loop L142C14 on 5958(0x40). |
| 80142CB4 | - | func_80142CB4 | src/battle/gen589.c |  | battle rows: 80142E34 prep; loops L142CE8 (43E44 + 7F48 cells) and L142CBC (54D4 gate). |
| 80142DC0 | - | func_80142DC0 | src/battle/gen1159.c |  | battle rows: 80142E34 + D54 <- D44; loop on 654C(8)/ 80143E44/6364/5958(0x10). |
| 80142E34 | - | func_80142E34 | src/battle/gen1229.c |  | battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then 80142E90. |
| 80142E90 | - | func_80142E90 | src/battle/gen44.c |  |  |
| 801431E8 | - | func_801431E8 | src/battle/gen1319.c |  | battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then 80142E90. |
| 8014323C | - | func_8014323C | src/battle/gen48.c |  |  |
| 80143628 | - | func_80143628 | src/battle/gen01683.c | Y |  |
| 80143668 | - | func_80143668 | src/battle/gen793.c |  | battle rows: 0x1F/0x34C3/0x48 windows, 8014A488 row; loop L1436A4 on 5574(0xFF)/5958(8). |
| 80143738 | - | func_80143738 | src/battle/gen332.c |  | battle magic-status: 0x300/0x303 cells, 0x6CC0/0x1813 texts, and the 6434(0x202) row gates; loop L143768 polls 5958(0x48). |
| 80143908 | - | func_80143908 | src/battle/gen228.c |  |  |
| 80143C84 | - | func_80143C84 | src/battle/gen1318.c | Y |  |
| 80143CCC | - | func_80143CCC | src/battle/gen1317.c | Y |  |
| 80143D14 | - | func_80143D14 | src/battle/gen887.c | Y |  |
| 80143D64 | - | func_80143D64 | src/battle/gen886.c | Y |  |
| 80143DB4 | - | func_80143DB4 | src/battle/pairrows.c |  | battle rows: two 3F38(3B04) pair reads; linear. |
| 80143E44 | battle_rows_twin | - | - |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80143ED4 | - | func_80143ED4 | src/battle/gen444.c |  | battle rows: 80143D64/80143D14/8013D4C8 rows; loop L143F1C on 6434(2/0x202) gates and 5958(0x40). |
| 80144050 | - | func_80144050 | src/battle/gen260.c |  | battle magic-cast: 0x1900 text + spell rows (8768 draws), loops L144084 (row refresh), L14411C, L144180 (43E44 wait), L1441D8 (4x 6B68/8768  |
| 801442B4 | - | - | - | Y |  |
| 801442BC | - | func_801442BC | src/battle/gen885.c |  | battle rows: 8013EF78 prep; loop L1442E4 on 5C64(0x202) with 80140558 + cell writes; closes via 0x10 window. |
| 80144344 | - | func_80144344 | src/battle/gen366.c | Y |  |
| 801444D4 | - | func_801444D4 | src/battle/gen01464.c | Y |  |
| 801444FC | - | func_801444FC | src/battle/gen214.c |  |  |
| 801449A0 | - | func_801449A0 | src/battle/gen1228.c | Y |  |
| 801449D0 | - | func_801449D0 | src/battle/gen293.c |  | battle magic-confirm: 0x1813/0x1901 texts, 0x340/0x341 state cells with 6434(2) gates; loops L144A50 (5958(0x78)) and L144B90 (5A90(0x78)). |
| 80144C78 | - | func_80144C78 | src/battle/gen312.c |  | battle cast flow: 2/3/4 windows, 80143E44/80143D14 rows; nested scroll loops L144D38/L144D48 (5DD4(4)/5C64(0x202)) and L144EA4, wrapped by L |
| 80144F1C | - | - | - | Y |  |
| 80144F24 | - | func_80144F24 | src/battle/gen432.c |  | battle magic-cast: 8014D528 prep, 80140558/80140310 loops (L144F6C wait, L145038 scroll), 8009A0A0/8014202C/8013DC04 rows, 0x34C4 text. |
| 801450B8 | - | func_801450B8 | src/battle/gen927.c |  | battle loop: 8013EF78/8013D12C/801444D4/80144C78 preps; L1450E8 loop runs 80140558 + 80144C78 + 801449D0; closes with 8013DC04 + 0x38E2 text |
| 80145168 | - | func_80145168 | src/battle/gen1004.c |  | battle loop: 8013EF78/8013D12C/801449A0/80144C78/8014086C preps; L1451A0 loop runs 80140558 + 80144C78 + 801449D0 + 8014D43C; exits via 8014 |
| 80145220 | - | func_80145220 | src/battle/gen1316.c | Y |  |
| 80145278 | - | func_80145278 | src/battle/gen01463.c |  |  |
| 801452C8 | - | func_801452C8 | src/battle/gen01462.c |  |  |
| 80145318 | - | func_80145318 | src/battle/gen01461.c |  |  |
| 80145390 | - | func_80145390 | src/battle/gen01460.c |  |  |
| 80145408 | - | func_80145408 | src/battle/rowr.c |  |  |
| 8014588C | - | func_8014588C | src/battle/gen502.c |  | battle name rows: 80143D64/80143D14/80143E44/80143DB4 rows; loop L1458D4 on 5958(0x10) with 6434(2) gate. |
| 80145AA0 | - | - | - |  |  |
| 80145AF8 | - | func_80145AF8 | src/battle/gen965.c |  | battle rows: a0/v0 latch picks the 0x40/0x50 vs 0x80/0x50 window sets. |
| 80145B90 | - | func_80145B90 | src/battle/gen588.c |  | battle rows: 0x26/0x28/0x2A windows, 0x1800 text, 80072720 + 80145C74 rows. |
| 80145C74 | - | func_80145C74 | src/battle/gen76.c |  | battle status detail: 6434(2) gate spin (8007259C), then the stat block (8007411C + 76BC pairs) and the L145D4C refresh loop with 658C/81B0/ |
| 80145EA4 | - | func_80145EA4 | src/battle/gen761.c |  | battle rows: 3C3C/3B04/3B9C + 0x1000 gates with spin loops (L145F60); closes via 960C/95A0 on the a1/v0 latch. |
| 80146028 | - | func_80146028 | src/battle/gen01682.c |  |  |
| 801460A4 | - | func_801460A4 | src/battle/gen1227.c |  | battle: 3C3C/3B04/3B9C gates; s0/v0+v1 regcmp latches on the 5480 row; returns at L1462C0. |
| 801462DC | - | func_801462DC | src/battle/gen286.c |  | battle item cast: 0x47 window; 6434 gates (0x202/2) route the 5574(0xB0/0xC0) key ladder and 4248(0x30/0x20) row gates, with 90EC/8768 cell  |
| 8014654C | - | func_8014654C | src/battle/gen1226.c |  | battle: 3C3C/3B04/3B9C gate tree with v1/v0 + a0/v1 + a2/v0 latches; returns at L1466CC. |
| 801466E0 | - | func_801466E0 | src/battle/gen964.c |  | battle: 3C3C/3B04(0x2000)x3/3B9C gates; 9330/939C rows with the v0/v1 latch loop L146824; closes 960C/95A0. |
| 80146954 | - | func_80146954 | src/battle/gen1315.c |  |  |
| 80146980 | - | func_80146980 | src/battle/gen1225.c |  | battle: 3C3C/3B04 gates pick 5410 vs 5480 rows. |
| 80146A44 | - | func_80146A44 | src/battle/gen1003.c |  | battle magic-cast flow. v0 cascades select the spell-target category; a0=1/2/8/3 delay-consts are the target-type ids for each route. |
| 80147000 | - | - | - | Y |  |
| 80147020 | - | func_80147020 | src/battle/gen1110.c |  | battle: 3C3C/3B9C gates; 800728AC rows + 5480/5410 tails. |
| 801470F8 | - | func_801470F8 | src/battle/gen1314.c |  | battle: 3C3C/3B04 gates; 80146954 row. |
| 801471C4 | - | func_801471C4 | src/battle/gen311.c |  | battle status-cast: 0x29C5/0x2003/0x2001 texts, 80147434 + 801473A4 rows, 8007275C/80072CB0 commits; loop L1471DC polls 5574(0xFF)/5958(5). |
| 801473A4 | - | - | - |  |  |
| 80147414 | - | - | - | Y |  |
| 80147434 | - | func_80147434 | src/battle/gen01681.c |  |  |
| 801474B0 | - | func_801474B0 | src/battle/gen230.c |  |  |
| 80147888 | - | func_80147888 | src/battle/gen359.c |  | battle item detail (twin of 801462DC): 0x47 window; 6434(0x202) gate routes the 4248(0x30/0x20) row picks; 801470F8 + 960C/95A0 close. |
| 80147AA8 | - | func_80147AA8 | src/battle/gen926.c |  | battle rows: 3C3C/3B04(0x2000)x2/3B9C(0xF0) gates; spins L147B14/L147B38; 9330 + 80146A44 row; 3B9C/95A0 then the 80147FA0/801466E0 gated bl |
| 80147FA0 | - | func_80147FA0 | src/battle/gen1002.c |  | battle: 3C3C/3B04/3B9C(0x2000) gates; 2x 800728AC rows and the s0/v1 regcmp loops with 9330/95A0 closes. |
| 801482E8 | - | func_801482E8 | src/battle/gen22.c |  |  |
| 801486D8 | - | func_801486D8 | src/battle/gen365.c |  | battle item detail: 0xE/0x10/0x11 windows, 0x500/0x301-0x303 cells, 78C4(3C3C(0x10)) rows, 6434(2)/6CC0 gates. |
| 801488D4 | - | func_801488D4 | src/battle/gen47.c |  | battle item-sublist: 0x14/0x15/0x16/0xE/0x10/0x12 windows, 0x6CC0/0x300 gates; 80148D04/80148CAC/80148BE0 row handlers and the L148A74 refre |
| 80148BE0 | - | func_80148BE0 | src/battle/gen925.c | Y |  |
| 80148C28 | - | func_80148C28 | src/battle/gen01680.c |  |  |
| 80148C6C | - | - | - | Y |  |
| 80148C8C | - | - | - | Y |  |
| 80148CAC | - | func_80148CAC | src/battle/gen1313.c |  | battle rows: 0xF42B text; 17 x 0xAA bytes at 0x800D0515 (descending); 80148C28 + 95A0 close. |
| 80148D04 | - | func_80148D04 | src/battle/gen1312.c |  | battle rows (clear variant): 17 zero bytes at 0x800D0515. |
| 80148D58 | - | func_80148D58 | src/battle/gen924.c |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80148DE8 | - | - | - | Y |  |
| 80148E08 | - | func_80148E08 | src/battle/gen760.c | Y |  |
| 80148E60 | - | - | - | Y |  |
| 80148E80 | - | func_80148E80 | src/battle/gen884.c | Y |  |
| 80148ED0 | - | func_80148ED0 | src/battle/gen923.c |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80148F60 | - | func_80148F60 | src/battle/gen1052.c | Y |  |
| 80148FA0 | - | - | - | Y |  |
| 80148FC0 | - | func_80148FC0 | src/battle/gen883.c |  | battle rows: 0x26/0x2B windows, 80072720 row; gates 6434/ 60A8/6434(0x80) route the 5480/5410 tails. |
| 801490AC | - | - | - | Y |  |
| 801490CC | - | func_801490CC | src/battle/gen247.c |  | battle info-dialog: two identical confirm blocks (54D4/53C0 -> option select vs 6240 tail), then 0x26/0x28/0x2A detail rows and 8007262C com |
| 80149374 | - | - | - | Y |  |
| 80149394 | - | func_80149394 | src/battle/gen88.c |  | battle spell-detail: 3F38(3B04) row pair draws (L1493BC loop), gate on 54D4(3B04)/53C0 with 658C/4264/8274 stat cells (L14940C loop); tail 5 |
| 801495B4 | - | - | - | Y |  |
| 801495D4 | - | - | - | Y |  |
| 801495F4 | - | - | - | Y |  |
| 80149614 | cast_alt2 | - | - |  | battle item/statcast: 29B5/38E6/29A4 texts, 0x1800/0x1B7 gates, 800976A4/801495D4/80166218/80074B98/80099938/801669BC sub-casts and the 8014 |
| 80149924 | - | func_80149924 | src/battle/gen540.c |  | battle rows: 0x38E6 text, 0x4E/0x1/0x4E windows, 8014D568/ 8007259C/80094D14/80168148 rows; loops L1499A4 and L1499D8 (5958(0x20)). |
| 80149A98 | - | func_80149A98 | src/battle/gen460.c |  | battle rows: 0x28/0x4/0x2B/0x5/0x2 windows, 80148FC0 row, 7600 cells; loop L149B6C on 5DD4/5C64(0x202). |
| 80149BE4 | - | func_80149BE4 | src/battle/gen474.c |  | battle item flow: 0x48/0x4/0x49 windows, 0x38E2/0x34C2 texts, 8014FE84/800760D0/8014B248/8014DA2C/80148CAC rows. |
| 80149D68 | - | func_80149D68 | src/battle/gen484.c |  | battle confirm: 80075FE0/8007411C/80072068 rows with the 9644/6CF4/6558/8274 cell draws; 0x4D/0xD/0xD windows. |
| 80149EE0 | - | func_80149EE0 | src/battle/gen1311.c |  |  |
| 80149F20 | - | func_80149F20 | src/battle/gen304.c |  | battle item/help mix: 5574 gates (0x4D/0x5E), 80149D68 + 80168BC4 detail, 0x34C5 gate; then the 8014FEC8 stats rows with the L149FF0 poll ch |
| 8014A154 | - | func_8014A154 | src/battle/gen01679.c |  | jr $a0 : the ~46-entry battle item/action master table (invoked via the item menu). Each entry calls one sub-screen then jumps to L8014A478  |
| 8014A488 | - | func_8014A488 | src/battle/gen1310.c |  |  |
| 8014A4DC | - | func_8014A4DC | src/battle/gen01678.c |  | jr $a0 : twin of 8014A154 (same 46-entry battle item/action master table; entries jump to L8014A800 -> return). Handlers in index order: 801 |
| 8014A810 | - | func_8014A810 | src/battle/gen1224.c | Y |  |
| 8014A860 | - | - | - | Y |  |
| 8014A888 | - | func_8014A888 | src/battle/gen01459.c | Y |  |
| 8014A8B8 | - | - | - | Y |  |
| 8014A8E8 | - | func_8014A8E8 | src/battle/gen1223.c | Y |  |
| 8014A920 | - | - | - | Y |  |
| 8014A950 | - | - | - | Y |  |
| 8014A980 | - | - | - | Y |  |
| 8014A9B0 | - | func_8014A9B0 | src/battle/gen759.c | Y |  |
| 8014AA30 | - | - | - | Y |  |
| 8014AA68 | - | func_8014AA68 | src/battle/gen1109.c | Y |  |
| 8014AAA8 | - | func_8014AAA8 | src/battle/gen792.c |  | battle confirm: 8014C96C/8014AA68/8014B9B4/8014BA34 rows, 0x34C4/0x34C5/0x3522 texts; 6434(2) gate. |
| 8014AB70 | - | - | - | Y |  |
| 8014AB90 | - | - | - | Y |  |
| 8014ABB8 | - | - | - |  |  |
| 8014AC3C | - | func_8014AC3C | src/battle/gen723.c |  | battle call: 8014C96C/8014B9B4/8013E5D0/8013E2F8/8014BA34 rows; 0x34C4/0x34C5 texts with 6434(2) gates. |
| 8014AD24 | - | - | - | Y |  |
| 8014AD44 | - | func_8014AD44 | src/battle/gen614.c | Y |  |
| 8014ADD4 | - | func_8014ADD4 | src/battle/gen1158.c | Y |  |
| 8014AE1C | - | func_8014AE1C | src/battle/gen882.c | Y |  |
| 8014AEC4 | - | func_8014AEC4 | src/battle/gen01677.c |  |  |
| 8014AF3C | - | func_8014AF3C | src/battle/gen1001.c | Y |  |
| 8014AF74 | - | func_8014AF74 | src/battle/gen791.c |  | battle rows: 0x34C5/0x34C4/0x49 texts; gates 6434(2) route 801420D4 vs the 8014B9B4/8014B044 row block. |
| 8014B044 | - | func_8014B044 | src/battle/gen963.c |  | battle rows: 0x3523 text; loop L14B058 on 54D4(3B04(0x3523))/ 5958(8). |
| 8014B0D8 | - | func_8014B0D8 | src/battle/gen1108.c | Y |  |
| 8014B118 | - | - | - |  |  |
| 8014B188 | - | - | - | Y |  |
| 8014B1A8 | - | - | - | Y |  |
| 8014B1D0 | - | func_8014B1D0 | src/battle/gen1107.c | Y |  |
| 8014B248 | - | - | - |  |  |
| 8014B294 | - | func_8014B294 | src/battle/gen639.c | Y |  |
| 8014B334 | - | func_8014B334 | src/battle/gen01458.c | Y |  |
| 8014B36C | - | func_8014B36C | src/battle/gen665.c | Y |  |
| 8014B3FC | - | func_8014B3FC | src/battle/gen01676.c | Y |  |
| 8014B42C | - | - | - | Y |  |
| 8014B454 | - | func_8014B454 | src/battle/gen501.c |  | battle item cell: 0x49/0x8 windows, 8014B294/801490CC/8014B5A8/ 80141FEC/800953F4 rows; 8058(0x10) gate. |
| 8014B5A8 | - | func_8014B5A8 | src/battle/gen1309.c | Y |  |
| 8014B5F8 | - | - | - | Y |  |
| 8014B620 | - | - | - | Y |  |
| 8014B648 | - | func_8014B648 | src/battle/gen1106.c | Y |  |
| 8014B698 | - | - | - | Y |  |
| 8014B6C0 | - | - | - | Y |  |
| 8014B6E8 | - | func_8014B6E8 | src/battle/gen638.c |  | battle item: 801442BC/8014B98C/80148CAC/800953F4 preps; loop L14B738 (6D70(0x29C5)/5A90(5) gates), closes 8014DA2C/8014D568. |
| 8014B804 | - | - | - | Y |  |
| 8014B82C | - | - | - | Y |  |
| 8014B854 | - | - | - | Y |  |
| 8014B884 | - | - | - | Y |  |
| 8014B8AC | - | func_8014B8AC | src/battle/gen758.c | Y |  |
| 8014B914 | - | - | - | Y |  |
| 8014B93C | - | - | - | Y |  |
| 8014B964 | - | func_8014B964 | src/battle/gen01457.c | Y |  |
| 8014B98C | battle_row_f2a0 | - | - | Y |  |
| 8014B9B4 | - | func_8014B9B4 | src/battle/gen1000.c | Y |  |
| 8014B9FC | - | func_8014B9FC | src/battle/gen1157.c | Y |  |
| 8014BA34 | - | func_8014BA34 | src/battle/gen01675.c |  |  |
| 8014BAA4 | - | func_8014BAA4 | src/battle/gen01674.c |  |  |
| 8014BB0C | - | func_8014BB0C | src/battle/gen1222.c | Y |  |
| 8014BB3C | - | func_8014BB3C | src/battle/gen1221.c | Y |  |
| 8014BB6C | - | func_8014BB6C | src/battle/gen01455.c | Y |  |
| 8014BB94 | - | func_8014BB94 | src/battle/gen10.c |  |  |
| 8014C114 | - | func_8014C114 | src/battle/gen01454.c | Y |  |
| 8014C13C | - | func_8014C13C | src/battle/gen219.c |  |  |
| 8014C4BC | - | func_8014C4BC | src/battle/gen722.c |  | battle rows: 0x1/0x40 windows, 80094D14 row; loop L14C4EC on 5958(0xC0). |
| 8014C57C | - | func_8014C57C | src/battle/gen757.c |  | battle rows: 0x1802 text, 8007259C/8014C664 rows; loops L14C5AC (5958(0x40)) and L14C62C (5C64(0x202)). |
| 8014C664 | - | func_8014C664 | src/battle/gen756.c |  | battle rows: loop L14C67C on 5958(0x40) with 80094D14 row. |
| 8014C714 | - | func_8014C714 | src/battle/gen721.c |  | battle rows: 0x1802 text, 8007259C + 8014C81C rows; loops L14C78C and L14C7DC (5958(0x40)). |
| 8014C81C | - | func_8014C81C | src/battle/gen755.c |  | battle rows (twin with 0x2 window): loop L14C834 on 5958(0x40). |
| 8014C8CC | - | func_8014C8CC | src/battle/gen830.c |  |  |
| 8014C96C | - | func_8014C96C | src/battle/gen1220.c | Y |  |
| 8014C994 | - | func_8014C994 | src/battle/gen1219.c | Y |  |
| 8014C9CC | - | func_8014C9CC | src/battle/gen01673.c |  |  |
| 8014CA24 | - | func_8014CA24 | src/battle/gen11.c |  |  |
| 8014CE94 | - | func_8014CE94 | src/battle/gen962.c |  | battle rows: 4x 8768 cells (0x7612-0x77B6); loop L14CEAC on 5958(0x8C). |
| 8014CF14 | - | func_8014CF14 | src/battle/gen790.c |  | battle rows: 0x1802/0x7992-0x7B36 cells; gate 5574(0x10); loop L14CF64 on 5958(0x8C). |
| 8014CFC4 | - | func_8014CFC4 | src/battle/gen789.c |  | battle rows: 5574(2/3) gates route the 0xFF window fill; loop L14D038 on 5A90(0x10); 8014E424 detail. |
| 8014D080 | - | func_8014D080 | src/battle/gen829.c |  | battle cast rows: 801495D4/80074B98 preps, 4FAC(0x101) gate loop L14D0A0, 80073EB0/800744A0/800999A0/801495F4 close. |
| 8014D14C | - | func_8014D14C | src/battle/gen344.c |  | battle item-count: 0x26/0x28/0x2A windows, 4FAC(0x101) gate rows, 80072720 prep; loops L14D1B4 (5DA0(0x28)/5B8C(0x202)), L14D248 (row cells) |
| 8014D31C | - | func_8014D31C | src/battle/gen754.c | Y |  |
| 8014D394 | - | func_8014D394 | src/battle/gen788.c | Y |  |
| 8014D414 | - | func_8014D414 | src/battle/gen01453.c | Y |  |
| 8014D43C | - | - | - |  |  |
| 8014D490 | - | func_8014D490 | src/battle/gen01452.c |  | battle rows: 0x1813 text + 0x07 cells; D54 <- D44 copy then 8014D4D4. |
| 8014D4D4 | - | func_8014D4D4 | src/battle/gen01451.c | Y |  |
| 8014D500 | - | - | - | Y |  |
| 8014D528 | - | - | - | Y |  |
| 8014D548 | - | - | - | Y |  |
| 8014D568 | - | func_8014D568 | src/battle/gen1105.c | Y |  |
| 8014D5A0 | - | func_8014D5A0 | src/battle/gen613.c |  | battle confirm: 5574(0x31/0x33)/6434(0x80) gates pick the 0x80/0xC0/0x40 colors, 80177DAC commit. |
| 8014D680 | - | func_8014D680 | src/battle/rows3.c |  | battle rows: 8014D5A0 row; gate 5574(0xFF) picks the 960C/95A0 tail. |
| 8014D708 | - | - | - | Y |  |
| 8014D728 | - | - | - | Y |  |
| 8014D748 | - | func_8014D748 | src/battle/gen1104.c | Y |  |
| 8014D780 | - | func_8014D780 | src/battle/gen339.c |  | battle item flow: 4248(8)/4120(2) gate routes to 8014D748 rows vs the 0x20/0x4200 alt rows; L14D7F8 renders 6CF4/81B0 cells and closes with  |
| 8014D96C | - | - | - | Y |  |
| 8014D98C | - | func_8014D98C | src/battle/gen881.c |  | battle rows: gates 6434(2)/4280/4120(0x202) route the 800760D0 0xF row; closes with 6240. |
| 8014DA2C | - | func_8014DA2C | src/battle/screen_i.c |  |  |
| 8014E38C | - | func_8014E38C | src/battle/gen587.c | Y |  |
| 8014E424 | - | func_8014E424 | src/battle/gen56.c |  |  |
| 8014E75C | - | func_8014E75C | src/battle/gen922.c | Y |  |
| 8014E7C4 | - | func_8014E7C4 | src/battle/gen358.c |  | battle item rows: 0x8/0x50/0x22/0xFF/0x3E windows, 8014D568 + 8014E984 rows; two 7F48(3C3C)/3F38(3B04) cell blocks. |
| 8014E984 | - | func_8014E984 | src/battle/gen1308.c | Y |  |
| 8014E9C4 | - | - | - |  |  |
| 8014EA0C | - | func_8014EA0C | src/battle/gen828.c |  | battle rows: 0x2 window; loop L14EA34 on 4FAC(0x101)/5958(5). |
| 8014EAE4 | - | func_8014EAE4 | src/battle/gen1218.c |  | jr $a0 : the 9-entry battle item-cast table. Each entry calls one effect then jumps to L14EC08 (return). Handlers in index order: 8014ED40,  |
| 8014EC18 | - | func_8014EC18 | src/battle/gen1051.c | Y |  |
| 8014EC68 | - | func_8014EC68 | src/battle/gen1103.c | Y |  |
| 8014EC98 | - | func_8014EC98 | src/battle/gen1156.c | Y |  |
| 8014ECC8 | - | func_8014ECC8 | src/battle/gen1102.c | Y |  |
| 8014ED10 | - | func_8014ED10 | src/battle/gen1101.c | Y |  |
| 8014ED40 | - | func_8014ED40 | src/battle/gen1100.c | Y |  |
| 8014ED88 | - | func_8014ED88 | src/battle/gen1099.c | Y |  |
| 8014EDD0 | - | func_8014EDD0 | src/battle/gen1050.c | Y |  |
| 8014EE20 | - | func_8014EE20 | src/battle/gen273.c |  | battle status-cast: 0xE/0x10/0xD windows, 4FAC(0x101) gate loops (L14EE88 stat rows, L14EF60 scroll, L14F030 alt), 6DE8/922C/89D4 cell draws |
| 8014F0BC | - | func_8014F0BC | src/battle/gen319.c |  | battle item-count detail: 8014EE20 row, 80148CAC close, 8014FA4C sub-list, 8014F2CC/8014F7A8 row handlers; loop L14F1CC picks rows on 4FAC k |
| 8014F2CC | - | func_8014F2CC | src/battle/gen235.c |  |  |
| 8014F7A8 | - | func_8014F7A8 | src/battle/gen87.c |  | battle item-count screen: 0x18 window, 0x18/0x19 rows, 0x6CC0 gate picks the 300/301 vs 769/770/771 count cells; loop L14F850 (6434(2)) poll |
| 8014FA4C | - | func_8014FA4C | src/battle/gen36.c |  |  |
| 8014FE84 | - | - | - |  |  |
| 8014FEC8 | - | func_8014FEC8 | src/battle/gen35.c |  |  |
| 80150364 | - | func_80150364 | src/config/gen01450.c |  | rows: 3C3C + v0 spin loop L1503C0. |
| 80150400 | - | func_80150400 | src/config/gen1217.c | Y |  |
| 80150458 | - | func_80150458 | src/config/gen292.c |  | battle cast flow: 8007259C gates, L1504A8 spin loop, then the stat block (8E50/4264/81B0 cells) and the L150578 scan loop with 5D24/5B8C(2)  |
| 80150610 | - | func_80150610 | src/config/gen880.c |  | battle rows: 0x3FF/0x2/0xC windows, 8007411C row. |
| 801506BC | - | - | - |  |  |
| 8015084C | - | func_8015084C | src/config/gen586.c |  | battle splash: 80194394/801928E8/801942FC/801506BC preps; loop L15089C renders 0x2100/0x420C/0x420B icons and closes via 80150C58; redraws o |
| 80150A30 | - | func_80150A30 | src/config/gen521.c |  | battle splash: 0x30 window, 0x7E window, 801582D8 row; linear render + 0x30 icon set. |
| 80150B88 | - | func_80150B88 | src/config/gen827.c |  | options rows: 0x353E/0x353F texts, 80150C38 row; gates 5F20(0x202)/5574(2)/6434(0x202). |
| 80150C38 | gpu_driver_run_b | - | - | Y |  |
| 80150C58 | - | func_80150C58 | src/config/screen_b.c |  |  |
| 80151C0C | - | func_80151C0C | src/config/gen01449.c |  | options row: 0x39F0 text read; v1/v0 gate tree dispatches 8015BB9C / 8005A424 / 8015E84C / 8015D1C8. |
| 80151CD8 | - | func_80151CD8 | src/config/gen234.c | Y |  |
| 80151F28 | - | func_80151F28 | src/config/gen265.c |  |  |
| 80152224 | config_banner_96 | - | - |  | config banner: 0x96/0x97 windows, 0x3947-0x394B texts, 8015254C rows; gates 58BC(0xFF)/54D4(3C3C(0x96)); loop on 5574(0xFF). |
| 8015236C | - | func_8015236C | src/config/gen01672.c |  |  |
| 8015240C | options_row_run | - | - |  | options: 3C3C(0x394D)/3B04 rows; 971C close. |
| 8015254C | - | func_8015254C | src/config/gen1155.c |  | options: 3B04(0x2000) gates; v0 run -> L152614 / L152630. |
| 80152640 | - | func_80152640 | src/config/gen787.c |  | shop rows: 0x82/0x80/0xE5 windows; loop L152690 on 67FC(0x80)/5574(0xFF) gates; closes via 63BC. |
| 801526F8 | - | func_801526F8 | src/config/gen786.c |  | shop rows: 0xE1/0xE5/0xDF windows, 8015240C row + 0xE3; loop L15275C on 56AC(3C3C(0xE5)). |
| 801527AC | - | func_801527AC | src/config/gen1216.c |  |  |
| 80152808 | - | func_80152808 | src/config/gen1154.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152894 | - | func_80152894 | src/config/gen1153.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152908 | - | func_80152908 | src/config/gen1152.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152994 | - | func_80152994 | src/config/gen1151.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152A20 | - | func_80152A20 | src/config/gen1150.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152AAC | - | func_80152AAC | src/config/gen1149.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152B38 | - | func_80152B38 | src/config/gen1148.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152BC4 | - | func_80152BC4 | src/config/gen1147.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152C50 | - | func_80152C50 | src/config/gen1146.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152CDC | options_rows_run | - | - |  | options: 3C3C/3B04(0x2000) gates; 4x 8015240C + 8015236C rows. |
| 80152DE4 | - | func_80152DE4 | src/config/gen879.c | Y |  |
| 80152E54 | - | func_80152E54 | src/config/gen999.c | Y |  |
| 80152EAC | - | func_80152EAC | src/config/gen753.c | Y |  |
| 80152F0C | - | func_80152F0C | src/config/gen443.c |  |  |
| 80153074 | - | func_80153074 | src/config/gen01447.c | Y |  |
| 80153098 | - | func_80153098 | src/config/gen01446.c |  |  |
| 801530E0 | - | func_801530E0 | src/config/gen1215.c | Y |  |
| 8015310C | - | func_8015310C | src/config/gen01671.c |  | rows: buffer[0x1530:31] s16 + D40[0] -> stored back at 0x1598:99. |
| 8015316C | - | func_8015316C | src/config/gen1214.c | Y |  |
| 8015319C | - | func_8015319C | src/config/gen01445.c | Y |  |
| 801531CC | - | - | - |  |  |
| 80153218 | - | - | - |  |  |
| 80153264 | - | func_80153264 | src/config/gen1098.c | Y |  |
| 8015329C | config_row_5329c | - | - | Y |  |
| 801532D4 | - | func_801532D4 | src/config/gen1096.c | Y |  |
| 8015330C | - | func_8015330C | src/config/rowpair.c |  | rows: u16 D44<->D54 swap chain with 5410/971C. |
| 80153374 | option_row_d4 | - | - | Y |  |
| 801533BC | - | func_801533BC | src/config/gen998.c | Y |  |
| 801533FC | - | func_801533FC | src/config/gen752.c |  | options: 0xA9/0xAB windows, 0x1800/0x1801 texts; loop L153430 on 67FC(0xAB)/54D4(3B04) gates. |
| 801534D8 | - | func_801534D8 | src/config/gen997.c | Y |  |
| 80153518 | - | func_80153518 | src/config/gen637.c |  | options: 0x2003-0x2006 cells with 0x38BF-0x38C1 stats, 8015330C row; loop L153560 on 5A90(0xF). |
| 80153608 | - | func_80153608 | src/config/gen18.c |  |  |
| 801539C4 | final_row | - | - |  | CONFIG MENU root (344 calls): register gate ladder; linear call chain with constants from asm, in order. |
| 801548F4 | - | func_801548F4 | src/config/screen_d.c |  |  |
| 80155658 | - | func_80155658 | src/config/gen559.c |  | options row: 0x8A window, 0x29B5/0x29CD/0xDF/0xE1/0xE3/0x2003/ 0x29EB texts, 8015240C row; 5B2C(3B04(0xA9))+5D24(0x29CD) gates. |
| 80155778 | - | func_80155778 | src/config/screen_z.c |  |  |
| 80155C88 | - | func_80155C88 | src/config/rowb.c |  |  |
| 80156480 | - | func_80156480 | src/battle/screen_p.c |  |  |
| 801569EC | - | func_801569EC | src/battle/screen_j.c |  |  |
| 80157148 | - | func_80157148 | src/config/gen785.c |  | options rows: 0xDF/0xE1/0xE3 windows, 0x289C cell, 8015240C row; loop L15718C on 5A90(0x83). |
| 801571DC | - | func_801571DC | src/config/screen_m.c |  |  |
| 801577D0 | - | func_801577D0 | src/config/gen459.c |  | options grid: 0x16A8 gate picks the 0x2001-0x2201 row fill vs reversed order; fully parallel to 8016571C's tail. |
| 80157948 | - | func_80157948 | src/config/rowd.c |  | options value screen: 0xCD window, 0x3540/0xDF/0xE1/0xE3/0x2003 gates, 8015240C/8015A374/80153374 rows; loop L157978 on 5574(5)/53D4. |
| 80157AD0 | - | func_80157AD0 | src/config/gen585.c |  | status/panel loop: renders stat panels (971C/9660(0x20)/9644 window-op triples) each iteration; a0/v1 regcmp gates pick the two-pass vs one- |
| 80157F30 | - | func_80157F30 | src/config/gen382.c |  | options screen: 0xD1/0x38F6/0x35EB texts, 0xA9/0xAB/0xAE windows, 801580B0 row; loops L157F58 (5574(0xFF)) and L157FE0 (4FAC(0x101) rows). |
| 801580B0 | - | func_801580B0 | src/config/gen612.c |  | options: 0xA9/0xD2/0xAD/0xAF windows, 0x2A04/0x3598 texts, 80152CDC/8015310C rows; gates 7918(0x202)/4120(2). |
| 80158190 | - | func_80158190 | src/config/gen431.c |  | options screen: 0xD2 window + 0x38F6/0x35D8 texts, 80152CDC + 8015310C rows; 5574(0xD) ladder picks 0x352E codes via 4120(0x202)/53C0 gates. |
| 801582D8 | - | func_801582D8 | src/config/gen483.c |  | ability plot: 0x3975 text, 0xA7/0xA6 windows, 80151CD8/ 801571DC/80155778/801583FC rows; loop L158374 on 5A90(0x40). |
| 801583FC | - | func_801583FC | src/config/rowe.c |  |  |
| 8015902C | - | func_8015902C | src/config/optionsfull.c | Y |  |
| 8015A094 | - | func_8015A094 | src/config/gen961.c | Y |  |
| 8015A0F4 | - | func_8015A0F4 | src/config/gen272.c | Y |  |
| 8015A284 | - | - | - |  |  |
| 8015A30C | - | func_8015A30C | src/config/gen1095.c | Y |  |
| 8015A344 | - | func_8015A344 | src/config/gen1213.c | Y |  |
| 8015A374 | options_value_table | - | - |  | options value table: 0x3558/0x2060/0x2061/0x203B texts, 0xA9/ 0xAA windows, 80152CDC header; the 10-entry jr-a0 dispatch picks 8015A524 / 80 |
| 8015A524 | - | func_8015A524 | src/config/gen1094.c | Y |  |
| 8015A56C | options_cursor_cells | - | - |  | options: s16 cursor from buf[0xAB:AC], sign-clean 0x8000, latched into buf[0xD4:D5]. |
| 8015A5B8 | - | func_8015A5B8 | src/config/gen01444.c | Y |  |
| 8015A614 | - | func_8015A614 | src/config/gen878.c | Y |  |
| 8015A670 | - | func_8015A670 | src/config/gen877.c | Y |  |
| 8015A6CC | - | func_8015A6CC | src/config/gen876.c |  | options rows: 0x1F/0xA9/0xAA windows, 0x388B text, 8015ABEC/8015A56C rows; 6434(2) gate. |
| 8015A784 | - | func_8015A784 | src/config/gen473.c |  | options value row: 0x3558/0x202F/0x2018 texts, 0xAD/0xA9/0xAA/ 0xAB windows, 8015ABEC/8015254C/8015A56C rows; 6434(2) gate picks the 0x3558/ |
| 8015A89C | - | func_8015A89C | src/config/gen1049.c |  | options: 0x3558/0x2016 texts, 0x202F cell, 8015ABEC/8015A56C rows; gate 6434(2). |
| 8015A91C | - | func_8015A91C | src/config/gen720.c | Y |  |
| 8015A9BC | - | func_8015A9BC | src/config/gen01443.c |  | options: 3C3C/3B04(0x2000) gates; 8015240C/8015ABEC/ 8015A56C rows. |
| 8015AA6C | - | func_8015AA6C | src/config/gen875.c | Y |  |
| 8015AACC | - | func_8015AACC | src/config/gen1306.c |  | options: 3C3C/3B04(0x2000)/3B9C gates; s0/v0 latch picks 8015A5B8 vs 8015236C/8015254C rows; closes 8015ABEC/8015A56C. |
| 8015ABEC | options_rows_b | - | - |  | options: 3C3C/3B04(0x2000) + 8015236C/8015254C rows. |
| 8015AC7C | - | func_8015AC7C | src/config/gen216.c |  |  |
| 8015B078 | - | func_8015B078 | src/config/gen285.c |  | config status row: 0xA9/0xAA/0xAF windows, 0x1822 text, 0x2001 gate; 80152CDC/8015B284 renders; loops L15B0DC (7A40/5C64) and L15B14C (6434( |
| 8015B284 | - | func_8015B284 | src/config/gen419.c |  | config row: 0x353D text, 0xE5/0x82/0xAB/0xAC windows, 801526F8 header; 5574 ladders (0x6D/0xDE/0xB0) route the 43A0(0xA9)/41E8(0x202) gates. |
| 8015B3F4 | - | func_8015B3F4 | src/config/gen1212.c |  | options: 3C3C/3B04(0x2000)/3B04 gates; 8015B6FC rows and the regcmp-loop with 80150C38 icon rows. |
| 8015B6FC | - | func_8015B6FC | src/config/gen303.c |  | config status row: 0xB5 window + 0x3303 text; 5574 key ladder (5/8/C/10 codes) routes to 8015B8E4 (detail row), then the 0xB3/0xB4 cursor ce |
| 8015B8E4 | - | func_8015B8E4 | src/config/gen55.c |  | config status-row screen. 5574 key-codes 8/C/10 pick the row variant; tails L5BB84 (close B3) and L5BB8C (return) are shared. |
| 8015BB9C | - | func_8015BB9C | src/config/gen01441.c |  | options: 3C3C/3B04(0x2000)x2 gates; a0 latches; 80152CDC/ 8015310C/8015C54C rows; returns at L15BD1C. |
| 8015BD34 | - | func_8015BD34 | src/config/gen34.c |  |  |
| 8015C1B0 | - | func_8015C1B0 | src/config/gen01669.c |  |  |
| 8015C220 | - | func_8015C220 | src/config/gen243.c |  |  |
| 8015C54C | - | func_8015C54C | src/config/gen500.c | Y |  |
| 8015C604 | - | func_8015C604 | src/config/screen_s.c |  |  |
| 8015CB80 | - | func_8015CB80 | src/config/gen539.c |  | options seed row: 0x393B/0x393A texts, 0xA9/0xAD/0xAB windows, 80152EAC/8015CC80 rows; 5C64(2) gate. |
| 8015CC80 | - | func_8015CC80 | src/config/gen611.c |  | options save-row: 0xAA window, 0xA9/0x2003 rows, 80153074; loop L15CC90 on 54D4(3C3C(0xAB)). |
| 8015CD98 | - | func_8015CD98 | src/config/gen520.c |  | options seeds: 0xD0/0x393D/0x393F/0x3932 windows/texts, 0xAB/0xAD rows, 8015236C/80152DE4/8015240C; ends on 0xA6/0x2065/0x2066 cells. |
| 8015CEA0 | - | func_8015CEA0 | src/config/gen664.c | Y |  |
| 8015CF18 | - | func_8015CF18 | src/config/gen418.c |  | options screen: 0x321B/0x321C texts, 80150C38 row; loop L15CF60 (5958(0xC0)) with the 5574(0xCE)/53D4 and 53C0 ladders. |
| 8015D0B8 | - | func_8015D0B8 | src/config/gen636.c |  | options seeds: 0x1822/0x38FC/0x3975 texts, 0x32ED-0x32F0 cells, 80152908/80152CDC/8015A284/80155778/801583FC rows; 6434 gates. |
| 8015D1C8 | - | func_8015D1C8 | src/config/gen874.c |  | options dispatch: 8005A234 prep, 0xD2/0xD3 windows, 0xAB/0x3598/ 0x3535 texts; the 6-entry jr-a0 table selects the value-row: 8015D310 / 801 |
| 8015D310 | - | func_8015D310 | src/config/gen610.c |  | options row: 0xA6/0x2005/0x3530 windows/cells, 0x2A06/0x29EB cells, 8015310C row; 6434 gate. |
| 8015D3E8 | - | func_8015D3E8 | src/config/gen695.c | Y |  |
| 8015D450 | - | - | - |  |  |
| 8015D4C8 | - | func_8015D4C8 | src/config/gen284.c |  | options/volume screen: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006 gates, 0x2B2A/0x2B2B/0x3535 texts, 0x2A04-0x2A06 cells, 80152BC4 + 80061C8 |
| 8015D6C0 | - | func_8015D6C0 | src/config/gen331.c |  | options detail: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006/0x2004 gates, 0x29EB/0x29E4 texts, 0x29C4/0x29F4 cells + 0x3535 title; confirm pa |
| 8015D878 | - | - | - |  |  |
| 8015D8F0 | - | func_8015D8F0 | src/config/gen826.c |  | options rows: 0xA6/0x2005/0x29EB cells, 0xD2 window; gates 4120(0x202)/6434(0x80). |
| 8015D9A8 | - | func_8015D9A8 | src/config/valview.c |  | options main: gates on (v1/v0) branches with 8005A234 + 80152CDC/8016E870; L15DA08 detail loop, L15DBA0/L15DC2C refresh loops, 80150C38 icon |
| 8015DCA4 | - | func_8015DCA4 | src/config/gen52.c |  |  |
| 8015DFE0 | - | func_8015DFE0 | src/config/gen417.c |  | options row: 0xA6/0x90 windows, 0x2053/0x2054/0x3303 cells, 801531CC + 8015E158 + 8015319C/80153098 rows; loops L15E030 (5C64(0x202)) and L1 |
| 8015E158 | - | func_8015E158 | src/config/gen54.c |  |  |
| 8015E464 | - | func_8015E464 | src/config/gen330.c |  | options stat row: 0xA6/0xA9/0xAB/0xE3/0xA6 windows, 0x2050-0x2053 cells, 80152224 + 8015240C + 80153098/8015316C rows; loop L15E4BC polls 64 |
| 8015E66C | - | func_8015E66C | src/config/gen1093.c | Y |  |
| 8015E6A4 | - | func_8015E6A4 | src/config/gen1092.c | Y |  |
| 8015E6DC | - | func_8015E6DC | src/config/gen996.c |  | rows: 0x2050 text; D54 <- D44 copy + 971C; 80153098/ 7270(0xA6)/8768(0x2054)/71DC(1)/8D6C(0xD4). |
| 8015E758 | - | func_8015E758 | src/config/gen663.c |  | options row: 0x3540/0x2003 texts, 0xA9 window, 8015330C row; loop L15E7B4 on 6434(0x202)/4120(0x202) gates. |
| 8015E84C | - | func_8015E84C | src/config/gen825.c |  | options: 0x14/0x280/0x2001 cells, 80150C38/8015330C/80058554 rows; loop L15E890 on 5A90(8). |
| 8015E910 | - | func_8015E910 | src/config/gen694.c |  | options cast: 0x2703 text, 0xD6/0xCF windows, 8015A374 + 80153374 rows with 0x2A06/0x29EB/0x2B2A/0x2B2B cells. |
| 8015EA00 | - | func_8015EA00 | src/config/gen751.c |  | options: 80061860 prep, 0xA4 window, 0x270B/0x270D cells; gate 53C0 picks 658C(0x270D). |
| 8015EAB0 | - | func_8015EAB0 | src/config/gen1048.c | Y |  |
| 8015EB00 | - | func_8015EB00 | src/config/gen1211.c | Y |  |
| 8015EB70 | - | func_8015EB70 | src/config/gen1210.c | Y |  |
| 8015EBE0 | - | func_8015EBE0 | src/config/gen995.c |  | options: 0x38FE text, 80160AAC/80160B8C/80061860 preps with 8006508C/80065774 tails; gate 6434(). |
| 8015EC70 | - | func_8015EC70 | src/config/gen223.c |  |  |
| 8015F028 | - | func_8015F028 | src/config/gen392.c |  | options row: 0x354D/0x3550/0x2703/0x354F texts, 0xA9/0xAB windows, 801531CC/80160A4C/8015330C/8015240C rows; loops L15F090/L15F110. |
| 8015F1D0 | - | func_8015F1D0 | src/config/gen750.c |  | options: 0x2705/0x289D texts, 0xCF window, 0x2A04-0x2A06/0x29EB cells, 80152CDC/8015310C rows. |
| 8015F2B0 | - | func_8015F2B0 | src/config/gen519.c |  | options: 0x289D/0x38FE/0x2709/0x270A texts, 0xA9 window, 80160AAC/80160B8C/8006508C/8015254C rows; 6434/53C0 gates. |
| 8015F3E0 | - | func_8015F3E0 | src/config/gen364.c |  | options/music screen: 0x38FE gate, 0x2724/0x2704 texts, 0xAA/0xD6/ 0xCF windows, 80160AAC prep, 8006508C/801608C4/800654CC/ 8015A374/8015337 |
| 8015F5A0 | - | func_8015F5A0 | src/config/gen824.c |  | options: 0x3/0x5/0x28A4 texts, 0xA9 window, 80152224 row; loop L15F5E8 on 7CC8(3B04(0x28A4))/5C64(0x202); 80065774/ 80065534 gates. |
| 8015F660 | - | func_8015F660 | src/config/gen1047.c |  | options: 0x28A3/0x28A4 texts; 70BC(0x202) gate picks 80065534/80065774. |
| 8015F6F0 | - | func_8015F6F0 | src/config/gen873.c |  | options: 0x2/0x28A4/0x28A3 texts, 80152224/800F70BC/ 80065774/80065534 rows; 5C64(0x202) gate. |
| 8015F7B0 | - | func_8015F7B0 | src/config/rowf.c | Y |  |
| 8015F7E8 | - | func_8015F7E8 | src/config/gen823.c |  | options cast: 0x2706 text, 0xD6/0xCF windows, 8015A374 + 80153374 rows. |
| 8015F8B8 | - | func_8015F8B8 | src/config/gen01668.c |  |  |
| 8015F940 | - | func_8015F940 | src/config/gen960.c | Y |  |
| 8015F9A0 | - | func_8015F9A0 | src/config/gen01440.c |  |  |
| 8015FA20 | - | func_8015FA20 | src/config/gen1091.c | Y |  |
| 8015FA70 | - | func_8015FA70 | src/config/gen959.c |  | options: 8015254C row, 0x3949/0xA4/0xA5 texts; gate 53C0 + 5958(0x270F). |
| 8015FAF8 | - | func_8015FAF8 | src/config/gen1090.c | Y |  |
| 8015FB48 | - | - | - | Y |  |
| 8015FB70 | - | func_8015FB70 | src/config/gen994.c |  | options: 0x38E6/0x29B5 texts, 0x8A window, 8016046C row; loop L15FBA4 on 5574(0xFF). |
| 8015FBFC | - | func_8015FBFC | src/config/gen749.c | Y |  |
| 8015FC5C | - | - | - |  |  |
| 8015FCCC | - | func_8015FCCC | src/config/gen01439.c | Y |  |
| 8015FCEC | - | - | - | Y |  |
| 8015FCF4 | - | func_8015FCF4 | src/config/gen01438.c | Y |  |
| 8015FD14 | - | func_8015FD14 | src/config/gen416.c |  | options cast: 0x38E6/0x2703 texts, 0x2A06/0x353F/0x29EB cells, 0xD6/0xCF windows, 8015A374/80153374 rows; 6434/53C0 gates. |
| 8015FE98 | - | func_8015FE98 | src/config/gen39.c |  |  |
| 8016046C | - | func_8016046C | src/config/ports.c |  | options ports: 0x8A window, 0x29B5/0x29CD texts, 0x88/0xDF/0xE1/ 0xE3 windows, 0x2003-0x200A cells, 0xD6/0x88 windows, 8015240C/8015A374/801 |
| 801605D0 | - | func_801605D0 | src/shop/gen822.c |  | options: 0x280/0x29B5 cells, 0xB1/0xB2 windows, 54D4(3C3C) gates, 8015330C row; loop L160604 on 5A90(8). |
| 801606AC | - | func_801606AC | src/shop/gen1209.c | Y |  |
| 801606D4 | - | func_801606D4 | src/shop/gen921.c |  |  |
| 80160774 | - | - | - |  |  |
| 801607F4 | - | func_801607F4 | src/shop/gen719.c |  | options: 0x2000/0xA9/0x2A04-0x2A06 texts/windows, 8015330C/ 80152CDC/8015310C rows; loops L160824 and L160864. |
| 801608C4 | - | func_801608C4 | src/shop/gen920.c |  | options: 0x3554 text, 0xCE window, 80153074 row; gate 6434(0x202) picks the 0x3550/0x3523 variants. |
| 8016097C | - | func_8016097C | src/shop/gen609.c |  | options banner: 5574(0x3E/0x3F) ladders route the 0x5D/0x2/ 0xF8/0x26D4/0x26D2/0x3584 codes; 80152224 row. |
| 80160A4C | - | func_80160A4C | src/shop/gen1305.c |  |  |
| 80160AAC | - | func_80160AAC | src/shop/gen584.c | Y | options banner: 0x2726/0x2725/0x28A2/0x38FE texts; 4120 gates pick the 0xFE values. |
| 80160B8C | - | func_80160B8C | src/shop/gen784.c | Y |  |
| 80160C2C | - | func_80160C2C | src/shop/gen357.c |  | options help: 0x2770 gate, 0x2707/0x2709/0x359A/0x359D texts, 0x2710/0x2715 gates, 0xA9 window; 8015329C row; loop L160D3C (76BC(3C3C(0xA9)) |
| 80160DF8 | - | func_80160DF8 | src/shop/gen821.c |  | options: 0x38E6/0x2003/0x34CA/0x390A/0x33C2 texts. |
| 80160E88 | - | func_80160E88 | src/shop/gen16.c |  |  |
| 80161368 | - | - | - |  |  |
| 801613D0 | - | func_801613D0 | src/shop/gen291.c |  | options screen: 0xC1 window + 0x33C4 title, 0x321B/0x321A stat rows, 8015329C alt + 80150C38 + 80062B08 commits; loop L161428 polls 5574(0xC |
| 801615D0 | - | func_801615D0 | src/shop/gen264.c |  | options screen: 0x16/0x34C8 headers, 0x33C6/0x33C7/0x33C4 row texts, 0xCE/0xD3 windows; 8015329C alternative, 801526F8/8015240C detail, 8015 |
| 801617D8 | - | func_801617D8 | src/shop/gen635.c |  | options bars: 0x2001/0xA9/0xAA cells; loop L161820 on 5A90(5). |
| 80161900 | - | func_80161900 | src/shop/gen405.c | Y |  |
| 801619D8 | - | func_801619D8 | src/shop/gen1208.c | Y |  |
| 80161A00 | - | func_80161A00 | src/shop/gen86.c |  | options/config screen: 0xCD window + 3539 text gate (80152CDC), 0xA6/0x2003 cursor row; branch L161AC8 runs the 26D0-26D3/ 2050-2053 stat ce |
| 80161C48 | - | func_80161C48 | src/shop/gen1207.c | Y |  |
| 80161C88 | - | func_80161C88 | src/config/screen_x.c |  |  |
| 801621D0 | - | func_801621D0 | src/shop/gen482.c |  | options timer: 0xCE/0x357A/0x2006/0x3534/0x3303 windows/texts, 80152CDC + 80150C38 rows; loop L162238 on 5574(0x13). |
| 801622F0 | - | func_801622F0 | src/shop/gen481.c |  | options timer (alt): 0x1D/0x34C8/0x34C7/0x357A/0x2006/0x3534/ 0x3303 texts/windows, 80152CDC + 80150C38; loop L162360 on 5574(0x1D). |
| 801623F8 | - | func_801623F8 | src/shop/gen820.c | Y |  |
| 80162468 | - | func_80162468 | src/config/rowh2.c | Y |  |
| 80162490 | - | func_80162490 | src/shop/gen518.c |  | options: 0x390A/0x397B texts, 0xD6/0xCD windows, 8015A374 + 80153374 rows. |
| 80162558 | - | func_80162558 | src/shop/gen1144.c | Y |  |
| 801625A8 | - | func_801625A8 | src/shop/gen634.c | Y |  |
| 80162628 | - | func_80162628 | src/shop/gen919.c | Y | options: 80153218/8015329C rows; gate 5574(0x80) picks the 0x34CA/0x26D2 variants. |
| 801626B8 | - | func_801626B8 | src/shop/gen458.c |  | options counter: 0xA6/0x2006/0x3534/0xA9/0xCD windows, 0x3303/ 0x3302 texts, 80150C38 row; loop L162700 on 5574(9/5). |
| 801627F8 | - | func_801627F8 | src/shop/gen430.c |  | options stat row: 0xA6/0x2006/0x3534/0xA9 windows, 0x3303/ 0x3302 texts, 80150C38 row; loop L162830 on 5574(5). |
| 80162918 | - | func_80162918 | src/shop/gen429.c |  | options banner: 0x2683 gate; 5574 ladder (0xC0/0x80/0x40 codes) with 80153218 one-shot, ending 0x26D2/0x34C8/0x34C7 + 0x34CA via 80062B08/80 |
| 80162A70 | - | func_80162A70 | src/shop/gen442.c |  | options music: 0xCD/0xCE windows, 0x33C4/0x34CA/0x352E/0x2005/ 0x2051/0x2A2A texts, 8015329C/80153374 rows; 6434(0x80) gate. |
| 80162BD0 | - | func_80162BD0 | src/shop/gen517.c |  | options row: 8005FFEC prep, 0xCD/0x2005/0x357F windows/texts, 80152CDC row; 6434 gate closes with 0x33A2-0x33A5 codes. |
| 80162CD8 | - | func_80162CD8 | src/shop/gen01667.c |  |  |
| 80162D20 | - | func_80162D20 | src/shop/gen583.c |  | options timeline: 0xCD window, 0x2009/0x2007/0x2003 gates, 80152BC4/80162DF8 rows; 53C0/6434(0x80) gates. |
| 80162DF8 | - | func_80162DF8 | src/shop/gen04.c |  |  |
| 8016343C | - | func_8016343C | src/shop/gen46.c |  |  |
| 80163774 | - | func_80163774 | src/shop/gen748.c | Y | options: 0x11/0x34C8/0x34C7/0xA6/0x2017 texts, 8015329C row; gate 5574(0x63). |
| 8016380C | - | func_8016380C | src/shop/gen428.c |  | options value: 0x34C8/0x34C7 titles, 0xA6/0x202F/0xA9/0xAB windows, 80152CDC + 8015329C rows; loop L16386C on 5574(0xD). |
| 80163950 | - | func_80163950 | src/shop/gen266.c |  | options row screen: 5574 key ladder (0xDE/0xB0/0x6D/0x61 codes) routes to the 0x289C/0x289F stat rows (801526F8 header, 80152BC4 detail, 0x3 |
| 80163B88 | - | func_80163B88 | src/shop/gen318.c |  | options confirm: 0x2683/0x2684/0x2685/0x26D2/0x26D0/0x26D5 texts, 80163D68 alt, 80062B08 commit; key ladders 0xCA/0xB0/ 0x61 codes. |
| 80163D68 | - | func_80163D68 | src/shop/gen371.c |  | options dialog: 0xE5/0x33C4/0x38ED/0x3584 texts, 80152224/ 8015240C/80153098; loop L163E1C polls 6434(0x514)/4120(0x202) gates; 0xDF/0xE1/0x |
| 80163F68 | - | func_80163F68 | src/config/screen_a.c |  |  |
| 8016501C | - | func_8016501C | src/shop/gen239.c |  |  |
| 801652FC | - | func_801652FC | src/config/statusview.c |  | options status: 0xB5/0xB6 windows, 0xA6 row, 0xB1/0xAF/0xB0/0xB3 cells, 80152BC4/80152224 rows; 53C0 gate (0x1000 text). |
| 8016543C | - | func_8016543C | src/shop/gen70.c |  | options sub-screen: 0x289C/0x289D/0x291C stat rows, 0xB5/0x9A/0xB9/ 0xB3/0xB7 windows; 80152640 intro, 8015240C detail; three loops. |
| 8016571C | - | func_8016571C | src/shop/gen33.c |  | options stat screen: 0x2041/0x203D/0x38BF/0x2003/0x2004/0x2006 texts, 8015330C row; loops L165764 (5A90(0xF)), L165838 (scroll), L16593C (0x |
| 80165B94 | - | func_80165B94 | src/shop/gen1304.c |  | shop: 3B04/3C3C(8) gates; s0/a0+s0/s4 latch loops with 80165C7C rows; 5410 tail. |
| 80165C7C | - | func_80165C7C | src/shop/gen01666.c |  | shop: 3C3C row. |
| 80165D60 | - | func_80165D60 | src/config/rowj2.c |  |  |
| 80166218 | - | func_80166218 | src/shop/gen391.c |  | battle cast flow: 8014D528/8016762C preps, loops L1662EC (5A90(0x40)) and L16638C (70174/4120(0x202) rows), 80166458 row; 0x5E window + 0x10 |
| 80166458 | - | func_80166458 | src/shop/gen390.c |  | battle cast rows: 0x2/0x4 windows, 0x7600 cells, 6658/89D4/ 5DD4(2) reads; loop L1664D0 on 5A90(0x230). |
| 801665C0 | - | func_801665C0 | src/shop/gen263.c |  | options/status band: 0x12/0x13/0x10/0x14/0x11 windows, 78C4 (3C3C(0x1A)) heading, 6434(2)/5B8C(0x202) gates. |
| 801667F0 | - | func_801667F0 | src/shop/gen993.c |  | battle rows: 0x4E window + 6C68/8960/63BC cells; loop L166844 on 5A90(0x20). |
| 8016688C | - | func_8016688C | src/shop/gen01665.c |  |  |
| 801668EC | - | func_801668EC | src/shop/gen01664.c |  |  |
| 8016694C | - | func_8016694C | src/shop/gen01437.c |  | shop rows: 0x13 window + 0x03 cells; D54 <- D44 copy then D40 <- D_8019A12C[D54] via 8014D528. |
| 801669BC | - | func_801669BC | src/shop/gen404.c |  | battle confirm flow: 0x42/0x38BE/0x38BD texts, 8016694C/80166B80/ 8016762C/80140944 preps, L166A44 loop with 70174/7534 gates and 80140310/8 |
| 80166B80 | - | func_80166B80 | src/shop/gen1089.c | Y |  |
| 80166BF8 | - | func_80166BF8 | src/shop/gen1046.c | Y |  |
| 80166C50 | - | func_80166C50 | src/shop/gen1045.c | Y |  |
| 80166CA8 | - | func_80166CA8 | src/shop/gen718.c |  | shop rows: 0x1D window + 4248(0x30/0x20) gates route the 0xB8 window fills. |
| 80166DB8 | - | func_80166DB8 | src/shop/gen992.c |  |  |
| 80166E58 | - | func_80166E58 | src/shop/gen1143.c |  | shop: 3C3C/3B04(0x2000)x2 gates; s0/v0 + a1/v0 latch loops with 9330/95A0 rows. |
| 80166FB8 | - | func_80166FB8 | src/shop/gen872.c |  | options rows: 0x2001/0x41 cell; 5574(0xF) gate picks the 5CCC vs 8768 paths. |
| 80167074 | - | func_80167074 | src/shop/gen1142.c |  | shop: 3B04 gate; 5410 loop on s0/v1 latch. |
| 8016711C | - | func_8016711C | src/shop/gen1088.c |  | battle: 3B04(0x1000/0x2000)x3 gates; 80167074 rows; a0/a1 regcmp latch loop; 5480 tail. |
| 801671E4 | - | func_801671E4 | src/shop/gen356.c |  | battle stat row: 0x1802 text, 0x2A window with 5024 cells (5 copies), 6434(0x202)/4120(2) gates; loop L167364 (5DA0/ 5B8C(0x202)). |
| 801673C4 | - | - | - | Y |  |
| 801673CC | - | func_801673CC | src/shop/gen355.c |  | battle row: 0xE/0x1C/0x10 windows, 6434(2) gate routes the 0x1C cursor read; 63F8/6130 cells, 5574/53D4 ladders. |
| 8016752C | - | func_8016752C | src/shop/gen871.c | Y |  |
| 801675A4 | - | func_801675A4 | src/shop/gen01436.c | Y |  |
| 80167604 | - | func_80167604 | src/shop/gen01663.c | Y |  |
| 8016762C | - | func_8016762C | src/shop/gen1206.c | Y |  |
| 80167664 | - | func_80167664 | src/shop/gen783.c |  | battle anim loop: 80167774/8014A488/80148C8C preps; L1676DC alternates 80140994/8014096C/80140944/801409BC/801409E4 with 80167604; closes vi |
| 80167774 | - | func_80167774 | src/shop/gen782.c |  | battle rows: 0x70174/8FB8/71DC preps, 5B2C(3B04) check; loops L167798 and L167780 on 5958(0x12)/6434(0x202). |
| 80167844 | - | func_80167844 | src/shop/gen781.c |  | battle rows (twin with 6048): 0x70174/8FB8/71DC preps; loops L167868 and L167850 on 5958(0x12)/6434(0x202). |
| 80167914 | - | func_80167914 | src/shop/gen1141.c |  | shop: 3C3C/3B04 x3 gates; t0/t1 regcmp latch loop; returns at L167A14. |
| 80167A34 | - | func_80167A34 | src/shop/gen633.c |  | battle rows: 0x4E window, 0x70174/80140310 rows; loop L167A74 on 5574(0x40)/5A90 gates. |
| 80167B48 | - | - | - |  |  |
| 80167BA0 | - | func_80167BA0 | src/config/rowk2.c |  | battle cast driver: 80167DD4 anim rows, 8014096C cast, 80167E44 status block; loops L167BDC/L167C20/L167C70/L167CB0/L167D24. |
| 80167DD4 | - | func_80167DD4 | src/shop/gen747.c | Y |  |
| 80167E44 | - | func_80167E44 | src/shop/gen82.c |  | battle class/status screen: 1/2/4/5 windows with 6C68 draws, inner row loop L167F70 (6EA8 + 340-343 gates, 80168118 row commits); outer loop |
| 80168118 | - | func_80168118 | src/shop/gen1087.c | Y |  |
| 80168148 | - | func_80168148 | src/shop/gen1140.c |  |  |
| 801681C0 | - | func_801681C0 | src/shop/gen1086.c |  | shop: 3C3C/3B04(0x2000)/3B9C gates; 971C loop on s2 latch. |
| 8016838C | - | func_8016838C | src/shop/gen01435.c |  | shop: 3B04(0x7000) x2 + v1/t0 latch loop. |
| 80168400 | - | func_80168400 | src/config/cells.c | Y |  |
| 80168438 | - | func_80168438 | src/config/cells2.c |  |  |
| 80168474 | - | func_80168474 | src/shop/gen01434.c | Y |  |
| 801684AC | - | func_801684AC | src/shop/gen65.c |  | config status text screen: 0x4219/0x421B choose header, 0x38D9 the detail row; 80168400/80168474/8016838C draw the option rows. |
| 80168750 | - | func_80168750 | src/shop/gen227.c |  |  |
| 80168B94 | - | func_80168B94 | src/shop/gen1303.c | Y |  |
| 80168BC4 | - | func_80168BC4 | src/shop/gen96.c |  | config help/credits: 0x180F/0x1813/0x1900 texts; key confirms (5574 0xD/0x10, 13/10 ladders), two scroll loops (L168D60/ L168DD8 on 5A90(4/0 |
| 80168E30 | - | func_80168E30 | src/shop/rowb.c |  | shop rows: 3C3C/3B04(0x4000)/3B9C gates + 8011EB9C row; v1/v0 gate closes. |
| 80168F1C | - | func_80168F1C | src/shop/gen271.c | Y |  |
| 801690AC | - | func_801690AC | src/shop/gen01662.c |  |  |
| 801690F8 | - | - | - | Y |  |
| 80169100 | - | - | - | Y |  |
| 80169120 | - | - | - | Y |  |
| 80169128 | battle_cb_86120 | - | - | Y |  |
| 80169148 | - | - | - | Y | 77548 80169148 0800E003 |
| 80169150 | - | - | - | Y |  |
| 80169158 | - | - | - | Y |  |
| 80169160 | - | - | - | Y |  |
| 80169168 | - | - | - | Y |  |
| 80169170 | - | func_80169170 | src/config/rowl2.c |  | rows: 0x1E05 text, 0x29/0x14A windows, 801691F0/8011F300 rows; loop L1691B0 on 5C64(0x202). |
| 801691F0 | - | func_801691F0 | src/shop/gen1302.c | Y |  |
| 80169228 | - | func_80169228 | src/shop/gen1044.c | Y |  |
| 80169290 | - | func_80169290 | src/shop/gen958.c |  | battle loop: 8018F098 intro + 0x9A window; loops L169408 (80194640/94394) and L16942C (62BC(0x9A)/6630(0x9A) gates); ends on 5574(0xF)/0x330 |
| 801694A4 | - | func_801694A4 | src/shop/gen582.c |  | shop seed: 0x64 window, 0x1B/0x2107 texts; loop L169548 on 5958(0x320). |
| 80169614 | - | func_80169614 | src/shop/gen278.c |  |  |
| 80169958 | - | func_80169958 | src/shop/gen717.c |  | shop rows: 0xA0/0x211A texts + 0x7D1B/0x7D19/0x7D1E/0x7D1D texts, 8016D4D8 close; loop L169998 on 5958. |
| 80169A18 | - | func_80169A18 | src/shop/gen281.c |  | config map-name screen: 0x64/0x2/0x4/0x6 windows, 0x3D1E/0x7D1B/ 0x7D19/0x7D1E/0x7D1D texts, 80169958/8016D4D8 rows; loops L169B10/L169B34/L |
| 80169C7C | - | func_80169C7C | src/shop/gen457.c |  |  |
| 80169DE8 | - | func_80169DE8 | src/shop/gen456.c |  |  |
| 80169F58 | - | func_80169F58 | src/shop/gen516.c |  | shop rows: 8016C4A0 prep, 0xA/0x8 windows, 0x2703 text; loops L169FB0 (7594/8 cells) and L169FC8 (67FC/5B8C(0x202)). |
| 8016A080 | - | func_8016A080 | src/shop/gen957.c | Y |  |
| 8016A0C8 | - | func_8016A0C8 | src/shop/gen515.c |  | shop cells: 0x2 window, 0x8 gate; loops L16A124 (6764 cells) and L16A18C (66D8 cells) on 5C64/5B8C(0x202). |
| 8016A208 | - | func_8016A208 | src/shop/gen370.c |  | shop rows: 0x66/0x53/0x55/0xA windows, 0x2F03 text, 8016A4E4 header; loops L16A248 (5A90(0x20)), L16A290, L16A2A8 (5DA0(8)/5B8C(0x202)). |
| 8016A390 | - | func_8016A390 | src/shop/gen455.c |  | shop icon row: 9x (3B04/7A40/7A68) icon triplets. |
| 8016A4E4 | - | func_8016A4E4 | src/shop/screen_w.c |  |  |
| 8016AA54 | - | func_8016AA54 | src/shop/gen1205.c | Y |  |
| 8016AA84 | - | func_8016AA84 | src/shop/gen991.c | Y |  |
| 8016AACC | - | func_8016AACC | src/shop/gen990.c | Y |  |
| 8016AB14 | shop_store_run | - | - |  | shop store registers: 0x3304 gate title, 0x43/0x42 windows with 0x4300-0x4330 index rows (8188/8D00 pairs); loop L16AB44 polls 5958(0x15). |
| 8016AC7C | - | func_8016AC7C | src/shop/gen441.c |  | shop status: 0x4A window, 0x2203/0x22C1/0x22A3/0x22B3 texts, gates 4120(0x202); loops L16ACFC (5A90(0x20)) and L16AD74 (5958(0x12)). |
| 8016ADDC | - | func_8016ADDC | src/shop/gen693.c |  | shop rows: 0x3319/0x371B/0x331B/0x3719 cells; loop L16AE14 on 5958(0x400). |
| 8016AE94 | - | func_8016AE94 | src/shop/screen_q.c |  |  |
| 8016B470 | - | func_8016B470 | src/shop/gen632.c | Y |  |
| 8016B530 | - | func_8016B530 | src/shop/gen01433.c |  | shop: 3C3C/3B04 gates + 8016D348/8016D2B0 rows. |
| 8016B5B0 | - | func_8016B5B0 | src/shop/gen440.c | Y |  |
| 8016B650 | - | func_8016B650 | src/shop/gen01432.c | Y |  |
| 8016B68C | - | func_8016B68C | src/shop/gen01661.c |  | battle prep: 0x118 x 0xF0 bytes at buffer(0x300). |
| 8016B6D0 | - | func_8016B6D0 | src/shop/gen222.c |  |  |
| 8016BAAC | - | func_8016BAAC | src/shop/gen472.c | Y |  |
| 8016BB44 | shop_row_41 | - | - | Y |  |
| 8016BB84 | - | func_8016BB84 | src/shop/gen1084.c | Y |  |
| 8016BBC4 | - | - | - | Y |  |
| 8016BBCC | - | func_8016BBCC | src/shop/gen439.c | Y |  |
| 8016BC6C | - | func_8016BC6C | src/shop/gen692.c |  | shop row: 0x4A/0x57 windows, 0x400/0x28/0x57 consts, 8016BBCC row; gate 4120(0x202). |
| 8016BD2C | - | func_8016BD2C | src/shop/gen01660.c |  |  |
| 8016BD78 | - | func_8016BD78 | src/shop/gen870.c |  | shop rows: 0x18/0x1A/0x1C windows, 0x4218 text; linear. |
| 8016BE1C | - | func_8016BE1C | src/shop/gen869.c |  | shop rows: 3F94(3B04) reads + 0x2000/0x2040 cells; linear. |
| 8016BED4 | - | func_8016BED4 | src/shop/gen868.c |  | shop rows: 0x2000/0x2040 cells via 9140/87DC; loop L16BF0C on 5958(0x40). |
| 8016BF64 | - | func_8016BF64 | src/shop/gen989.c |  |  |
| 8016BFE8 | - | func_8016BFE8 | src/shop/gen631.c | Y |  |
| 8016C0A8 | - | func_8016C0A8 | src/shop/gen630.c | Y |  |
| 8016C128 | - | func_8016C128 | src/shop/gen354.c | Y |  |
| 8016C280 | - | func_8016C280 | src/shop/gen85.c |  | battle row render: 0x74/0x76/0x70/0x72 stat windows with 3F94(3C3C) / 4064(8) value cells, 0x5B/0x5D headers; then the 0x61/0xA1 secondary c |
| 8016C4A0 | - | func_8016C4A0 | src/shop/gen471.c |  | shop memory: 0x48/0x50 windows, 0x7D27 text, 0x4B/0x4D cells, 80176F60 row; loop L16C4DC on 5574(0x38). |
| 8016C624 | - | func_8016C624 | src/shop/gen538.c | Y |  |
| 8016C6FC | - | func_8016C6FC | src/shop/gen1083.c | Y |  |
| 8016C734 | - | func_8016C734 | src/shop/gen819.c | Y |  |
| 8016C78C | - | func_8016C78C | src/shop/gen780.c |  | shop rows: 0x2000/0x2A/0x28 cells, 0x4F window; 4264(0x1FF) + 3F38(3C3C(0x28)) reads. |
| 8016C858 | - | func_8016C858 | src/shop/gen329.c |  | battle terrain/affinity screen: 0x2101/0x2102/0x2100 title rows, 0x2005/0x2001/0x2003 gates, 0x50/0x4A windows; 8016C280/8016C624 row draws, |
| 8016CA94 | - | func_8016CA94 | src/shop/gen09.c |  |  |
| 8016D028 | - | func_8016D028 | src/shop/gen01659.c |  | shop: 3C3C gates; returns at L16D0F4. |
| 8016D160 | - | func_8016D160 | src/shop/gen1204.c |  | shop: 3C3C/9330/9644(0x20) rows; 95A0 close. |
| 8016D2B0 | - | func_8016D2B0 | src/shop/gen1203.c |  | shop: 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. |
| 8016D348 | - | func_8016D348 | src/shop/gen1202.c |  | shop (twin): 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. |
| 8016D3E0 | - | func_8016D3E0 | src/shop/gen1201.c |  | shop: 3C3C/3B9C gates; 8016D160 row with 5480/5410 tails. |
| 8016D4D8 | - | func_8016D4D8 | src/shop/gen608.c |  | config map: 0x7D19/0x36/0x7D1E/0x38/0x7D1B/0x39/0x3A/0x3B texts + windows, 8016D798/8016D768/8016D600 rows; loop L16D574 on 6EA8(0x36)/6434( |
| 8016D600 | - | func_8016D600 | src/shop/gen499.c |  | config map: 0x7D1D text, 0x39/0x3C windows, 8016D730/8016D768 rows; 5574 ladder (1/0xA codes) with loop L16D660 on 5B8C(0x202). |
| 8016D730 | - | func_8016D730 | src/shop/gen1043.c | Y |  |
| 8016D768 | - | func_8016D768 | src/shop/gen1082.c | Y |  |
| 8016D798 | - | func_8016D798 | src/shop/gen746.c |  | config rows: 0x3C/0x39/0x60/0x57 windows; gate 5574(0x42) routes the 82EC cell fills. |
| 8016D850 | - | func_8016D850 | src/shop/gen64.c | Y |  |
| 8016D9B0 | - | func_8016D9B0 | src/shop/gen310.c |  | global-stats screen: 0x7D1F gate, 0x4A window, 0x92/0x90 rows with 0x2116/0x4352/0x4354/0x4350/0x4351/0x4355 texts; renders via 800F9868; al |
| 8016DB38 | - | - | - |  |  |
| 8016DB94 | - | func_8016DB94 | src/shop/gen514.c |  | config: 4264(0x1FF)/64EC gates, 0x14/0x20 windows, 8016D028 rows; 6180(0x202)/5480 close. |
| 8016DCE0 | - | func_8016DCE0 | src/shop/gen867.c |  | shop rows: 0x2303/0x2883 cells via 8768; loops L16DD0C (5958(0x900)) and L16DD5C (5958(0x80)). |
| 8016DD9C | shop_machine_run | - | - |  | shop: 3C3C/3B04(0x2000)/3B9C gates; 8016DB38/8016DB94x2/ 80177DAC rows; s5/s0 latches loop L16DDFC. |
| 8016E0F8 | monster_status_run | - | - |  | battle monster status: 0x95 window + 0x2303/0x2384 gate texts, 0x300-0x303 cells with 8016B650 prep; loop L16E168 (5A90/53D4) polls 6434(2). |
| 8016E358 | - | func_8016E358 | src/shop/gen454.c |  | shop memory: 0x7D21 gate, 0x2121/0x2123/0x2127/0x7D24/0x7D1A texts, 0x1C window; loop L16E398 (5958(4)) with the 5D24/5B8C ladders. |
| 8016E490 | - | - | - |  |  |
| 8016E500 | - | func_8016E500 | src/shop/rowd.c | Y |  |
| 8016E560 | - | func_8016E560 | src/shop/gen716.c |  | options: 0x3540/0x2003 cells, 90EC(0x2007/0x2008) rows; loop L16E5A8 on 5A90(5). |
| 8016E668 | - | func_8016E668 | src/shop/gen75.c |  | battle stat overlay: 0xA9/0xAB/0xB5/0xB7/0xB1/0xB3 windows, 0x3591/0x3593 titles; 7B40/7B7C row pair draws + 7FCC/3F94(3C3C) value cells; lo |
| 8016E870 | - | func_8016E870 | src/shop/gen513.c |  | options: 0x2000/0x2003/0x2004 gates, 0x357C text, 0xA6 window; gates 53D4/4120 pick the 0x2000 cell writes. |
| 8016E99C | - | - | - | Y |  |
| 8016E9BC | - | - | - | Y |  |
| 8016E9DC | - | - | - | Y |  |
| 8016E9FC | - | - | - | Y |  |
| 8016EA1C | - | - | - | Y |  |
| 8016EA3C | - | - | - | Y |  |
| 8016EA5C | - | - | - | Y |  |
| 8016EA7C | - | - | - | Y |  |
| 8016EA9C | - | - | - | Y |  |
| 8016EABC | - | func_8016EABC | src/shop/gen438.c |  | shop flow: 0x4200/0x1000/0x4218 texts, 0x32 window, 80170198 row; loop L16EB5C polls 9644/9330 pairs; tail 94B8/9448 close. |
| 8016ED64 | - | func_8016ED64 | src/shop/gen918.c |  | shop rows: 0x64/0x6A/0x6B texts, 8016EF88 row; linear. |
| 8016EE10 | - | func_8016EE10 | src/shop/gen745.c |  | shop rows: 0xA1/0xA3 windows, 0x64/0x6A/0x6B texts, 8016EF88 row; linear. |
| 8016EEDC | - | func_8016EEDC | src/shop/gen917.c |  | shop rows (variant): 0x64/0x6A/0x6B texts, 8016EF88 row. |
| 8016EF88 | - | func_8016EF88 | src/shop/gen02.c |  |  |
| 8016F97C | - | func_8016F97C | src/shop/gen84.c |  | config help/status: 0x43 window, 0x16A9/0x1A05/0x1A3E-0x1A45 texts, 801702DC sub-rows, 0x1A0D key icons; fully linear render. |
| 8016FB78 | - | func_8016FB78 | src/shop/gen415.c |  | config bars: 0x1F/0x1D/0x1E windows, 0x29 window cells; loops L16FC1C (5DA0(0x1D)) and L16FCA8 (5DA0(0x1E)). |
| 8016FCF0 | - | func_8016FCF0 | src/shop/gen512.c |  | shop map: the fixed 15-sprite row (0x8A-0xA0 windows) then 9448/93DC close. |
| 8016FFC0 | - | func_8016FFC0 | src/shop/gen916.c |  | shop rows: 0x88 window + 0x2100/0x2115 titles; linear. |
| 80170084 | - | func_80170084 | src/anim/gen1200.c | Y |  |
| 801700BC | - | func_801700BC | src/anim/gen581.c |  | rows: 4x 6658/87DC cell pairs (0x3319/0x371B/0x331B/0x3719); loop L1700F8 on 5958(0x400). |
| 80170198 | - | func_80170198 | src/anim/gen1199.c |  | shop: 3C3C/3B04(0x1000)x2/3B9C gates; a0/a2 latch | v0 gates; returns at L1702C4. |
| 801702DC | - | func_801702DC | src/anim/gen629.c | Y |  |
| 80170348 | - | func_80170348 | src/anim/gen662.c | Y |  |
| 801703E8 | - | func_801703E8 | src/anim/gen661.c | Y |  |
| 80170458 | - | func_80170458 | src/anim/gen262.c |  | shop row render: 0x2115/0x4300/0x4301 title, 0x421F/0x2116/ 0x4302/0x4305 desc rows, 800F9868 catalog dispatch, then the 0x4F/0x79/0x50 item |
| 801706C0 | - | func_801706C0 | src/anim/gen317.c |  | shop buy-flow: 0xFD8 gate, 80170884 detail; alt renders the 0x47/ 0x45/0x1800 rows (3C/3D/3E/0x20/0x21 windows) and commits through 800F9868 |
| 80170884 | - | func_80170884 | src/anim/gen511.c | Y |  |
| 8017091C | - | func_8017091C | src/anim/gen403.c | Y |  |
| 801709E4 | - | func_801709E4 | src/anim/gen363.c |  | shop confirm rows: 0x3E/0x3D windows, 0x1700/0xBD cells and 0x8 window; loops L170A4C (5A90(0x100)) and L170ACC (3F38 (3B04) rows + 4120(0x2 |
| 80170C14 | - | func_80170C14 | src/shop/screen_o.c |  |  |
| 80171194 | - | func_80171194 | src/anim/gen221.c |  |  |
| 801714C4 | - | func_801714C4 | src/anim/gen558.c |  | shop picker: 0x7/0x500 windows; 3F38(3C3C(7)) + 78C4(3C3C(7)) rows with the 0x500 count cell. |
| 80171608 | - | func_80171608 | src/anim/gen26.c |  |  |
| 801719C8 | - | func_801719C8 | src/anim/gen13.c |  |  |
| 80171E18 | - | func_80171E18 | src/anim/gen498.c |  | shop rows: 0xC/0xE/0xAD windows, 0x4F1/0x4F0/0x4F2/0x4F3 texts, gates 5480/8058(2/4/5)/53C0. |
| 80171F90 | - | func_80171F90 | src/anim/gen81.c |  | shop sell-row screen (twin of 801721E8 without the bottom commit): 0x1701 header, 0xB/0xC/0xE/0xD windows, 80173ED8 stat block, 801714C4 qua |
| 801721E8 | - | func_801721E8 | src/anim/gen242.c |  | shop sell/detail screen: 1730/1731 headers, buy rows 12/14 with per-row gate reads; 80173ED8 draws the stat block, 801714C4 the quantity pic |
| 801724D0 | - | func_801724D0 | src/battle/rowm.c |  |  |
| 80172998 | - | func_80172998 | src/anim/gen1081.c | Y |  |
| 801729E0 | - | func_801729E0 | src/anim/gen302.c |  | shop detail: WANTED: 0x4C0-0x4C7 texts, 0xF3/0x7A/0xA1/0xE5 windows; 3F38(3C3C(6)) rows and 0x4C0-0x4C7 rank cells. |
| 80172BA8 | - | func_80172BA8 | src/anim/rowa.c |  |  |
| 80173008 | - | func_80173008 | src/anim/rowb.c |  |  |
| 80173654 | - | func_80173654 | src/anim/gen497.c |  | shop banner: 0x15 window, 0xC8/0x7A/0xB9 windows, 0x4C0 gate; loop L173730 on 5A90(0x20). |
| 80173780 | - | func_80173780 | src/battle/rown.c |  |  |
| 80173ED8 | - | func_80173ED8 | src/anim/gen956.c |  | shop stat block (called by the 801721E8/80171F90 family): 0x15 window + 3B04 statue reads; the a3/t1 register gates choose among the stat di |
| 80174348 | - | func_80174348 | src/anim/gen866.c |  | shop rows: 0x128A text + 0x4C/0x4E/0x4A/0x49/0x73 windows, 80170458 + 8017F8F8 rows; gate 4120(0x202). |
| 801743E0 | - | func_801743E0 | src/anim/gen238.c | Y |  |
| 801745F4 | - | func_801745F4 | src/anim/gen557.c |  | shop title: 0xFE0/0x19/0x18 windows, 0xCDB/0xCEB texts, 73E0(0x202) gates; loops L17464C and L174650. |
| 80174710 | - | func_80174710 | src/anim/gen988.c | Y |  |
| 80174774 | - | - | - | Y |  |
| 8017477C | - | func_8017477C | src/anim/gen343.c | Y |  |
| 80174880 | - | func_80174880 | src/anim/gen290.c |  | battle action-confirm overlay: 4 members; each gets a highlight pass (6630/5574(0xA) + 4008(0x38) select-read) and a detail pass (6630/4248( |
| 80174CE4 | - | func_80174CE4 | src/anim/gen338.c |  | shop stats: 0x30/0x32 windows, 0x33/0x34 profit cells, 3F94/ 7FCC(3B9C) rows; loops L174D04/L174D14 (5A90(0x10)). |
| 80174F0C | - | func_80174F0C | src/anim/gen01658.c |  |  |
| 80174F64 | - | func_80174F64 | src/anim/gen955.c |  |  |
| 80175004 | - | func_80175004 | src/anim/gen691.c |  | shop rows: 0x1700/0x1288 texts, 0x7A/0xCDB/0xCDC windows; 5574 gates pick the 0x1E/0x7E rows and 0xCDB/0xCDC fills. |
| 801750DC | - | func_801750DC | src/anim/gen41.c |  |  |
| 80175494 | - | func_80175494 | src/anim/gen628.c |  | shop rows: 0x1700 text, 0x7A window, 0xCFE cell; 5574(1) gate; loop L175534 on 5A90(0x10). |
| 8017559C | shop_buy_list | - | - |  | shop buy list: 0x1700 gate picks the 0xD25 cells vs the 0xCF5/ 0xCF7/0xD1D/0xD1F/0xD21/0xCD7/0xCD9/0xCDD/0xCE0 families (6CF4/81B0 pairs). |
| 801757A4 | - | func_801757A4 | src/anim/gen818.c |  | shop rows: 0xCDB/0xBD5 cells, 4264/7894 values; loop L1757BC on 5958(0x100). |
| 8017583C | - | func_8017583C | src/anim/gen248.c |  | shop/dungeon item menu: 0x93 window, 0x1281-0x1286 texts; 5574 key-code ladders route through 885C color fills; exits at L75B50. |
| 80175B60 | - | func_80175B60 | src/anim/gen627.c |  | shop rows: 0xD4 window, 0x2115/0x6FE/0x700 texts + 0x6FE/0x6FF window rows; gate 6434(0x202). |
| 80175CB4 | - | func_80175CB4 | src/anim/gen715.c |  | shop rows: 0xDDB cells; loops L175CCC/L175CD0/L175D20 on 4120(0x202)/5A90(0x80). |
| 80175D90 | - | func_80175D90 | src/anim/gen744.c | Y |  |
| 80175E08 | - | func_80175E08 | src/anim/gen607.c | Y |  |
| 80175E88 | - | func_80175E88 | src/anim/gen817.c | Y |  |
| 80175F00 | - | func_80175F00 | src/anim/gen389.c | Y | row picker: 0xCC window + 0x1003 gate; 80175E88 header; then the 4248(0x20)/0x10/0x8 row-gate ladder and 80170458 row render. |
| 80176060 | - | func_80176060 | src/anim/gen241.c |  |  |
| 801762D0 | - | func_801762D0 | src/anim/gen276.c |  | battle timer screen: staged poll loops reading 0x1900/0x1A00 (and 0x2000/0x1FFF/0x1A05/0x1E00/0x2000 gate texts) with 90EC/6364/ 5958 pacing |
| 801764DC | - | func_801764DC | src/anim/gen316.c |  | battle option-icon row: 2/3 windows with 4248(0xBF) fills, then per-index 4120(0x202) gates showing the 0x54/0x50/0x52/0x53/0x55/ 0x51/0x56/ |
| 8017668C | - | - | - | Y |  |
| 801766B0 | - | func_801766B0 | src/anim/gen510.c | Y |  |
| 80176748 | - | func_80176748 | src/anim/gen537.c | Y |  |
| 801767D8 | - | func_801767D8 | src/anim/gen328.c |  | shop row: 0xFD8 title + 0x3E/0x3D windows (76BC/7CC8 pair cells), 0x5000 gate, 8011F724-style sprint; loops L1768B4/L1768B8 (4968/5A90(0x800 |
| 801769B4 | - | func_801769B4 | src/shop/rowf.c |  | shop sell-flow: 0x1700 header, 0x7A/0x12/0x13 rows, 0x2115/0x420B/ 0x4300/0x4301/0x4304 titles with 800F9868 catalog + 80181DA4 commit; loop |
| 80176B6C | - | func_80176B6C | src/anim/gen496.c | Y |  |
| 80176BFC | - | func_80176BFC | src/anim/gen714.c | Y |  |
| 80176C6C | - | func_80176C6C | src/anim/gen626.c |  | shop row: 0x43 window; 4264(0x1FFF)/4064 + 4264(0xFFF)/4064 (0x7F/0x7E7E) value cells. |
| 80176D40 | - | func_80176D40 | src/anim/gen342.c |  | shop stat icons: the fixed 1-3/5-12 icon-cell row (654C/824C pairs), 0x420B/0x420C icons, 0x15/0x16/0x17/0x22-0x2F windows, 8017EA90 commit. |
| 80176E98 | - | func_80176E98 | src/anim/gen437.c | Y |  |
| 80176F60 | - | func_80176F60 | src/anim/gen01431.c | Y |  |
| 80176F88 | - | func_80176F88 | src/anim/gen1080.c |  | battle anim: 3C3C(0x300)/3B04/3B9Cx2 gates; 9330 row then 95A0 close. |
| 80177178 | - | - | - |  |  |
| 801771AC | - | func_801771AC | src/anim/gen01430.c | Y |  |
| 801771D4 | - | func_801771D4 | src/anim/gen1079.c | Y |  |
| 80177224 | - | func_80177224 | src/anim/gen987.c | Y |  |
| 80177284 | - | func_80177284 | src/anim/gen986.c | Y |  |
| 801772E4 | - | func_801772E4 | src/anim/gen536.c |  | shop item cells: 0xD9/0xDA windows, 0x1BCD/0x1BCF/0x1BD1 texts, 801771D4 rows + 6BE0/922C + 6DE8/87DC cell pairs. |
| 801773D4 | - | func_801773D4 | src/anim/gen1198.c | Y |  |
| 801773FC | - | - | - |  |  |
| 801774B4 | - | - | - |  | battle anim chain: 80189F94/80192AF8/8018F538/80178DD0 preps, 80194018(1)+8019418C+80178BB4+80178730 core, then 6 splash rows (801782C0x2/80 |
| 801776E8 | - | func_801776E8 | src/anim/gen01657.c |  | battle anim: 801947B8 x2/800F9BD0/801928C8/80192BEC rows. |
| 80177790 | - | - | - |  | battle anim: register gates route 80198058/80197FB8 vs the 80194518/801947B8/80182AF0 row; ends 80197208/80195120/ 80197208/80194988 through |
| 8017794C | - | - | - |  | battle input gate: locks/clears the input latch; returns the clamped menu index when accepted, else 0. |
| 801779E4 | - | func_801779E4 | src/anim/gen1197.c |  | battle substate router. Early v1/v0 gates select 80184AF8 variants; the main chunk then dispatches to 80183A80 / 80185380 / (80183244 | 8018 |
| 80177DAC | - | - | - | Y |  |
| 80177DCC | - | - | - | Y |  |
| 80177DEC | - | func_80177DEC | src/anim/rowc.c |  | battle anim chain: 80194394/801928E8/80194988/8017841C/ 80178C14/8011EF0C/800FEF7C/801947B8/8017D078/8017E220/ 8017E740/80178D00; linear. |
| 80177F3C | - | - | - |  | battle anim: v1/v0 gates; 80194BC4/801949F8 rows, 801942FC commits, then 80186810 (deep-pass) + 80179958 via the L178064 latch. |
| 801780AC | - | - | - | Y |  |
| 801780B4 | - | func_801780B4 | src/anim/gen01656.c |  | battle anim: 80197378/801972D8/80197308 preps; loop L17815C with 80197338 + s2/s7 regcmp branch to 801972D8; 80197398 closes. |
| 80178220 | - | - | - |  |  |
| 801782C0 | - | - | - |  | battle anim: 801971A8 x2 + 8017F644 rows. |
| 8017835C | - | - | - |  | battle anim: 801971A8(2) x2 + 801973B8 x2 rows. |
| 8017841C | - | - | - |  | battle anim: twin v0 gate ladders (L178480..L178504, L1785C0..L178644); 80194018(1)/80187D1C/80178890/80178BB4/ 80187B00/80194394/80197708/8 |
| 80178730 | - | func_80178730 | src/anim/gen01655.c |  | battle anim: 801970A8 x3 / 80197168 x2 rows; 801971E8 spin loop on 0xE0/1/0x200. |
| 80178890 | - | - | - |  | battle anim prep: clears 0x9F panel records (0xE stride) and writes the master header; D_8019EE28 = 0. |
| 8017890C | - | - | - |  | battle anim: 801981D8/80198208 x2/8019822C/801981F8 rows. |
| 80178988 | - | - | - |  | anim/event: 8018F068 x2 preps, 8018F708 spin; loop L1789EC with 80191878/80192478 rows and 801928E8/80192614 gates. |
| 80178A58 | - | - | - |  | battle anim: two 80178988 + 80194640x2 + 80194394 blocks. |
| 80178BB4 | - | - | - |  |  |
| 80178C14 | status_table_init | - | - |  | battle status-table init: header fields, per-slot geometry and the layout state blocks (0xEE/0xF2/0x230/0x234/0x242 rows). |
| 80178D00 | - | - | - |  | battle row-commit: seven 8017E794 writes. |
| 80178DD0 | - | - | - |  | battle anim: 801976E8 + 8x 80197658 rows + 801976F8/80197B24/ 8018F168(1)/8018F1F8/8018F0D8 preps; loop L178F08 on 80197BB4. |
| 80178F20 | - | - | - |  | battle anim loops: 2x (80178988/97458/97468/79248 + 94640x2) pre-roll, then two 971E8 wait loops. |
| 80179248 | - | - | - |  | anim event builder: 3 words + 4x2 u16 pairs into dst. |
| 801792D0 | - | - | - |  | battle anim: 80194640/80194394/801946A0x2/80194700x2/ 80194518 pairs; linear. |
| 801793F8 | - | func_801793F8 | src/anim/gen01654.c |  | battle anim: 80194394/801928E8/801942FC preps; v1/v0 gate picks 8008CB5C/800888C0 rows; 801792D0 closes. |
| 801794A8 | - | - | - |  |  |
| 80179500 | - | - | - | Y |  |
| 8017953C | - | - | - |  |  |
| 801795BC | - | - | - |  | battle anim: 80194700/80194394 x2 + 80194518/80194394 pair rows; linear. |
| 80179670 | - | - | - |  | battle animation driver: 80178988/801942FC/8017953C preps, 8x 80197668 sprite rows, 80192BEC/80192AF8 sound rows, 8018F538/80178DD0/80178BB4 |
| 801798F0 | - | - | - |  |  |
| 80179930 | - | - | - |  |  |
| 80179958 | - | - | - |  | battle frame ticker: cascading 1/60 counters at 0x800D16A3, rolling into the next when a level wraps (0x3C for the first). |
| 801799F0 | - | - | - |  | v0 gates (L79D90/L79D9C) |
| 80179FBC | - | func_80179FBC | src/anim/gen1301.c |  | battle anim: v0/v1 gate tree; 80197208 row at L17A17C. |
| 8017A208 | - | func_8017A208 | src/anim/gen01653.c |  | battle anim: jr-$a0 dispatch; gate tree with 80179FBC row (L17A540), 80197208 + 8017CCB0 rows (L17A6D8/L17A8A4); returns L17A908. |
| 8017AAC4 | - | - | - |  |  |
| 8017BDB0 | - | - | - |  |  |
| 8017CCB0 | - | func_8017CCB0 | src/anim/gen1196.c |  | battle anim: 4x 80197208 rows with v0 gates + tail gates. |
| 8017CE9C | - | func_8017CE9C | src/anim/gen1300.c |  | battle anim: v0 gates; 80195120 + 80197208 spin loop; closes with 801971A8/801973B8/80197208. |
| 8017D078 | - | - | - |  | selection-screen driver. Register gates (a0/a1/a3/v1/s3) are the cursor/state comparisons; s3 = selection index. All calls are the inventory |
| 8017D7D8 | - | - | - |  | battle sprite blit: copies width rows of 0x20 u16 cells from the palette/pattern table into the framebuffer row. |
| 8017D898 | - | - | - |  | battle sprite blit (plane variant): mirrors 8017D7D8 with the source plane select bit from rec[0]. |
| 8017D980 | - | - | - |  | battle sprite blit (plane variant 2): select bit tracks the row counter inside the pitch. |
| 8017DA64 | - | - | - |  | battle sprite blit (stagger variant): 2-bit selection with per-pixel phase flip. |
| 8017DB7C | - | func_8017DB7C | src/anim/gen01652.c |  | battle anim dispatch: a0/v0 + v0 gate tree routes 8017D7D8 / 8017D898 / 8017D980 / 8017DA64 rows. |
| 8017DC28 | - | func_8017DC28 | src/anim/gen01651.c |  | battle anim dispatch (twin): a0/v0 + v0 gates route 8017D7D8 / 8017DD08 / 8017D980 / 8017DF20 rows. |
| 8017DD08 | - | - | - |  |  |
| 8017DF20 | - | - | - |  | battle tile blit (0x300, pattern variant): same grid walk as 8017DD08 with the 2-bit plane select folded from rec[0]/rec[2] and the D_801DEF |
| 8017E220 | - | - | - |  | battle anim chain (0x520): a0/v1 latch + jr-$a0 sub-table (L8017E2CC); gate ladder through L8017E3D4/L8017E4C4 to the row-driver blocks — a  |
| 8017E740 | - | - | - |  |  |
| 8017E794 | - | func_8017E794 | src/anim/gen1042.c |  | battle anim: 80195120 + 80197208 spin loop (L17E8CC); gates; returns at L17E90C. |
| 8017E930 | - | func_8017E930 | src/anim/gen1078.c |  | battle anim (twin): 80195120 + 80197208 spin loop (L17EA2C). |
| 8017EA90 | - | - | - |  |  |
| 8017EAC8 | - | func_8017EAC8 | src/anim/gen01650.c |  | battle anim: wide v0 gate ladder (L17EB3C..L17EF48) then the 2x 80194640 + spin + 80194640 close (L17F01C). |
| 8017F148 | - | func_8017F148 | src/anim/gen01429.c |  | battle anim: wide v0 gate ladder (L17F1EC..L17F398 spins), L17F25C main loop; closes with 2x 80194640. |
| 8017F5C0 | - | func_8017F5C0 | src/anim/gen01649.c |  | battle: v0 gate picks 8017EAC8 vs 8017F148 rows. |
| 8017F644 | - | func_8017F644 | src/anim/gen01648.c |  | battle anim: 6x 801973B8 rows, v0 gate, 8x 801973B8 tail. |
| 8017F8F8 | battle_mode_dispatch | - | - |  |  |
| 8017F954 | - | - | - |  |  |
| 8017F9A8 | - | - | - |  | stack-swap trick: SP swapped through a scratch frame at 0x1F80037C before calling 8017F954 (params masked). |
| 8017F9FC | - | - | - |  |  |
| 8017FA2C | - | - | - |  | battle anim: v0 spin loops with 2x 80194640; closes 801971A8(1)/8017F9FC. |
| 8017FC50 | - | - | - |  | battle anim phase machine (0x398): t0/v0 regcmp spin ladder (L8017FC28..L8017FF94) — the four move segments each poll a t0 register until it |
| 8017FFE8 | - | - | - |  | battle anim: v0 spin loops with 2x 80194640; 8017FC50(0xE0/ 0x80) row via v1/v0 gate; 801971A8(1)/8017F9FC tail. |
| 80180314 | - | func_80180314 | src/event/gen1299.c |  | battle anim: v0 spin loops (L180338/L180350) then 80194640. |
| 80180414 | - | func_80180414 | src/event/gen1298.c |  | battle anim (twin): spin loops then 80194640. |
| 80180504 | - | func_80180504 | src/event/gen1297.c |  | battle anim (twin): spin loops then 80194640. |
| 801805F8 | - | - | - |  | battle anim phase machine (0x2E0): a0/s0 + a0/v0 regcmp ladder (L18060C..L18088C) with spin loops — register-only. |
| 801808D8 | - | - | - |  | battle anim: fp regcmp spin loops; 801824D8 gates route 801805F8; 80194640 closes via L180A60. |
| 80180BB4 | - | func_80180BB4 | src/event/gen01647.c |  | battle anim: 801824D8 spin; 80194640 row. |
| 80180C90 | - | func_80180C90 | src/event/gen01646.c |  | battle anim (twin): v0 spin (L180CE8) then 80194640. |
| 80180D64 | - | func_80180D64 | src/event/gen01645.c |  | battle anim (twin): v0 spin (L180DBC) then 80194640. |
| 80180E28 | - | func_80180E28 | src/event/gen01644.c |  | battle anim (twin): v0 spin (L180E74) then 80194640. |
| 80180EF0 | - | - | - |  | window slot add: pushes (a0 & 0xFFF0, a1) and terminates the run with -1. |
| 80180F70 | - | func_80180F70 | src/event/gen1296.c |  | battle anim: v0 gates; 801811F0 (L181004) vs 801810B8 (L181040) rows. |
| 801810B8 | - | func_801810B8 | src/event/gen1195.c |  | battle anim: 80180BB4/80180E28/80180D64/80180C90 row loop L181180 on v0 gates; returns at L1811D0. |
| 801811F0 | - | func_801811F0 | src/event/gen1295.c |  | battle anim: v0 gates; 80180BB4 row loop L1812B0. |
| 80181300 | - | func_80181300 | src/event/gen01643.c |  | battle anim: v1/v0 gates; 801813C0 row at L18138C. |
| 801813C0 | - | func_801813C0 | src/event/gen1294.c |  | battle anim: v0 gates; 801808D8 row loop L181450. |
| 80181498 | - | func_80181498 | src/event/gen1293.c |  | battle anim: 801824D8 spin loops (L181500/L181578), 80194640 closes. |
| 80181604 | - | func_80181604 | src/event/gen01642.c |  | battle anim: s4 gates; 801808D8/80180504/80180414/80180314 row loop L1816CC; closes 801971A8/8017F9FC. |
| 801817EC | - | - | - |  | battle anim: t2/v0 regcmp spin loops (L1818E8/L1819BC/ L181A94/L181B6C); pure registers. |
| 80181C20 | - | func_80181C20 | src/event/gen01641.c |  | battle anim: s5/v0 + s5/s6 latches; 801808D8 row loop; 801817EC then 801971A8/8017F9FC closes. |
| 80181DA4 | - | func_80181DA4 | src/event/gen01428.c |  | battle anim: 801824D8 spin loops L181E04/L181FF4 with 80194640 rows; returns at L1820CC. |
| 801820F4 | - | func_801820F4 | src/event/gen01427.c |  | battle anim: 80194640 row + v0 spin loops L18220C/L182200. |
| 8018226C | - | func_8018226C | src/event/gen01640.c |  | battle anim: v0 gate tree with spin loops L1822D4/L1822EC around the single 80194640 row (L182388); returns L1823D0. |
| 801823F8 | - | func_801823F8 | src/event/gen01426.c |  | battle anim: 801808D8 spin loops (L182450/L18249C) with 80194394 rows. |
| 801824D8 | - | - | - |  | 4x byte bit-gather: rotates four input bytes and packs one output byte per pass into out[0..3]. |
| 801825B8 | - | func_801825B8 | src/event/gen1292.c |  | battle anim: v1/v0 + v0 gates; spin loops L182608/L18266C. |
| 801826C8 | - | func_801826C8 | src/event/gen1291.c |  | battle anim: 80197208 spin loops (L1827A8/L1828F4/L182A20) gated by v1/v0 + a0/v0 latches; returns at L182AC0. |
| 80182AF0 | - | func_80182AF0 | src/event/gen01425.c |  | battle anim: v0 + v1/v0 gate tree; 801825B8/801826C8 rows via L182C74. |
| 80182CB4 | - | func_80182CB4 | src/event/gen1290.c |  | battle anim: v1/v0 + v0 gates; 80197208 rows. |
| 80182DDC | - | - | - | Y |  |
| 80182E18 | - | - | - | Y |  |
| 80182E54 | - | func_80182E54 | src/event/gen01639.c |  | battle anim: v0 + t0/v0 gates; 801971A8(1)/80197208 tail. |
| 80183048 | - | func_80183048 | src/event/gen01638.c |  | battle anim: 80198058/80197FB8 preps then 4x 80182DDC/80182E18 pairs. |
| 80183244 | - | func_80183244 | src/event/gen1139.c |  | battle anim FSM: v0 + t1/v0 gates route the 80182E54 spin loops (L183354/L183368 or L183504/L183518); L183650 branch runs 80183048; tail gat |
| 80183A80 | - | func_80183A80 | src/event/gen1194.c |  | battle anim: 3x 801971A8(1)/80197208 spin loops plus a final 801971A8(1)/80197208 pair. |
| 80183F40 | - | - | - |  | hardware-beat driver for the battle effect overlay: writes the scratchpad timers (0x1F800012/16/18/1A) with step counts 0x10/0x14/ 0x30/0x40 |
| 801847D8 | - | - | - |  | battle anim loop: 5x 801970A8 pre-roll, L1848B0 loop (854A0/ 97288 reads), L184950 loop (85540/97288 rows), tail 972B8 latches. |
| 80184AF8 | - | - | - |  | battle anim chain: s2/s1/v0 register gates select the sprite slots; 3x 801971A8(2), 801951E0/801973B8 reads, 5x 80197248 row commits; return |
| 80185030 | - | - | - |  | sequence-driver for the battle portrait loop: four 971A8(1)/973B8(1) commits, then 5 poll loops (854A0/97288 pairs) with 972B8 selects betwe |
| 80185380 | - | func_80185380 | src/event/gen01637.c |  | battle anim: 80197248 gates (v0 spin L1853AC); v1/a0 latch rows; returns at L18548C. |
| 801854A0 | - | - | - |  |  |
| 80185540 | - | - | - |  | battle anim: 80197338/80197308(2)/801971A8 rows. |
| 80185634 | - | - | - |  | battle slot search: walk i while rows[i].field2 + i == a2; returns the failing index. |
| 8018567C | - | - | - |  | battle slot search (linked rows, field2/6): walk while the row B field links forward; returns i + 1. |
| 801856CC | - | - | - |  | battle slot search (field0 variant). |
| 80185714 | - | - | - |  | battle slot search (linked rows, field0/4 variant). |
| 80185764 | - | - | - |  | battle cutscene driver: s2/v0 latches pick 801856CC/80185714 vs 80185634/8018567C row loops; returns at L185AA0. |
| 80185AC8 | - | func_80185AC8 | src/event/gen690.c |  | battle cutscene: 3B9C gate rows with spins; 80185764 called 3x (L185C70/L185D8C/L185EF4); returns at L185F04. |
| 80185F2C | - | - | - |  | event: 80189820/80189884/8018CAD8(1)/8018A140(0x7F)/ 80189AE8/8018C608 rows; linear. |
| 80185FA0 | - | - | - |  |  |
| 8018600C | - | - | - | Y |  |
| 80186024 | - | - | - |  |  |
| 801860A0 | - | - | - |  | DF/battle timer: decrement the countdown; when expired, set the delay and adjust the active-panel counter (a0 = command). |
| 80186120 | - | func_80186120 | src/event/gen01424.c |  | battle FSM: v0/t0+v0/a3+v0/a2+v0/a1 regcmp ladder (L186148); v1/v0 gate routes 801875AC row (L1861A8) or the 80188240/ 801881AC pair (L18623 |
| 80186810 | - | - | - |  | battle FSM (0xBF4): jr-$a0 dispatch handler; register gate ladder with documented segments. Linear call chain. |
| 80187404 | - | - | - |  |  |
| 8018746C | - | func_8018746C | src/event/gen01636.c |  | battle: v0 gates; 8018767C row at L1874E8. |
| 80187504 | - | func_80187504 | src/event/gen01423.c |  | battle: v0 gates; 8018767C row at L187590. |
| 801875AC | - | - | - |  |  |
| 80187608 | - | - | - |  | battle rows: 80188C58(1)/8018ECE8/80188C58(0xFF)/80188EF8. |
| 8018767C | - | - | - |  |  |
| 801876E0 | - | - | - |  | battle menu: jr-$a0 dispatch (sub-rows); 80188240 gate runs 80187924, else 801917F8/80187A10 or 80189B8C/80191878 rows; returns at L187910/L |
| 80187924 | - | - | - |  | battle: 80191AE8(0xE)/80191878(0xD)/80191878(0x15) rows. |
| 801879E4 | - | - | - |  |  |
| 80187A10 | - | func_80187A10 | src/event/gen01422.c |  | battle: v1/v0 + v0 gates; 80189B8C(1)/801919B4(6) rows. |
| 80187AA0 | - | - | - |  | copies two words (unaligned) from D_8019B074 to D_801F6230 and clears the layout latch. |
| 80187AEC | - | - | - | Y |  |
| 80187B00 | - | - | - |  |  |
| 80187B50 | - | func_80187B50 | src/event/gen1289.c |  | battle: 80188240/80193C40/80193924 rows; s0/v1 latches route 801881AC or the 80188240 spin loops. |
| 80187C20 | - | - | - | Y |  |
| 80187C34 | - | - | - | Y |  |
| 80187C54 | - | - | - |  |  |
| 80187C9C | - | - | - | Y |  |
| 80187CB8 | - | - | - | Y |  |
| 80187CD0 | - | - | - |  |  |
| 80187D1C | - | func_80187D1C | src/event/gen01421.c |  | battle: v0 gates; 80187CD0 row when nonzero. |
| 80187DAC | - | func_80187DAC | src/event/gen01420.c |  | battle: 800FF0AC row loop L187DC0. |
| 80187E5C | - | - | - |  | menu-box author: rejects when the box is already active; fills the D_801F6678 box record. |
| 80187EC4 | - | func_80187EC4 | src/event/gen1193.c |  | battle: 80188AE8(8) gate; 8018CA18/8018AE28 rows; 8018DCD8 (0x4000) + 8018DFA0/8018DFC4/8018DFE8/80191858 block; 8018E4E8 x2 gate; 80188C58( |
| 801881AC | - | - | - |  | box claim: promote the pending box state and arm up to two cursor entries into the EF5C slot table. |
| 80188240 | - | - | - | Y |  |
| 80188250 | - | func_80188250 | src/event/gen01635.c |  | battle: v1/v0 + v0 gates; 8018DC58(4) row at L188328. |
| 80188360 | - | - | - |  | battle: a1/v1 latch; 8018DC58(5) row. |
| 80188448 | - | func_80188448 | src/event/gen01419.c |  | battle: v0 gate tree on the 80191638/801890E4 pair rows. |
| 801886B4 | - | - | - |  | battle: 8018E4E8 gate (called twice); row chain 80188FD0/ 8018C608/8018DDEC/8018B4C8/80191858/8018DFA0/8018DFC4/ 8018DFE8. |
| 801887A8 | - | func_801887A8 | src/event/gen01418.c |  | battle: a0/v1 latch + v0 gate; 80191C58 rows. |
| 801888BC | - | - | - |  | battle rows: 801886B4/801917B8/80191748/80189750(0x40)/ 801896C0. |
| 80188940 | - | func_80188940 | src/event/gen01417.c |  | event: 8018F538/801917D8/80191838/801928A8/80191858 rows; spin L1889B8; 80191878(0xE) closes. |
| 80188A0C | - | - | - |  |  |
| 80188A60 | - | - | - |  | event: a0/v0 latch; 801917B8/80191748 rows + 80191878(0xE). |
| 80188AE8 | - | - | - |  |  |
| 80188B28 | - | - | - | Y |  |
| 80188B34 | - | - | - |  | battle: 80188AE8(1) gate; a1/a0 latch rows. |
| 80188BA8 | - | - | - |  | battle: 80188AE8(2) gate; a0/t0 + a3/t0 latch rows. |
| 80188C58 | - | - | - |  | battle: 80188AE8(3) gate; v1/t0 + a3/t0 + a1/t0 latch rows. |
| 80188D28 | - | - | - |  | battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. |
| 80188DE8 | - | - | - |  | battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. |
| 80188EA8 | - | - | - | Y |  |
| 80188EF8 | - | - | - |  |  |
| 80188F28 | - | - | - |  | battle: 80188AE8(3) gate; a1/a3 + a2/a3 + a0/a3 latches. |
| 80188FD0 | - | - | - |  | battle: 80188AE8(3) gate; v1/a3 + s0/v0 + a1/a3 + a0/v0 latch rows. |
| 801890E4 | - | - | - |  | battle: 80188AE8(4) gate; 80188D28 + a1/a0 latch. |
| 80189190 | - | - | - |  | party-menu action dispatcher. s0 = action id; ids with dedicated handlers route straight, catalog/generic ids funnel through 801919B4(id). R |
| 80189590 | - | - | - |  |  |
| 8018960C | - | - | - |  |  |
| 80189678 | - | - | - | Y |  |
| 80189698 | - | - | - | Y |  |
| 801896C0 | - | func_801896C0 | src/event/gen01634.c |  | event: 80191838/801928A8/80191858 rows + v0 spin. |
| 80189750 | - | - | - |  |  |
| 80189790 | - | - | - |  | event: 8018AD28(8)/8018ADC8/8018CA18/8018C9B8(0x1010)/ 8018C858 prep rows; 8018C438/8018B548 tail. |
| 80189820 | - | - | - |  |  |
| 80189884 | - | - | - |  | event: 8018AE28 + a1/v0 latch + 8018C9B8/8018C7F8 rows. |
| 80189920 | - | func_80189920 | src/event/gen01416.c |  | event: v0 gate; 8018AE28 + t0/v0 latch + 8018C9B8; 8018CA48 tail. |
| 80189A4C | - | - | - |  | event registry: registers a0 at slot a1 (stride 20); returns the slot or -1 when taken already. |
| 80189A90 | - | - | - |  | event registry (free): clears slot a0 (stride 20) and runs 8018B4C8 on its payload. |
| 80189AE8 | - | - | - |  |  |
| 80189B28 | - | - | - |  |  |
| 80189B8C | - | - | - |  |  |
| 80189BCC | - | func_80189BCC | src/event/gen01415.c |  | event: 8018CB88 row; v0 gates; returns at L189C24. |
| 80189C58 | - | func_80189C58 | src/event/gen01633.c |  | event: v0 gate on 8018C3E8(1); 8018BA38/8018B838(1) rows. |
| 80189CF4 | - | - | - |  |  |
| 80189D38 | - | - | - |  | event: 80189E44/8018C7C8 rows. |
| 80189E44 | - | - | - |  | sprite scale: two products folded into the panel size. |
| 80189F6C | - | - | - |  |  |
| 80189F94 | - | - | - | Y |  |
| 80189F9C | - | func_80189F9C | src/event/gen01632.c |  | event: 801975E8 prep + 801774B4 loop L189FAC. |
| 8018A058 | - | - | - |  | event: 80192AF8/8018A1B8 preps; 8018A140(0xD1)/8018AAC4 tail. |
| 8018A140 | - | - | - |  |  |
| 8018A1B8 | - | func_8018A1B8 | src/event/gen01631.c |  | event: 8018AC90 gate; spins L18A240/L18A2F0 with 8018F0C8; 8018A438 row; 8x 8018AC90 tail. |
| 8018A438 | - | func_8018A438 | src/event/gen1077.c |  | event: 8018AC90 intro/branches with 8018F0C8 spins; loops L18A49C/L18A500/L18A594 on regcmp latches. |
| 8018A5F8 | - | func_8018A5F8 | src/event/gen1192.c |  | event: 8018AC90 + v0 spins; 80197648 tail row. |
| 8018A6B4 | - | - | - |  | event: 8018AC90 x2 + 8018AC68 rows. |
| 8018A75C | event_drive | - | - |  | drive-event queue dispatch: modes 0..3 select which slot is armed, then wait for the cell latch and signal completion. |
| 8018A9DC | - | func_8018A9DC | src/event/gen01630.c |  | event: v0 gate picks 8018A75C(2/1/3) vs 8018A438 row. |
| 8018AA60 | - | - | - |  |  |
| 8018AAC4 | - | - | - |  |  |
| 8018AB08 | - | - | - |  | event cache: quantizes a1 down to the table slot a0. |
| 8018ABAC | - | - | - | Y |  |
| 8018ABE8 | - | - | - |  |  |
| 8018AC40 | - | - | - |  |  |
| 8018AC68 | - | - | - |  |  |
| 8018AC90 | self_test_loop | - | - |  |  |
| 8018ACF8 | - | - | - |  |  |
| 8018AD28 | - | - | - |  |  |
| 8018AD48 | - | func_8018AD48 | src/event/gen01629.c |  | event: v1/v0 gate; 801976E8/8018ACF8/80197668/801976A8/ 801976F8 rows. |
| 8018ADC8 | - | - | - |  | DMA-ish prep: writes 0x40001010 header + shifted size into a1 unless a0 <= 0. |
| 8018AE28 | - | func_8018AE28 | src/event/gen01628.c |  | event: v0 gate tree; 8018B1C8 spins L18AF44; 8018B16C + s6 latches; returns at L18B138 via L18B13C. |
| 8018B16C | - | - | - |  |  |
| 8018B1C8 | - | - | - |  | region walker (0x300): v0/t2 + v1/a3 regcmp gates threading the D_8019B17C-adjacent record list; register-only. |
| 8018B4C8 | - | func_8018B4C8 | src/event/gen01414.c |  | event: v0 + v1/a0 latch loop; 8018B1C8 tail. |
| 8018B548 | - | - | - |  |  |
| 8018B578 | - | - | - |  | region walker variant (0x2BC): t1/t3 + t1/v0 latch ladder over the record spans with spin folds — register-only. |
| 8018B838 | - | - | - |  | event: s0/v0 + v0/s0 latches; 8018B9A8 row; returns L18B908. |
| 8018B928 | - | - | - |  | region walk: heads/used records are skipped (hi bits); returns 1 while a0 is covered by a record span, 0 past the end. |
| 8018B9A8 | - | - | - |  | region walk (shifted): like 8018B928 with a0 <<= bank shift. |
| 8018BA38 | - | func_8018BA38 | src/event/gen01627.c |  | event: 8018B9A8 gate at L18BAB8; wide a1/a3 + a0/a2 regcmp gate trees; returns at L18BE5C. |
| 8018BF18 | - | - | - |  | pure-math leaf (0x4D0, no calls): 33 loads of table/state words feeding a long sll/sra/and/or/mult chain — the byte-verified arithmetic is t |
| 8018C3E8 | - | - | - |  |  |
| 8018C438 | - | - | - |  |  |
| 8018C468 | - | func_8018C468 | src/event/gen01626.c |  | event: 8018B9A8 gate; s4 latch; 8018A75C(2/1/3) + 80197678 rows; returns at L18C5D8. |
| 8018C608 | - | - | - |  | event-mask queue: arm/park a u16 pair (packed 24-bit) against the DMA record or the direct B114 cells. |
| 8018C7C8 | - | - | - | Y |  |
| 8018C7F8 | - | - | - |  |  |
| 8018C858 | - | func_8018C858 | src/event/gen01625.c |  | event: s5/v0 latch; 8018A75C(2/1/3) + 80197678 rows; returns at L18C988. |
| 8018C9B8 | - | - | - |  |  |
| 8018CA18 | - | - | - |  |  |
| 8018CA48 | - | func_8018CA48 | src/event/gen01624.c |  | event: v0 gate; 8018A9DC/8018AB08 rows. |
| 8018CAD8 | - | func_8018CAD8 | src/event/gen01413.c |  | event: v0/s0 + s1/s0 latches; 80197688 spin rows. |
| 8018CB88 | - | - | - |  | gate monolith (0x304): ~40 v1/v0 compare-and-branch lanes over (a3 & 0xF000) etc. — the catalog of icon/menu state transitions; register-onl |
| 8018CE98 | - | - | - |  | event: 8018E4B8 gate, 8018ABE8(1); spins L18CF58 on the 8018A75C rows (2/1/3). |
| 8018CFF8 | - | func_8018CFF8 | src/event/gen01412.c |  | event: spin L18D01C; v1/a2 + v1/v0 gate tree; 8018E4B8/ 8018ABE8 rows then 8018A75C(2/1/3); returns at L18D194. |
| 8018D1AC | - | func_8018D1AC | src/event/gen1138.c |  | event: 8018A75C(2) + v1/v0 gate; spin loops L18D300/L18D340; 8018A75C(1) closes. |
| 8018D3C8 | - | - | - |  |  |
| 8018D82C | - | func_8018D82C | src/event/gen01411.c |  | event: 8018AAC4 gate spins; then 8018E408/8018E2C8(1) rows with the 8018D1AC/8018A75C(3) tail. |
| 8018DAB4 | - | func_8018DAB4 | src/event/gen01623.c |  | event: v1/v0 gates; 8018C608(1)/8018E0C8(1) rows then L18DB6C: 8018E4B8/8018ABE8 and L18DBDC: 8018E448/8018D1AC/ 8018E2C8/8018A75C(3). |
| 8018DC58 | - | func_8018DC58 | src/event/gen01410.c |  | event: v0/v1 gate; v1/v0 gate picks 8018CFF8 vs the 8018DAB4 row. |
| 8018DCD8 | - | - | - |  | queue/command state reset: header + 24 slots (0x10 stride). |
| 8018DDEC | - | - | - |  | queue/command state reset (paired with 8018DCD8): gated on the active state; returns 1 when reset ran. |
| 8018DF10 | - | - | - | Y | queue phase -> step id. |
| 8018DF90 | - | - | - | Y |  |
| 8018DFA0 | - | - | - |  |  |
| 8018DFC4 | - | - | - |  |  |
| 8018DFE8 | - | - | - |  |  |
| 8018E00C | - | func_8018E00C | src/event/gen01622.c |  | event: 8018E2C8/8018E448/8018E4B8 gate; 8018ABE8(1) tail. |
| 8018E0C8 | - | - | - |  | waiter: latch up to four pending u16 pairs from the F67xx queue into B114 and clear their busy bits (gated on a0). |
| 8018E2C8 | - | func_8018E2C8 | src/event/gen01409.c |  | event: a0/v0 latch chain (L18E2E0/L18E314/L18E35C); 8018F0C8 row inside; returns at L18E3F4. |
| 8018E408 | - | - | - |  |  |
| 8018E448 | - | - | - |  |  |
| 8018E488 | - | - | - |  |  |
| 8018E4B8 | - | - | - |  |  |
| 8018E4E8 | - | - | - |  | event: gate ladders with jr-$v0 sub-dispatches (L18E5D0/ L18E6CC); 8018EAE8 row; 2x 8018AB08 rows (L18E790/L18E7B0); returns at L18E814+. |
| 8018EAE8 | - | - | - |  | pan/step math: quantize, /3 via magic, two-table product. |
| 8018EBB8 | - | - | - |  | packed sprite-field: normalize the value, two table divisions, recombine (t1 index + geometry). |
| 8018ECE8 | - | - | - |  | gate monolith (0x37C): twin jr-$v0 sub-dispatches (L8018ED78 / L8018EE38) with 8-way slots each, then a v0-latch tail; the sub-handlers are  |
| 8018F068 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F078 | - | - | - |  | register-only stub (0x1C); see asm for exact dataflow. |
| 8018F098 | - | - | - |  | register-only stub (0x2C); see asm for exact dataflow. |
| 8018F0C8 | anim_reg_stub | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F0D8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F0E8 | - | - | - |  | event: jr-$t2 dispatch (2 slots); 8018F158/8018F148 rows. |
| 8018F148 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F158 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F168 | - | - | - | Y |  |
| 8018F1F8 | - | - | - | Y |  |
| 8018F240 | - | - | - | Y |  |
| 8018F268 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F278 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F288 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F298 | - | - | - |  | event: 80197608 row. |
| 8018F2DC | - | - | - |  |  |
| 8018F308 | - | - | - |  | status hook: waits for the busy flag to clear, then tail-jumps through the low-RAM vector (0x8000DFFC). |
| 8018F34C | - | - | - |  | register-only stub (0x24); see asm for exact dataflow. |
| 8018F374 | - | func_8018F374 | src/event/gen01621.c |  | event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. |
| 8018F408 | - | func_8018F408 | src/event/gen01620.c |  | event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. |
| 8018F478 | - | - | - |  |  |
| 8018F4B8 | - | func_8018F4B8 | src/event/gen01619.c |  | event: 801976E8 prep; t2/t1 latch loop; 80197608/801976F8 tail. |
| 8018F538 | - | - | - |  | event: 8018F5C8 + v0/v1 + s0/v0 latch loop; 8018F0C8 tail. |
| 8018F5C8 | - | - | - | Y |  |
| 8018F604 | - | - | - | Y |  |
| 8018F62C | - | - | - | Y |  |
| 8018F654 | - | - | - |  |  |
| 8018F688 | - | - | - |  |  |
| 8018F708 | - | func_8018F708 | src/event/gen01408.c |  | event: v1/v0 gates; 8018FA00 row; loops L18F7A0/L18F7B4 with 8018FCC4; 8018F0C8/8018FD68/8018F9E0 rows. |
| 8018F9E0 | - | - | - |  |  |
| 8018FA00 | - | func_8018FA00 | src/event/gen985.c |  | event: s1/v0 + v0/s1 latches; 80190004(1)/80190078/80190088 rows with 8018F0C8 polls; returns at L18FC9C. |
| 8018FCC4 | - | func_8018FCC4 | src/event/gen1288.c |  | event: v0 + v0/s3 gates; 8018F078 spin loop L18FCF8. |
| 8018FD68 | - | func_8018FD68 | src/event/gen1076.c |  | event: s6 gate; 80190004(1) + 8018F0C8/80191638/80190088 rows with s2/v0 + v0 latches. |
| 80190004 | - | - | - |  |  |
| 80190078 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80190088 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80190098 | - | func_80190098 | src/event/gen01618.c |  | event dispatcher: gate tree with jr-$v0 sub-dispatch at L1902CC; 2x 8018F0C8 poll rows; a0/a2 + v1/a2 spin latches; returns at L1905E8. |
| 801905FC | - | - | - |  | event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows, 80192C4C + 80190098 loops; a2/s3 + v1/a3 regcmp latches. |
| 8019087C | - | - | - |  | event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows, 80192C4C + 80190098 loops; v1/a3 regcmp latches close. |
| 80190B44 | - | - | - |  | event-cmd flow: v0/v1 gates through 8018F0C8/801905FC checks, 801928E8/80191620/80190FD8/80192C4C/80190098 rows with spin loops; returns at  |
| 80190F50 | - | - | - |  |  |
| 80190FD8 | - | - | - |  | PSY-Q runtime lock-enter stub variant (t1 = 0x3F pole). |
| 801910AC | - | func_801910AC | src/event/gen01407.c |  | event: v0 gate run -> L1910E8/L1910EC. |
| 8019119C | - | - | - |  |  |
| 801911E8 | - | - | - |  | event: 80191620/8018F0C8/80192AF8/80192B28(2) preps; then 3x 80190B44 (idx 1/1/10/12) with spin loops and the 801905FC tail. |
| 801913C8 | - | func_801913C8 | src/event/gen01406.c |  | event: 801928E8 x2; 80191620/8018F0C8/80190FD8 rows with gate at L1914E0. |
| 80191530 | - | - | - |  |  |
| 8019153C | - | func_8019153C | src/event/gen1287.c |  | event: 80190098 poll loop L191570; returns at L1915E8. |
| 80191618 | - | - | - |  | register-only stub (0x8); see asm for exact dataflow. |
| 80191620 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80191638 | - | - | - |  | play-time splitter (0x104): magic-mult chain on (a0+0x96) (-75/-5/-6/-10 style stages using 0x1B4E81B5/0x88888889/ 0x66666667) packing the r |
| 80191748 | - | - | - |  |  |
| 801917B8 | - | - | - | Y |  |
| 801917D8 | - | - | - |  |  |
| 801917F8 | - | - | - | Y |  |
| 80191818 | - | - | - | Y |  |
| 80191838 | - | - | - |  |  |
| 80191858 | - | - | - |  |  |
| 80191878 | - | func_80191878 | src/event/gen01405.c |  | event: 80190B44(1/2/0) rows on s3/t0 + s0/fp latch loop L1918D8. |
| 801919B4 | - | func_801919B4 | src/event/gen01404.c |  | event (twin): 80190B44(1/2/0) rows on s2/fp + s0/s7 latch. |
| 80191AE8 | - | func_80191AE8 | src/event/gen1286.c |  | event: s3/fp + s0/s7 latch loops on 80190B44(1/2/0); 801905FC tail. |
| 80191C38 | - | - | - |  |  |
| 80191C58 | - | - | - | Y |  |
| 80191C78 | - | - | - |  | device command chain: seed registers, poll the start flag, kick the DMA chain, then finalize. |
| 80191D78 | - | - | - |  |  |
| 80191DAC | - | - | - |  | event flow: a0/v0 + v1/v0 gates route 80192858/80192748/ 80192888 (or 80191C58) rows through 8018F688/80191620; then 801928E8 + 801920F0(1)  |
| 80192020 | - | func_80192020 | src/event/gen01403.c |  | event: 80191858 gate; 80192858/80191838(9)/801919B4(2) rows. |
| 801920F0 | - | - | - |  | battle command maps: 80191838/80191858/80192858 preps with beqz/v0 gates routing through 801928E8/80191620/801919B4/ 80191878/80192738/80191 |
| 801922D8 | - | func_801922D8 | src/event/gen984.c |  | event flow: 80192888/801928E8 spins, 80191838/80191858/ 80192858/801919B4 rows; gates at L192300/L192380. |
| 80192478 | - | func_80192478 | src/event/gen1191.c |  | event: 801928E8 spins, 80191838/80191858/80192858 rows, then 801928E8/80192718/80191AE8(9)/801920F0 tail. |
| 80192614 | - | func_80192614 | src/event/gen01402.c |  | event: 801928E8 x2 + 801920F0(1) rows; 80191818 gate tail; returns at L1926F8. |
| 80192718 | - | - | - | Y |  |
| 80192728 | - | - | - | Y |  |
| 80192738 | - | - | - | Y |  |
| 80192748 | - | - | - | Y |  |
| 80192768 | - | - | - |  | device command chain (variant): same handshake, 0x11400100 kick, no completion poll. |
| 80192858 | - | - | - |  |  |
| 80192888 | - | - | - | Y |  |
| 801928A8 | - | - | - |  |  |
| 801928C8 | - | - | - | Y |  |
| 801928E8 | event_spin_wait | - | - |  | event: v1/v0 spin loop L19290C; a0/v0 latches; 2x 80192A60 rows with spin loops; returns at L192A4C. |
| 80192A60 | - | func_80192A60 | src/event/gen01401.c |  | event: v0/v1 latch loop L192A88 on 80191620/80197798(3)/ 801977B8 rows. |
| 80192AF8 | - | - | - | Y |  |
| 80192B28 | - | - | - | Y |  |
| 80192B58 | - | - | - | Y |  |
| 80192B88 | - | - | - |  |  |
| 80192BBC | - | - | - | Y |  |
| 80192BEC | - | - | - | Y |  |
| 80192C1C | - | - | - | Y |  |
| 80192C4C | - | - | - | Y |  |
| 80192C5C | - | - | - | Y |  |
| 80192C74 | - | - | - |  |  |
| 80192C8C | - | func_80192C8C | src/event/gen01400.c |  | event: 80193194/801931B8 gates; 80192D64/801976D8/801931C8/ 801932E8/80197630/801976F8 rows; returns at L192D54. |
| 80192D64 | - | func_80192D64 | src/event/gen01399.c |  | event: 8018F0C8/801976B8 rows; spin loops L192E04/L192DF8 on v0 gates; closes 8018F0C8/801976B8. |
| 80192F34 | - | func_80192F34 | src/event/gen01617.c |  | event: s2/s4 gate; 80197798(3) + 801977B8 spin rows with s1 latches; returns at L193058. |
| 8019307C | - | - | - |  |  |
| 8019311C | - | - | - |  |  |
| 80193194 | - | - | - | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 801931B8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801931C8 | - | - | - |  |  |
| 80193220 | - | - | - |  | trampoline bucket: bump the tick and run the 8 registered callbacks. |
| 8019328C | - | - | - | Y |  |
| 801932B8 | - | - | - | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 801932E8 | - | - | - |  |  |
| 80193334 | - | - | - |  |  |
| 801934B4 | - | - | - |  | callback-slot flag: set/clear bit (a0+0x10) and keep the slot. |
| 80193560 | - | - | - | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 80193588 | - | - | - |  |  |
| 801935C8 | - | - | - |  |  |
| 80193668 | - | func_80193668 | src/event/gen01398.c |  | battle anim: v0 gates route 801973B8/80197398/801972D8 rows and the 80197358 spin loop L1938A8. |
| 80193924 | - | func_80193924 | src/event/gen01616.c |  | battle anim: v1/v0 gate tree; 801972B8/80197208 rows; returns at L193C10. |
| 80193C40 | - | - | - |  | event: pure gate tree with the jr-$v0 dispatch (L193DC4) and regcmp spin loops; 80194008 tail row; returns at L193FE0. |
| 80194008 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80194018 | - | - | - |  |  |
| 8019418C | - | - | - |  | state change: latch a0 into the state byte; when non-zero, dispatch the DB50 message handler. |
| 801941E8 | - | - | - |  |  |
| 8019428C | - | - | - | Y |  |
| 8019429C | - | - | - |  | state slot: dispatch while the phase is low, then store a0. |
| 801942FC | - | - | - |  |  |
| 80194394 | cb_slot15 | - | - |  |  |
| 801943FC | - | - | - |  | battle-UI phase state: hit-box gate then two message slots. |
| 80194518 | - | - | - |  |  |
| 801945A8 | - | - | - |  | battle anim: 801943FC row. |
| 80194640 | cb_slot2 | - | - |  |  |
| 801946A0 | - | - | - |  |  |
| 80194700 | - | func_80194700 | src/event/gen01615.c |  | battle anim: 801943FC gates -> L1947A0 / L194758. |
| 801947B8 | - | func_801947B8 | src/event/gen01397.c |  | battle anim: v0 gates; returns at L194838. |
| 80194880 | - | - | - |  |  |
| 8019492C | - | - | - |  |  |
| 80194988 | - | - | - |  |  |
| 801949F8 | - | - | - |  |  |
| 80194AB8 | - | - | - |  |  |
| 80194B90 | - | - | - |  |  |
| 80194BC4 | - | - | - |  |  |
| 801950BC | - | - | - |  |  |
| 801950F0 | - | - | - | Y |  |
| 80195120 | - | - | - |  | event: 80195668/80195700 rows. |
| 801951A0 | - | - | - |  |  |
| 801951E0 | - | - | - |  | event: 80195668/80195700/80195798/80195648/801957B4 preps; gate tree; returns at L1953BC. |
| 801953D8 | - | - | - |  | event: 80195668/80195700/80195798/80195648/801957B4 preps; v0 gate tree; returns at L19562C. |
| 80195648 | - | - | - |  |  |
| 80195668 | - | - | - |  | GPU E300 word: clamp (x,y) into the sprite grid then pack. |
| 80195700 | - | - | - |  | GPU E400 word: clamp (x,y) then pack. |
| 80195798 | - | - | - |  |  |
| 801957B4 | - | - | - |  | sprite/quad command word from the (w,h,sx,sy) sprite struct. |
| 80195834 | - | - | - | Y |  |
| 8019584C | - | func_8019584C | src/event/gen01396.c |  | event: 80196898 gate; 801968CC spin loop L1958E8. |
| 8019592C | - | func_8019592C | src/event/gen1284.c |  | event: v0 gates; 801960BC rows (3/4/5); 80196074 tail. |
| 80195B5C | - | func_80195B5C | src/event/gen1283.c |  | event: 80196898 gates; 801968CC spin rows (L195C68) + s0 latches; returns L195D74. |
| 80195D98 | - | func_80195D98 | src/event/gen01395.c |  | event: 80196898 gate; 801968CC spin rows (L195E9C/L195F48); s0/v0 + s0/v1 latch loops; returns at L195FF8. |
| 80196018 | - | - | - |  | latch a GPU word into the DC5C pointer; returns the pointer. |
| 8019602C | - | - | - | Y |  |
| 80196034 | - | - | - |  |  |
| 80196074 | - | - | - |  |  |
| 801960BC | - | - | - |  |  |
| 801960EC | - | - | - | Y |  |
| 80196110 | - | - | - |  |  |
| 801963C0 | - | - | - |  |  |
| 80196620 | - | - | - |  | event: 80192C74 gate tree; 80196EF0 row; 80192C74 tail gate with 80196A10. |
| 8019675C | - | func_8019675C | src/event/gen1190.c |  | battle anim: 80196898 intro; loops L1967B8/L1967C8 on 801963C0/801968CC rows; 80196888 tail. |
| 80196898 | - | - | - |  |  |
| 801968CC | - | - | - |  | event: 801928E8 gate; 8018F0C8 + 2x 80192C74 rows. |
| 80196A10 | - | - | - |  | GPU DMA handshake: stamp the DC5C scratch, switch the DC58 command chain, or arm the 0x09000001 kick. |
| 80196AB0 | - | - | - |  |  |
| 80196B9C | - | - | - |  |  |
| 80196C88 | - | - | - |  |  |
| 80196DCC | - | - | - |  |  |
| 80196EC8 | - | - | - |  |  |
| 80196EF0 | - | - | - |  | fill a2 bytes with a1. |
| 80196F18 | - | - | - |  |  |
| 80196F2C | - | - | - | Y |  |
| 80196F48 | - | - | - |  | event: s0/v0 latch tree; 80194640/801971A8 tail. |
| 80197038 | - | - | - |  |  |
| 801970A8 | - | - | - |  | battle anim: 80196F2C + v0 gates -> L19711C / L197120. |
| 80197168 | - | - | - |  | anim struct init: 8 u16s + 4 u8s zero run. |
| 801971A8 | - | - | - |  |  |
| 801971E8 | - | - | - | Y |  |
| 80197208 | tex_link_packets | - | - | Y |  |
| 80197248 | - | - | - | Y |  |
| 80197288 | - | - | - | Y |  |
| 801972B8 | - | - | - | Y |  |
| 801972D8 | - | - | - |  |  |
| 80197308 | - | - | - |  |  |
| 80197338 | - | - | - | Y |  |
| 80197358 | - | - | - | Y |  |
| 80197378 | - | - | - | Y |  |
| 80197398 | - | - | - | Y |  |
| 801973B8 | anim_cmd_header | - | - |  | anim command header: GPU-ish control word + optional 2nd word. |
| 80197458 | - | - | - | Y |  |
| 80197468 | - | - | - |  |  |
| 801974CC | - | - | - |  | event: v1/v0 gate; 3x 8019428C + v0/s2 latch + 8018F0C8 rows; returns at L1975CC. |
| 801975E8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801975F8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197608 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197618 | - | - | - |  | register-only stub (0x18); see asm for exact dataflow. |
| 80197630 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197648 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197658 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197668 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197678 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197688 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197698 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976A8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976B8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976C8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976D8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976E8 | - | - | - |  | PSY-Q runtime lock-enter stub: syscall 0 with a0 = 1 (handwritten instruction). Callers read the return and run the paired 801976F8 (lock-ex |
| 801976F8 | - | - | - |  | PSY-Q runtime lock-exit stub: syscall 0 with a0 = 2 (handwritten instruction), paired with 801976E8. PS1-only; no SNES counterpart. |
| 80197708 | - | - | - |  | stack pivot: SP := A0 (scratch-stack select); returns old SP — unrepresentable in C; register-only. |
| 80197718 | - | - | - |  | jump-pole table base: this slot jumps vector 0xB0 with id 0x32; slots 0x33/0x34/0x35/0x36/0x41/0x43/0x45 share the same fixed block (unreach |
| 80197798 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801977A8 | - | - | - | Y |  |
| 801977B8 | - | func_801977B8 | src/event/gen1189.c |  | event: jr-$t2 dispatch; 8018F078 spin loops (L197860/L197908); 80197A68 tail; returns at L197948. |
| 80197964 | - | func_80197964 | src/event/gen1188.c |  | event: v0 gates; 8018F078 spin loop L1979E8. |
| 80197A68 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197A78 | - | - | - |  |  |
| 80197A84 | - | - | - | Y |  |
| 80197A94 | - | - | - |  | event: 80197E78/801976E8/80197D80/801976F8/80197798/ 80197BE4/80197D28 row chain; linear. |
| 80197B24 | - | - | - |  | event (twin): row chain; 80197D08 tail. |
| 80197BB4 | - | - | - | Y |  |
| 80197BE4 | - | - | - |  |  |
| 80197C5C | - | - | - |  |  |
| 80197CC4 | - | - | - |  |  |
| 80197D08 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197D18 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197D28 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197D38 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197D48 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197D58 | - | - | - |  | register-only stub (0x14); see asm for exact dataflow. |
| 80197D6C | - | - | - |  | register-only stub (0x14); see asm for exact dataflow. |
| 80197D80 | - | - | - |  | event: 801976E8 prep + 80197608 row. |
| 80197DF8 | - | - | - | Y |  |
| 80197E30 | - | - | - |  |  |
| 80197E68 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197E78 | - | func_80197E78 | src/event/gen01614.c |  | event: 801976E8 prep; loop L197EA8 on 80197608/801976F8. |
| 80197EE8 | - | - | - | Y |  |
| 80197F24 | - | - | - |  | trig table with quadrant folds. |
| 80197FB8 | - | - | - |  | trig table (abs + folds). |
| 80198058 | - | - | - |  | angle from ratio: quadrant-corrected table arctangent. |
| 801981D8 | - | - | - |  | register-only stub (0x20); see asm for exact dataflow. |
| 801981F8 | - | - | - |  | PSY-Q BREAK hook stub: marshals a0 into a1 then `break 0, 260`; returns v1 (or -1 when the handler clears v0). Handwritten SDK hook — the on |
| 80198208 | - | - | - |  | register-only stub (0x24); see asm for exact dataflow. |
| 8019822C | - | func_8019822C | src/event/gen01613.c |  | event: v0 gates; 801982E8 + v0/s4 latch rows. |
| 801982E8 | - | - | - |  | register-only stub (0x18); see asm for exact dataflow. |
| 80198300 | - | func_80198300 | src/event/gen1282.c |  | event: v0 gate tree; 80198990(0x22) row; returns L198494. |
| 801984B0 | - | func_801984B0 | src/event/gen1137.c |  | event: v0 gate tree; 80198990(0x22) row; returns L1985E4. |
| 80198600 | - | - | - |  |  |
| 80198630 | - | func_80198630 | src/event/gen01612.c |  | event: v0 gates; 80198990(0x22) row; returns L1986C4. |
| 801986E0 | - | - | - |  | float-bits builder: extract the exponent/mantissa layout. |
| 801987B0 | - | - | - |  | float-bits compare (<=): handles zeros, signs, exponents. |
| 80198860 | - | - | - |  | float-bits compare: -1/0 result for the +/- ordering. |
| 80198910 | - | - | - |  |  |
| 80198970 | - | - | - |  |  |
| 80198990 | - | - | - |  |  |
| 80198A00 | - | - | - |  | register-only stub (0x0); see asm for exact dataflow. |

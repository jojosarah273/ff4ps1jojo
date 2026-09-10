# FF4 port — function catalog

Every Phase A function and where it lives in the port. The `name`
column is the semantic 0x800F primitive name (tool:
`tools/port_names.py`, header: `port/include/ff4_window.h`);
`module` is the interpreted module that owns the function;
`bv` marks byte-verified. Unassigned rows are stubbed until the
register machines are interpreted (Avenue 2).

- functions: 2516   interpreted: 1859   stub-only: 657
- byte-verified: 827   named primitives: 1812

| id | name | module fn | module | bv | role |
|----|------|-----------|--------|----|------|
| 800F3A68 | - | - | - |  | register-only stub (0x4); see asm for exact dataflow. |
| 800F3A70 | cell_bank_sel | cell_bank_sel | src/db/flags.c |  |  |
| 800F3AB4 | cell_0xf3ab4 | cell_0xf3ab4 | src/rows/gen_800F3AB4.c |  |  |
| 800F3B04 | catalog_base | catalog_base | src/config/options.c |  | catalog base + offset. Bank tag byte at scratch 0x1F8003D2 selects the base; overflow path uses the saved bank offset. |
| 800F3B9C | cell_add16 | cell_add16 | src/db/dispatch.c |  | byte-verified: the scratch-base machinery computes into an unused register; the only observable output is (u16)a0. |
| 800F3C3C | - | - | - |  |  |
| 800F3C6C | - | - | - | Y |  |
| 800F3C94 | cell_window | cell_window | src/db/catalogs.c | Y |  |
| 800F3CC4 | - | - | - | Y | menu cell: base 0x7FFC8000, upgrades to ROM 0x800D0000 when the cursor offset overflows 0x7FFF; merges 2 bytes into D50, catalog callback +  |
| 800F3D48 | - | - | - |  |  |
| 800F3D64 | battle_wait_just | battle_wait_just | src/db/dispatch.c |  | battle: 3B9C x2 gates; spin loop L800F3DF0. |
| 800F3E50 | - | - | - |  | battle: 3B9C x2 rows. |
| 800F3F38 | ticker_advance | ticker_advance | src/db/ticker.c |  |  |
| 800F3F94 | - | - | - |  |  |
| 800F4008 | - | - | - |  |  |
| 800F4064 | cell_pos_fwd | cell_pos_fwd | src/db/cursor.c |  |  |
| 800F40CC | - | - | - | Y |  |
| 800F40E8 | cell_flags_tick2 | cell_flags_tick2 | src/db/flags.c |  |  |
| 800F4120 | ticker_reblend | ticker_reblend | src/shop/shop_dispatch.c |  |  |
| 800F4170 | - | - | - |  |  |
| 800F41A4 | - | - | - |  |  |
| 800F41E8 | - | - | - |  |  |
| 800F4248 | row_read | row_read | src/battle/spell.c | Y |  |
| 800F4264 | cell_pos_mask | cell_pos_mask | src/db/cursor.c | Y |  |
| 800F4280 | cell_tick_and2 | cell_tick_and2 | src/db/cursor.c |  |  |
| 800F42B0 | - | - | - |  |  |
| 800F42F8 | - | - | - |  |  |
| 800F4328 | - | - | - |  |  |
| 800F4370 | - | - | - |  |  |
| 800F43A0 | cell_0xf43a0 | cell_0xf43a0 | src/rows/gen_800F43A0.c |  |  |
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
| 800F4960 | cell_0xf4960 | cell_0xf4960 | src/rows/gen_800F4960.c |  |  |
| 800F4998 | - | - | - | Y |  |
| 800F49E8 | - | - | - |  |  |
| 800F4A38 | - | - | - |  |  |
| 800F4A7C | cell_0xf4a7c | cell_0xf4a7c | src/rows/gen_800F4A7C.c |  |  |
| 800F4AC0 | - | - | - |  |  |
| 800F4B1C | cell_0xf4b1c | cell_0xf4b1c | src/rows/gen_800F4B1C.c |  |  |
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
| 800F4F28 | - | - | - | Y |  |
| 800F4F4C | row_sel_cell2 | - | - |  |  |
| 800F4FAC | - | - | - |  |  |
| 800F5024 | - | - | - | Y |  |
| 800F5050 | - | - | - |  |  |
| 800F50BC | - | - | - |  | window flags: repack D68 status bits from D50 state; xor the latched byte with a0's high byte. |
| 800F5140 | - | - | - |  |  |
| 800F516C | - | - | - | Y |  |
| 800F5198 | - | - | - |  | window state: latch byte -> D50; mask D68 0x3D; merge 0xC0 bits; mask D50 with D40; flag bit in D68. |
| 800F521C | - | - | - |  | window load u16: D50 <- u16(a0); flag merge (0x3D/0xC000/2). |
| 800F52BC | window_state_byte_variant_d50_a0_x | window_state_byte_variant_d50_a0_x | src/rows/gen_800F52BC.c |  | window state (byte variant): D50 <- a0&0xFF; same flags. |
| 800F533C | - | - | - |  | window state (u16 variant): D50 <- a0&0xFFFF; merge 0xC000 bits >> 8; mask with D44. |
| 800F53C0 | - | - | - | Y |  |
| 800F53D4 | - | - | - | Y |  |
| 800F53E8 | - | - | - | Y |  |
| 800F53FC | - | - | - | Y |  |
| 800F5410 | sep_a | sep_a | src/battle/panels.c | Y |  |
| 800F542C | - | - | - | Y |  |
| 800F5448 | cell_flags_clr4 | cell_flags_clr4 | src/db/flags.c | Y |  |
| 800F5464 | - | - | - | Y |  |
| 800F5480 | - | - | - | Y |  |
| 800F549C | - | - | - | Y |  |
| 800F54B8 | - | - | - | Y |  |
| 800F54D4 | - | - | - |  |  |
| 800F5520 | cell_flags_cmp_pos | cell_flags_cmp_pos | src/db/flags.c |  |  |
| 800F5574 | io_poll | io_poll | src/battle/menu_root.c |  |  |
| 800F55C0 | - | - | - |  |  |
| 800F560C | - | - | - |  |  |
| 800F56AC | - | - | - |  |  |
| 800F5764 | - | - | - | Y |  |
| 800F5804 | cell_0xf5804 | cell_0xf5804 | src/rows/gen_800F5804.c |  |  |
| 800F58BC | cell_0xf58bc | cell_0xf58bc | src/rows/gen_800F58BC.c | Y |  |
| 800F5958 | - | - | - | Y |  |
| 800F59F4 | cell_0xf59f4 | cell_0xf59f4 | src/rows/gen_800F59F4.c |  |  |
| 800F5A90 | - | - | - |  |  |
| 800F5B2C | cell_0xf5b2c | cell_0xf5b2c | src/rows/gen_800F5B2C.c | Y |  |
| 800F5B4C | - | - | - |  |  |
| 800F5B8C | - | - | - |  |  |
| 800F5BE8 | cell_0xf5be8 | cell_0xf5be8 | src/rows/gen_800F5BE8.c | Y |  |
| 800F5C14 | - | - | - |  |  |
| 800F5C64 | poll_go | poll_go | src/battle/partyscreen.c |  |  |
| 800F5CCC | - | - | - | Y |  |
| 800F5CF8 | row_scan | row_scan | src/config/store.c |  |  |
| 800F5D24 | - | - | - |  |  |
| 800F5D58 | - | - | - |  |  |
| 800F5DA0 | poll_pair | poll_pair | src/battle/partyscreen.c |  |  |
| 800F5DD4 | cell_dec_cell | cell_dec_cell | src/db/cursor.c |  |  |
| 800F5E1C | - | - | - |  |  |
| 800F5E48 | cell_set50_from54 | cell_set50_from54 | src/db/cursor.c |  |  |
| 800F5E74 | - | - | - |  |  |
| 800F5EA0 | - | - | - |  |  |
| 800F5ECC | cell_tick_xor | cell_tick_xor | src/db/cursor.c | Y |  |
| 800F5EE8 | - | - | - |  |  |
| 800F5F20 | cell_0xf5f20 | cell_0xf5f20 | src/rows/gen_800F5F20.c |  |  |
| 800F5F70 | cell_0xf5f70 | cell_0xf5f70 | src/rows/gen_800F5F70.c |  |  |
| 800F5FA4 | - | - | - |  |  |
| 800F5FE8 | - | - | - |  |  |
| 800F6048 | - | - | - | Y |  |
| 800F6068 | cell_0xf6068 | cell_0xf6068 | src/rows/gen_800F6068.c |  |  |
| 800F60A8 | cell_0xf60a8 | cell_0xf60a8 | src/rows/gen_800F60A8.c |  |  |
| 800F6104 | - | cell_pair_inc | src/rows3/gen_800F6104.c |  |  |
| 800F6130 | cell_0xf6130 | cell_0xf6130 | src/rows/gen_800F6130.c |  |  |
| 800F6180 | cell_0xf6180 | cell_0xf6180 | src/rows/gen_800F6180.c |  |  |
| 800F61E8 | - | - | - |  |  |
| 800F6214 | row_done2 | - | - | Y |  |
| 800F6240 | page_paint2 | - | - |  |  |
| 800F6274 | - | - | - |  |  |
| 800F62BC | - | - | - |  |  |
| 800F62F0 | - | - | - |  |  |
| 800F6338 | cell_0xf6338 | cell_0xf6338 | src/rows/gen_800F6338.c |  |  |
| 800F6364 | cell_step | cell_step | src/battle/monster.c |  |  |
| 800F6390 | cell_0xf6390 | cell_0xf6390 | src/rows/gen_800F6390.c |  |  |
| 800F63BC | - | - | - |  |  |
| 800F63E8 | - | - | - | Y |  |
| 800F63F8 | - | - | - |  |  |
| 800F6434 | gate | gate | src/battle/menu_root.c |  |  |
| 800F6488 | - | - | - | Y |  |
| 800F64A8 | cell_0xf64a8 | cell_0xf64a8 | src/rows/gen_800F64A8.c |  |  |
| 800F64EC | cell_flags_pos0 | cell_flags_pos0 | src/db/flags.c |  |  |
| 800F654C | - | - | - | Y |  |
| 800F6558 | - | - | - | Y |  |
| 800F6564 | - | - | - |  |  |
| 800F658C | cell_push9 | cell_push9 | src/db/cellstore.c |  |  |
| 800F65C8 | cell_push_c8_cur | cell_push_c8_cur | src/db/cellstore.c |  |  |
| 800F65F0 | cell_sink89_c | cell_sink89_c | src/db/cellstore.c |  |  |
| 800F6630 | - | - | - |  |  |
| 800F6658 | - | - | - |  |  |
| 800F6698 | - | - | - |  |  |
| 800F66D8 | cell_push_c8_sel | cell_push_c8_sel | src/db/cellstore.c |  |  |
| 800F6718 | - | - | - |  |  |
| 800F6764 | cell_push89_sel | cell_push89_sel | src/db/cellstore.c |  |  |
| 800F67B0 | - | - | - |  |  |
| 800F67FC | cell_push_c8_b4o | cell_push_c8_b4o | src/db/cellstore.c |  |  |
| 800F6848 | - | - | - |  |  |
| 800F68A0 | cell_0xf68a0 | cell_0xf68a0 | src/rows/gen_800F68A0.c |  |  |
| 800F68F8 | - | - | - |  |  |
| 800F6940 | - | - | - |  |  |
| 800F6988 | - | - | - |  |  |
| 800F69E4 | - | - | - |  |  |
| 800F6A40 | - | - | - |  |  |
| 800F6A78 | - | - | - |  |  |
| 800F6AB0 | - | - | - |  |  |
| 800F6AF4 | cell_0xf6af4 | cell_0xf6af4 | src/rows/gen_800F6AF4.c |  |  |
| 800F6B38 | cell_0xf6b38 | cell_0xf6b38 | src/rows/gen_800F6B38.c |  |  |
| 800F6B68 | - | - | - |  |  |
| 800F6B98 | - | - | - |  |  |
| 800F6BE0 | cell_sink8_9 | - | - |  |  |
| 800F6C28 | - | - | - |  |  |
| 800F6C68 | cell_push_c8 | cell_push_c8 | src/shop/shop_dispatch.c |  |  |
| 800F6CA8 | - | - | - |  |  |
| 800F6CF4 | - | - | - |  |  |
| 800F6D40 | cell_0xf6d40 | cell_0xf6d40 | src/rows/gen_800F6D40.c |  |  |
| 800F6D70 | - | - | - |  |  |
| 800F6DA0 | - | - | - |  |  |
| 800F6DE8 | - | - | - |  |  |
| 800F6E30 | - | - | - |  |  |
| 800F6E60 | - | - | - |  |  |
| 800F6EA8 | - | - | - |  |  |
| 800F6EDC | cell_0xf6edc | cell_0xf6edc | src/rows/gen_800F6EDC.c |  |  |
| 800F6F28 | - | - | - |  |  |
| 800F6F50 | - | - | - |  |  |
| 800F6F8C | - | - | - |  |  |
| 800F6FBC | - | - | - |  |  |
| 800F6FEC | - | - | - |  |  |
| 800F7030 | - | - | - |  |  |
| 800F7074 | - | - | - | Y |  |
| 800F7084 | - | - | - |  |  |
| 800F70BC | cell_0xf70bc | cell_0xf70bc | src/rows/gen_800F70BC.c |  |  |
| 800F710C | - | - | - | Y |  |
| 800F712C | cell_0xf712c | cell_0xf712c | src/rows/gen_800F712C.c |  |  |
| 800F7170 | cell_flags_pack | cell_flags_pack | src/db/flags.c |  |  |
| 800F71D0 | - | - | - | Y |  |
| 800F71DC | wnd_open | wnd_open | src/battle/menu_root.c | Y |  |
| 800F71E8 | - | - | - |  |  |
| 800F7210 | - | - | - |  |  |
| 800F7248 | cell_0xf7248 | cell_0xf7248 | src/rows/gen_800F7248.c |  |  |
| 800F7270 | - | - | - |  |  |
| 800F72A8 | - | - | - |  |  |
| 800F72E0 | - | - | - |  |  |
| 800F7328 | - | - | - | Y |  |
| 800F7358 | - | - | - | Y |  |
| 800F7398 | - | - | - | Y |  |
| 800F73A8 | - | - | - |  |  |
| 800F73E0 | cell_0xf73e0 | cell_0xf73e0 | src/rows/gen_800F73E0.c |  |  |
| 800F7430 | - | - | - | Y |  |
| 800F7450 | - | - | - |  |  |
| 800F7494 | cell_0xf7494 | cell_0xf7494 | src/rows/gen_800F7494.c |  |  |
| 800F74F4 | - | - | - | Y |  |
| 800F7500 | draw_pad | draw_pad | src/shop/shop_dispatch.c | Y |  |
| 800F750C | - | - | - |  |  |
| 800F7534 | cell_push60 | cell_push60 | src/db/cellstore.c |  |  |
| 800F756C | cell_0xf756c | cell_0xf756c | src/rows/gen_800F756C.c |  |  |
| 800F7594 | - | - | - |  |  |
| 800F75CC | - | - | - |  |  |
| 800F7604 | - | - | - |  |  |
| 800F764C | - | - | - | Y |  |
| 800F767C | - | - | - | Y |  |
| 800F76BC | cell_word_half | cell_word_half | src/db/cursor.c |  |  |
| 800F76E8 | - | - | - |  |  |
| 800F7728 | cell_flags_nz50 | cell_flags_nz50 | src/db/flags.c |  |  |
| 800F7780 | - | - | - |  |  |
| 800F77CC | cell_0xf77cc | cell_0xf77cc | src/rows/gen_800F77CC.c |  |  |
| 800F780C | - | - | - |  |  |
| 800F7864 | - | - | - |  |  |
| 800F7894 | row_sel2 | - | - |  |  |
| 800F78C4 | cell_tick_or | cell_tick_or | src/db/cursor.c | Y |  |
| 800F78E0 | cell_0xf78e0 | cell_0xf78e0 | src/rows/gen_800F78E0.c |  |  |
| 800F7918 | ticker_reblend2 | ticker_reblend2 | src/db/flags.c |  |  |
| 800F7968 | cell_0xf7968 | cell_0xf7968 | src/rows/gen_800F7968.c |  |  |
| 800F799C | - | - | - |  |  |
| 800F79E0 | - | - | - |  |  |
| 800F7A40 | - | - | - |  |  |
| 800F7A68 | cell_flags_repack2 | - | - |  |  |
| 800F7AC8 | - | - | - |  |  |
| 800F7B40 | - | - | - |  |  |
| 800F7B7C | - | - | - |  |  |
| 800F7BE8 | - | - | - |  | window flags (twin of 800F50BC): repack D68 status bits from D50 state; xor the latched byte with a0's high byte. |
| 800F7C6C | cell_tick_dbl | cell_tick_dbl | src/db/cursor.c |  |  |
| 800F7C98 | - | - | - |  |  |
| 800F7CC8 | - | - | - |  |  |
| 800F7D0C | - | - | - |  |  |
| 800F7D68 | - | - | - |  |  |
| 800F7DDC | - | - | - |  |  |
| 800F7E20 | - | - | - |  |  |
| 800F7E78 | - | - | - |  |  |
| 800F7EE8 | cell_0xf7ee8 | cell_0xf7ee8 | src/rows/gen_800F7EE8.c |  |  |
| 800F7F18 | - | - | - |  |  |
| 800F7F48 | - | - | - |  | window subtract: D40 -= a0 (with parity bit); repack flags; store new D40/D50; returns the D50 pointer. |
| 800F7FCC | cell_pos_sub16 | cell_pos_sub16 | src/db/cursor.c |  | window subtract u16: D44 -= u16(a0) (with parity bit); repack flags incl. D40[1] hi bits; returns the D50 pointer. |
| 800F8058 | cell_pos_back | cell_pos_back | src/db/cursor.c |  |  |
| 800F80D0 | - | - | - |  |  |
| 800F814C | - | - | - | Y |  |
| 800F8160 | - | - | - | Y |  |
| 800F8188 | txt_draw | txt_draw | src/battle/menu_root.c |  |  |
| 800F81B0 | - | - | - |  |  |
| 800F81E8 | - | - | - |  |  |
| 800F8210 | cell_0xf8210 | cell_0xf8210 | src/rows/gen_800F8210.c |  |  |
| 800F824C | cell_put | cell_put | src/battle/spell.c |  |  |
| 800F8274 | cell_put_hi9 | cell_put_hi9 | src/db/cellstore.c |  |  |
| 800F82B0 | - | - | - |  |  |
| 800F82EC | - | - | - |  |  |
| 800F8328 | - | - | - |  |  |
| 800F8378 | cell_pull89_bank | cell_pull89_bank | src/db/cellstore.c |  |  |
| 800F83C8 | - | - | - |  |  |
| 800F8410 | - | - | - |  |  |
| 800F8458 | - | - | - |  |  |
| 800F84B0 | - | - | - |  |  |
| 800F8508 | - | - | - |  |  |
| 800F8550 | - | - | - |  |  |
| 800F8598 | - | - | - |  |  |
| 800F85EC | - | - | - |  |  |
| 800F8640 | - | - | - |  |  |
| 800F8674 | cell_0xf8674 | cell_0xf8674 | src/rows/gen_800F8674.c |  |  |
| 800F86A8 | - | - | - |  |  |
| 800F86F0 | cell_0xf86f0 | cell_0xf86f0 | src/rows/gen_800F86F0.c |  |  |
| 800F8738 | - | - | - |  |  |
| 800F8768 | - | - | - |  |  |
| 800F8798 | - | - | - |  |  |
| 800F87DC | cell_stamp8_9 | cell_stamp8_9 | src/db/cellstore.c |  |  |
| 800F8820 | - | - | - |  |  |
| 800F885C | cell_pull_c8_off | cell_pull_c8_off | src/db/cellstore.c |  |  |
| 800F8898 | - | - | - |  |  |
| 800F88E4 | - | - | - |  |  |
| 800F8930 | cell_0xf8930 | cell_0xf8930 | src/rows/gen_800F8930.c |  |  |
| 800F8960 | cell_pull_c8 | cell_pull_c8 | src/db/cellstore.c |  |  |
| 800F8990 | - | - | - |  |  |
| 800F89D4 | - | - | - |  |  |
| 800F8A18 | cell_pull_c8_sel2 | cell_pull_c8_sel2 | src/db/cellstore.c |  |  |
| 800F8A48 | cell_0xf8a48 | cell_0xf8a48 | src/rows/gen_800F8A48.c |  |  |
| 800F8A8C | cell_0xf8a8c | cell_0xf8a8c | src/rows/gen_800F8A8C.c |  |  |
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
| 800F8CD4 | - | cell_push5c | src/rows3/gen_800F8CD4.c |  |  |
| 800F8D00 | - | - | - |  |  |
| 800F8D40 | - | cell_put5c | src/rows3/gen_800F8D40.c |  |  |
| 800F8D6C | - | - | - |  |  |
| 800F8DAC | - | - | - |  |  |
| 800F8DE0 | - | - | - |  |  |
| 800F8E24 | - | - | - |  |  |
| 800F8E50 | - | - | - |  |  |
| 800F8E90 | - | - | - |  |  |
| 800F8EBC | - | - | - |  |  |
| 800F8EFC | - | - | - |  |  |
| 800F8F30 | - | - | - |  |  |
| 800F8F74 | - | - | - |  |  |
| 800F8F94 | cell_clear_bank2 | cell_clear_bank2 | src/db/cellstore.c | Y |  |
| 800F8FB8 | - | - | - |  |  |
| 800F8FD8 | cell_0xf8fd8 | cell_0xf8fd8 | src/rows/gen_800F8FD8.c |  |  |
| 800F8FFC | - | - | - |  |  |
| 800F902C | cell_0xf902c | cell_0xf902c | src/rows/gen_800F902C.c |  |  |
| 800F905C | - | - | - |  |  |
| 800F9090 | - | - | - |  |  |
| 800F90C4 | - | - | - | Y |  |
| 800F90EC | - | - | - | Y |  |
| 800F9114 | - | - | - | Y |  |
| 800F9140 | cell_0xf9140 | cell_0xf9140 | src/rows/gen_800F9140.c | Y |  |
| 800F916C | - | - | - |  |  |
| 800F91A4 | - | - | - |  |  |
| 800F9200 | cell_cursor_dec | cell_cursor_dec | src/db/cursor.c |  |  |
| 800F922C | cell_cursor_ret2 | cell_cursor_ret2 | src/db/cursor.c |  |  |
| 800F926C | - | - | - |  |  |
| 800F9298 | row_open3 | - | - |  |  |
| 800F92D8 | cell_0xf92d8 | cell_0xf92d8 | src/rows/gen_800F92D8.c |  |  |
| 800F9304 | - | - | - |  |  |
| 800F9330 | - | - | - |  |  |
| 800F9370 | - | - | - |  |  |
| 800F939C | - | - | - |  |  |
| 800F93DC | row_close2 | - | - |  |  |
| 800F9410 | - | - | - |  |  |
| 800F9448 | - | - | - |  |  |
| 800F94B8 | - | - | - |  | window cursor: reads the u16 table entry at 0x800D0000 + idx, sets flags, advances idx by 2. |
| 800F9538 | cell_0xf9538 | cell_0xf9538 | src/rows/gen_800F9538.c |  |  |
| 800F956C | - | - | - |  |  |
| 800F95A0 | row_close | row_close | src/battle/rows_more.c |  |  |
| 800F95D8 | - | - | - |  |  |
| 800F960C | - | - | - |  |  |
| 800F9644 | row_prep | row_prep | src/battle/spell.c | Y |  |
| 800F9660 | - | - | - | Y |  |
| 800F967C | - | - | - | Y |  |
| 800F9690 | cell_cur_save54 | cell_cur_save54 | src/db/dispatch.c | Y |  |
| 800F96A4 | - | - | - | Y |  |
| 800F96B8 | - | - | - | Y |  |
| 800F96CC | - | - | - | Y |  |
| 800F96E0 | cell_cur_save58 | cell_cur_save58 | src/db/cursor.c | Y |  |
| 800F96F4 | - | - | - | Y |  |
| 800F9708 | - | - | - | Y |  |
| 800F971C | - | - | - | Y |  |
| 800F9730 | - | - | - |  |  |
| 800F9784 | - | - | - |  | window state (u16 clear): D68 &= 0xFD; flag if the D44-masked u16 from a0 == 0. |
| 800F97D0 | - | - | - |  |  |
| 800F9820 | - | - | - |  | window state (u16 set): D44 |= u16(a0); flag if zero. |
| 800F9868 | - | - | - |  | catalog dispatch (0x368): a0/v0 regcmp ladder routes into a jr-$a0 sub-table (L800F990C..); each slot resolves a scratch-armed bank and disp |
| 800F9BD0 | rows_f9c98_f9ce8_pair | rows_f9c98_f9ce8_pair | src/rows/gen_800F9BD0.c |  | rows: 800F9C98/800F9CE8 pair. |
| 800F9C90 | - | - | - | Y |  |
| 800F9C98 | - | cell_clear_icon | src/rows3/gen_800F9C98.c |  |  |
| 800F9CE8 | - | cell_rows_420d | src/rows3/gen_800F9CE8.c |  |  |
| 800FA460 | - | shop_pass_a460 | src/rows3/gen_800FA460.c | Y |  |
| 800FA5B8 | - | - | - |  | battle item-use confirm: 0xD5/0x50/2 window gates, 0x1700/0x1704 headers, 0xA04 name row, 801163E8 executes the use. |
| 800FA834 | - | - | - | Y |  |
| 800FA9B4 | - | - | - |  |  |
| 800FAA04 | cell_0xfaa04 | cell_0xfaa04 | src/rows/gen_800FAA04.c |  |  |
| 800FAD48 | cell_0xfad48 | cell_0xfad48 | src/rows/gen_800FAD48.c |  |  |
| 800FB09C | - | - | - | Y |  |
| 800FB160 | cell_0xfb160 | cell_0xfb160 | src/rows/gen_800FB160.c | Y |  |
| 800FB224 | cell_0xfb224 | cell_0xfb224 | src/rows/gen_800FB224.c | Y |  |
| 800FB2E8 | - | shop_pass_b2e8 | src/rows3/gen_800FB2E8.c | Y |  |
| 800FB3A0 | - | battle_title_rows_1004 | src/rows3/gen_800FB3A0.c | Y |  |
| 800FB3F8 | - | - | - | Y |  |
| 800FB430 | - | func_800FB430 | src/config/screen_f.c |  | MAIN SYSTEM MENU root (0xA14): register dispatch ladder L800FB520..L800FBE08 (v0/v1 gates per segment). Linear call chain with constants pul |
| 800FBE44 | - | shop_rows_47 | src/rows3/gen_800FBE44.c |  | shop rows: 0x47/0x45/0x60/0x61 windows, 0x2800 texts, 801766B0 rows + 8017F8F8 preps; ends 80194700/80194394. |
| 800FBF50 | - | - | - |  | shop rows: 0x47/0x61 windows, loop L8FBF94 on 4120(0x202); 4064(8)/8274(0x61) cells. |
| 800FC07C | cell_0xfc07c | cell_0xfc07c | src/rows/gen_800FC07C.c | Y |  |
| 800FC0DC | cell_0xfc0dc | cell_0xfc0dc | src/rows/gen_800FC0DC.c |  |  |
| 800FC110 | - | - | - |  | battle rows: 0x3F/0x212C/0x79 windows, 0x420C texts, 0xAD window, 800FC2AC close; loop L8FC140 on 5574(0x28). |
| 800FC1CC | battle_rows_x3f_x212c_x79_windows | battle_rows_x3f_x212c_x79_windows | src/rows/gen_800FC1CC.c |  | battle rows: 0x3F/0x212C/0x79 windows, 0x2106/0xC6 texts, 800FD37C/800FC2AC rows; loop L8FC200 on 5574(0x2A). |
| 800FC2AC | - | battle_confirm_dialog | src/rows3/gen_800FC2AC.c |  | battle confirm-dialog: two 5958/53C0 key-gates select the 0x1802 header, then the 0x1700-0x1702 option rows, then 0x1803 dispatch (801762D0/ |
| 800FC548 | cell_0xfc548 | cell_0xfc548 | src/rows/gen_800FC548.c | Y |  |
| 800FC5A8 | cell_0xfc5a8 | cell_0xfc5a8 | src/rows/gen_800FC5A8.c | Y |  |
| 800FC5D8 | battle_confirm_dialog_x1700_test_b | battle_confirm_dialog_x1700_test_b | src/rows/gen_800FC5D8.c |  | battle confirm-dialog: 0x1700 test branches to the 0x2105 help (800FFADC/8017F9A8) vs 0x2120 detail (800FFB1C/8010CA74) rows; fee-check 0xFE |
| 800FC8E8 | - | shop_banner_7f | src/rows3/gen_800FC8E8.c |  | shop banner: 0x7F window, 0x5800 cells; loops LFC918/LFC968 (5A90(0x100) gate). |
| 800FCA08 | battle_item_xfd8_text_x2115_x4300 | battle_item_xfd8_text_x2115_x4300 | src/rows/gen_800FCA08.c |  | battle item: 0xFD8 text, 0x2115/0x4300-0x4305 cells; gate 5574(0xE). |
| 800FCAB8 | - | - | - | Y |  |
| 800FCC0C | - | - | - | Y |  |
| 800FCC84 | wnd_fx_tags | wnd_fx_tags | src/db/dispatch.c | Y |  |
| 800FCCBC | catalog_dispatch_0 | catalog_dispatch_0 | src/db/dispatch.c | Y |  |
| 800FCCDC | - | func_800FCCDC | src/menu/screen_k.c |  |  |
| 800FD37C | - | - | - | Y |  |
| 800FD404 | - | - | - | Y |  |
| 800FD494 | - | - | - |  | battle vertical-menu: 3D/3E label windows, 0xC0 window row gate, 0x17EE text with the 60A8(0x202) check; key ladder 0x2B-0xFC advances the c |
| 800FD6B8 | cell_0xfd6b8 | cell_0xfd6b8 | src/rows/gen_800FD6B8.c | Y |  |
| 800FD6E8 | cell_0xfd6e8 | cell_0xfd6e8 | src/rows/gen_800FD6E8.c | Y |  |
| 800FD718 | - | - | - |  | battle rows: 0x1704/0x1700/0xFE2 texts, 0x1E01/0x1E00 cells, 80169128 row; gates 6434(2)/5574(3). |
| 800FD804 | - | - | - | Y |  |
| 800FD85C | - | - | - |  | shop rows: 0x82/0x79/0x80 windows, 0x2100 text; loop L8FD87C on 4370(0x82)/4120(0x202). |
| 800FD914 | shop_rows2_run | shop_rows2_run | src/shop/shop_dispatch.c | Y |  |
| 800FD9FC | cell_0xfd9fc | cell_0xfd9fc | src/rows/gen_800FD9FC.c | Y |  |
| 800FDA4C | cell_0xfda4c | cell_0xfda4c | src/rows/gen_800FDA4C.c | Y |  |
| 800FDA9C | - | - | - |  |  |
| 800FDAFC | - | - | - | Y |  |
| 800FDB5C | cell_0xfdb5c | cell_0xfdb5c | src/rows/gen_800FDB5C.c | Y |  |
| 800FDBBC | - | shop_rows_dbbc | src/rows3/gen_800FDBBC.c |  | shop title-screen: 0x7C window with 800FDA9C/8018226C rows and the 0x2115/0x2116/0x420B/0x4300-0x4305 register rows (801820F4 commit); 0x200 |
| 800FDD28 | - | - | - |  |  |
| 800FDD8C | - | - | - |  | shop title rows: 0x7C window gate, 0x6/0x7 windows with 885C fill loops (L8FDE30/L8FDEB8 on 5C64(0x202)); 4248(0xF8)/ 9690/4008(0x47) reads. |
| 800FDF34 | - | - | - |  | shop title: 0x7C window, 0x2115 title + 0x4209 row, 800FDA9C + 8018226C(0x3800); close via 62BC(0x7C). |
| 800FE028 | - | - | - |  | shop fills: two 885C/5958(0x100) loops. |
| 800FE110 | - | - | - |  |  |
| 800FE5D4 | cell_0xfe5d4 | cell_0xfe5d4 | src/rows/gen_800FE5D4.c | Y |  |
| 800FE634 | cell_0xfe634 | cell_0xfe634 | src/rows/gen_800FE634.c |  |  |
| 800FE6E4 | battle_gate_early | battle_gate_early | src/db/dispatch.c |  | battle: 3C3C + a1/v0 latch. |
| 800FE778 | wnd_fx_7d | wnd_fx_7d | src/db/dispatch.c | Y |  |
| 800FE7B0 | - | - | - | Y |  |
| 800FE7D8 | - | - | - | Y | shop view dispatcher: 0x1700 gate picks 800FE110/800FDBBC vs 800FDD8C/800FDF34/80175494; tail always runs 801769B4/ 80174F64/80175004. |
| 800FE870 | - | - | - |  |  |
| 800FE8B4 | battle_c3c_b04_gates_loop_on_a0_v1 | battle_c3c_b04_gates_loop_on_a0_v1 | src/rows/gen_800FE8B4.c |  | battle: 3C3C/3B04 gates; 6364 loop on a0/v1 latch. |
| 800FE978 | - | - | - | Y |  |
| 800FE9F8 | - | - | - |  | shop rows: 0x7F/0x79/0x6F windows, 0x4209 texts; 6434/0xB1 gates close on 0x2100/0x4200 titles. |
| 800FEB10 | shop_rows_x79_window_x6f_x6e_stamp | shop_rows_x79_window_x6f_x6e_stamp | src/rows/gen_800FEB10.c |  | shop rows: 0x79 window + 0x6F/0x6E stamp rows, 0x4209/0x2126/ 0x2127 texts, 0x677/0xA1 windows; closes on 0x2A5 text. |
| 800FEC74 | cell_0xfec74 | cell_0xfec74 | src/rows/gen_800FEC74.c | Y |  |
| 800FED3C | shop_banner_xd9_x7a_x79_xb1_window | shop_banner_xd9_x7a_x79_xb1_window | src/rows/gen_800FED3C.c |  | shop banner: 0xD9/0x7A/0x79/0xB1 windows, 0x2100/0x4200 texts, 80178BB4 row; loop L8FED94 on 5DA0(0x79)/5B8C; closes via 6434(0x202) gate. |
| 800FEE34 | - | - | - |  | item/order sub-screen: 0x4211 text, 0xD9/0xDF/0xDA windows with 800FE9F8/80109774/801069E0 gates; 0x7F + 0x94B8/9448 close. |
| 800FEF7C | shop_battle_v0_v1_v0_gates_pick_fe | shop_battle_v0_v1_v0_gates_pick_fe | src/rows/gen_800FEF7C.c |  | shop/battle: v0 + v1/v0 gates pick 800FEE34 pair, 80138F68 pair or 80073D58 row; returns at L800FF014. |
| 800FF024 | shop_buy_run | shop_buy_run | src/db/dispatch.c |  | shop flow: the buy-row chain 80171194/80171608/801719C8/ 801724D0/80172BA8/80173008/80173780/801721E8/8011B6B4, then a 5574 gate picks 80171 |
| 800FF0AC | cell_0xff0ac | cell_0xff0ac | src/rows/gen_800FF0AC.c | Y |  |
| 800FF1C0 | - | - | - |  |  |
| 800FF54C | - | - | - | Y |  |
| 800FF5EC | - | - | - |  | shop buy rows: 0x1705/0x1704 texts, 0x79 window, 80172BA8/80173008 rows; loop LFF614 on 5574(0x30)/53D4. |
| 800FF704 | - | - | - |  | shop buy-flow: 0x1706/0x1707 headers, 0x1700-0x1704 name rows, 64/6D/6E/79/B7/B8 windows; 800FB09C + 80172BA8/80173008 render the buy list;  |
| 800FF978 | - | - | - |  | shop inventory rows: 0x4C/0x4E/0x4A/0x49 windows, two 80170458 renders (0x4200/0x4300 gates); loops LFFA20/LFFA24/LFFA6C poll the 0xE5B cell |
| 800FFADC | - | - | - | Y |  |
| 800FFB1C | - | - | - | Y |  |
| 800FFB5C | cell_0xffb5c | cell_0xffb5c | src/rows/gen_800FFB5C.c | Y |  |
| 800FFCAC | cell_0xffcac | cell_0xffcac | src/rows/gen_800FFCAC.c | Y |  |
| 800FFE0C | - | - | - |  | shop gates: 0xB1/0x5A/0x5C/0x2/0x54/0xEA windows with 4120/6434 gates; 800FFEFC/8010A964 rows close. |
| 800FFEFC | - | func_800FFEFC | src/menu/screen_r.c |  |  |
| 801004D4 | battle_stats_x16a0_x16a2_texts_x30 | battle_stats_x16a0_x16a2_texts_x30 | src/battle/gen468.c | Y | battle stats: 0x16A0-0x16A2 texts, 0x30-0x32 windows rows via 3F38(3C3C); 5574 cursor ladder. |
| 801005DC | battle_help_dialog_x8fb_header_x18 | battle_help_dialog_x8fb_header_x18 | src/battle/gen59.c |  | battle help-dialog: 0x8FB header, 0x1804-0x180B ruler rows, 0x1440/0x1441 progress counters, sub-screen calls 800FAD48 / 8010CA74 / 80170C14 |
| 80100894 | rows_x_f0_cells_x700_x706_texts_vi | rows_x_f0_cells_x700_x706_texts_vi | src/battle/gen914.c |  | rows: 4x 65F0 cells + 0x700-0x706 texts via 81B0; linear. |
| 80100978 | fn_1x00978 | fn_1x00978 | src/battle/gen01517.c |  |  |
| 801009E8 | fn_1x009e8 | fn_1x009e8 | src/battle/gen741.c | Y |  |
| 80100A98 | shop_rows_x8fc_x1701_texts_gate_pi | shop_rows_x8fc_x1701_texts_gate_pi | src/battle/gen913.c |  | shop rows: 0x8FC/0x1701 texts; gate 6434(2) picks the 0x8FC reads. |
| 80100B30 | shop_rows_x1702_x3d_x3e_windows_x1 | shop_rows_x1702_x3d_x3e_windows_x1 | src/battle/gen688.c |  | shop rows: 0x1702/0x3D/0x3E windows, 0x1701 text; 4F28/7A40 label pairs, then 62BC gates. |
| 80100BE0 | shop_buy_row_x711_gate_x3d_x18_x19 | shop_buy_row_x711_gate_x3d_x18_x19 | src/battle/gen453.c |  | shop buy row: 0x711 gate, 0x3D/0x18/0x19/0x77 windows, 0xFE7/ 0x8FC texts, 80100B30/80100978 rows; loop L100C10 on 54D4(3B04(0x711)). |
| 80100D50 | fn_1x00d50 | fn_1x00d50 | src/battle/gen14.c |  |  |
| 80101230 | shop_own_row_x172c_text_x1700_x170 | shop_own_row_x172c_text_x1700_x170 | src/battle/gen534.c |  | shop own-row: 0x172C text, 0x1700-0x1705 texts with 0x172E/ 0x172F cells; branch on 5574(3), closes with 0xC0 reads. |
| 80101350 | fn_1x01350 | fn_1x01350 | src/battle/gen29.c |  |  |
| 80101788 | settings_menu_items | settings_menu_items | src/battle/screen_c.c |  | settings menu (1704, items 4/5) |
| 80102414 | fn_1x02414 | fn_1x02414 | src/battle/gen01516.c | Y |  |
| 80102444 | fn_1x02444 | fn_1x02444 | src/battle/gen983.c | Y |  |
| 80102494 | fn_1x02494 | fn_1x02494 | src/battle/gen79.c |  |  |
| 801026EC | battle_c3c_gate_v0_v1_run_l102760 | battle_c3c_gate_v0_v1_run_l102760 | src/battle/gen01724.c |  | battle: 3C3C gate; v0/v1 run -> L102760. |
| 80102770 | fn_1x02770 | fn_1x02770 | src/battle/gen28.c |  |  |
| 80102C30 | fn_1x02c30 | fn_1x02c30 | src/battle/gen327.c | Y |  |
| 80102D68 | battle_menu_c3c_b04_gates_v0_gate | battle_menu_c3c_b04_gates_v0_gate | src/battle/gen01515.c |  | battle/menu: 3C3C/3B04 gates; v0 gate tree; returns L102E68. |
| 80102E78 | fn_1x02e78 | fn_1x02e78 | src/battle/gen711.c | Y |  |
| 80102ED8 | fn_1x02ed8 | fn_1x02ed8 | src/battle/gen710.c | Y |  |
| 80102F38 | fn_1x02f38 | fn_1x02f38 | src/battle/gen1038.c | Y |  |
| 80102F70 | shop_buy_rows_x1715_x1706_x1716_x1 | shop_buy_rows_x1715_x1706_x1716_x1 | src/battle/gen865.c | Y | shop buy rows: 0x1715/0x1706/0x1716/0x1707/0x1704 texts + 0xAC window, 800FD718/80102414 rows; gate 5574(1). |
| 80102FF8 | fn_1x02ff8 | fn_1x02ff8 | src/battle/gen1069.c | Y |  |
| 80103030 | shop_rows_x1704_xac_x1701_x171b_x1 | shop_rows_x1704_xac_x1701_x171b_x1 | src/battle/gen658.c | Y | shop rows: 0x1704/0xAC/0x1701/0x171B/0x1705 texts/windows, 801030F8/800FD718/80102ED8 rows; loop L1030B0 on 5574(4). |
| 801030F8 | fn_1x030f8 | fn_1x030f8 | src/battle/gen369.c | Y |  |
| 801031F0 | - | - | - | Y | shop confirm: 0x1286 gate, 0x1704/0x1705/0xAC/0xE1/0xB1/0xAD/ 0xB7/0x79 windows, 8017559C/801030F8/80103310/800FD718 rows. |
| 80103310 | shop_rows_x7a_xb7_windows_e78_c_ro | shop_rows_x7a_xb7_windows_e78_c_ro | src/battle/gen657.c | Y | shop rows: 0x7A/0xB7 windows, 80102E78/8017559C rows; loops L103328 and L103370 (4008(0x10) reads). |
| 801033E0 | fn_1x033e0 | fn_1x033e0 | src/battle/gen452.c | Y |  |
| 801034E0 | shop_rows_b8_twin_of_x7a_xb8_windo | shop_rows_b8_twin_of_x7a_xb8_windo | src/battle/gen656.c | Y | shop rows (B8 twin of 80103310): 0x7A/0xB8 windows, 80102E78/8017559C rows. |
| 801035B0 | fn_1x035b0 | fn_1x035b0 | src/battle/gen740.c | Y |  |
| 80103660 | shop_rows_x7a_xb9_windows_e78_rows | shop_rows_x7a_xb9_windows_e78_rows | src/battle/gen493.c | Y | shop rows: 0x7A/0xB9 windows, 80102E78 rows, 6FB/AD cells, 8017559C / 801038D4 / 80103790 sub-screens; loops L103678 and L1036C0 chain. |
| 80103790 | shop_rows_alt_of_d4_x1706_x1708_x5 | shop_rows_alt_of_d4_x1706_x1708_x5 | src/battle/gen687.c |  | shop rows (alt of 801038D4): 0x1706/0x1708/0x5A windows, 80103A28/80103F40/8017F8F8/80103B98/80103DD8/800FB224/ 8017559C rows. |
| 801038D4 | shop_buy_rows_x1706_x170c_texts_x5 | shop_buy_rows_x1706_x170c_texts_x5 | src/battle/gen533.c |  | shop buy rows: 0x1706/0x170C texts, 0x5A window, 80103A28/ 8017F8F8/80103F94/80103B98/80103DD8/80103AC8/800FB09C/ 8017559C rows; 0x2100/0x42 |
| 80103A28 | fn_1x03a28 | fn_1x03a28 | src/battle/gen864.c | Y |  |
| 80103AC8 | fn_1x03ac8 | fn_1x03ac8 | src/battle/gen709.c | Y |  |
| 80103B38 | fn_1x03b38 | fn_1x03b38 | src/battle/gen863.c | Y |  |
| 80103B98 | shop_list_x5c_x70_x73_window_rows | shop_list_x5c_x70_x73_window_rows | src/battle/gen78.c |  | shop list: 0x5C/0x70-0x73 window rows, 0x4200 title, 0x79 current row; two loops (L103BF8 menu / L103CEC detail) with 8010408C + 80103F00 re |
| 80103DD8 | shop_rows_x5c_xdf_x79_windows_x420 | shop_rows_x5c_xdf_x79_windows_x420 | src/battle/gen622.c |  | shop rows: 0x5C/0xDF/0x79 windows, 0x420C/0x6E/0x6F texts, 80103F00/8010408C rows; loop L103E0C on 5574(0xFF). |
| 80103EAC | fn_1x03eac | fn_1x03eac | src/battle/gen01723.c |  |  |
| 80103F00 | fn_1x03f00 | fn_1x03f00 | src/battle/gen1037.c | Y |  |
| 80103F40 | fn_1x03f40 | fn_1x03f40 | src/battle/gen862.c | Y |  |
| 80103F94 | fn_1x03f94 | fn_1x03f94 | src/battle/gen861.c | Y |  |
| 80103FE8 | fn_1x03fe8 | fn_1x03fe8 | src/battle/gen509.c | Y |  |
| 8010408C | battle_rows_x300_x301_x2f_x303_x20 | battle_rows_x300_x301_x2f_x303_x20 | src/battle/gen860.c |  | battle rows: 0x300/0x301/0x2F/0x303/0x200 cells via 8010D9D4; loop L1040A4 on 5A90(). |
| 8010415C | battle_menu_rows_x70_x7_x3d_x3e_wi | battle_menu_rows_x70_x7_x3d_x3e_wi | src/battle/gen326.c |  | battle menu rows: 0x70/0x7/0x3D/0x3E windows, two symmetric halves (L104198 and L104280) separated by 824C(0x7)+8F74(0x2115) +71DC(0x40) mid |
| 80104354 | fn_1x04354 | fn_1x04354 | src/battle/gen218.c |  |  |
| 801046F4 | shop_buy_rows_x1705_x7a_x79_window | shop_buy_rows_x1705_x7a_x79_window | src/battle/gen555.c |  | shop buy rows: 0x1705/0x7A/0x79 windows, 0x6F8/0x1701/0x171B/ 0x1706/0x1719 texts, 800FF024 row; loop L104724 on 5574 keys. |
| 80104804 | shop_rows_x1705_x7a_x79_windows_x6 | shop_rows_x1705_x7a_x79_windows_x6 | src/battle/gen686.c |  | shop rows: 0x1705/0x7A/0x79 windows, 0x6F8 texts, 800FF024 row; loop L104834 on 5574(0x40). |
| 801048EC | fn_1x048ec | fn_1x048ec | src/battle/gen01722.c |  |  |
| 80104934 | fn_1x04934 | fn_1x04934 | src/battle/gen19.c |  |  |
| 80104DB4 | fn_1x04db4 | fn_1x04db4 | src/battle/gen1068.c | Y |  |
| 80104E14 | shop_sell_rows_xb1_xa1_xd2_windows | shop_sell_rows_xb1_xa1_xd2_windows | src/battle/gen580.c |  | shop sell rows: 0xB1/0xA1/0xD2 windows, 0x6A1/0x709 texts, 80104F1C; 6434(2)/4120(2) gates. |
| 80104F1C | shop_buy_row_x709_x1706_x1707_text | shop_buy_row_x709_x1706_x1707_text | src/battle/gen427.c |  | shop buy-row: 0x709/0x1706/0x1707 texts, 0xD2/0xC/0xE/0x3D/0xEE windows, 8010D54C; 6A78(0xA1) gate. |
| 80105098 | shop_sell_rows_xab_xd2_windows_x6a | shop_sell_rows_xab_xd2_windows_x6a | src/battle/gen554.c |  | shop sell rows: 0xAB/0xD2 windows, 0x6A1/0x6A1 texts + 0x1706/ 0x1707 texts with 0xC/0xE/0xAE windows, 8010D4EC row; 4120(2) gates. |
| 801051A8 | fn_1x051a8 | fn_1x051a8 | src/battle/gen685.c | Y |  |
| 80105230 | shop_detail_cells_xe_x19_x18_xc_wi | shop_detail_cells_xe_x19_x18_xc_wi | src/rows/gen_80105230.c | Y | shop detail cells: 0xE/0x19/0x18/0xC windows with 76BC/7CC8 pairs and 3F38(3C3C(0x18)) rows; 4248(0x10)/4120 gate. |
| 80105358 | rows_twin_of_x_f0_b0_texts_linear | rows_twin_of_x_f0_b0_texts_linear | src/battle/gen912.c |  | rows (twin of 80100894): 4x 65F0 + 85B0 texts; linear. |
| 8010543C | fn_1x0543c | fn_1x0543c | src/battle/gen215.c |  |  |
| 80105828 | shop_purchase_verify_screen_reads | shop_purchase_verify_screen_reads | src/battle/gen93.c |  | shop purchase-verify screen: reads 1704; confirm/cancel gates route through the buy amounts (1719-1726 detail rows); L15A78 closes the list  |
| 80105AF0 | shop_list_render_header_item_rows | shop_list_render_header_item_rows | src/battle/gen92.c |  | shop list render: 2115/4300/4304 header + 4 item rows (2882/28B2/ 28E2/2912 desc, 4302/4305 cells, 420B cursor); loop L105C48 polls 634/70 k |
| 80105D2C | fn_1x05d2c | fn_1x05d2c | src/battle/gen553.c | Y |  |
| 80105DB4 | fn_1x05db4 | fn_1x05db4 | src/battle/gen72.c |  |  |
| 801060A8 | fn_1x060a8 | fn_1x060a8 | src/battle/gen51.c |  |  |
| 801062E8 | fn_1x062e8 | fn_1x062e8 | src/battle/gen579.c | Y |  |
| 80106370 | fn_1x06370 | fn_1x06370 | src/battle/gen12.c |  |  |
| 80106830 | fn_1x06830 | fn_1x06830 | src/battle/gen1276.c | Y |  |
| 80106860 | fn_1x06860 | fn_1x06860 | src/battle/gen953.c | Y |  |
| 801068B0 | fn_1x068b0 | fn_1x068b0 | src/battle/gen859.c | Y |  |
| 80106908 | fn_1x06908 | fn_1x06908 | src/battle/gen810.c | Y |  |
| 80106960 | fn_1x06960 | fn_1x06960 | src/battle/gen01514.c |  |  |
| 801069E0 | shop_choose_x7f_xda_xbb_windows_x4 | shop_choose_x7f_xda_xbb_windows_x4 | src/battle/gen809.c |  | shop choose: 0x7F/0xDA/0xBB windows, 0x4209/0x420A texts; gate 6434(0x202) picks the 0xDA vs 0x4200 paths. |
| 80106B1C | shop_detail_xda_xe7_x8d_xba_window | shop_detail_xda_xe7_x8d_xba_window | src/battle/gen325.c |  | shop detail: 0xDA/0xE7/0x8D/0xBA windows, 0x2115 title; 5574(8) gate; 3F38(3C3C)/76BC/7CC8 cell pairs on 0x8C/0x8B, 0x4B/0x4A; closes on 8D6 |
| 80106CD4 | battle_dispatch_v0_v1_v0_gates_pic | battle_dispatch_v0_v1_v0_gates_pic | src/battle/gen01721.c |  | battle dispatch: v0 + v1/v0 gates pick 80106D6C / 80071D4C / 8016CA94 rows. |
| 80106D6C | fn_1x06d6c | fn_1x06d6c | src/battle/gen05.c |  |  |
| 80107530 | fn_1x07530 | fn_1x07530 | src/battle/gen38.c |  |  |
| 80107830 | fn_1x07830 | fn_1x07830 | src/battle/gen226.c |  |  |
| 80107B74 | config_rows_x712_x1440_x1441_texts | config_rows_x712_x1440_x1441_texts | src/battle/gen578.c |  | config rows: 0x712/0x1440/0x1441 texts, 0x1441 window; loops L107B84 (5958(0x60)) and L107BBC (73E0 gates). |
| 80107C98 | config_sub_screen | config_sub_screen | src/battle/gen69.c |  | config sub-screen: 0xEA confirm wait, 0x8F4/0x8F6 save-check texts, 80108458 status table + 80177DAC scroll; loops at L107CB8/L107D54/ L107D |
| 80107F3C | config_confirm_loop_a | config_confirm_loop_a | src/battle/gen603.c | Y |  |
| 80107FC4 | shop_rows_x1702_x3e_x3d_xb2_window | shop_rows_x1702_x3e_x3d_xb2_window | src/battle/gen436.c |  | shop rows: 0x1702/0x3E/0x3D/0xB2 windows, 0x1762 row texts, 8017F9A8/800FED3C/800FAA04 sub-rows; loops L108098 on 6434(0x202)/5C64(0x202) ga |
| 801082C8 | fn_1x082c8 | fn_1x082c8 | src/battle/gen01720.c |  |  |
| 80108330 | fn_1x08330 | fn_1x08330 | src/battle/gen01719.c |  |  |
| 80108398 | fn_1x08398 | fn_1x08398 | src/battle/gen01718.c |  |  |
| 80108400 | fn_1x08400 | fn_1x08400 | src/battle/gen1036.c | Y |  |
| 80108458 | status_table_modulo_state_machine | status_table_modulo_state_machine | src/battle/gen01.c |  | status table + modulo state machine (0xF20): register gate ladder; linear call chain with constants, in order. |
| 80109378 | battle_key_x42_on_c0_latch_x42_int | battle_key_x42_on_c0_latch_x42_int | src/battle/gen01513.c |  | battle: key 0x42; on 53C0()==0 latch 0x42 into D40. |
| 801093B8 | shop_rows_x42_key_gate_routes_the | shop_rows_x42_key_gate_routes_the | src/battle/gen858.c |  | shop rows: 0x42 key gate routes the 3D48/95A0 fills. |
| 801094A0 | fn_1x094a0 | fn_1x094a0 | src/battle/gen1140.c | Y |  |
| 801094D8 | shop_rows_x776_xdd_windows_gates_x | shop_rows_x776_xdd_windows_gates_x | src/battle/gen1035.c |  | shop rows: 0x776/0xDD windows, gates 6434(0x202) route the 0x6C68 read chains; register latches pick the tails. |
| 801096F0 | fn_1x096f0 | fn_1x096f0 | src/battle/gen01512.c |  |  |
| 80109774 | shop_choose_twin_x7f_xdf_xbb_windo | shop_choose_twin_x7f_xdf_xbb_windo | src/battle/gen808.c |  | shop choose (twin): 0x7F/0xDF/0xBB windows, 0x4209/0x420A texts; gate 6434(0x202). |
| 801098C8 | fn_1x098c8 | fn_1x098c8 | src/battle/gen259.c | Y |  |
| 80109A28 | fn_1x09a28 | fn_1x09a28 | src/battle/gen380.c | Y |  |
| 80109B08 | fn_1x09b08 | fn_1x09b08 | src/battle/gen37.c | Y |  |
| 80109D68 | battle_fsm_x49c_a2_v1_a2_v0_latch | battle_fsm_x49c_a2_v1_a2_v0_latch | src/rows/gen_80109D68.c |  | battle FSM (0x49C): a2/v1+a2/v0 latch ladder (L80109DD0..) then a jr-$a0 sub-table (L80109E04) with v1/v0 gates into the L80109EAC/L8010A0A0 |
| 8010A204 | fn_1x0a204 | fn_1x0a204 | src/battle/gen451.c | Y |  |
| 8010A2AC | shop_battle_dialog_xc5_xe9_xd1_win | shop_battle_dialog_xc5_xe9_xd1_win | src/battle/gen256.c |  | shop/battle dialog: 0xC5/0xE9/0xD1 windows, 0xFE6 name text, 0x774/0x834 stat rows, 80109378 cursor math; four loops (L10A344/L10A398/L10A44 |
| 8010A5A0 | shop_banner_xe9_window_x2115_gate | shop_banner_xe9_window_x2115_gate | src/battle/gen621.c |  | shop banner: 0xE9 window + 0x2115 gate; spins on L10A620, then 0x834/0x774 text rows (L10A748/L10A84C) before restoring 0x2115. |
| 8010A964 | - | func_8010A964 | src/battle/rowf.c |  |  |
| 8010AF2C | battle_rows_x903_text_loop_l10af5c | battle_rows_x903_text_loop_l10af5c | src/battle/gen779.c |  | battle rows: 0x903 text; loop L10AF5C on 5958/53D4; then 78C4(3B04)/7918(0x202) gates with 0x902 alternate. |
| 8010B010 | - | - | - |  | battle: 3C3C/3B04/3B9C gates; wide v0 + a3/v0 gate tree (L10B084..L10B454) around the 8010B5DC row loop L10B2A8; v0/v1 latch loops close at  |
| 8010B5DC | battle_c3c_b04_gates_v0_run_to_l10 | battle_c3c_b04_gates_v0_run_to_l10 | src/battle/gen1275.c |  | battle: 3C3C/3B04 gates; v0 run to L10B6D0. |
| 8010B6EC | stat_refresh_verify_driver_loops_u | stat_refresh_verify_driver_loops_u | src/battle/gen1067.c |  | stat-refresh/verify driver; loops until the v0==v1 latch at L10C000 breaks. Register gates decide which stat-rows are recomputed (8010C1AC / |
| 8010C1AC | battle_rows_b9c_xedb_b04_c3c_gates | battle_rows_b9c_xedb_b04_c3c_gates | src/battle/gen1176.c |  | battle rows: 3B9C(0xEDB)/3B04/3C3C gates then 9330; 95A0 close. |
| 8010C368 | key_dialog_flow_for_a_status_subme | key_dialog_flow_for_a_status_subme | src/battle/gen1274.c |  | key-dialog flow for a status submenu. 9200/93DC pairs are the wait/read-input helpers; the v0 gates route confirm vs cancel tails; the L10CA |
| 8010CA74 | battle_rows_xae_x9d1_x9cf_texts_d6 | battle_rows_xae_x9d1_x9cf_texts_d6 | src/battle/gen952.c |  | battle rows: 0xAE/0x9D1/0x9CF texts, 8010D61C row; loop L10CA98 on 5574(0xC). |
| 8010CB08 | - | func_8010CB08 | src/battle/rowg.c |  |  |
| 8010D0D8 | shop_stat_row_x3e_x3d_windows_with | shop_stat_row_x3e_x3d_windows_with | src/battle/gen413.c |  | shop stat row: 0x3E/0x3D windows with 76BC/7CC8 pairs, 0xE5B cells; loops L10D170/L10D1C4 poll 5C64(0x202)/4248(0xF) gates. |
| 8010D24C | fn_1x0d24c | fn_1x0d24c | src/battle/gen857.c | Y |  |
| 8010D2A0 | battle_rows_c3c_b9c_d54c_a0_linear | battle_rows_c3c_b9c_d54c_a0_linear | src/battle/gen1273.c |  | battle rows: 3C3C/3B9C + 9330 + 8010D54C + 95A0; linear. |
| 8010D34C | battle_rows_c3c_b9c_gates_d54c_a0 | battle_rows_c3c_b9c_gates_d54c_a0 | src/battle/gen1139.c |  | battle rows: 3C3C/3B9C + 9330 gates; 8010D54C + 95A0 tail. |
| 8010D458 | fn_1x0d458 | fn_1x0d458 | src/battle/gen620.c | Y |  |
| 8010D4EC | fn_1x0d4ec | fn_1x0d4ec | src/battle/gen01717.c |  |  |
| 8010D54C | fn_1x0d54c | fn_1x0d54c | src/battle/gen532.c | Y |  |
| 8010D61C | fn_1x0d61c | fn_1x0d61c | src/battle/gen684.c | Y |  |
| 8010D6A0 | battle_item_confirm_key_ladders_x1 | battle_item_confirm_key_ladders_x1 | src/battle/gen309.c |  | battle item confirm: 5574 key ladders (0x11/0x30/0x46 codes) pick the 0x4A window header color rows, 80170458 shop row render. |
| 8010D894 | battle_row_x7_x3d_x3e_windows_xfe5 | battle_row_x7_x3d_x3e_windows_xfe5 | src/battle/gen467.c |  | battle row: 0x7/0x3D/0x3E windows, 0xFE5/0x1701 texts, 0x12E0 gate; loop L10D96C (5A90/53D4). |
| 8010D9D4 | battle_row_linear | battle_row_linear | src/battle/gen1272.c |  | battle rows: 3C3C/3B9C/9330/95A0; linear. |
| 8010DA88 | jr_a0_the_entry_master_battle_comm | jr_a0_the_entry_master_battle_comm | src/battle/gen1034.c |  | jr $a0 : the ~73-entry master battle-command jump table (invoked by func_80116720). Each entry calls one battle-command screen then jumps to |
| 8010DF98 | battle_rows_x1000_x1004_x1008_cell | battle_rows_x1000_x1004_x1008_cell | src/battle/gen739.c |  | battle rows: 0x1000-0x1004/0x1008 cells, 5574(0xB) gate, 80117DF8 row; loop L10DFA8 on 5958(0x140). |
| 8010E050 | fn_1x0e050 | fn_1x0e050 | src/battle/gen1033.c | Y |  |
| 8010E0A8 | - | - | - | Y |  |
| 8010E0D0 | fn_1x0e0d0 | fn_1x0e0d0 | src/battle/gen01511.c | Y |  |
| 8010E100 | - | - | - | Y |  |
| 8010E128 | fn_1x0e128 | fn_1x0e128 | src/battle/gen01510.c | Y |  |
| 8010E158 | battle_rows_x7b_x7a_windows_x64_x8 | battle_rows_x7b_x7a_windows_x64_x8 | src/battle/gen508.c |  | battle rows: 0x7B/0x7A windows, 0x64/0x89 windows, 8010543C/80102770/80172BA8/8011EA5C rows; loop L10E180 on row reads. |
| 8010E278 | fn_1x0e278 | fn_1x0e278 | src/battle/gen1271.c | Y |  |
| 8010E2B8 | fn_1x0e2b8 | fn_1x0e2b8 | src/battle/gen1270.c | Y |  |
| 8010E2F8 | fn_1x0e2f8 | fn_1x0e2f8 | src/battle/gen1269.c | Y |  |
| 8010E338 | fn_1x0e338 | fn_1x0e338 | src/battle/gen951.c | Y |  |
| 8010E388 | battle_spell_screen_xacf_xad8_text | battle_spell_screen_xacf_xad8_text | src/battle/gen387.c |  | battle spell screen: 0xACF-0xAD8 texts, 0xE3/0x89 windows, 80115BCC/80115D2C sub-renders; loop L10E428 (5C64(0x202)) scrolls rows. |
| 8010E58C | fn_1x0e58c | fn_1x0e58c | src/battle/gen43.c |  |  |
| 8010E878 | battle_rows_x300_x303_x200_cells_x | battle_rows_x300_x303_x200_cells_x | src/battle/gen655.c |  | battle rows: 0x300-0x303/0x200 cells, 0xFF window, 8010D9D4 rows; loop L10E898 on 5A90(0x200). |
| 8010E98C | battle_row_xad_x20_windows_x420c_t | battle_row_xad_x20_windows_x420c_t | src/battle/gen412.c |  | battle row: 0xAD/0x20 windows, 0x420C text, 8010E0D0/8017559C/ 8010E128/8011EA5C rows; 3 loops (L10E9B4 menu, L10EA2C confirm, L10EA7C secon |
| 8010EB14 | spin_on_s1_register | spin_on_s1_register | src/battle/gen233.c |  | spin on s1 (register) |
| 8010F08C | fn_1x0f08c | fn_1x0f08c | src/battle/gen856.c | Y |  |
| 8010F11C | fn_1x0f11c | fn_1x0f11c | src/battle/gen01509.c | Y |  |
| 8010F144 | fn_1x0f144 | fn_1x0f144 | src/battle/gen602.c | Y |  |
| 8010F1D4 | fn_1x0f1d4 | fn_1x0f1d4 | src/battle/gen654.c | Y |  |
| 8010F254 | fn_1x0f254 | fn_1x0f254 | src/battle/gen807.c | Y |  |
| 8010F2F4 | fn_1x0f2f4 | fn_1x0f2f4 | src/battle/gen450.c |  |  |
| 8010F484 | fn_1x0f484 | fn_1x0f484 | src/battle/gen806.c | Y |  |
| 8010F4DC | battle_spell_cast_helper_xc7_x48_x | battle_spell_cast_helper_xc7_x48_x | src/battle/gen341.c |  | battle spell-cast helper: 0xC7/0x48/0xC/0xE/0xCF windows, 0xACF- 0xAD8 texts, 801105A4/801187C0/8010F484/80116398/8011053C/80115BCC sub-rend |
| 8010F68C | battle_command_row_screen_x20_x24 | battle_command_row_screen_x20_x24 | src/battle/gen68.c |  | battle command-row screen: 0x20/0x24/0x7A/0x22 row windows, 8010543C/80102770 sub-renders, 801105A4 + 80173780 commits; loops until 5574(3)/ |
| 8010F944 | battle_row_info_xef_xf1_xf3_xf5_x8 | battle_row_info_xef_xf1_xf3_xf5_x8 | src/battle/gen379.c |  | battle row info: 0xEF/0xF1/0xF3/0xF5/0x89 windows with 8010FCA8 header; loop L10F9A4 (weights on 5958(0xC0/0x138)) with the 80117F40/80115D2 |
| 8010FAC4 | battle_rows_x79_x92_windows_c_rows | battle_rows_x79_x92_windows_c_rows | src/battle/gen950.c |  | battle rows: 0x79/0x92 windows, 80115684/8011581C rows; loop L10FAD4 on 5574(4). |
| 8010FB58 | battle_rows_twin_of_f944_xef_xf1_x | battle_rows_twin_of_f944_xef_xf1_x | src/battle/gen426.c |  | battle rows (twin of 8010F944): 0xEF/0xF1/0xF3/0xF5/0x89 windows, 8010FCA8/80115D2C/80110474/8011EA5C; loop L10FBB8 (5958(0x140) weights). |
| 8010FCA8 | fn_1x0fca8 | fn_1x0fca8 | src/battle/gen683.c | Y |  |
| 8010FD30 | battle_rows_x89_x7a_windows_xad4_x | battle_rows_x89_x7a_windows_xad4_x | src/battle/gen601.c |  | battle rows: 0x89/0x7A windows, 0xAD4/0xAD5/0xAD0/0xAD1 texts, 80115D2C/80110474/8011EA5C rows; loop L10FD60 on 5C64(0x202). |
| 8010FEEC | - | func_8010FEEC | src/battle/gen449.c |  | battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/ 8011EA5C; loops L10FF14 and L10FF8C on 5958(0x20). |
| 80110024 | fn_1x10024 | fn_1x10024 | src/battle/gen778.c | Y |  |
| 801100BC | battle_rows_x3b0_x3b1_x410_x411_ce | battle_rows_x3b0_x3b1_x410_x411_ce | src/battle/gen448.c |  | battle rows: 0x3B0/0x3B1/0x410/0x411 cells with 3F38(3C3C) pairs, 0x4C/0x4D/0x7A windows; loop L1100CC on 5A90(0x10). |
| 801101E4 | battle_row_x89_x7a_windows_c_bc_ea | battle_row_x89_x7a_windows_c_bc_ea | src/battle/gen411.c |  | battle row: 0x89/0x7A windows, 80110024/8011050C/801100BC/ 8011EA5C rows; loops L11020C (row read) and L11029C (7F48 detail). |
| 80110334 | battle_single_row_x89_x7a_windows | battle_single_row_x89_x7a_windows | src/battle/gen410.c |  | battle single-row: 0x89/0x7A windows, 0x2100 text, 0xC/0xE/0x91/ 0x8F/0x92 windows, 0x411/0x415 texts, 8011581C/80110474/ 80110024/8011EA5C; |
| 80110474 | fn_1x10474 | fn_1x10474 | src/battle/gen777.c | Y |  |
| 8011050C | fn_1x1050c | fn_1x1050c | src/battle/gen01508.c | Y |  |
| 8011053C | fn_1x1053c | fn_1x1053c | src/battle/gen776.c | Y |  |
| 801105A4 | battle_rows_xc_xe_windows_x340_x34 | battle_rows_xc_xe_windows_x340_x34 | src/battle/gen653.c |  | battle rows: 0xC/0xE windows, 0x340-0x343 cells, 800FC0DC row; loop L1105B8 on 5A90(0x18). |
| 80110664 | battle_spell_row_xca_x89_windows_x | battle_spell_row_xca_x89_windows_x | src/battle/gen466.c |  | battle spell row: 0xCA/0x89 windows, 0x2100/0xAD4/0xAD5 texts, 80115D2C/80110474/8011EA5C; loop L110694 on 5C64(0x202). |
| 801107A0 | fn_1x107a0 | fn_1x107a0 | src/battle/gen805.c | Y |  |
| 80110818 | fn_1x10818 | fn_1x10818 | src/battle/gen386.c |  |  |
| 801109A8 | battle_spell_run | battle_spell_run | src/battle/spell.c | Y | battle spell helper: 0x6C8/0x7A/0x24/0xB9/0x26/0xC8 windows, 80110F2C/80110FA4/80110B08/80173780/80110BC8/8011EA5C rows; loops L1109C8/L110A |
| 80110B08 | battle_rows_x68_x78_windows_x300_x | battle_rows_x68_x78_windows_x300_x | src/battle/gen738.c |  | battle rows: 0x68/0x78 windows, 0x300-0x307 text cells with 0x7A window reads. |
| 80110BC8 | battle_rows_x7a_x21_windows_xebb_c | battle_rows_x7a_x21_windows_xebb_c | src/battle/gen855.c |  | battle rows: 0x7A/0x21 windows, 0xEBB cell via 87DC/6214; loop L110C10 on 5958(0x10). |
| 80110CFC | battle_spell_cast_row_x1fc1_x6c8_t | battle_spell_cast_row_x1fc1_x6c8_t | src/battle/gen280.c |  | battle spell-cast row: 0x1FC1/0x6C8 texts, 0x26/0xB9/0x7A/0x22/ 0x24 windows, 80110F2C/80110FA4 sub-renders, 80173780 cast body, 80110BC8 ta |
| 80110F2C | fn_1x10f2c | fn_1x10f2c | src/battle/gen737.c | Y |  |
| 80110FA4 | fn_1x10fa4 | fn_1x10fa4 | src/battle/gen1268.c | Y |  |
| 80110FE4 | fn_1x10fe4 | fn_1x10fe4 | src/battle/gen1032.c | Y |  |
| 8011102C | fn_1x1102c | fn_1x1102c | src/battle/gen854.c | Y |  |
| 8011107C | fn_1x1107c | fn_1x1107c | src/battle/gen911.c | Y |  |
| 801110CC | fn_1x110cc | fn_1x110cc | src/battle/gen804.c | Y |  |
| 80111134 | fn_1x11134 | fn_1x11134 | src/battle/gen1267.c | Y |  |
| 8011117C | fn_1x1117c | fn_1x1117c | src/battle/gen1138.c | Y |  |
| 801111C4 | fn_1x111c4 | fn_1x111c4 | src/rows/gen_801111C4.c |  |  |
| 8011124C | fn_1x1124c | fn_1x1124c | src/battle/gen217.c |  |  |
| 801115F0 | s0_branch | s0_branch | src/battle/gen253.c |  | s0 branch |
| 801118CC | battle_rows_x81_x89_x79_windows_x1 | battle_rows_x81_x89_x79_windows_x1 | src/battle/gen435.c |  | battle rows: 0x81/0x89/0x79 windows, 0x1705/0x340-0x343 texts, 0x300-0x303 cells, 80111B14/80111ADC/8011EA5C rows; loop L111914 on 5C64(0x20 |
| 80111ADC | fn_1x11adc | fn_1x11adc | src/battle/gen1266.c | Y |  |
| 80111B14 | fn_1x11b14 | fn_1x11b14 | src/battle/gen736.c | Y |  |
| 80111BBC | fn_1x11bbc | fn_1x11bbc | src/battle/gen735.c | Y |  |
| 80111C2C | battle_rows_xc_xe_windows_x2c_x2e | battle_rows_xc_xe_windows_x2c_x2e | src/battle/gen361.c |  | battle rows: 0xC/0xE windows, 0x2C/0x2E cells, 0x300-0x303 scroll gates; loop L11C54 (3F38(3C3C) + 4008(0x10) row reads), closes via 8011416 |
| 80111DC8 | battle_rows_x7a_x79_windows_xaaf_x | battle_rows_x7a_x79_windows_xaaf_x | src/battle/gen600.c |  | battle rows: 0x7A/0x79 windows, 0xAAF/0xE1D texts; loop L111E54 on 6D70(0xAAF)+5A90 gates. |
| 80111EF4 | fn_1x11ef4 | fn_1x11ef4 | src/battle/gen1031.c | Y |  |
| 80111F34 | fn_1x11f34 | fn_1x11f34 | src/battle/gen949.c | Y |  |
| 80111F94 | fn_1x11f94 | fn_1x11f94 | src/battle/gen1265.c | Y |  |
| 80111FCC | shop_detail_xca_window_x172c_x172e | shop_detail_xca_window_x172c_x172e | src/battle/gen465.c |  | shop detail: 0xCA window, 0x172C/0x172E-0x172F/0x1726/0x1706- 0x1707 texts, 8011AB18/80169128/800FD718 rows; 5574(0xFB) gate. |
| 801120F4 | battle_rows_x1700_x7070_x300_x1a03 | battle_rows_x1700_x7070_x300_x1a03 | src/battle/gen682.c |  | battle rows: 0x1700/0x7070/0x300/0x1A03 texts, 800FF024/ 8011EA5C rows; 5574(3) gate. |
| 801121C4 | s2_branch_register | s2_branch_register | src/battle/gen229.c |  | s2 branch (register) |
| 801126A0 | battle_item_status_twin_of_c_x1706 | battle_item_status_twin_of_c_x1706 | src/battle/gen308.c |  | battle item-status (twin of 8011285C): 0x1706/0x1700 headers, 0xACF-0xAD8 texts, 80115BCC/80115D2C sub-renders; loop L1127C0 scrolls on 7170 |
| 8011285C | battle_item_status_detail_xec_wind | battle_item_status_detail_xec_wind | src/battle/gen255.c |  | battle item/status detail: 0xEC window + 0x1800-0x1802 title, 0xFD6/0xAD-series texts, 800FC1CC/800FD6E8/80176060/800FB09C/ 80116398/8016912 |
| 80112A68 | - | func_80112A68 | src/battle/screen_n.c |  |  |
| 801130C0 | battle_rows_x2c_window_x60_key_x21 | battle_rows_x2c_window_x60_key_x21 | src/battle/gen910.c |  | battle rows: 0x2C window, 0x60 key + 0x2115 gate; loop L113140 on 5958(0x10) with 4x 6C68. |
| 801133B0 | battle_rows_x60_xad4_xad5_texts_c | battle_rows_x60_xad4_xad5_texts_c | src/battle/gen775.c |  | battle rows: 0x60/0xAD4/0xAD5 texts, 8011356C row; loop L11340C on 5574(0x10). |
| 8011356C | fn_1x1356c | fn_1x1356c | src/battle/gen397.c | Y |  |
| 80113644 | fn_1x13644 | fn_1x13644 | src/battle/gen1264.c | Y |  |
| 8011368C | fn_1x1368c | fn_1x1368c | src/battle/gen1137.c | Y |  |
| 801136D4 | battle_status_row_x79_x23_x20_wind | battle_status_row_x79_x23_x20_wind | src/battle/gen409.c |  | battle status row: 0x79/0x23/0x20 windows, 0xACF-0xAD8 texts, 80119AC8/80115D2C/80115BCC/8011EA5C rows; loops L1136E4 and L11379C. |
| 8011383C | fn_1x1383c | fn_1x1383c | src/battle/gen62.c |  |  |
| 80113C04 | fn_1x13c04 | fn_1x13c04 | src/battle/gen948.c | Y |  |
| 80113C54 | fn_1x13c54 | fn_1x13c54 | src/battle/gen734.c | Y |  |
| 80113CCC | battle_rows_xad_x6fb_texts_x24_x8f | battle_rows_xad_x6fb_texts_x24_x8f | src/battle/gen531.c |  | battle rows: 0xAD/0x6FB texts, 0x24/0x8F/0x90/0x91 windows, 80113F3C/8011EA5C rows; loop L113D24 on 5574(0x5F). |
| 80113DCC | fn_1x13dcc | fn_1x13dcc | src/battle/gen1175.c | Y |  |
| 80113E04 | fn_1x13e04 | fn_1x13e04 | src/battle/gen1174.c | Y |  |
| 80113E3C | battle_rows_twin_of_ccc_x8f_x5f_xa | battle_rows_twin_of_ccc_x8f_x5f_xa | src/battle/gen530.c |  | battle rows (twin of 80113CCC): 0x8F/0x5F/0xAD/0x17C/0x6FB/0x24 windows, 80113F3C/8011EA5C rows; loop L113E84 on 41E8(2). |
| 80113F3C | battle_rows_x20_x21_x31_x24_x26_x8 | battle_rows_x20_x21_x31_x24_x26_x8 | src/battle/gen425.c |  | battle rows: 0x20/0x21/0x31/0x24/0x26/0x8F/0x91 windows, 0x6FB/ 0x302/0x303/0x90 cells, 8011416C/80174F0C/801140A4/80113C04/ 80113C54; loop  |
| 801140A4 | battle_rows_fe634_prep_x70_x22_x21 | battle_rows_fe634_prep_x70_x22_x21 | src/battle/gen1030.c |  | battle rows: 800FE634 prep + 0x70/0x22/0x21 window cells. |
| 8011416C | cell_fill_aa | cell_fill_aa | src/db/fillaa.c | Y |  |
| 80114194 | fn_1x14194 | fn_1x14194 | src/battle/gen408.c | Y |  |
| 801142FC | battle_skills_list_x65_x11d_x5_x80 | battle_skills_list_x65_x11d_x5_x80 | src/battle/gen324.c |  | battle skills list: 0x65/0x11D/0x5/0x80/0x89/0xAD windows, 0x1706/0x1707 headers; 801146F0/80114680/801144B4/80114618 rows; 4 loops (L11432C |
| 801144B4 | battle_rows_x4_xd5_xc_xe_x91_x8f | battle_rows_x4_xd5_xc_xe_x91_x8f | src/battle/gen708.c |  | battle rows: 0x4/0xD5/0xC/0xE/0x91/0x8F/0xD/0xF/0x92 windows, 8010543C/80102770/80115A34/8011581C rows; loop L1144F8 on 5A90(0x50). |
| 80114618 | fn_1x14618 | fn_1x14618 | src/battle/gen1029.c | Y |  |
| 80114680 | fn_1x14680 | fn_1x14680 | src/battle/gen982.c | Y |  |
| 801146F0 | fn_1x146f0 | fn_1x146f0 | src/battle/gen577.c | Y |  |
| 80114788 | fn_1x14788 | fn_1x14788 | src/battle/gen01507.c | Y |  |
| 801147C0 | fn_1x147c0 | fn_1x147c0 | src/battle/gen507.c | Y |  |
| 80114880 | battle_rows_x70_x2c_x2e_x89_window | battle_rows_x70_x2c_x2e_x89_window | src/battle/gen707.c |  | battle rows: 0x70/0x2C/0x2E/0x89 windows, 80114D18/8011EA5C rows; loop L1148B8 on 5958(0x80/0x100). |
| 80114938 | battle_magic_list_x2c_x2e_x89_xc_x | battle_magic_list_x2c_x2e_x89_xc_x | src/battle/gen288.c |  | battle magic list: 0x2C/0x2E/0x89/0xC/0xE/0xF/0x91/0x92 windows, 0x2100 title, 80114C98/8011581C/80115A34/8011EA5C rows; the L114970 loop po |
| 80114AF0 | fn_1x14af0 | fn_1x14af0 | src/battle/gen396.c | Y |  |
| 80114BC0 | fn_1x14bc0 | fn_1x14bc0 | src/battle/gen378.c | Y |  |
| 80114C98 | fn_1x14c98 | fn_1x14c98 | src/battle/gen652.c | Y |  |
| 80114D18 | fn_1x14d18 | fn_1x14d18 | src/battle/gen506.c | Y |  |
| 80114DC8 | battle_rows_xc0_x89_windows_fd0_ba | battle_rows_xc0_x89_windows_fd0_ba | src/battle/gen681.c |  | battle rows: 0xC0/0x89 windows, 80114FD0/80172BA8/80115080/ 8011511C/80115038/8011EA5C rows; loop L114DE8 on row reads. |
| 80114EBC | battle_rows_xb6_x89_x2c_x2e_window | battle_rows_xb6_x89_x2c_x2e_window | src/battle/gen576.c |  | battle rows: 0xB6/0x89/0x2C/0x2E windows, 80114FD0/80172BA8/ 80115080/8011511C/80115038/8011EA5C rows; loop L114EDC on row reads. |
| 80114FD0 | fn_1x14fd0 | fn_1x14fd0 | src/battle/gen803.c | Y |  |
| 80115038 | fn_1x15038 | fn_1x15038 | src/battle/gen1263.c | Y |  |
| 80115080 | battle_rows_x7a_window_x1f_x70_rea | battle_rows_x7a_window_x1f_x70_rea | src/battle/gen947.c |  | battle rows: 0x7A window + 0x1F/0x70 reads, 0x2C/0x2D/0x2E/0x2F windows. |
| 8011511C | fn_1x1511c | fn_1x1511c | src/battle/gen552.c | Y |  |
| 801151BC | fn_1x151bc | fn_1x151bc | src/battle/gen237.c |  |  |
| 80115488 | battle_rows_x79_xf3_xf5_xc_xe_wind | battle_rows_x79_xf3_xf5_xc_xe_wind | src/battle/gen505.c |  | battle rows: 0x79/0xF3/0xF5/0xC/0xE windows, 8011581C/ 80115A34 rows; loop L1154A8 on 5574(4). |
| 80115684 | battle_rows_xef_xf1_xc_xe_x91_x8f | battle_rows_xef_xf1_xc_xe_x91_x8f | src/battle/gen599.c |  | battle rows: 0xEF/0xF1/0xC/0xE/0x91/0x8F windows, custom 4264(7)/7894/4064(0x144) cells. |
| 8011581C | battle_rows_300 | battle_rows_300 | src/battle/gen1028.c |  | battle rows: 0x300/0x7A cells, 801714C4 picker; loop L1158A4 on 4248(0xF)/4120(0x202). |
| 80115A34 | battle_item_rows | battle_item_rows | src/battle/gen352.c |  | battle items: 0xAD/0x7A/0xC/0xD/0xE windows, 0x350-0x35B cells, 801714C4 picker; 5574(0x20) gate, 7728(0x101) check; two detail blocks (4120 |
| 80115BCC | battle_row_e5 | battle_row_e5 | src/battle/gen651.c |  | battle rows: 0xE5/0xACD/0xACE texts, gates 6434(0x202); loops L115C20 (0xDD4/0xDFC cells) and L115C90 (0xA6D/0x40 reads). |
| 80115D2C | battle_window_24 | battle_window_24 | src/battle/window24.c |  |  |
| 80116098 | battle_party_status_rows_xa6d_xa6f | battle_party_status_rows_xa6d_xa6f | src/battle/gen360.c |  | battle party-status rows: 0xA6D-0xA6F texts, 0x20/0x21/0x24 windows, 0x300-0x303 cells, 0xACD/0xACE texts, 800FC0DC commit; loop L116180 on  |
| 801162F8 | fn_1x162f8 | fn_1x162f8 | src/battle/gen853.c | Y |  |
| 80116348 | fn_1x16348 | fn_1x16348 | src/battle/gen01506.c |  |  |
| 80116398 | fn_1x16398 | fn_1x16398 | src/battle/gen909.c | Y |  |
| 801163E8 | fn_1x163e8 | fn_1x163e8 | src/battle/gen220.c |  |  |
| 80116720 | - | - | - |  | jr $a0 : the ~50-entry main-battle-command jump table. Each entry calls one handler then jumps to return. Handlers: 80119BDC, 80119C24, 8011 |
| 80116DA0 | - | func_80116DA0 | src/battle/optionscall.c |  |  |
| 801172DC | battle_item_pick_key_ladders_on_c0 | battle_item_pick_key_ladders_on_c0 | src/battle/gen275.c |  | battle item pick: 5574 key ladders on 53C0/53D4 route the item rows (0x4/0x5/0x6/0x7 windows), 0x1705/0x1709 texts, 0x1804 save row; 8010543 |
| 80117594 | - | - | - | Y |  |
| 801175C4 | fn_1x175c4 | fn_1x175c4 | src/battle/gen1066.c | Y |  |
| 80117628 | fn_1x17628 | fn_1x17628 | src/battle/gen01505.c | Y |  |
| 80117660 | fn_1x17660 | fn_1x17660 | src/battle/gen1344.c | Y |  |
| 80117698 | - | - | - |  |  |
| 8011770C | fn_1x1770c | fn_1x1770c | src/battle/gen1262.c | Y |  |
| 80117754 | fn_1x17754 | fn_1x17754 | src/battle/gen01504.c | Y |  |
| 8011777C | fn_1x1777c | fn_1x1777c | src/battle/gen21.c |  |  |
| 80117CB8 | battle_rows_xe4_window_x1100_x1180 | battle_rows_xe4_window_x1100_x1180 | src/battle/gen479.c |  | battle rows: 0xE4 window + 0x1100/0x1180/0x10C0 gates, 0xAD6/ 0x1000 texts; loops L117CF8/L117D30 (5958 pacing) and L117D70 (5A90(5) gate wi |
| 80117DF8 | rows_swap44_54 | rows_swap44_54 | src/battle/gen1173.c |  | rows: u16 D44<->D54 swap chain with 5410/6558(0). |
| 80117E64 | fn_1x17e64 | fn_1x17e64 | src/battle/gen1172.c | Y |  |
| 80117E9C | fn_1x17e9c | fn_1x17e9c | src/battle/gen1171.c |  |  |
| 80117F10 | fn_1x17f10 | fn_1x17f10 | src/battle/gen01716.c | Y |  |
| 80117F40 | fn_1x17f40 | fn_1x17f40 | src/battle/gen1343.c | Y |  |
| 80117F78 | fn_1x17f78 | fn_1x17f78 | src/battle/gen01715.c | Y |  |
| 80117FA8 | battle_stat_rows_xb3_x3d_windows_x | battle_stat_rows_xb3_x3d_windows_x | src/battle/gen337.c |  | battle stat rows: 0xB3/0x3D windows, 0x1000/0x9D5 gates, 0x1001- 0x1008 cells, 8011818C/801183D8/80118244 rows; loop L117FD0 (4008(0x40) row |
| 8011818C | battle_rows_x40_x7_x3d_windows_x11 | battle_rows_x40_x7_x3d_windows_x11 | src/battle/gen706.c |  | battle rows: 0x40/0x7/0x3D windows, 0x1140/0x1000 cells; loop L1181F4 on 5DA0(7)/5B8C(0x202). |
| 80118244 | battle_rows_x40_x7_x3d_windows_wit | battle_rows_x40_x7_x3d_windows_wit | src/battle/gen377.c |  | battle rows: 0x40/0x7/0x3D windows with three 1000/102D/1037/ 103F stat-cell loops (5DA0(7)/5B8C(0x202) latch each), closing via 801183D8. |
| 801183B0 | fn_1x183b0 | fn_1x183b0 | src/battle/gen01714.c | Y |  |
| 801183D8 | fn_1x183d8 | fn_1x183d8 | src/battle/gen1342.c |  |  |
| 80118428 | battle_rows_x7_x3d_windows_x1030_x | battle_rows_x7_x3d_windows_x1030_x | src/battle/gen619.c |  | battle rows: 0x7/0x3D windows, 0x1030/0x1032 texts, 80150A30 row; loop L11849C on 5DA0(7)/5B8C(0x202). |
| 80118534 | battle_row_pick_xb3_x3d_x3e_x40_x7 | battle_row_pick_xb3_x3d_x3e_x40_x7 | src/battle/gen301.c |  | battle row pick: 0xB3/0x3D/0x3E/0x40/0x7 windows, 0x1000/ 0x1140/0x1143-0x1146/0x9D5 gates, 8011EA5C closes; loops L11855C (5A90(0x140)) and |
| 80118750 | fn_1x18750 | fn_1x18750 | src/battle/gen1170.c | Y |  |
| 801187C0 | battle_rows_x6_x83_x82_x79_x81_win | battle_rows_x6_x83_x82_x79_x81_win | src/battle/gen351.c |  | battle rows: 0x6/0x83/0x82/0x79/0x81 windows, 0x2130/0x212D texts, 8017EA90 icon; loop L118860 polls 4120(0x202) and 54D4(3C3C(0x81)). |
| 80118938 | battle_rows_x79_x83_x82_x81_window | battle_rows_x79_x83_x82_x81_window | src/battle/gen529.c |  | battle rows: 0x79/0x83/0x82/0x81 windows, 0x212D/0xFE4/0x2130/ 0x2131 texts, 8017EA90 icon; loops L118948 on 4120(0x202)/ 5B8C. |
| 80118A40 | fn_1x18a40 | fn_1x18a40 | src/battle/gen908.c | Y |  |
| 80118AA8 | battle_rows_x9d5_text_x18_x1560_wi | battle_rows_x9d5_text_x18_x1560_wi | src/battle/gen774.c |  | battle rows: 0x9D5 text, 0x18/0x1560 window/cell, 80117594 + 8011EA5C rows; loop L118B30 on 6D70(0x1560)/6434(2). |
| 80118B80 | battle_stat_row_x1003_gate_x18_x1b | battle_stat_row_x1003_gate_x18_x1b | src/battle/gen376.c |  | battle stat row: 0x1003 gate, 0x18-0x1B windows, 0x30 window cells, 80174F0C/80117DF8/8011EA5C; loops L118BE0 (H16: 6BE0 (0x1007)/5520 rows) |
| 80118D20 | battle_stat_row_twin_x100b_gate_x1 | battle_stat_row_twin_x100b_gate_x1 | src/battle/gen375.c |  | battle stat row (twin): 0x100B gate, 0x100F/0x1011 cells, 80174F0C/80117DF8/8011EA5C; loops L118D80/L118E48. |
| 80118EC0 | fn_1x18ec0 | fn_1x18ec0 | src/battle/gen01713.c | Y |  |
| 80118EF8 | battle_rows_x6_x1440_x1441_x1033_x | battle_rows_x6_x1440_x1441_x1033_x | src/battle/gen650.c |  | battle rows: 0x6/0x1440/0x1441/0x1033/0x1034 texts/windows; loops L118F18 (5A90/53D4) and L118F78 (54D4(3C3C(6)) gates). |
| 80119020 | battle_rows_x6_x1003_cells_df8_row | battle_rows_x6_x1003_cells_df8_row | src/battle/gen907.c |  | battle rows: 0x6/0x1003 cells, 80117DF8 row; loop L119040 on 5958(0x140). |
| 801190A8 | fn_1x190a8 | fn_1x190a8 | src/battle/gen01503.c |  |  |
| 80119128 | battle_rows_twin_with_c4_x6_x1003 | battle_rows_twin_with_c4_x6_x1003 | src/battle/gen906.c |  | battle rows (twin with 78C4): 0x6/0x1003 cells, 80117DF8 row; loop L119148 on 5958(0x140). |
| 801191B0 | fn_1x191b0 | fn_1x191b0 | src/battle/gen1136.c | Y |  |
| 80119210 | battle_rows_x18_x1b_windows_x16a0 | battle_rows_x18_x1b_windows_x16a0 | src/battle/gen528.c |  | battle rows: 0x18-0x1B windows, 0x16A0-0x16A2 texts, 80174F0C row; 53C0 gate closes 0x16A0-0x16A2 fills. |
| 801192F8 | battle_rows_x6_x1000_gate_d4_c3c_l | battle_rows_x6_x1000_gate_d4_c3c_l | src/battle/gen680.c |  | battle rows: 0x6/0x1000 gate, 54D4(3C3C(6)) latch; loop L119320 ends with 0xCC window + 0x1703 text. |
| 801193F8 | battle_store_equip_screen_x8f8_x8f | battle_store_equip_screen_x8f8_x8f | src/battle/gen385.c |  | battle store/equip screen: 0x8F8-0x8FA texts, 0x1A/0xB2/0x30/0x31/ 0x32 windows; 801082C8/80107C98(row family)/801196F8/80174CE4/ 801196B0 p |
| 801196B0 | fn_1x196b0 | fn_1x196b0 | src/battle/gen1027.c | Y |  |
| 801196F8 | fn_1x196f8 | fn_1x196f8 | src/battle/gen1026.c | Y |  |
| 80119740 | battle_rows_x89_x8a_windows_with_f | battle_rows_x89_x8a_windows_with_f | src/battle/gen478.c | Y | battle rows: 0x89/0x8A windows with 4F28/7A40 pairs, 0x1700 text gate (800FF024 vs 80170C14/8010B010); loop L1197D8 on 5C64(0x202). |
| 80119860 | battle_rows_xb2_window_c98_db4_f3c | battle_rows_xb2_window_c98_db4_f3c | src/battle/gen1135.c |  | battle rows: 0xB2 window, 80108330/80107C98/80105DB4/ 80107F3C/80109A28 rows, 0x9D5 text; 6434(2) gate via 801175C4/8011EA5C. |
| 801198F0 | battle_buy_detail_xb3_window_x8fb | battle_buy_detail_xb3_window_x8fb | src/battle/gen492.c |  | battle buy detail: 0xB3 window, 0x8FB/0x9D5 texts; 80106370 + 80109A28 preps, 801082C8/80107C98/80107F3C item rows; loops L119A00 on 54D4(3B |
| 80119A98 | fn_1x19a98 | fn_1x19a98 | src/battle/gen1261.c | Y |  |
| 80119AC8 | battle_rows_d9d4_prep_gates_x80_x5 | battle_rows_d9d4_prep_gates_x80_x5 | src/battle/gen852.c |  | battle rows: 8010D9D4 prep; gates 5574(0x80); 0x5C/0x5D/0x60/ 0x61 window rows. |
| 80119BDC | fn_1x19bdc | fn_1x19bdc | src/battle/gen01712.c |  |  |
| 80119C24 | fn_1x19c24 | fn_1x19c24 | src/battle/gen851.c | Y |  |
| 80119C7C | event_v0_spin_loop_l119cec_f5c0_ta | event_v0_spin_loop_l119cec_f5c0_ta | src/battle/gen01711.c |  | event: v0 spin loop L119CEC; 8017F5C0 tail. |
| 80119D48 | battle_rows_x2106_text_loop_l119d5 | battle_rows_x2106_text_loop_l119d5 | src/battle/gen905.c |  | battle rows: 0x2106 text; loop L119D58 on 5574(0x40). |
| 80119DE4 | shop_buy_x1700_gate_picks_d4_then | shop_buy_x1700_gate_picks_d4_then | src/battle/gen904.c | Y | shop buy: 0x1700 gate picks 80103790/801038D4; then 79/7A/7B windows + 0x81/0x4200 titles via 8011EA5C. |
| 80119E7C | fn_1x19e7c | fn_1x19e7c | src/battle/gen58.c |  |  |
| 8011A204 | fn_1x1a204 | fn_1x1a204 | src/battle/gen323.c | Y |  |
| 8011A334 | shop_buy_list_xe2_window_gate_x211 | shop_buy_list_xe2_window_gate_x211 | src/battle/gen322.c |  | shop buy-list: 0xE2 window gate, 0x2115 title, then 8 name/price rows (7210 A17/A27 + 7210() pairs with A19/A29 texts). |
| 8011A690 | - | func_8011A690 | src/battle/tailcmd.c |  |  |
| 8011AB18 | shop_main_xca_window_x1700_gate_pi | shop_main_xca_window_x1700_gate_pi | src/battle/gen491.c |  | shop main: 0xCA window + 0x1700 gate picks the buy (800FEC74/ 800FD914/800FB09C/800FB160/800FB224/800FAA04) sub-rows; tail via 8017F9A8/800F |
| 8011AC64 | fn_1x1ac64 | fn_1x1ac64 | src/battle/gen01710.c | Y |  |
| 8011ACAC | - | - | - |  |  |
| 8011AD14 | fn_1x1ad14 | fn_1x1ad14 | src/battle/gen01709.c | Y |  |
| 8011AD5C | fn_1x1ad5c | fn_1x1ad5c | src/battle/gen01708.c | Y |  |
| 8011ADA4 | fn_1x1ada4 | fn_1x1ada4 | src/battle/gen01707.c | Y |  |
| 8011ADEC | - | - | - | Y |  |
| 8011AE1C | - | - | - | Y |  |
| 8011AE4C | - | - | - | Y |  |
| 8011AE7C | - | - | - | Y |  |
| 8011AEAC | battle_item_select_right_side_vari | battle_item_select_right_side_vari | src/battle/gen67.c |  | battle item-select (right-side variant): 62/61 label window, 64/65 slot rows, BE/BF select rows; 8011B6B4 row draw, 801163E8 use. |
| 8011B158 | battle_item_selection_flow_label_w | battle_item_selection_flow_label_w | src/battle/gen252.c |  | battle item-selection flow: 62/61 label window, 64/65 + BC/BD item slot rows, AB result rows. 8011B6B4/8011B448 draw the row halves; 801163E |
| 8011B448 | fn_1x1b448 | fn_1x1b448 | src/battle/gen802.c | Y |  |
| 8011B4A4 | fn_1x1b4a4 | fn_1x1b4a4 | src/battle/gen981.c | Y |  |
| 8011B51C | fn_1x1b51c | fn_1x1b51c | src/battle/gen980.c | Y |  |
| 8011B594 | battle_rows_b744_prep_loop_l11b5ac | battle_rows_b744_prep_loop_l11b5ac | src/battle/gen979.c |  | battle rows: 8011B744 prep; loop L11B5AC on 5A90/53D4; closes with 0x3D/0x1280 reads. |
| 8011B61C | battle_rows_twin_with_b9c_b7b4_pre | battle_rows_twin_with_b9c_b7b4_pre | src/battle/gen978.c |  | battle rows (twin with 3B9C/4832): 8011B7B4 prep; loop L11B634 on 5A90/53D4. |
| 8011B6B4 | battle_rows_b744_prep_x3d_x1280_ce | battle_rows_b744_prep_x3d_x1280_ce | src/battle/gen850.c |  | battle rows: 8011B744 prep + 0x3D/0x1280 cells; loop L11B6DC on 5A90/53D4. |
| 8011B744 | fn_1x1b744 | fn_1x1b744 | src/battle/gen01706.c |  |  |
| 8011B7B4 | battle_rows_x3d_x3e_windows_xfe5_x | battle_rows_x3d_x3e_windows_xfe5_x | src/battle/gen801.c |  | battle rows: 0x3D/0x3E windows, 0xFE5/0x1701 texts; gates 6434(0x80/2) route the 4008(0x20) reads. |
| 8011B874 | fn_1x1b874 | fn_1x1b874 | src/battle/gen25.c |  |  |
| 8011BCD8 | fn_1x1bcd8 | fn_1x1bcd8 | src/battle/gen618.c | Y |  |
| 8011BD88 | fn_1x1bd88 | fn_1x1bd88 | src/battle/gen24.c |  |  |
| 8011C1F8 | fn_1x1c1f8 | fn_1x1c1f8 | src/battle/gen551.c | Y |  |
| 8011C27C | fn_1x1c27c | fn_1x1c27c | src/battle/gen946.c | Y |  |
| 8011C2C8 | fn_1x1c2c8 | fn_1x1c2c8 | src/battle/screen_v.c |  |  |
| 8011C768 | fn_1x1c768 | fn_1x1c768 | src/battle/screen_t.c |  |  |
| 8011CC98 | shop_rows_x3d_x18_x19_windows_cell | shop_rows_x3d_x18_x19_windows_cell | src/battle/gen550.c |  | shop rows: 0x3D/0x18/0x19 windows, 5024 cells + ADB/B1B texts; loop L11CCAC on 5A90(0x40). |
| 8011CE18 | fn_1x1ce18 | fn_1x1ce18 | src/battle/gen246.c |  |  |
| 8011D068 | shop_item_cell_pair_x99_x44_x9a_wi | shop_item_cell_pair_x99_x44_x9a_wi | src/battle/gen232.c |  | shop item-cell pair: 0x99/0x44/0x9A windows with 76BC/7CC8 pair draws; then the 0x43/0x9A detail gate (4278/4120) with the 76BC (0x9A) + 7CC |
| 8011D218 | fn_1x1d218 | fn_1x1d218 | src/battle/gen08.c |  |  |
| 8011D658 | fn_1x1d658 | fn_1x1d658 | src/battle/gen45.c |  |  |
| 8011D8E0 | fn_1x1d8e0 | fn_1x1d8e0 | src/battle/gen374.c | Y |  |
| 8011D9F0 | fn_1x1d9f0 | fn_1x1d9f0 | src/battle/gen575.c | Y |  |
| 8011DA88 | shop_sale_rows_xab_x99_x95_x9b_x9d | shop_sale_rows_xab_x99_x95_x9b_x9d | src/battle/gen350.c | Y | shop sale rows: 0xAB/0x99/0x95/0x9B/0x9D/0x9F windows, 0x2115/ 0x4300/0x2116/0x4302/0x4305/0xADB/0xB1B texts; 4120(0x202)/ 6434(0x202) gates |
| 8011DBF0 | fn_1x1dbf0 | fn_1x1dbf0 | src/battle/gen50.c | Y |  |
| 8011DE40 | shop_sale_confirm_xab_x6fa_x70a_te | shop_sale_confirm_xab_x6fa_x70a_te | src/battle/gen424.c |  | shop sale confirm: 0xAB/0x6FA/0x70A texts, 0x3D/0x93/0x3E/0x44 windows, 8011DFE4/8017583C/8011E16C/8011E318 rows; 4120(0x202)/ 6434(0x202) g |
| 8011DFE4 | battle_c3c_b9c_gates_a1_v0_latch_l | battle_c3c_b9c_gates_a1_v0_latch_l | src/battle/gen1065.c |  | battle: 3C3C/3B9C gates; a1/v0 latch loops L11E044/L11E068. |
| 8011E16C | battle_verdict_twin_of_e318_d_e_ro | battle_verdict_twin_of_e318_d_e_ro | src/battle/gen423.c |  | battle verdict (twin of 8011E318): 3D/3E/40 rows with 885C fills, 6434(2) exit gate; loops L11E1B0 and L11E214. |
| 8011E318 | battle_verdict_driver_d_e_rows_wit | battle_verdict_driver_d_e_rows_wit | src/battle/gen315.c |  | battle verdict driver: 3D/3E/40 rows with 885C color fills, 6434(0x202) gate; loops L11E35C (885C/5C64), L11E3C0 (key spin), L11E4D4 (fill t |
| 8011E534 | fn_1x1e534 | fn_1x1e534 | src/battle/gen07.c |  |  |
| 8011E9EC | fn_1x1e9ec | fn_1x1e9ec | src/battle/gen01502.c | Y |  |
| 8011EA14 | fn_1x1ea14 | fn_1x1ea14 | src/battle/gen01501.c | Y |  |
| 8011EA3C | fn_1x1ea3c | fn_1x1ea3c | src/battle/gen01500.c | Y |  |
| 8011EA5C | battle_wndfx_run | battle_wndfx_run | src/battle/gen01499.c | Y |  |
| 8011EA7C | - | - | - | Y |  |
| 8011EA9C | - | - | - | Y |  |
| 8011EABC | - | - | - | Y |  |
| 8011EADC | fn_1x1eadc | fn_1x1eadc | src/rows/gen_8011EADC.c | Y |  |
| 8011EAFC | - | - | - | Y |  |
| 8011EB1C | fn_1x1eb1c | fn_1x1eb1c | src/rows/gen_8011EB1C.c | Y |  |
| 8011EB3C | - | - | - | Y |  |
| 8011EB5C | fn_1x1eb5c | fn_1x1eb5c | src/rows/gen_8011EB5C.c | Y |  |
| 8011EB7C | fn_1x1eb7c | fn_1x1eb7c | src/rows/gen_8011EB7C.c | Y |  |
| 8011EB9C | - | - | - | Y |  |
| 8011EBBC | fn_1x1ebbc | fn_1x1ebbc | src/battle/gen549.c | Y |  |
| 8011EC44 | ability_wrapper_ea9c_d3c_f8f8x3_in | ability_wrapper_ea9c_d3c_f8f8x3_in | src/battle/gen1341.c |  | ability wrapper: 8016EA9C/80123D3C/8017F8F8x3 in the L11ECD0 loop with 801225C0/80126610/80122114; 0x1A65 text; v1/v0 latch back to L11EC58. |
| 8011EDA4 | fn_1x1eda4 | fn_1x1eda4 | src/battle/gen903.c | Y |  |
| 8011EDF4 | fn_1x1edf4 | fn_1x1edf4 | src/battle/gen1025.c | Y |  |
| 8011EE34 | battle_rows_2115 | battle_rows_2115 | src/battle/gen340.c | Y |  |
| 8011EF0C | battle_state_dc400 | battle_state_dc400 | src/config/roww.c | Y |  |
| 8011EF30 | battle_rows_sync | battle_rows_sync | src/battle/gen1134.c |  | battle rows: 3C3C/939C/926C/9448 x2 + 8011F030 + 960C. |
| 8011F030 | column_rows_x29_x2b_x31_x33_window | column_rows_x29_x2b_x31_x33_window | src/battle/gen679.c |  | column rows: 0x29/0x2B/0x31/0x33 windows, 0xF7/0xFC codes, 8011F118/8011F210 rows; loop L11F0D8 on 5DA0(0x32). |
| 8011F118 | column_cells_x30_x2f_x2d_x31_windo | column_cells_x30_x2f_x2d_x31_windo | src/battle/gen477.c |  | column cells: 0x30/0x2F/0x2D/0x31 windows, 80122334 row; loop L11F178 on 5DA0(0x31)/5B8C(0x202). |
| 8011F210 | - | func_8011F210 | src/battle/gen490.c |  | column cells: 0x30/0x2F/0x2D/0x31 windows, 0xFA/0xFB codes; loop L11F270 on 5DA0(0x31)/5B8C(0x202). |
| 8011F300 | - | - | - | Y |  |
| 8011F320 | - | - | - | Y |  |
| 8011F360 | rows_x45_window_loop_l11f370_on_c0 | rows_x45_window_loop_l11f370_on_c0 | src/battle/gen849.c | Y | rows: 0x45 window; loop L11F370 on 5480/53C0; closes via 6434(0x202)/4008(0x80) gates. |
| 8011F3F8 | shared_scroll_column_x5a_window_x3 | shared_scroll_column_x5a_window_x3 | src/battle/gen270.c |  | shared scroll-column: 0x5A window, 0x3E8/0x4200 gates, 0x15B/0x15D texts, 0x5E window cells; L11F430 wait loop, then the 8011F67C icon rows, |
| 8011F67C | fn_1x1f67c | fn_1x1f67c | src/rows/gen_8011F67C.c | Y |  |
| 8011F684 | midrow_pad88_run | midrow_pad88_run | src/config/roww.c | Y |  |
| 8011F6A4 | anim_noop | - | - | Y |  |
| 8011F6AC | fn_1x1f6ac | fn_1x1f6ac | src/battle/gen01498.c | Y |  |
| 8011F6D4 | config_pad_300 | config_pad_300 | src/battle/gen01497.c | Y |  |
| 8011F6FC | fn_1x1f6fc | fn_1x1f6fc | src/battle/gen01496.c | Y |  |
| 8011F724 | row_latch_7e | row_latch_7e | src/battle/gen705.c |  |  |
| 8011F7D4 | fn_1x1f7d4 | fn_1x1f7d4 | src/battle/gen733.c | Y |  |
| 8011F844 | fn_1x1f844 | fn_1x1f844 | src/rows/gen_8011F844.c | Y |  |
| 8011F864 | fn_1x1f864 | fn_1x1f864 | src/rows/gen_8011F864.c | Y |  |
| 8011F884 | midrow_degen | midrow_degen | src/battle/gen1340.c |  |  |
| 8011F8D4 | battle_rows_100 | battle_rows_100 | src/battle/gen773.c |  | rows: 0x100/0x29 windows, 8011FD34 close; 3F94(3C3C(0x29)) + 926C/9298/9330 preps. |
| 8011F9C4 | row_prep2_close | row_prep2_close | src/event/confirm.c |  | config confirm: 0x29 window, 801245B4 + 885C cell rows; loops L11FA70 (6434(2) gate) and L11FAFC (3F94(3C3C(0x29)) refresh). |
| 8011FB74 | fn_1x1fb74 | fn_1x1fb74 | src/rows/gen_8011FB74.c | Y |  |
| 8011FBA4 | - | - | - |  | rows: 0x29/0x100 windows, 8011FD34 close; 3F94(3C3C(0x29)) + 926C/9298/9330 preps. |
| 8011FD34 | config_dialog_gates_b4_c_d48_cell | config_dialog_gates_b4_c_d48_cell | src/battle/gen732.c |  | config dialog: 6434(2)/5574(1) gates; 801245B4 + 885C/3D48 cell rows; loops L11FD3C (regcmp latch) and L11FE24 (3F94(3C3C(0x29)) refresh). |
| 8011FF40 | fn_1x1ff40 | fn_1x1ff40 | src/battle/gen1023.c | Y |  |
| 8011FF80 | ability_gates_v1_v0_branches_route | ability_gates_v1_v0_branches_route | src/battle/gen847.c |  | ability gates: v1/v0 branches route 801360AC / 801360EC+ 80136148 / 8011F320+8011F884+78C4 rows; the 7918(2) read loops back to L11FF9C. |
| 80120070 | open_depth_guard_in_the_menu_regio | open_depth_guard_in_the_menu_regio | src/config/gen800.c |  | open-depth guard in the menu-region byte buffer |
| 801206DC | rows_f360_prep_x29_x1d_x1e_window | rows_f360_prep_x29_x1d_x1e_window | src/config/gen945.c |  | rows: 8011F360 prep, 0x29/0x1D/0x1E window cells; linear. |
| 80120774 | rows_x29_window_cells_x5a_x5b_x5d | rows_x29_window_cells_x5a_x5b_x5d | src/config/gen574.c |  | rows: 0x29 window cells, 0x5A/0x5B/0x5D/0x5E windows, 8011F3F8 row; ends on 0x95A0+8960 writes. |
| 801208C8 | rows_x29_window_cells_x5a_x5e_wind | rows_x29_window_cells_x5a_x5e_wind | src/config/gen649.c |  | rows: 0x29 window cells, 0x5A-0x5E windows with 8960 writes, 8011F3F8 row. |
| 80120A0C | shop_row_x29_x45_windows_x41_x1500 | shop_row_x29_x45_windows_x41_x1500 | src/config/gen527.c |  | shop row: 0x29/0x45 windows, 0x41/0x1500 texts, 801245B4 row; loop L120AFC on 5DA0(0x45)/5B8C(0x202). |
| 80120B6C | battle_row_45b | battle_row_45b | src/config/gen731.c | Y |  |
| 80120BDC | battle_rows_f320_ee34_b764_b7b8_ro | battle_rows_f320_ee34_b764_b7b8_ro | src/config/gen772.c |  | battle rows: 8011F320/8011EE34/8013B764/8013B7B8 rows, 0x45 window; loop L120BE4 on 5DA0(0x45)/5B8C(0x202). |
| 80120CA4 | fn_1x20ca4 | fn_1x20ca4 | src/config/gen307.c | Y |  |
| 80120DB4 | fn_1x20db4 | fn_1x20db4 | src/config/gen902.c | Y |  |
| 80120E2C | midrow_paint_b | midrow_paint_b | src/config/gen598.c | Y |  |
| 80120E9C | fn_1x20e9c | fn_1x20e9c | src/config/gen846.c | Y |  |
| 80120F1C | config_row_d600b | config_row_d600b | src/config/gen597.c | Y |  |
| 80120F94 | fn_1x20f94 | fn_1x20f94 | src/rows/gen_80120F94.c | Y |  |
| 80120FBC | config_row_b600 | config_row_b600 | src/config/gen596.c | Y |  |
| 8012102C | fn_1x2102c | fn_1x2102c | src/config/gen573.c | Y |  |
| 801210AC | - | - | - | Y |  |
| 80121124 | v0_s0_branch | v0_s0_branch | src/config/gen251.c |  | v0/s0 branch |
| 80121678 | battle_row_a78_xa2_gate_routes_the | battle_row_a78_xa2_gate_routes_the | src/config/gen489.c |  | battle row: 6A78(0xA2)/6434 gate routes the 6AF4(0xA1) stat cells (0x1D/0x89/0x8B windows); 53C0 check. |
| 801217EC | battle_rows_x64_x65_x63_x1d_window | battle_rows_x64_x65_x63_x1d_window | src/config/gen678.c |  | battle rows: 0x64/0x65/0x63/0x1D windows, 0xF7-0xF9 codes, 80121E6C/80121F64/80121C0C rows; 53C0 gate + loop L121894 on 5DA0/5B8C(0x202). |
| 801218EC | battle_rows_twin_variant_x66_x65_x | battle_rows_twin_variant_x66_x65_x | src/config/gen677.c |  | battle rows (twin variant): 0x66/0x65/0x63/0x1D windows, 80121E94/80121D64/80121CE4 rows. |
| 801219EC | fn_1x219ec | fn_1x219ec | src/config/gen771.c | Y |  |
| 80121A74 | fn_1x21a74 | fn_1x21a74 | src/rows/gen_80121A74.c | Y |  |
| 80121A9C | fn_1x21a9c | fn_1x21a9c | src/config/gen1022.c | Y |  |
| 80121B04 | fn_1x21b04 | fn_1x21b04 | src/config/gen944.c | Y |  |
| 80121B5C | fn_1x21b5c | fn_1x21b5c | src/config/gen770.c | Y |  |
| 80121BE4 | fn_1x21be4 | fn_1x21be4 | src/rows/gen_80121BE4.c | Y |  |
| 80121C0C | fn_1x21c0c | fn_1x21c0c | src/config/gen1064.c | Y |  |
| 80121C4C | rows_x43_x29_windows_with_f94_c3c | rows_x43_x29_windows_with_f94_c3c | src/config/gen943.c |  | rows: 0x43/0x29 windows with 3F94(3C3C) reads; linear. |
| 80121CE4 | fn_1x21ce4 | fn_1x21ce4 | src/config/gen1063.c | Y |  |
| 80121D24 | fn_1x21d24 | fn_1x21d24 | src/config/gen1062.c | Y |  |
| 80121D64 | fn_1x21d64 | fn_1x21d64 | src/rows/gen_80121D64.c | Y |  |
| 80121D8C | fn_1x21d8c | fn_1x21d8c | src/config/gen01705.c |  |  |
| 80121E0C | fn_1x21e0c | fn_1x21e0c | src/config/gen1169.c |  |  |
| 80121E6C | fn_1x21e6c | fn_1x21e6c | src/rows/gen_80121E6C.c | Y |  |
| 80121E94 | fn_1x21e94 | fn_1x21e94 | src/rows/gen_80121E94.c | Y |  |
| 80121EBC | fn_1x21ebc | fn_1x21ebc | src/config/gen1061.c | Y |  |
| 80121F14 | fn_1x21f14 | fn_1x21f14 | src/config/gen1339.c |  |  |
| 80121F64 | fn_1x21f64 | fn_1x21f64 | src/rows/gen_80121F64.c | Y |  |
| 80121F8C | fn_1x21f8c | fn_1x21f8c | src/config/gen1021.c | Y |  |
| 80121FDC | fn_1x21fdc | fn_1x21fdc | src/config/gen1020.c | Y |  |
| 8012202C | fn_1x2202c | fn_1x2202c | src/rows/gen_8012202C.c | Y |  |
| 80122054 | fn_1x22054 | fn_1x22054 | src/config/gen1133.c | Y |  |
| 801220A4 | fn_1x220a4 | fn_1x220a4 | src/config/gen1019.c | Y |  |
| 801220EC | fn_1x220ec | fn_1x220ec | src/rows/gen_801220EC.c | Y |  |
| 80122114 | fn_1x22114 | fn_1x22114 | src/config/gen01495.c | Y |  |
| 8012214C | fn_1x2214c | fn_1x2214c | src/rows/gen_8012214C.c | Y |  |
| 8012216C | fn_1x2216c | fn_1x2216c | src/config/gen01494.c | Y |  |
| 8012219C | fn_1x2219c | fn_1x2219c | src/config/gen01493.c | Y |  |
| 801221C4 | fn_1x221c4 | fn_1x221c4 | src/config/gen01704.c | Y |  |
| 801221EC | config_row_221ec | config_row_221ec | src/config/gen1018.c | Y |  |
| 8012224C | fn_1x2224c | fn_1x2224c | src/config/gen1060.c | Y |  |
| 801222A4 | - | - | - | Y |  |
| 801222C4 | rows_u16_d44_d54_swap_with_c_prep | rows_u16_d44_d54_swap_with_c_prep | src/config/gen1132.c |  | rows: u16 D44<->D54 swap with 922C prep + 9410 close. |
| 80122334 | rows_u16_d44_d58_swap_with_c_prep | rows_u16_d44_d58_swap_with_c_prep | src/config/gen1131.c |  | rows: u16 D44<->D58 swap with 922C prep + 9410 close. |
| 801223A4 | rows_x29_window_c_bc_fills_loop_l1 | rows_x29_window_c_bc_fills_loop_l1 | src/config/gen901.c |  | rows: 0x29 window, 885C/63BC fills; loop L12244C on 6434(2). |
| 801224D0 | - | - | - | Y |  |
| 801224F8 | fn_1x224f8 | fn_1x224f8 | src/rows/gen_801224F8.c |  |  |
| 80122518 | fn_1x22518 | fn_1x22518 | src/rows/gen_80122518.c |  |  |
| 80122538 | fn_1x22538 | fn_1x22538 | src/rows/gen_80122538.c |  |  |
| 801225C0 | config_confirm_screen_x7e_window_x | config_confirm_screen_x7e_window_x | src/config/gen300.c |  | config confirm screen: 0x7E window, 0x1A03/0x16B7/0x1A76/0x1A77 texts; 80123CB4 + 801386C8 preps; loops at L122620 with the 8012B168/8012007 |
| 8012281C | fn_1x2281c | fn_1x2281c | src/rows/gen_8012281C.c | Y |  |
| 80122844 | - | - | - |  |  |
| 801228B4 | fn_1x228b4 | fn_1x228b4 | src/rows/gen_801228B4.c |  |  |
| 80122904 | fn_1x22904 | fn_1x22904 | src/config/gen01492.c | Y |  |
| 80122934 | fn_1x22934 | fn_1x22934 | src/config/gen01491.c | Y |  |
| 80122964 | fn_1x22964 | fn_1x22964 | src/config/gen01490.c | Y |  |
| 80122994 | fn_1x22994 | fn_1x22994 | src/config/gen01489.c | Y |  |
| 801229C4 | fn_1x229c4 | fn_1x229c4 | src/config/gen1259.c | Y |  |
| 801229F4 | fn_1x229f4 | fn_1x229f4 | src/config/gen1258.c | Y |  |
| 80122A24 | fn_1x22a24 | fn_1x22a24 | src/config/gen942.c | Y |  |
| 80122A9C | config_rows_c_e2c_ef30_f1c_fb74_ro | config_rows_c_e2c_ef30_f1c_fb74_ro | src/config/gen900.c |  | config rows: 8012281C/80120E2C/8011EF30/80120F1C/8011FB74 rows, 0x1A02 text, 0x24 window; gate 6434(0x202). |
| 80122B54 | row_picker_x60_x61_windows_x45_x43 | row_picker_x60_x61_windows_x45_x43 | src/config/gen422.c |  | row picker: 0x60/0x61 windows, 0x45/0x43 windows, 0x16A8 text, 6434(2)/4120 gates; 6D70/4248(0x3F) detail. |
| 80122CF0 | fn_1x22cf0 | fn_1x22cf0 | src/config/gen01703.c | Y |  |
| 80122D20 | equip_cells_render | equip_cells_render | src/config/gen269.c |  | equip sub-cell renderer (called by the 80130C74/80130F90 family): 0x48/0x4B/0x4D/0x4F/0x46/0x57/0x49/0x51/0x4A/0x4E/0x4C/0xC7 stat cells thr |
| 80122F2C | config_rows_5a | config_rows_5a | src/config/gen648.c |  | rows with 6764/8768 writes on 0x5A-0x5E windows, 8011F3F8 row; 0x45/0x48 cells. |
| 80122FF4 | fn_1x22ff4 | fn_1x22ff4 | src/config/gen49.c |  |  |
| 80123320 | fn_1x23320 | fn_1x23320 | src/config/gen225.c |  |  |
| 8012371C | fn_1x2371c | fn_1x2371c | src/config/gen595.c | Y |  |
| 801237A8 | rows_x16a4_x73_x16a5_x74_texts_win | rows_x16a4_x73_x16a5_x74_texts_win | src/config/gen730.c |  | rows: 0x16A4/0x73/0x16A5/0x74 texts/windows, 80123958 (x2) + 80123908/8011F360/80123878 rows; 53C0 gate. |
| 80123878 | fn_1x23878 | fn_1x23878 | src/config/gen571.c | Y |  |
| 80123908 | fn_1x23908 | fn_1x23908 | src/config/gen1338.c |  |  |
| 80123958 | rows_x1d_window_x73_x75_windows_wi | rows_x1d_window_x73_x75_windows_wi | src/config/gen421.c | Y | rows: 0x1D window, 0x73-0x75 windows with 7A40/7A68 triples; loop L1239B8 (5E48/5C64) with 5574(0x3C) gate. |
| 80123A70 | - | - | - | Y |  |
| 80123AA8 | fn_1x23aa8 | fn_1x23aa8 | src/rows/gen_80123AA8.c |  |  |
| 80123B00 | fn_1x23b00 | fn_1x23b00 | src/config/gen395.c | Y |  |
| 80123BD8 | shop_rows_37 | shop_rows_37 | src/config/gen769.c |  | shop rows: 0x37/0x29/0x45 windows, 801222C4 row; loop L123C54 on 5DA0(0x37)/5B8C(0x202). |
| 80123CB4 | fn_1x23cb4 | fn_1x23cb4 | src/config/gen548.c | Y |  |
| 80123D3C | fn_1x23d3c | fn_1x23d3c | src/config/gen61.c |  |  |
| 80123FB4 | fn_1x23fb4 | fn_1x23fb4 | src/rows/gen_80123FB4.c | Y |  |
| 80123FEC | fn_1x23fec | fn_1x23fec | src/config/gen1337.c | Y |  |
| 80124024 | battle_rows_c3c_x73_a70_b04 | battle_rows_c3c_x73_a70_b04 | src/config/gen1336.c |  | battle rows: 3C3C(0x73)/3A70/3B04. |
| 801240A8 | config_row_a600 | config_row_a600 | src/config/gen01702.c | Y |  |
| 801240D0 | fn_1x240d0 | fn_1x240d0 | src/config/gen01488.c | Y |  |
| 801240F8 | fn_1x240f8 | fn_1x240f8 | src/config/gen1335.c | Y |  |
| 80124130 | fn_1x24130 | fn_1x24130 | src/config/gen01701.c | Y |  |
| 80124158 | fn_1x24158 | fn_1x24158 | src/config/gen01700.c | Y |  |
| 80124180 | fn_1x24180 | fn_1x24180 | src/config/gen1334.c | Y |  |
| 801241B8 | - | - | - |  | rows: 0x300/0x302/0x500 cells via 88E4(768/12288/770/1280); loops L1241D8/L124238 on 5C64(0x202). |
| 80124298 | config_rows_e4 | config_rows_e4 | src/config/gen647.c |  | rows: 0xE4 window, 80124EAC cursor, 0x1A67/0x1A68 texts, 80124358 row; loop L1242A8 on 5574(5). |
| 80124358 | equip_status_row_x5a_x5c_x5b_windo | equip_status_row_x5a_x5c_x5b_windo | src/config/gen336.c |  | equip/status row: 0x5A/0x5C/0x5B window + 0x22/0x42/0x45 cells, 801224D0/8011F320/8011EE34/801813C0 rows; loop L124530 (5DA0(0x45)/5B8C(0x20 |
| 801245B4 | battle_rows_42 | battle_rows_42 | src/config/gen646.c |  | rows: 5574(0x42) gate fills via 3D48/95A0; else 0xFF/95A0. |
| 8012468C | fn_1x2468c | fn_1x2468c | src/config/gen01487.c |  |  |
| 80124704 | fn_1x24704 | fn_1x24704 | src/config/gen17.c |  |  |
| 80124B74 | shop_rows_x73_x75_windows_x163_tex | shop_rows_x73_x75_windows_x163_tex | src/config/gen594.c |  | shop rows: 0x73/0x75 windows, 0x163 text, 0x1D window, 80124C64 row; loops L124B9C (5958(7)) and L124BCC (78C4 cells). |
| 80124C64 | rows_c3c_with_v0_gates_returns_at | rows_c3c_with_v0_gates_returns_at | src/config/gen01699.c |  | rows: 3C3C with v0 gates; returns at L124CD0. |
| 80124D08 | config_rows_163 | config_rows_163 | src/config/gen704.c |  | rows: 0x163 text, 0x41/0x29 windows, 80124B74 row; loop L124D70 on 6B68(0x163)/5958(7). |
| 80124DC8 | rows_x29_x45_x46_windows_c_row_f94 | rows_x29_x45_x46_windows_c_row_f94 | src/config/gen617.c |  | rows: 0x29/0x45/0x46 windows, 8012371C row; 3F94(3C3C(0x29)) + 3F38(3C3C(0x45)) reads. |
| 80124EAC | cell_cur_save54_b | cell_cur_save54_b | src/config/roww.c |  |  |
| 80124F28 | fn_1x24f28 | fn_1x24f28 | src/config/gen1130.c | Y |  |
| 80124F60 | equip_cell_x43_x29_x41_rows_xdb_x3 | equip_cell_x43_x29_x41_rows_xdb_x3 | src/config/gen321.c |  | equip cell: 0x43/0x29/0x41 rows, 0xDB/0x34/0x45 windows, 801245B4 in the L125068 loop; 78C4(3C3C(0x34)) cells, 5DA0(0x45)/5B8C latch. |
| 80125100 | fn_1x25100 | fn_1x25100 | src/config/gen01486.c | Y |  |
| 80125130 | config_row_1d | config_row_1d | src/config/gen40.c |  |  |
| 80125528 | rows_x1d_x29_windows_e8_close_x340 | rows_x1d_x29_windows_e8_close_x340 | src/config/gen977.c |  | rows: 0x1D/0x29 windows, 801255E8 close; 4064(0x340) reads. |
| 801255C0 | fn_1x255c0 | fn_1x255c0 | src/config/gen01698.c | Y |  |
| 801255E8 | fn_1x255e8 | fn_1x255e8 | src/config/gen570.c | Y |  |
| 80125670 | status_row_x1a71_text_x45_x41_wind | status_row_x1a71_text_x45_x41_wind | src/config/gen569.c |  | status row: 0x1A71 text, 0x45/0x41 windows; loop L1256A8 on 5DD4(0x45)/5C64(0x202). |
| 801257BC | status_row_x16a8_x1a71_x1a73_texts | status_row_x16a8_x1a71_x1a73_texts | src/config/gen488.c |  | status row: 0x16A8/0x1A71/0x1A73 texts, 0x45/0x41 windows, 801224D0 cursor; loop L125810 on 5DD4(0x45)/5C64(0x202). |
| 80125934 | sub_menu_x1a73_x1a75_texts_row_loo | sub_menu_x1a73_x1a75_texts_row_loo | src/config/gen434.c |  | sub-menu: 0x1A73/0x1A75 texts, 80125130 row; loop L1259C4 (6DE8/8274(0x1D)/8274(2) cells) on 5C64(0x202). |
| 80125A64 | fn_1x25a64 | fn_1x25a64 | src/config/gen1017.c | Y |  |
| 80125ACC | config_equip_form_confirm_x45_x46 | config_equip_form_confirm_x45_x46 | src/config/gen71.c |  | config/equip-form confirm: 0x45/0x46/0x43/0x15 windows, 0x1BC0/ 0x1BBF texts; 8012D204 gate; L125B14 renders the 1/3 option rows (801224D0 + |
| 80125DF8 | rows_x145_text_loops_l125e28_d70_c | rows_x145_text_loops_l125e28_d70_c | src/config/gen799.c |  | rows: 0x145 text; loops L125E28 (6D70/5C64) and L125EAC (63BC/5C64) with the 5D24(0x145)/5B8C latch. |
| 80125F38 | shop_rows_x45_x46_windows_x1_x43_t | shop_rows_x45_x46_windows_x1_x43_t | src/config/gen568.c |  | shop rows: 0x45/0x46 windows, 0x1/0x43 texts, 8012D204 gate; renders the 0x45 rows with 4064/3454 values. |
| 80126070 | fn_1x26070 | fn_1x26070 | src/config/gen249.c |  |  |
| 80126330 | config_row_q18 | config_row_q18 | src/config/rowq18.c | Y |  |
| 80126368 | fn_1x26368 | fn_1x26368 | src/config/gen1016.c | Y |  |
| 801263C8 | fn_1x263c8 | fn_1x263c8 | src/rows/gen_801263C8.c | Y |  |
| 801263F0 | config_row_f320 | config_row_f320 | src/config/rowf320.c | Y |  |
| 80126418 | fn_1x26418 | fn_1x26418 | src/config/gen1257.c | Y |  |
| 80126458 | fn_1x26458 | fn_1x26458 | src/rows/gen_80126458.c | Y |  |
| 80126480 | fn_1x26480 | fn_1x26480 | src/config/gen1256.c | Y |  |
| 801264C0 | config_row_264e8 | config_row_264e8 | src/config/row264e8.c | Y |  |
| 801264E8 | config_row_7800 | config_row_7800 | src/config/gen1255.c | Y |  |
| 80126528 | config_row_26528 | config_row_26528 | src/config/row26528.c | Y |  |
| 80126550 | fn_1x26550 | fn_1x26550 | src/config/gen1254.c | Y |  |
| 80126590 | fn_1x26590 | fn_1x26590 | src/config/gen01485.c |  |  |
| 80126610 | battle_row_88 | battle_row_88 | src/config/gen899.c |  | rows: 0x88 window, 0x2100 text, 8011F320/8011F844 rows; 6434(0x80) gate; loop L126618 on 5B8C. |
| 801266A0 | fn_1x266a0 | fn_1x266a0 | src/rows/gen_801266A0.c | Y |  |
| 801266C8 | fn_1x266c8 | fn_1x266c8 | src/rows/gen_801266C8.c | Y |  |
| 801266F0 | rows_x100_x1c_x41_windows_f0_x89_c | rows_x100_x1c_x41_windows_f0_x89_c | src/config/gen729.c |  | rows: 0x100/0x1C/0x41 windows, 86F0(0x89) cell; loop L126740 on 5C64(0x202). |
| 801267A0 | fn_1x267a0 | fn_1x267a0 | src/config/gen845.c | Y |  |
| 801267E8 | fn_1x267e8 | fn_1x267e8 | src/config/gen844.c | Y |  |
| 80126830 | fn_1x26830 | fn_1x26830 | src/config/gen1129.c | Y |  |
| 80126878 | fn_1x26878 | fn_1x26878 | src/config/gen1128.c | Y |  |
| 801268C0 | fn_1x268c0 | fn_1x268c0 | src/config/gen01697.c |  |  |
| 80126920 | fn_1x26920 | fn_1x26920 | src/config/gen01484.c |  |  |
| 80126990 | equip_window_cells_xd2_xbe_gates_w | equip_window_cells_xd2_xbe_gates_w | src/config/gen258.c |  | equip window cells: 0xD2/0xBE gates with the 0x59/0xB9/0xBA rows (3F38(3C3C) / 7F48(3C3C) value cells), 0xC0/0xBF/0xBB/0xBC bottom row, and  |
| 80126B88 | fn_1x26b88 | fn_1x26b88 | src/config/gen1253.c | Y |  |
| 80126BB8 | ability_main_b9a_text_gate_be4_a5f | ability_main_b9a_text_gate_be4_a5f | src/config/gen616.c |  | ability main: 1B9A text gate + 1BE4/1A5F/1A3C rows; calls 80126E08 (sub-dispatcher); loop L126BE4 on 6EA9C/56AC(!=0) with 80128480/80128B3C/ |
| 80126D48 | rows_x48_window_row_loop_l126d58_x | rows_x48_window_row_loop_l126d58_x | src/config/gen645.c |  | rows: 0x48 window, 80132178 row; loop L126D58 (4120(0x202) gate), closes on 0xE7/0x1B3E/0x1B2A texts. |
| 80126E08 | ability_status_screen_s0_cursor_v0 | ability_status_screen_s0_cursor_v0 | src/config/gen675.c |  | ability/status screen. s0 = cursor; v0/s0 regcmp gates route the cursor-row recompute (L26FB4 vs L27048); the v1/v0 latch at L2712C loops ba |
| 80127168 | ability_move_sub_screen_a3c_b47_te | ability_move_sub_screen_a3c_b47_te | src/config/gen283.c |  | ability-move sub-screen: 1A3C/1B47 texts, two browse loops (L127294 equip, L127354 detail) with 801282D4 row-commit; exits via 80136148 or t |
| 80127408 | status_c_header_f0_b0_cells_x_b8 | status_c_header_f0_b0_cells_x_b8 | src/config/gen504.c |  | status: 8012214C header + 65F0/81B0(!=) cells + 4 x 801287B8 blocks, then the 0x34 window save row (801210AC/8011EF30/ 8011EF0C); closes wit |
| 80127538 | status_rows_x73_x74_windows_xa_xc | status_rows_x73_x74_windows_xa_xc | src/config/gen420.c |  | status rows: 0x73/0x74 windows, 0xA/0xC/0x5A/0x5B/0x5D/0x5E cells, 80123958/8011F360/8011F3F8 rows. |
| 80127668 | rows_x46_x45_windows_x1000_x7ff_x7 | rows_x46_x45_windows_x1000_x7ff_x7 | src/config/gen843.c |  | rows: 0x46/0x45 windows, 0x1000/0x7FF/0x7000 values, 80135B54 close; gate 5B8C(0x80). |
| 80127718 | fn_1x27718 | fn_1x27718 | src/config/gen476.c | Y |  |
| 80127808 | s2_branch | s2_branch | src/config/gen83.c |  | s2 branch |
| 80127C70 | ability_status_details_screen_head | ability_status_details_screen_head | src/config/gen394.c |  | ability/status details screen: 80126610..80136014 header chain, 0x1BE4/0x17FE stat block, 0x1B47/0x1B46 detail rows with the s2/6434(2) gate |
| 80127F2C | - | - | - |  | menu text-grid: clears 4 slots, then installs the panel label recipe for panel geometry 7 or 8. |
| 8012807C | fn_1x2807c | fn_1x2807c | src/config/gen842.c | Y |  |
| 801280D4 | status_row_x30_xc1_x1d_x1e_x1a3c_x | status_row_x30_xc1_x1d_x1e_x1a3c_x | src/config/gen526.c |  | status row: 0x30/0xC1/0x1D/0x1E/0x1A3C/0x5A windows, 8012807C/801241B8/801224D0/80125130 rows; loop L1281AC on 5DA0(0x5A)/5B8C(0x202). |
| 8012821C | fn_1x2821c | fn_1x2821c | src/config/gen1168.c | Y |  |
| 80128264 | fn_1x28264 | fn_1x28264 | src/config/gen674.c | Y |  |
| 801282D4 | fn_1x282d4 | fn_1x282d4 | src/config/gen1127.c |  |  |
| 8012833C | shop_rows_x51_x46_x45_windows_d8_r | shop_rows_x51_x46_x45_windows_d8_r | src/config/gen593.c |  | shop rows: 0x51/0x46/0x45 windows, 801387D8 row; gates 5A90(0x1BE4)/5520(3B9C). |
| 80128480 | shop_status_x48_x49_windows_c_rows | shop_status_x48_x49_windows_c_rows | src/config/gen547.c |  | shop/status: 0x48/0x49 windows, 80127718/8012833C rows; loop L1284A0 on 5574(4); 0x1000/0x7FF/0x7E70 gates. |
| 80128598 | party_stat_block_x1b9a_gate_main_p | party_stat_block_x1b9a_gate_main_p | src/config/gen320.c |  | party-stat block: 0x1B9A gate; main path renders the 0x88/0x4E windows and the L128628 row loop (801266C8 + 5DD4 cells) with the 80128750/80 |
| 80128750 | fn_1x28750 | fn_1x28750 | src/config/gen841.c | Y |  |
| 801287B8 | config_save_screen_x4b_x48_x49_win | config_save_screen_x4b_x48_x49_win | src/config/gen250.c |  | config/save screen: 0x4B/0x48/0x49 windows, 80120070 config dispatcher, 8012833C save-check; L128954 gate loop (6BE0/4264/ 55C0), then the 8 |
| 80128AD4 | fn_1x28ad4 | fn_1x28ad4 | src/config/gen673.c | Y |  |
| 80128B3C | battle_status_x_b9c_checks_on_x1be | battle_status_x_b9c_checks_on_x1be | src/config/gen768.c |  | battle/status: 4x 5520(3B9C()) checks on 0x1BE4 cells; gates -> 80128C4C/8012821C/80126D48 row block; 53D4 latches. |
| 80128C4C | fn_1x28c4c | fn_1x28c4c | src/config/gen314.c | Y |  |
| 80128D4C | fn_1x28d4c | fn_1x28d4c | src/config/screen_g.c |  |  |
| 80129808 | - | - | - | Y |  |
| 80129838 | fn_1x29838 | fn_1x29838 | src/config/gen01483.c |  |  |
| 801298A0 | fn_1x298a0 | fn_1x298a0 | src/config/gen1126.c |  |  |
| 80129910 | shop_rows_x45_x4b_x48_windows_b4_d | shop_rows_x45_x4b_x48_windows_b4_d | src/config/gen393.c |  | shop rows: 0x45/0x4B/0x48 windows, 801245B4 detail; nested loops L129958 (5574/8960 cells), L129948, L129938 on 5DA0/5B8C(0x202). |
| 80129AAC | fn_1x29aac | fn_1x29aac | src/config/gen01696.c | Y |  |
| 80129AD4 | - | - | - |  |  |
| 80129B04 | rows_x41_x60_x45_x5d_windows_f38_c | rows_x41_x60_x45_x5d_windows_f38_c | src/config/gen703.c |  | rows: 0x41/0x60/0x45/0x5D windows, 3F38(3C3C(0x45)) + 3F38(3A70(0x5D)) reads; v1/v0 gates route the L129BF8 etc tails; 5574 close. |
| 80129C54 | fn_1x29c54 | fn_1x29c54 | src/config/gen349.c | Y |  |
| 80129D2C | fn_1x29d2c | fn_1x29d2c | src/config/gen1252.c | Y |  |
| 80129D64 | fn_1x29d64 | fn_1x29d64 | src/config/gen567.c | Y |  |
| 80129DFC | fn_1x29dfc | fn_1x29dfc | src/config/gen566.c | Y |  |
| 80129E94 | fn_1x29e94 | fn_1x29e94 | src/config/gen1333.c |  |  |
| 80129EF4 | fn_1x29ef4 | fn_1x29ef4 | src/config/gen728.c | Y |  |
| 80129F54 | main_menu_option_config_tab_x210c | main_menu_option_config_tab_x210c | src/config/gen464.c |  | main-menu option 0 (config tab): 0x210C header + 0x1F/0x1C/0x1B/ 0xAE windows, 0x1BA5/0x1BC9/0x1B1D rows; home-row renders through 80121124/ |
| 8012A190 | fn_1x2a190 | fn_1x2a190 | src/config/gen20.c |  |  |
| 8012A678 | config_block_x1b23_x1b22_x1b19_x1b | config_block_x1b23_x1b22_x1b19_x1b | src/config/gen348.c |  | config block: 0x1B23/0x1B22/0x1B19/0x1B25 texts, 0x3F window, 8011F724 rows, 8012B0D8 alt; gates on 6434(2). |
| 8012A868 | fn_1x2a868 | fn_1x2a868 | src/config/gen1015.c | Y |  |
| 8012A8A8 | config_sub_options_x5d_x5e_windows | config_sub_options_x5d_x5e_windows | src/config/gen347.c |  | config sub-options: 0x5D/0x5E windows, 0x34 window; 8012CB34 page, 8012AE00 save-load, 8012AB18 detail row; loop L12A8C0. |
| 8012AA80 | fn_1x2aa80 | fn_1x2aa80 | src/config/gen1014.c | Y |  |
| 8012AAC0 | fn_1x2aac0 | fn_1x2aac0 | src/rows/gen_8012AAC0.c |  |  |
| 8012AB18 | config_status_row_x1bcc_gate_x5d_x | config_status_row_x1bcc_gate_x5d_x | src/config/gen66.c |  | config status row: 0x1BCC gate, 0x5D/0x5A/0x40/0xDB/0x5C windows, 80125100 stat block + 801206DC menu row; two symmetric branches (L8012AB84 |
| 8012AE00 | save_load_status_screen_x1b1f_canc | save_load_status_screen_x1b1f_canc | src/config/gen268.c |  | save/load status screen: 0x1B1F cancel gate, 0x1BC9 open dialog (8013441C), 0x1BC8 arrows; 0x1B12 row reads; 0x34 window with 0xDB cell writ |
| 8012B050 | fn_1x2b050 | fn_1x2b050 | src/config/gen976.c | Y |  |
| 8012B0B0 | fn_1x2b0b0 | fn_1x2b0b0 | src/config/gen01482.c | Y |  |
| 8012B0D8 | animation_row_310 | animation_row_310 | src/config/gen01481.c | Y |  |
| 8012B100 | fn_1x2b100 | fn_1x2b100 | src/config/gen727.c | Y |  |
| 8012B168 | animation_row_300b | animation_row_300b | src/config/gen01480.c | Y |  |
| 8012B190 | fn_1x2b190 | fn_1x2b190 | src/config/rowh.c |  |  |
| 8012B950 | config_rows_x1bc3_x1bc1_texts_eac | config_rows_x1bc3_x1bc1_texts_eac | src/config/gen898.c |  | config rows: 0x1BC3/0x1BC1 texts, 80124EAC/801224D0/ 8012BB68 rows; loop L12B958 on 5574(5). |
| 8012BA14 | config_row_x30_x3f_windows_x1b22_t | config_row_x30_x3f_windows_x1b22_t | src/config/gen840.c |  | config row: 0x30/0x3F windows, 0x1B22 text, 801267E8/ 8011F320/8011EF0C/801210AC/8011EF30/8011FBA4/8012B950 rows; gates 6434(2). |
| 8012BAF8 | fn_1x2baf8 | fn_1x2baf8 | src/config/gen1125.c | Y |  |
| 8012BB68 | fn_1x2bb68 | fn_1x2bb68 | src/config/gen236.c |  |  |
| 8012BE34 | item_equip_sub_screen_x1b3e_x1b22 | item_equip_sub_screen_x1b3e_x1b22 | src/config/gen274.c |  | item/equip sub-screen: 0x1B3E/0x1B22 texts, 0x70/0x8/0xE8/0x5D windows; 8012D194 cursor gate and 801224D0 detail; loops at L2BE3C/L2BEFC/L2B |
| 8012C0A8 | config_save_flow_x60_x45_windows_x | config_save_flow_x60_x45_windows_x | src/config/gen384.c |  | config save-flow: 0x60/0x45 windows, 0x1B3B/0x1B84/0x1B86 texts, 801221EC/801210AC/8011EF30/8011FBA4/801263F0/8012C250 rows; 4120(2) gate. |
| 8012C250 | config_rows_x1b3c_x1b3b_x1440_text | config_rows_x1b3c_x1b3b_x1440_text | src/config/gen941.c |  | config rows: 0x1B3C/0x1B3B/0x1440 texts, 0xE8 window, 8012B168/8011F684/8012219C/8011FF40 rows; gates 5574(3)/ 6434(0x202). |
| 8012C2F8 | fn_1x2c2f8 | fn_1x2c2f8 | src/rows/gen_8012C2F8.c |  |  |
| 8012C360 | config_rows_c0a8_prep_x60_x45_wind | config_rows_c0a8_prep_x60_x45_wind | src/config/gen672.c |  | config rows: 8012C0A8 prep, 0x60/0x45 windows; 53C0 gate picks 6764(0x60) fills. |
| 8012C42C | config_rows_twin_of_c360_with_xb_c | config_rows_twin_of_c360_with_xb_c | src/config/gen671.c |  | config rows (twin of 8012C360 with 0xB const): 8012C0A8 prep, 0x60/0x45 windows. |
| 8012C4F8 | fn_1x2c4f8 | fn_1x2c4f8 | src/config/gen644.c | Y |  |
| 8012C584 | config_row_x60_window_x43_x3f_wind | config_row_x60_window_x43_x3f_wind | src/config/gen487.c |  | config row: 0x60 window, 0x43/0x3F windows, 8012C2F8 alt + 801221EC close; 4120(0x202)/53C0 gates. |
| 8012C6B8 | config_rows_x60_window_gates_c2f8 | config_rows_x60_window_gates_c2f8 | src/config/gen940.c |  | config rows: 0x60 window, gates 6434()/8012C2F8; closes via 8218? cells + 801221EC. |
| 8012C74C | fn_1x2c74c | fn_1x2c74c | src/config/gen939.c | Y |  |
| 8012C794 | fn_1x2c794 | fn_1x2c794 | src/config/gen938.c | Y |  |
| 8012C7E4 | fn_1x2c7e4 | fn_1x2c7e4 | src/config/gen937.c | Y |  |
| 8012C82C | fn_1x2c82c | fn_1x2c82c | src/config/gen592.c | Y |  |
| 8012C8A4 | config_rows_x1b3b_xd5_x60_texts_wi | config_rows_x1b3b_xd5_x60_texts_wi | src/config/gen643.c |  | config rows: 0x1B3B/0xD5/0x60 texts/windows, 801221EC/8012C2F8/ 8012C980 rows; gate 53D4. |
| 8012C980 | config_save_screen_x1b23_x1b1a_tex | config_save_screen_x1b23_x1b1a_tex | src/config/gen383.c |  | config save-screen: 0x1B23/0x1B1A texts, 0x1440/0x45/0x54 windows, 801210AC/801224D0/8011EF30 preps; L12CA7C confirm loop on 53D4/6434(0x202 |
| 8012CB34 | config_dead_key_row_x5d_window_x45 | config_dead_key_row_x5d_window_x45 | src/config/gen486.c |  | config dead-key row: 0x5D window, 0x45/0x29/0x41 cells, 4264(1)/41E8(2) gates; 4 cell writes on 0x4/0x2/0x40/0x42. |
| 8012CC4C | fn_1x2cc4c | fn_1x2cc4c | src/config/gen01479.c | Y |  |
| 8012CC74 | config_rows_x1a02_text_x202_cell_g | config_rows_x1a02_text_x202_cell_g | src/config/gen01478.c |  | config rows: 0x1A02 text, 0x202 cell gate; 8012C250 vs 8012CEA8 rows. |
| 8012CD6C | config_rows_x1a04_x1a03_x1b19_x93 | config_rows_x1a04_x1a03_x1b19_x93 | src/config/gen975.c |  | config rows: 0x1A04/0x1A03/0x1B19/0x93/0x1BA5/0x1A65 texts; gate 4120(2) picks 8012CC4C. |
| 8012CE00 | fn_1x2ce00 | fn_1x2ce00 | src/config/gen1332.c | Y |  |
| 8012CE54 | fn_1x2ce54 | fn_1x2ce54 | src/config/gen1331.c | Y |  |
| 8012CEA8 | fn_1x2cea8 | fn_1x2cea8 | src/rows/gen_8012CEA8.c |  |  |
| 8012CF18 | config_sub_menu_file_save_x45_wind | config_sub_menu_file_save_x45_wind | src/config/gen306.c |  | config sub-menu (file save): 0x45 window, 0x1B3B text, 0x15C0 wait gate; 8012D204 cursor, 8012C250/80120A0C/801210AC/8011FB74/ 8012FBB0/8012 |
| 8012D124 | - | - | - |  |  |
| 8012D194 | fn_1x2d194 | fn_1x2d194 | src/config/gen1251.c | Y |  |
| 8012D1D0 | fn_1x2d1d0 | fn_1x2d1d0 | src/config/gen01477.c | Y |  |
| 8012D204 | midrow_prep_a | midrow_prep_a | src/config/gen1124.c | Y |  |
| 8012D23C | fn_1x2d23c | fn_1x2d23c | src/config/rowi.c |  |  |
| 8012DB6C | fn_1x2db6c | fn_1x2db6c | src/config/gen1250.c | Y |  |
| 8012DB9C | config_saves_ef30_fba4_rows_xc3_xc | config_saves_ef30_fba4_rows_xc3_xc | src/config/gen565.c |  | config saves: 8011EF30/8011FBA4 rows, 0xC3/0xC6 windows with 12/11 8188 row writes. |
| 8012DC80 | fn_1x2dc80 | fn_1x2dc80 | src/config/gen564.c | Y |  |
| 8012DD30 | fn_1x2dd30 | fn_1x2dd30 | src/config/gen01476.c | Y |  |
| 8012DD58 | fn_1x2dd58 | fn_1x2dd58 | src/config/gen245.c |  |  |
| 8012E160 | fn_1x2e160 | fn_1x2e160 | src/config/gen1167.c | Y |  |
| 8012E1C0 | rows_d0_x20_x20_windows | rows_d0_x20_x20_windows | src/config/gen1330.c |  | rows: 5140 + 801224D0 + 9644(0x20)/9660(0x20) windows. |
| 8012E264 | fn_1x2e264 | fn_1x2e264 | src/config/gen615.c | Y |  |
| 8012E33C | formation_summary_xd9_xda_windows | formation_summary_xd9_xda_windows | src/config/gen407.c |  | formation summary: 0xD9/0xDA windows, 0x43 window cells, 0x1B9C/ 0x1B9F/0x1B9D row texts, 80D0/53C0 gate; 81B0 cell pairs. |
| 8012E5A8 | party_formation_screen_xd5_xd7_row | party_formation_screen_xd5_xd7_row | src/config/gen463.c | Y | party-formation screen: 0xD5/0xD7 rows, 0x1B9D/0x1B9F/0x1B9C texts, 8012E264/8012E7CC/8012E33C/8012E700/801255C0 rows; loops L12E5C0 (5DA0(0 |
| 8012E700 | fn_1x2e700 | fn_1x2e700 | src/config/gen936.c | Y |  |
| 8012E758 | fn_1x2e758 | fn_1x2e758 | src/config/gen1013.c |  |  |
| 8012E7CC | fn_1x2e7cc | fn_1x2e7cc | src/config/gen726.c | Y |  |
| 8012E844 | party_form_formation_screen_x1d_x1 | party_form_formation_screen_x1d_x1 | src/config/gen73.c |  | party-form/formation screen: 0x1D/0x1F/0x23/0x25/0x21 stat cells (3A70/54D4/3F38(3A70(...)) row reads), 8012EAC0 commit; three nested loops  |
| 8012EAC0 | formation_row_x1d_x23_x25_x21_wind | formation_row_x1d_x23_x25_x21_wind | src/config/gen447.c |  | formation row: 0x1D/0x23/0x25/0x21 windows; loops L12EAC8 (6434(0x514)/5A90 gates) and L12EB10 (8A18 cell reads). |
| 8012EBF8 | - | - | - |  |  |
| 8012EC48 | fn_1x2ec48 | fn_1x2ec48 | src/config/rowj.c |  |  |
| 8012F3F0 | - | func_8012F3F0 | src/config/rowk.c |  |  |
| 8012F9A0 | - | - | - | Y |  |
| 8012F9D0 | config_store_x43_x48_x5e_x5b_x5a_x | config_store_x43_x48_x5e_x5b_x5a_x | src/rows/gen_8012F9D0.c |  | config store: 0x43/0x48/0x5E/0x5B/0x5A/0x41 windows, 80120FBC + 8012FBB0 rows; loops L12FA78 (5DA0(0x5D)/5B8C(0x202)) and L12FA88 (5DA0(0x93 |
| 8012FBB0 | fn_1x2fbb0 | fn_1x2fbb0 | src/config/gen23.c |  |  |
| 8012FF9C | ability_rows_x1b83_x1b84_texts_x46 | ability_rows_x1b83_x1b84_texts_x46 | src/config/gen974.c |  | ability rows: 0x1B83/0x1B84 texts, 0x46/0x45 windows. |
| 80130058 | - | func_80130058 | src/config/screen_l.c |  |  |
| 80130884 | fn_1x30884 | fn_1x30884 | src/config/gen01475.c | Y |  |
| 801308B4 | ability_rows_x1d_x1e_windows_x45_x | ability_rows_x1d_x1e_windows_x45_x | src/config/gen767.c |  | ability rows: 0x1D/0x1E windows, 0x45/0x1D cells, 80130884 prep; linear. |
| 8013095C | ability_tabs_x24_window_x130_x1b0 | ability_tabs_x24_window_x130_x1b0 | src/config/gen766.c | Y | ability tabs: 0x24 window, 0x130/0x1B0/0x230 consts, 0x1B81 text, 80130A74 rows, 6434(0x202)/5574(1) gates, 80130A24 close. |
| 80130A24 | fn_1x30a24 | fn_1x30a24 | src/config/gen897.c | Y |  |
| 80130A74 | fn_1x30a74 | fn_1x30a74 | src/config/gen1249.c | Y |  |
| 80130AA4 | ability_detail_x1b87_x1b83_x1b84_t | ability_detail_x1b87_x1b83_x1b84_t | src/config/gen485.c |  | ability detail: 0x1B87/0x1B83/0x1B84 texts, 0x45/0x1B93 windows, 801308B4 row; gates 6434(2). |
| 80130BC8 | ability_rows_x45_x1b93_cells_windo | ability_rows_x45_x1b93_cells_windo | src/config/gen725.c |  | ability rows: 0x45/0x1B93 cells/windows; linear render. |
| 80130C74 | fn_1x30c74 | fn_1x30c74 | src/config/gen77.c |  |  |
| 80130F90 | ability_equip_screen_twin_of_c74_b | ability_equip_screen_twin_of_c74_b | src/config/gen91.c |  | ability/equip screen (twin of 80130C74): 1B83-1B93 texts, 0x28 cursor window, 0x29 cells; 801308B4/8012FBB0/801206DC/80122D20 sub-renders, 5 |
| 80131294 | fn_1x31294 | fn_1x31294 | src/rows/gen_80131294.c | Y |  |
| 801312BC | ability_rows_29 | ability_rows_29 | src/config/gen839.c |  | ability rows: 0x29 window + 80124704 row; 6CF4/9330 preps. |
| 80131358 | ability_spell_screen_x1b9b_x1b8b_t | ability_spell_screen_x1b9b_x1b8b_t | src/config/gen335.c |  | ability/spell screen: 0x1B9B/0x1B8B texts, 0x45/0x46/0x43 windows, 801224D0 cursor, 8011F724 commit; L1313A8 row loop on 5DA0(0x45)/5B8C(0x2 |
| 80131534 | ability_wrapper_preps_config_dispa | ability_wrapper_preps_config_dispa | src/config/gen896.c |  | ability wrapper: 80132428/80177178 preps + 80120070 config dispatcher + the 80126B88/8012F9D0/80130C74 sub-screens; ends with 80126528/80122 |
| 80131644 | - | - | - |  |  |
| 80131678 | - | - | - |  |  |
| 801316AC | fn_1x316ac | fn_1x316ac | src/config/gen1248.c | Y |  |
| 801316E0 | fn_1x316e0 | fn_1x316e0 | src/config/gen1012.c | Y |  |
| 80131760 | ability_rows_x1b8b_x16_texts_x43_w | ability_rows_x1b8b_x16_texts_x43_w | src/config/gen895.c |  | ability rows: 0x1B8B/0x16 texts, 0x43 window, 801224D0 + 80132178 rows; gates 6434(2/0x80). |
| 801317F0 | ability_select_screen_x1b91_text_x | ability_select_screen_x1b91_text_x | src/config/gen267.c |  | ability/select screen: 0x1B91 text, 0xE8/0x54/0x55/0x57/0x41 windows, 80124EAC cursor; loops L1318D0 (5DD4/5C64 scroll), L13193C (6B38(0x1B8 |
| 80131A2C | ability_pick_x1bc6_x1b8b_texts_x43 | ability_pick_x1bc6_x1b8b_texts_x43 | src/config/gen546.c |  | ability pick: 0x1BC6/0x1B8B texts, 0x43/0x45 windows, 801224D0/80124EAC/80132178 rows; 6434(2)/4120(0x202) gates. |
| 80131B38 | fn_1x31b38 | fn_1x31b38 | src/config/gen1011.c | Y |  |
| 80131B80 | fn_1x31b80 | fn_1x31b80 | src/config/gen642.c | Y |  |
| 80131BF8 | fn_1x31bf8 | fn_1x31bf8 | src/config/gen935.c | Y |  |
| 80131C50 | ability_rows_x1bc9_x1b93_texts_xe8 | ability_rows_x1bc9_x1b93_texts_xe8 | src/config/gen838.c |  | ability rows: 0x1BC9/0x1B93 texts, 0xE8/0x43 windows, 80124EAC row; 6BE0(0xB)/87DC(0xB) cells; gate 6434(0x202). |
| 80131CD8 | ability_tab_x1bc6_x1b8b_x16_texts | ability_tab_x1bc6_x1b8b_x16_texts | src/config/gen525.c |  | ability tab: 0x1BC6/0x1B8B/0x16 texts, 0x43 window, 801321B4 row; 6BE0(9)/87DC(7) latch and 6240(0x1BC9) tail. |
| 80131DF8 | fn_1x31df8 | fn_1x31df8 | src/config/gen934.c | Y |  |
| 80131E50 | fn_1x31e50 | fn_1x31e50 | src/config/gen446.c | Y |  |
| 80131F08 | fn_1x31f08 | fn_1x31f08 | src/config/gen1247.c | Y |  |
| 80131F38 | fn_1x31f38 | fn_1x31f38 | src/config/gen1246.c | Y |  |
| 80131F68 | fn_1x31f68 | fn_1x31f68 | src/config/gen1245.c | Y |  |
| 80131F98 | fn_1x31f98 | fn_1x31f98 | src/config/gen1059.c |  |  |
| 80132010 | ability_header_x1b8b_text_x4e_x50 | ability_header_x1b8b_text_x4e_x50 | src/config/gen702.c |  | ability header: 0x1B8B text, 0x4E/0x50/0x49/0x48/0x4E windows, 801224D0/801321B4 rows; 6434(2) gate. |
| 801320E8 | fn_1x320e8 | fn_1x320e8 | src/config/gen837.c | Y |  |
| 80132130 | fn_1x32130 | fn_1x32130 | src/config/gen1123.c | Y |  |
| 80132178 | fn_1x32178 | fn_1x32178 | src/rows/gen_80132178.c |  |  |
| 801321B4 | fn_1x321b4 | fn_1x321b4 | src/config/gen1244.c | Y |  |
| 801321E8 | fn_1x321e8 | fn_1x321e8 | src/config/gen1243.c | Y |  |
| 80132248 | fn_1x32248 | fn_1x32248 | src/config/gen1242.c |  |  |
| 801322AC | fn_1x322ac | fn_1x322ac | src/config/gen1241.c | Y |  |
| 80132310 | fn_1x32310 | fn_1x32310 | src/rows/gen_80132310.c |  |  |
| 80132378 | ability_rows_x1b8b_x4_texts_d0_row | ability_rows_x1b8b_x4_texts_d0_row | src/config/gen894.c |  | ability rows: 0x1B8B/0x4 texts, 801224D0/80132178 rows; loop L132388 on 5574(5). |
| 80132428 | fn_1x32428 | fn_1x32428 | src/config/gen973.c | Y |  |
| 80132490 | fn_1x32490 | fn_1x32490 | src/config/gen765.c | Y |  |
| 801324F8 | fn_1x324f8 | fn_1x324f8 | src/config/gen06.c |  |  |
| 80132C0C | ability_rows_ca4_prep_x1b4a_x1b4b | ability_rows_ca4_prep_x1b4a_x1b4b | src/config/gen933.c |  | ability rows: 80139CA4 prep, 0x1B4A/0x1B4B texts, 0x43 window, 80126070 close; gate 6434(0x80). |
| 80132CA4 | fn_1x32ca4 | fn_1x32ca4 | src/config/gen798.c | Y |  |
| 80132CFC | fn_1x32cfc | fn_1x32cfc | src/config/gen231.c |  |  |
| 801330F8 | ability_banner_x1b_window_x2100_x1 | ability_banner_x1b_window_x2100_x1 | src/config/gen475.c |  | ability banner: 0x1B window, 0x2100/0x15/0x145 texts, 80139AFC tail; loops L133170 (6D70/5C64 pairs) and L1331EC. |
| 8013327C | fn_1x3327c | fn_1x3327c | src/config/screen_u.c |  |  |
| 8013389C | - | func_8013389C | src/config/screen_e.c |  |  |
| 8013441C | config_weapon_sub_menu_x1eb_x1b37 | config_weapon_sub_menu_x1eb_x1b37 | src/config/gen462.c |  | config weapon sub-menu: 0x1EB/0x1B37/0x1B39 texts; 8013463C/ 80134AF8/801224D0/801345B4 rows; 53C0/53D4 ladders route the 4C40/5F4D/6C61 opt |
| 801345B4 | ability_rows_45 | ability_rows_45 | src/config/gen1010.c |  | ability rows: 0x45/0x46 windows with 54D4 gates pick the 5480/5410 tails. |
| 8013463C | config_weapon_switch_screen_b37_b3 | config_weapon_switch_screen_b37_b3 | src/config/gen90.c |  | config/weapon-switch screen: 1B37-1B3A texts; 801224D0/801345B4 renders; 4C44/4300/6C61/5354/5F54 option texts; exit 5480. |
| 80134948 | ability_rows_x41_window_d4_b04_gat | ability_rows_x41_window_d4_b04_gat | src/config/gen563.c |  | ability rows: 0x41 window, 54D4(3B04) gate routes the 0x1441/ 0xE3 check; loops L134968 (5EA0/5C64(0x202)) and L134998. |
| 80134A50 | fn_1x34a50 | fn_1x34a50 | src/config/gen932.c | Y |  |
| 80134AB0 | fn_1x34ab0 | fn_1x34ab0 | src/config/gen836.c | Y |  |
| 80134AF8 | weapon_sub_menu_x1b39_text_x45_x48 | weapon_sub_menu_x1b39_text_x45_x48 | src/config/gen406.c |  | weapon sub-menu: 0x1B39 text, 0x45/0x48/0x49/0xE5 windows, 801224D0 row; loop L134BFC (5DD4(0x48)/5C64(2)), gate 43A0(0x45)/41E8(0x202). |
| 80134C74 | ability_wrapper_ea9c_d3c_preps_x1b | ability_wrapper_ea9c_d3c_preps_x1b | src/config/gen524.c |  | ability wrapper: 8016EA9C/80123D3C preps, 0x1B1D/0x1BB1/0x1BB2 rows, then 80134FF4 sub-dispatcher; loop L134D38 pulls 80194700/80194394. |
| 80134E74 | ability_summary_x48c0_x1a71_x1a01 | ability_summary_x48c0_x1a71_x1a01 | src/config/gen591.c |  | ability summary: 0x48C0/0x1A71/0x1A01/0x1A02 texts, 80120F1C/8012807C/801257BC/8011EF30/80135298/8011F8D4/ 8011FBA4 rows; linear render. |
| 80134FBC | fn_1x34fbc | fn_1x34fbc | src/rows/gen_80134FBC.c |  |  |
| 80134FF4 | ability_config_screen_bb1_text_win | ability_config_screen_bb1_text_win | src/config/gen334.c |  | ability/config screen: 1BB1 text, 45/46 windows; header renders (L135054 vs L13507C variants) with 80124298/80134FBC/801264C0/ 80126590/8012 |
| 80135298 | fn_1x35298 | fn_1x35298 | src/rows/gen_80135298.c |  |  |
| 801352F0 | fn_1x352f0 | fn_1x352f0 | src/config/gen1122.c | Y |  |
| 80135330 | ability_skill_screen_x34_window_xd | ability_skill_screen_x34_window_xd | src/config/gen503.c |  | ability/skill screen: 0x34 window + 0xDB cell, 0x1B7C/0x1BCB texts; 80134948/80125934/8012B168/80120FBC/801241B8/80120F1C home row, then 801 |
| 8013554C | fn_1x3554c | fn_1x3554c | src/rows/gen_8013554C.c | Y |  |
| 80135574 | fn_1x35574 | fn_1x35574 | src/config/gen31.c |  |  |
| 80135B54 | ability_bank_select_d_8019ee56_d_8 | ability_bank_select_d_8019ee56_d_8 | src/rows/gen_80135B54.c |  | ability bank select: D_8019EE56 <- D_8019A068[bank-char][idx]. |
| 80135BE4 | ability_v1_v0_gates_pick_ee4_f0e8 | ability_v1_v0_gates_pick_ee4_f0e8 | src/config/gen01474.c |  | ability: v1/v0 gates pick 80135EE4/8018F0E8 or 80135DE4 rows; v0 latch closes; returns L135DD4. |
| 80135DE4 | ability_x_rows_v0_gates_pick_l135e | ability_x_rows_v0_gates_pick_l135e | src/rows/gen_80135DE4.c |  | ability: 4x 80197688 rows; v0 gates pick L135E5C. |
| 80135E6C | - | - | - |  |  |
| 80135EE4 | ability_x_cell_rows_linear | ability_x_cell_rows_linear | src/rows/gen_80135EE4.c |  | ability: 8x 80197688 cell rows; linear. |
| 80135F7C | - | - | - |  | ability: 8x 80197698 cell rows; linear. |
| 80136014 | ability_x_a8_cell_rows_linear | ability_x_a8_cell_rows_linear | src/rows/gen_80136014.c |  | ability: 8x 801976A8 cell rows; linear. |
| 801360AC | ability_when_the_panel_cell_is_run | ability_when_the_panel_cell_is_run | src/rows/gen_801360AC.c | Y | ability: when the panel cell is 8, run 80135F7C and reset the drag/selection cells. |
| 801360EC | fn_1x360ec | fn_1x360ec | src/rows/gen_801360EC.c |  |  |
| 80136148 | fn_1x36148 | fn_1x36148 | src/rows/gen_80136148.c |  |  |
| 80136174 | fn_1x36174 | fn_1x36174 | src/config/gen1121.c | Y |  |
| 801361A4 | item_equip_configuration_screen_tw | item_equip_configuration_screen_tw | src/config/gen89.c |  | item/equip configuration screen. Two 6434(0x202) sub-loops (equip browse L362AC / detail L36324); 4008(0x50) reads the confirm key before th |
| 80136494 | fn_1x36494 | fn_1x36494 | src/config/rowl.c |  |  |
| 801368E8 | ability_rows_x1b7b_x1b55_texts_d0 | ability_rows_x1b7b_x1b55_texts_d0 | src/config/gen724.c |  | ability rows: 0x1B7B/0x1B55 texts, 801224D0 row, 801369B8 loop; gates 6434(0x202)/5574(0xCE). |
| 801369B8 | fn_1x369b8 | fn_1x369b8 | src/config/gen972.c |  |  |
| 80136A58 | - | func_80136A58 | src/config/rowm.c |  |  |
| 80136FFC | - | func_80136FFC | src/config/rown.c |  |  |
| 801376B0 | fn_1x376b0 | fn_1x376b0 | src/config/gen931.c | Y |  |
| 801376F0 | ability_page_x1b7a_x1b7c_gates_x76 | ability_page_x1b7a_x1b7c_gates_x76 | src/config/gen333.c |  | ability page: 0x1B7A/0x1B7C gates, 0x76/0x75/0x7A/0x79/0x73/0x77 windows, 80124D08/801223A4 rows; loop L137790 with 3F94(3C3C) cells. |
| 801378B0 | fn_1x378b0 | fn_1x378b0 | src/config/gen1240.c | Y |  |
| 801378E0 | fn_1x378e0 | fn_1x378e0 | src/config/gen971.c | Y |  |
| 80137938 | ability_page_four_gated_blocks_eac | ability_page_four_gated_blocks_eac | src/config/gen287.c |  | ability page: four 4120(2)-gated blocks; each reads 0x1B7A/0x1B7C and writes 0x1BCB through 6240 after the 537D/53C0 key checks. |
| 80137B18 | fn_1x37b18 | fn_1x37b18 | src/config/gen1166.c |  |  |
| 80137BB8 | v1_v0_branch | v1_v0_branch | src/config/gen373.c |  | v1/v0 branch |
| 8013813C | stat_table_header_hash_the_byte_co | stat_table_header_hash_the_byte_co | src/rows/gen_8013813C.c |  | stat table header: hash the 3-byte code, hash cell, relocate to the 0x81/0x8B-marked tile and pack its two 2-byte pairs. |
| 801382C8 | rows_x1a3c_text_ccc_spin_loop_l138 | rows_x1a3c_text_ccc_spin_loop_l138 | src/config/gen1329.c |  | rows: 0x1A3C text + 5CCC spin loop L13831C. |
| 8013836C | fn_1x3836c | fn_1x3836c | src/rows/gen_8013836C.c |  |  |
| 801383B8 | fn_1x383b8 | fn_1x383b8 | src/rows/gen_801383B8.c |  |  |
| 80138408 | fn_1x38408 | fn_1x38408 | src/rows/gen_80138408.c |  |  |
| 80138458 | status_pane_build | status_pane_build | src/config/root.c |  | menu text-grid: clears 8 slots then writes the status-pane label recipe. |
| 80138620 | fn_1x38620 | fn_1x38620 | src/rows/gen_80138620.c |  |  |
| 80138664 | fn_1x38664 | fn_1x38664 | src/rows/gen_80138664.c |  |  |
| 801386C8 | fn_1x386c8 | fn_1x386c8 | src/rows/gen_801386C8.c | Y |  |
| 80138730 | fn_1x38730 | fn_1x38730 | src/config/gen1009.c | Y |  |
| 80138788 | fn_1x38788 | fn_1x38788 | src/config/gen1120.c | Y |  |
| 801387D8 | rows_x4e_x41_windows_x7fa_text_d0 | rows_x4e_x41_windows_x7fa_text_d0 | src/config/gen641.c |  | rows: 0x4E/0x41 windows, 0x7FA text, 801224D0 row; loop L1388B4 on 3F94(3AB4(0x4E))/5C64(0x202) gates. |
| 80138920 | ability_wrapper_x1a88_text_ea9c_a6 | ability_wrapper_x1a88_text_ea9c_a6 | src/config/gen797.c |  | ability wrapper: 0x1A88 text, 8016EA9C/80138A6C/80122114 rows + the 0x100 prelude; linear. |
| 80138A34 | fn_1x38a34 | fn_1x38a34 | src/config/gen1328.c | Y |  |
| 80138A6C | ability_status_wrapper_d3c_render | ability_status_wrapper_d3c_render | src/config/gen445.c |  | ability/status wrapper: 80123D3C render + 0x1A73 title + 0x204/ 0x206 stat cells, then the L138BDC loop calling 80138D24 (the sub-dispatcher |
| 80138CB0 | rows_x48c0_x1a71_texts_xe0_window | rows_x48c0_x1a71_texts_xe0_window | src/config/gen1165.c |  | rows: 0x48C0/0x1A71 texts, 0xE0 window, 8012807C/801257BC/ 80120E2C/8011EF30/8011FB74 rows. |
| 80138D24 | ability_party_screen_x1a88_x1bb4_x | ability_party_screen_x1a88_x1bb4_x | src/config/gen346.c |  | ability/party screen: 0x1A88/0x1BB4/0x1BB0-0x1BB5 texts, sub-dispatchers 8012E844/80120070 and stat rows 80126070/ 80126528/8012B168/8012B0D |
| 80138F68 | config_rows_x1e0_x1e0_x19a_texts_x | config_rows_x1e0_x1e0_x19a_texts_x | src/config/gen701.c |  | config rows: 0x1E0/0x1E0/0x19A texts, 0x212C window, 0x1E0 gate picks the 0x1F/0x1E2 route. |
| 801390DC | ability_rows_e2c_fba4_e9c_aac0_ef3 | ability_rows_e2c_fba4_e9c_aac0_ef3 | src/config/gen1119.c |  | ability rows: 80120E2C/8011FBA4/80126528/80120E9C/8012AAC0/ 8011EF30/801264C0/801391D4 rows, 0x11/0xE2/0x99 window/cells. |
| 80139184 | - | - | - |  |  |
| 801391D4 | fn_1x391d4 | fn_1x391d4 | src/config/gen42.c |  |  |
| 8013954C | ability_rows_x99_cells_e4_f684_e8 | ability_rows_x99_cells_e4_f684_e8 | src/config/gen930.c |  | ability rows: 0x99 cells, 801395E4/8011F684/801264E8/ 8011F884/801391D4 rows; loop L139554 on 5DA0/5B8C(0x202). |
| 801395E4 | ability_rows_x1bb0_x1bb1_texts_x5b | ability_rows_x1bb0_x1bb1_texts_x5b | src/config/gen835.c |  | ability rows: 0x1BB0/0x1BB1 texts, 0x5B/0x5A windows, 8011F724/80176BFC rows; gates 6434(2). |
| 80139694 | fn_1x39694 | fn_1x39694 | src/config/gen893.c | Y |  |
| 80139704 | ability_stat_cast_x1440_x1340_x144 | ability_stat_cast_x1440_x1340_x144 | src/config/gen368.c |  | ability stat-cast: 0x1440/0x1340/0x1441/0x1442 gates, 0x45/0x41 windows, 80139694 intro; loop L13978C (3F38(3B04) rows), then the L139874 st |
| 801398F4 | ability_detail_x1340_x1440_texts_x | ability_detail_x1340_x1440_texts_x | src/config/gen670.c |  | ability detail: 0x1340/0x1440 texts, 0x45/0x41 windows, 80139694 prep, 80120E2C/8011FBA4/80126528/801399EC/ 801264C0 rows; loops L139934 (5D |
| 801399EC | fn_1x399ec | fn_1x399ec | src/rows/gen_801399EC.c | Y |  |
| 80139A24 | fn_1x39a24 | fn_1x39a24 | src/config/gen01695.c |  |  |
| 80139AA4 | fn_1x39aa4 | fn_1x39aa4 | src/config/gen796.c | Y |  |
| 80139AFC | fn_1x39afc | fn_1x39afc | src/config/gen834.c | Y |  |
| 80139B44 | ability_rows_ca4_preps_x1baf_text | ability_rows_ca4_preps_x1baf_text | src/config/gen764.c | Y | ability rows: 80139CA4/80139694 preps, 0x1BAF text, 0x1340/ 0x1440 gates, 80139C0C row; loop L139BD4 on 5574(5). |
| 80139C0C | fn_1x39c0c | fn_1x39c0c | src/config/gen523.c | Y |  |
| 80139CA4 | fn_1x39ca4 | fn_1x39ca4 | src/config/gen929.c | Y |  |
| 80139CF4 | config_row_x30_x31_windows_x8d_x8a | config_row_x30_x31_windows_x8d_x8a | src/config/gen669.c |  | config row: 0x30/0x31 windows, 0x8D/0x8A/0x1D/0x1F/0x121/0x122 texts, 801266F0/8016EA7C/80126610/8011EE34/801241B8/8011F6A4/ 8011F864/80139E |
| 80139E34 | fn_1x39e34 | fn_1x39e34 | src/config/rowo.c |  |  |
| 8013A8C4 | - | - | - | Y |  |
| 8013A8CC | battle_rows_x41_then_bcx2_loop_on | battle_rows_x41_then_bcx2_loop_on | src/config/gen1058.c |  | battle rows: 7270(0x41) then 8960/63BCx2/6364 loop on 5958(9). |
| 8013A950 | ability_rows_x1ba9_x1ba8_x1baa_tex | ability_rows_x1ba9_x1ba8_x1baa_tex | src/config/gen763.c |  | ability rows: 0x1BA9/0x1BA8/0x1BAA texts, 0x43/0x45/0x46 windows; linear render. |
| 8013AA08 | fn_1x3aa08 | fn_1x3aa08 | src/config/gen892.c |  |  |
| 8013AAA8 | fn_1x3aaa8 | fn_1x3aaa8 | src/config/gen1164.c | Y |  |
| 8013AAF0 | - | - | - | Y |  |
| 8013AB18 | - | func_8013AB18 | src/config/rowp.c |  |  |
| 8013AFA4 | ability_rows_x16ae_x16b0_texts_wit | ability_rows_x16ae_x16b0_texts_wit | src/config/gen970.c |  | ability rows: 0x16AE-0x16B0 texts with 54D4(3B04) gates; 8013B04C/8012219C tails. |
| 8013B04C | fn_1x3b04c | fn_1x3b04c | src/rows/gen_8013B04C.c |  |  |
| 8013B0C4 | - | - | - |  |  |
| 8013B118 | fn_1x3b118 | fn_1x3b118 | src/config/gen1057.c | Y |  |
| 8013B160 | fn_1x3b160 | fn_1x3b160 | src/config/gen01694.c |  |  |
| 8013B1A8 | fn_1x3b1a8 | fn_1x3b1a8 | src/config/gen01693.c |  |  |
| 8013B1E8 | fn_1x3b1e8 | fn_1x3b1e8 | src/config/gen01692.c |  |  |
| 8013B228 | fn_1x3b228 | fn_1x3b228 | src/config/gen01691.c |  |  |
| 8013B270 | ability_spell_screen_x48_x49_windo | ability_spell_screen_x48_x49_windo | src/config/gen224.c |  | ability/spell screen: 0x48/0x49 windows, 0x1BC7 text, 801210AC/ 80124EAC/80120A0C/801224F8/80122518/80122334/801241B8/8011F684/ 80120B6C/801 |
| 8013B764 | fn_1x3b764 | fn_1x3b764 | src/rows/gen_8013B764.c |  |  |
| 8013B7B8 | fn_1x3b7b8 | fn_1x3b7b8 | src/rows/gen_8013B7B8.c | Y |  |
| 8013B7C0 | fn_1x3b7c0 | fn_1x3b7c0 | src/config/gen1118.c | Y |  |
| 8013B804 | fn_1x3b804 | fn_1x3b804 | src/config/gen1239.c | Y |  |
| 8013B840 | fn_1x3b840 | fn_1x3b840 | src/config/gen1008.c | Y |  |
| 8013B88C | fn_1x3b88c | fn_1x3b88c | src/config/gen1056.c | Y |  |
| 8013B8D4 | fn_1x3b8d4 | fn_1x3b8d4 | src/config/gen891.c | Y |  |
| 8013B92C | fn_1x3b92c | fn_1x3b92c | src/config/gen1238.c | Y |  |
| 8013B95C | - | - | - |  | ability/party screen: 0x41/0x45 windows, 0x1804/0x1A83 texts; 8016EA9C/80123D3C/8013BB0C/80126610/80122114 rows; loop L13B9F8 (5DA0(0x45)/5B |
| 8013BB0C | ability_menu_x93_x9f_x60_windows_x | ability_menu_x93_x9f_x60_windows_x | src/config/gen833.c |  | ability menu: 0x93/0x9F/0x60 windows, 0x1B1D/0x1BC6 texts, 8013CB94/8012A868/8013C2FC/8013CA70 sub-rows; loop L13BC38 (80194700/80194394) an |
| 8013BD04 | battle_summon_party_cast_screen_x4 | battle_summon_party_cast_screen_x4 | src/config/gen60.c |  | battle summon/party-cast screen: 0x41 window + 0x48/0x45 rows; outer/ inner loops (L3BD24/L3BD54) with 6D70/54D4 confirm gates; L3BE64 advan |
| 8013BFFC | ability_rows_x1a83_text_loop_l13c0 | ability_rows_x1a83_text_loop_l13c0 | src/config/gen1117.c | Y | ability rows: 0x1A83 text; loop L13C024 on 6434(2)/53C0 with 8013C2FC/8013CA70/8013BD04/8013C50C rows. |
| 8013C094 | ability_skill_screen_bb3_bb4_heade | ability_skill_screen_bb3_bb4_heade | src/config/gen254.c |  | ability/skill screen: 1BB3/1BB4 headers, 5B/5A/60 windows; 8011F724/8011F684/8011F884 + 8012B100 renders; loops to L13C09C while 4120(2) hol |
| 8013C2FC | ability_menu_x60_window_x1a83_text | ability_menu_x60_window_x1a83_text | src/config/gen545.c |  | ability menu: 0x60 window, 0x1A83 text, 801210AC/8011FBA4/ 8013C44C/8011F684/80126418/8011F884/8013BFFC rows; loop L13C304 on 4120(2). |
| 8013C44C | fn_1x3c44c | fn_1x3c44c | src/config/gen890.c | Y |  |
| 8013C4B4 | fn_1x3c4b4 | fn_1x3c4b4 | src/config/gen01473.c | Y |  |
| 8013C50C | fn_1x3c50c | fn_1x3c50c | src/rows/gen_8013C50C.c |  |  |
| 8013C554 | ability_skill_detail_twin_of_c094 | ability_skill_detail_twin_of_c094 | src/config/screen_y.c |  | ability/skill detail (twin of 8013C094): 1BB5/1BB6/1BB7 texts, 0x46/0x45/0x60 windows, 8012B168/801266C8/8011F884/8013C4B4 rows; loops L13C5 |
| 8013CA70 | ability_menu_x41_window_ladder_x19 | ability_menu_x41_window_ladder_x19 | src/config/gen668.c |  | ability menu: 0x41 window; 5574 ladder (0x19/0xC8/0xEE codes) routes to the 801210AC/8011FB74/801263F0/8012219C/8011FF40/ 801240A8/8011EF30  |
| 8013CB94 | fn_1x3cb94 | fn_1x3cb94 | src/config/gen01690.c |  |  |
| 8013CBF0 | fn_1x3cbf0 | fn_1x3cbf0 | src/config/gen53.c |  |  |
| 8013CF08 | battle_rows_d64_d14_d040_rows_loop | battle_rows_d64_d14_d040_rows_loop | src/config/gen562.c |  | battle rows: 80143D64/80143D14/8013D040 rows; loop L13CF50 on 5958(8). |
| 8013D040 | battle_rows_x342_x341_x343_cells_x | battle_rows_x342_x341_x343_cells_x | src/config/gen640.c |  | battle rows: 0x342/0x341/0x343 cells, 0x6CC0 gate, 2/4 windows. |
| 8013D12C | battle_row_wrap | - | - | Y |  |
| 8013D14C | battle_magic_list_x34c4_intro_x65 | battle_magic_list_x34c4_intro_x65 | src/config/gen98.c |  | battle magic list: 0x34C4 intro, 0x65/0x2 windows, 8014D528 + 801409BC sub-renders, then the L13D2CC loop pulling 80140558/ 8013D428/8014937 |
| 8013D3B0 | fn_1x3d3b0 | fn_1x3d3b0 | src/config/gen969.c | Y |  |
| 8013D428 | fn_1x3d428 | fn_1x3d428 | src/config/gen700.c | Y |  |
| 8013D4C8 | battle_rows_twin_of_d040_x342_x341 | battle_rows_twin_of_d040_x342_x341 | src/config/gen699.c |  | battle rows (twin of 8013D040): 0x342/0x341/0x343 cells with 0x3F/0x7F cursor codes; gates 6434(0x202). |
| 8013D598 | fn_1x3d598 | fn_1x3d598 | src/config/gen1237.c | Y |  |
| 8013D5C8 | battle_rows_d690_prep_x340_x342_x3 | battle_rows_d690_prep_x340_x342_x3 | src/config/gen762.c |  | battle rows: 8013D690 prep, 0x340/0x342/0x380/0x382 cells; loop L13D600 on 5A90(0x40). |
| 8013D690 | fn_1x3d690 | fn_1x3d690 | src/config/gen522.c | Y |  |
| 8013D720 | fn_1x3d720 | fn_1x3d720 | src/config/rowq.c |  |  |
| 8013DC04 | battle_magic_name_flow_x38e2_x4e_g | battle_magic_name_flow_x38e2_x4e_g | src/config/gen433.c |  | battle magic-name flow: 0x38E2/0x4E gates, 8013D12C prep, 0x4E window rows; loops L13DC70 (5A90(5)), L13DCA0/L13DCDC (4FAC (0x101) rows), L1 |
| 8013DE38 | fn_1x3de38 | fn_1x3de38 | src/config/gen97.c |  |  |
| 8013E200 | battle_item_rows_x1_x2_x3_x4_x5 | battle_item_rows_x1_x2_x3_x4_x5 | src/config/gen561.c |  | battle item rows: 0x1/0x2/0x3/0x4/0x5 windows, 80143D64 + 80143D14 + 8013DE38 rows. |
| 8013E2F8 | battle_magic_cast_flow_d12c_de8_pr | battle_magic_cast_flow_d12c_de8_pr | src/config/gen279.c |  | battle magic-cast flow: 8013D12C/80148DE8 prep, wait loop L13E340 (43E44/5958), row read L13E3EC (4FAC(0x101)/6434(0x80) gates), 8013E200 ca |
| 8013E588 | fn_1x3e588 | fn_1x3e588 | src/rows/gen_8013E588.c |  |  |
| 8013E5D0 | battle_rows_x4_x1_windows_e588_row | battle_rows_x4_x1_windows_e588_row | src/config/gen461.c |  | battle rows: 0x4/0x1 windows, 8013E588 rows; 76BC(3C3C(4))/ 7728(0x101) gate with the 3F38(3B9C) cell writes; loop L13E604 on 5958(8). |
| 8013E73C | battle_magic_rows_x4_x2_windows_e5 | battle_magic_rows_x4_x2_windows_e5 | src/config/gen313.c |  | battle magic rows: 0x4/0x2 windows, 8013E5D0 row, 0x6CD8 gate loop L13E7D8, then the L13E864 pair loop on 3F38(3B04) cells. |
| 8013E984 | battle_rows_x1802_text_x6_window_e | battle_rows_x1802_text_x6_window_e | src/config/gen544.c |  | battle rows: 0x1802 text, 0x6 window, 8013EB2C/8013EAFC/ 8013ED14 rows; loop L13EA9C on 5958(0x440). |
| 8013EAFC | fn_1x3eafc | fn_1x3eafc | src/config/gen1116.c | Y |  |
| 8013EB2C | battle_rows_x16_x2_x4_x5_windows_x | battle_rows_x16_x2_x4_x5_windows_x | src/config/gen367.c |  | battle rows: 0x16/0x2/0x4/0x5 windows, 0x6EFD cells, 67FC row reads; loop L13EBD4 on 5958(0x280). |
| 8013ED14 | battle_rows_x2_x3_x4_windows_x6cfd | battle_rows_x2_x3_x4_windows_x6cfd | src/config/gen543.c |  | battle rows: 0x2/0x3/0x4 windows, 0x6CFD cells; loop L13ED2C on 5DA0(0x4)/5B8C(0x202). |
| 8013EE18 | event_c3c_b04_x2000_x2_gates_one_x | event_c3c_b04_x2000_x2_gates_one_x | src/config/gen1236.c |  | event: 3C3C/3B04(0x2000)x2 gates (one 0x80); s0/a1+s0/a2 regcmp loops; 8013F2C4 spin rows; v1/s5+s0/s3 latches. |
| 8013EF78 | battle_row_d548 | battle_row_d548 | src/battle/rowd548.c | Y |  |
| 8013EF98 | fn_1x3ef98 | fn_1x3ef98 | src/config/gen1115.c | Y |  |
| 8013EFD8 | event_b04_c3c_rows_with_a70_loops | event_b04_c3c_rows_with_a70_loops | src/config/gen968.c |  | event: 3B04/3C3C rows with 3A70 loops on s1/s5/s4 latches; 922C/9410 spins; 5410/971C tail. |
| 8013F124 | event_c3c_b04_a70_rows_with_a2_s0 | event_c3c_b04_a70_rows_with_a2_s0 | src/config/gen1055.c |  | event: 3C3C/3B04/3A70 rows with a2/s0 + a2/a0 spin latches; closes 8013EFD8. |
| 8013F2C4 | event_c3c_b04_x2000_x2_linear | event_c3c_b04_x2000_x2_linear | src/config/gen1235.c |  | event: 3C3C/3B04(0x2000)x2 + 5410; linear. |
| 8013F354 | battle_class_rows_x1c_x22_x1e_wind | battle_class_rows_x1c_x22_x1e_wind | src/config/gen372.c | Y | battle class rows: 0x1C/0x22/0x1E windows, 3F94(3C3C) + 7FCC cells, 64EC(2) gates; loop L13F3BC (7B40/5C64). |
| 8013F49C | battle_rows_x47_x1c_x1e_x22_x20_wi | battle_rows_x47_x1c_x1e_x22_x20_wi | src/config/gen590.c |  | battle rows: 0x47/0x1C/0x1E/0x22/0x20 windows, 8013F354 row, 0x2A16/0x2A1E texts. |
| 8013F5A8 | fn_1x3f5a8 | fn_1x3f5a8 | src/config/gen30.c |  |  |
| 8013F96C | battle_rows_c68_bcx2_cells_loop_l1 | battle_rows_c68_bcx2_cells_loop_l1 | src/config/gen1007.c |  | battle rows: 6C68/8960/63BCx2 cells; loop L13F9B8 on 5958(5). |
| 8013FA08 | - | func_8013FA08 | src/event/screen_h.c |  |  |
| 801401CC | fn_1x401cc | fn_1x401cc | src/battle/gen1054.c | Y |  |
| 80140224 | battle_rows_x4_dc_cell_sets_x7612 | battle_rows_x4_dc_cell_sets_x7612 | src/battle/gen542.c |  | battle rows: 2x4 87DC cell sets (0x7612-0x77B6 and +2); loop L140260 on 5958(0x8C). |
| 80140310 | config_row_8468 | config_row_8468 | src/battle/gen1234.c | Y |  |
| 80140350 | battle_rows_x2a_window_f94_c3c_rea | battle_rows_x2a_window_f94_c3c_rea | src/battle/gen667.c |  | battle rows: 0x2A window, 3F94(3C3C) reads; linear cell fill. |
| 8014046C | battle_rows_x_dc_c_x26_x27_row | battle_rows_x_dc_c_x26_x27_row | src/battle/gen698.c |  | battle rows: 80140558 + 5x (71DC/654C(0x26/0x27)/80140350) row pairs; loop L140498 on 5A90(0x10). |
| 80140558 | - | - | - | Y |  |
| 80140578 | - | - | - | Y |  |
| 80140598 | jr_a0_the_entry_battle_magic_judge | jr_a0_the_entry_battle_magic_judge | src/battle/gen1327.c |  | jr $a0 : the 14-entry battle magic-judge table. Each entry calls one effect then jumps to L1406EC (return); the table tail runs 801406FC. Ha |
| 801406FC | - | - | - | Y |  |
| 8014071C | fn_1x4071c | fn_1x4071c | src/battle/gen1006.c | Y |  |
| 8014076C | fn_1x4076c | fn_1x4076c | src/battle/gen01472.c |  |  |
| 801407EC | fn_1x407ec | fn_1x407ec | src/battle/gen01689.c | Y |  |
| 80140814 | fn_1x40814 | fn_1x40814 | src/battle/gen1005.c | Y |  |
| 8014086C | fn_1x4086c | fn_1x4086c | src/battle/gen01688.c | Y |  |
| 80140894 | fn_1x40894 | fn_1x40894 | src/battle/gen01687.c | Y |  |
| 801408BC | fn_1x408bc | fn_1x408bc | src/battle/gen01686.c | Y |  |
| 801408E4 | status_paint_a | status_paint_a | src/battle/gen832.c | Y |  |
| 80140944 | fn_1x40944 | fn_1x40944 | src/battle/gen01685.c | Y |  |
| 8014096C | fn_1x4096c | fn_1x4096c | src/battle/gen01471.c | Y |  |
| 80140994 | fn_1x40994 | fn_1x40994 | src/battle/gen01684.c | Y |  |
| 801409BC | fn_1x409bc | fn_1x409bc | src/battle/gen01470.c | Y |  |
| 801409E4 | fn_1x409e4 | fn_1x409e4 | src/battle/gen01469.c | Y |  |
| 80140A0C | fn_1x40a0c | fn_1x40a0c | src/battle/gen1326.c | Y |  |
| 80140A5C | fn_1x40a5c | fn_1x40a5c | src/battle/gen1114.c |  |  |
| 80140AC0 | battle_rows_row_loop_l140aec_on_a9 | battle_rows_row_loop_l140aec_on_a9 | src/battle/gen967.c |  | battle rows: 80147414 row; loop L140AEC on 5A90(5) with 0x2001/0xF cells; closes via 0x971C. |
| 80140BA0 | battle_judge_cfc_ac0_preps_x48_x20 | battle_judge_cfc_ac0_preps_x48_x20 | src/battle/gen831.c |  | battle judge: 80140CFC/80140AC0 preps, 0x48/0x2000 texts, 80097D34/80097D54/80140D94 rows. |
| 80140C8C | - | - | - |  |  |
| 80140CFC | battle_rows_loop_l140d28_on_b68_x3 | battle_rows_loop_l140d28_on_b68_x3 | src/battle/gen1053.c |  | battle rows: loop L140D28 on 6B68(0x34C2)/8768(0x34C2)x2/ 6364/5958(8). |
| 80140D94 | battle_rows_d54_d44_loop_on_b68_xf | battle_rows_d54_d44_loop_on_b68_xf | src/battle/gen1113.c |  | battle rows: D54 <- D44; loop on 6B68(0xF476)/8768(0x34C2)/ 6364/5958(8). |
| 80140E00 | fn_1x40e00 | fn_1x40e00 | src/battle/gen966.c | Y |  |
| 80140E78 | fn_1x40e78 | fn_1x40e78 | src/battle/gen1325.c | Y |  |
| 80140EA8 | event_row_38e6 | event_row_38e6 | src/battle/gen01468.c | Y |  |
| 80140EE0 | fn_1x40ee0 | fn_1x40ee0 | src/battle/gen01467.c | Y |  |
| 80140F08 | fn_1x40f08 | fn_1x40f08 | src/battle/gen1324.c |  |  |
| 80140F68 | fn_1x40f68 | fn_1x40f68 | src/battle/gen1323.c |  |  |
| 80140FB8 | fn_1x40fb8 | fn_1x40fb8 | src/battle/gen01466.c | Y |  |
| 80140FE0 | fn_1x40fe0 | fn_1x40fe0 | src/battle/gen1322.c | Y |  |
| 80141020 | fn_1x41020 | fn_1x41020 | src/battle/gen1233.c | Y |  |
| 80141068 | fn_1x41068 | fn_1x41068 | src/battle/gen1232.c | Y |  |
| 801410B0 | fn_1x410b0 | fn_1x410b0 | src/battle/gen1163.c | Y |  |
| 80141100 | battle_c3c_b04_gates_bc_pair_rows | battle_c3c_b04_gates_bc_pair_rows | src/battle/gen1321.c |  | battle: 3C3C/3B04 gates; 801411BC/80141240 pair rows. |
| 801411BC | battle_c3c_rows | battle_c3c_rows | src/battle/gen01465.c |  | battle: 3C3C/80072720/5410 rows. |
| 80141240 | fn_1x41240 | fn_1x41240 | src/battle/gen1112.c | Y |  |
| 80141290 | battle_c3c_a70_b04_rows | battle_c3c_a70_b04_rows | src/battle/gen1320.c |  | battle: 3C3C/3A70/3B04 rows. |
| 80141334 | battle_cast_x4800_x4880_text_gates | battle_cast_x4800_x4880_text_gates | src/battle/gen560.c |  | battle cast: 0x4800/0x4880 text gates, 0x1A window, 800723D0 + 800761C8 rows; loop L141390 on 5A90(8). |
| 80141468 | battle_rows_gate_x202_loop_l1414e0 | battle_rows_gate_x202_loop_l1414e0 | src/battle/gen889.c |  | battle rows: gate 6434(0x202); loop L1414E0 on 5A90(6). |
| 80141530 | battle_spell_tab_flow_x38e8_x38e9 | battle_spell_tab_flow_x38e8_x38e9 | src/battle/gen282.c |  | battle spell-tab flow: 0x38E8/0x38E9 rows, 0x388E/0x388F texts, 0x1E00/0x1E02 level gate, 0x352D/0x388B/0x4218/0x1811/0x1812 detail rows; 80 |
| 80141760 | fn_1x41760 | fn_1x41760 | src/battle/gen244.c |  |  |
| 80141A80 | battle_rows_loop_l141ab8_on_x14_wi | battle_rows_loop_l141ab8_on_x14_wi | src/battle/gen795.c |  | battle rows: 80140558/80140310 loop L141AB8 on 5958(0x14), with 80D0(8)/81B0 cells. |
| 80141B30 | battle_rows_loop_l141b5c_on_x15 | battle_rows_loop_l141b5c_on_x15 | src/battle/gen888.c |  | battle rows: 80140558/80140310 loop L141B5C on 5958(0x15). |
| 80141BD4 | battle_c3c_b04_b9c_gate_c98_rows_w | battle_c3c_b04_b9c_gate_c98_rows_w | src/battle/gen1111.c |  | battle: 3C3C/3B04/3B9C gate; 80141C98 rows with 0x40/0x80 variants; linear. |
| 80141C98 | battle_c3c_a70_b04_rows_ea8_s1_v1 | battle_c3c_a70_b04_rows_ea8_s1_v1 | src/battle/gen1162.c |  | battle: 3C3C(4)/3A70/3B04 rows; 6EA8 + s1/v1 latch route to 5410. |
| 80141DA0 | - | - | - | Y |  |
| 80141DC0 | battle_rows_x4e_window_row_loop_l1 | battle_rows_x4e_window_row_loop_l1 | src/battle/gen794.c |  | battle rows: 0x4E window, 80140558 row; loop L141DD0 on 5574(0x10); closes via 0x38/0x34 codes. |
| 80141E80 | battle_cast_x6cc0_test_d4_gates_re | battle_cast_x6cc0_test_d4_gates_re | src/battle/gen666.c |  | battle cast: 0x6CC0 test, 53D4/6434(2) gates; 8058(8) reads. |
| 80141F54 | fn_1x41f54 | fn_1x41f54 | src/battle/gen1231.c | Y |  |
| 80141F84 | fn_1x41f84 | fn_1x41f84 | src/rows/gen_80141F84.c | Y |  |
| 80141FC4 | fn_1x41fc4 | fn_1x41fc4 | src/rows/gen_80141FC4.c | Y |  |
| 80141FEC | fn_1x41fec | fn_1x41fec | src/battle/gen1161.c | Y |  |
| 8014202C | fn_1x4202c | fn_1x4202c | src/battle/gen1230.c | Y |  |
| 80142064 | fn_1x42064 | fn_1x42064 | src/battle/gen1160.c | Y |  |
| 801420B4 | - | - | - | Y |  |
| 801420D4 | chara_status_sub_screen_d12c_ef78 | chara_status_sub_screen_d12c_ef78 | src/battle/gen57.c |  | chara/status sub-screen: 8013D12C/8013EF78 prep, poll loop L142128 (4008 0x10/0x70 reads + 8768 row draws), then detail rows and the L1422D8 |
| 80142394 | battle_rows_x_b68_cell_pairs_loop | battle_rows_x_b68_cell_pairs_loop | src/battle/gen697.c |  | battle rows: 4x 6B68/8768 cell pairs; loop L1423C0 on 5958(3), then 4x 5D24 close. |
| 80142450 | battle_magic_status_x340_x343_cell | battle_magic_status_x340_x343_cell | src/battle/gen345.c |  | battle magic-status: 0x340-0x343 cells, 0x6CC0 gate with 8058(0x10) alt row; loop L142498 on 5958(8). |
| 801425FC | fn_1x425fc | fn_1x425fc | src/battle/gen240.c |  |  |
| 801428FC | battle_item_cast_d12c_prep_x1900_g | battle_item_cast_d12c_prep_x1900_g | src/battle/gen305.c |  | battle item-cast: 8013D12C prep, 0x1900 gate + 80142B4C intro, wait loop L142938, L142988/L1429BC/L142A6C cast loops (801431E8/80177DCC/8014 |
| 80142B4C | fn_1x42b4c | fn_1x42b4c | src/rows/gen_80142B4C.c |  |  |
| 80142BCC | battle_rows_x1_x2_x4_x6_windows_wi | battle_rows_x1_x2_x4_x6_windows_wi | src/battle/gen541.c |  | battle rows: 0x1/0x2/0x4/0x6 windows with 4008(0x20) reads; loop L142C14 on 5958(0x40). |
| 80142CB4 | battle_rows_e34_prep_loops_l142ce8 | battle_rows_e34_prep_loops_l142ce8 | src/battle/gen589.c |  | battle rows: 80142E34 prep; loops L142CE8 (43E44 + 7F48 cells) and L142CBC (54D4 gate). |
| 80142DC0 | battle_rows_e34_d54_d44_loop_on_c | battle_rows_e34_d54_d44_loop_on_c | src/battle/gen1159.c |  | battle rows: 80142E34 + D54 <- D44; loop on 654C(8)/ 80143E44/6364/5958(0x10). |
| 80142E34 | battle_rows_xf42c_xf42d_texts_d54 | battle_rows_xf42c_xf42d_texts_d54 | src/battle/gen1229.c |  | battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then 80142E90. |
| 80142E90 | fn_1x42e90 | fn_1x42e90 | src/battle/gen44.c |  |  |
| 801431E8 | - | func_801431E8 | src/battle/gen1319.c |  | battle rows: 0xF42C/0xF42D texts; D54 <- D44 copy then 80142E90. |
| 8014323C | fn_1x4323c | fn_1x4323c | src/battle/gen48.c |  |  |
| 80143628 | fn_1x43628 | fn_1x43628 | src/battle/gen01683.c | Y |  |
| 80143668 | battle_rows_x1f_x34c3_x48_windows | battle_rows_x1f_x34c3_x48_windows | src/battle/gen793.c |  | battle rows: 0x1F/0x34C3/0x48 windows, 8014A488 row; loop L1436A4 on 5574(0xFF)/5958(8). |
| 80143738 | battle_magic_status_x300_x303_cell | battle_magic_status_x300_x303_cell | src/battle/gen332.c |  | battle magic-status: 0x300/0x303 cells, 0x6CC0/0x1813 texts, and the 6434(0x202) row gates; loop L143768 polls 5958(0x48). |
| 80143908 | fn_1x43908 | fn_1x43908 | src/battle/gen228.c |  |  |
| 80143C84 | fn_1x43c84 | fn_1x43c84 | src/battle/gen1318.c | Y |  |
| 80143CCC | fn_1x43ccc | fn_1x43ccc | src/battle/gen1317.c | Y |  |
| 80143D14 | fn_1x43d14 | fn_1x43d14 | src/battle/gen887.c | Y |  |
| 80143D64 | fn_1x43d64 | fn_1x43d64 | src/battle/gen886.c | Y |  |
| 80143DB4 | battle_rows_two_f38_b04_pair_reads | battle_rows_two_f38_b04_pair_reads | src/battle/pairrows.c |  | battle rows: two 3F38(3B04) pair reads; linear. |
| 80143E44 | battle_rows_twin | battle_rows_twin | src/battle/gen928.c |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80143ED4 | battle_rows_d64_d14_d4c8_rows_loop | battle_rows_d64_d14_d4c8_rows_loop | src/battle/gen444.c |  | battle rows: 80143D64/80143D14/8013D4C8 rows; loop L143F1C on 6434(2/0x202) gates and 5958(0x40). |
| 80144050 | battle_magic_cast_x1900_text_spell | battle_magic_cast_x1900_text_spell | src/battle/gen260.c |  | battle magic-cast: 0x1900 text + spell rows (8768 draws), loops L144084 (row refresh), L14411C, L144180 (43E44 wait), L1441D8 (4x 6B68/8768  |
| 801442B4 | fn_1x442b4 | fn_1x442b4 | src/rows/gen_801442B4.c | Y |  |
| 801442BC | battle_rows_ef78_prep_loop_l1442e4 | battle_rows_ef78_prep_loop_l1442e4 | src/battle/gen885.c |  | battle rows: 8013EF78 prep; loop L1442E4 on 5C64(0x202) with 80140558 + cell writes; closes via 0x10 window. |
| 80144344 | fn_1x44344 | fn_1x44344 | src/battle/gen366.c | Y |  |
| 801444D4 | fn_1x444d4 | fn_1x444d4 | src/battle/gen01464.c | Y |  |
| 801444FC | fn_1x444fc | fn_1x444fc | src/battle/gen214.c |  |  |
| 801449A0 | fn_1x449a0 | fn_1x449a0 | src/battle/gen1228.c | Y |  |
| 801449D0 | battle_magic_confirm_x1813_x1901_t | battle_magic_confirm_x1813_x1901_t | src/battle/gen293.c |  | battle magic-confirm: 0x1813/0x1901 texts, 0x340/0x341 state cells with 6434(2) gates; loops L144A50 (5958(0x78)) and L144B90 (5A90(0x78)). |
| 80144C78 | battle_cast_flow_windows_e44_d14_r | battle_cast_flow_windows_e44_d14_r | src/battle/gen312.c |  | battle cast flow: 2/3/4 windows, 80143E44/80143D14 rows; nested scroll loops L144D38/L144D48 (5DD4(4)/5C64(0x202)) and L144EA4, wrapped by L |
| 80144F1C | - | - | - | Y |  |
| 80144F24 | battle_magic_cast_d528_prep_loops | battle_magic_cast_d528_prep_loops | src/battle/gen432.c |  | battle magic-cast: 8014D528 prep, 80140558/80140310 loops (L144F6C wait, L145038 scroll), 8009A0A0/8014202C/8013DC04 rows, 0x34C4 text. |
| 801450B8 | battle_loop_ef78_d12c_d4_c78_preps | battle_loop_ef78_d12c_d4_c78_preps | src/battle/gen927.c |  | battle loop: 8013EF78/8013D12C/801444D4/80144C78 preps; L1450E8 loop runs 80140558 + 80144C78 + 801449D0; closes with 8013DC04 + 0x38E2 text |
| 80145168 | battle_loop_ef78_d12c_a0_c78_c_pre | battle_loop_ef78_d12c_a0_c78_c_pre | src/battle/gen1004.c |  | battle loop: 8013EF78/8013D12C/801449A0/80144C78/8014086C preps; L1451A0 loop runs 80140558 + 80144C78 + 801449D0 + 8014D43C; exits via 8014 |
| 80145220 | fn_1x45220 | fn_1x45220 | src/battle/gen1316.c | Y |  |
| 80145278 | fn_1x45278 | fn_1x45278 | src/battle/gen01463.c |  |  |
| 801452C8 | fn_1x452c8 | fn_1x452c8 | src/battle/gen01462.c |  |  |
| 80145318 | fn_1x45318 | fn_1x45318 | src/battle/gen01461.c |  |  |
| 80145390 | fn_1x45390 | fn_1x45390 | src/battle/gen01460.c |  |  |
| 80145408 | fn_1x45408 | fn_1x45408 | src/battle/rowr.c |  |  |
| 8014588C | battle_name_rows_d64_d14_e44_db4_r | battle_name_rows_d64_d14_e44_db4_r | src/battle/gen502.c |  | battle name rows: 80143D64/80143D14/80143E44/80143DB4 rows; loop L1458D4 on 5958(0x10) with 6434(2) gate. |
| 80145AA0 | fn_1x45aa0 | fn_1x45aa0 | src/rows/gen_80145AA0.c |  |  |
| 80145AF8 | battle_rows_a0_v0_latch_picks_the | battle_rows_a0_v0_latch_picks_the | src/battle/gen965.c |  | battle rows: a0/v0 latch picks the 0x40/0x50 vs 0x80/0x50 window sets. |
| 80145B90 | battle_rows_x26_x28_x2a_windows_x1 | battle_rows_x26_x28_x2a_windows_x1 | src/battle/gen588.c |  | battle rows: 0x26/0x28/0x2A windows, 0x1800 text, 80072720 + 80145C74 rows. |
| 80145C74 | battle_status_detail_gate_spin_c_t | battle_status_detail_gate_spin_c_t | src/battle/gen76.c |  | battle status detail: 6434(2) gate spin (8007259C), then the stat block (8007411C + 76BC pairs) and the L145D4C refresh loop with 658C/81B0/ |
| 80145EA4 | battle_rows_c3c_b04_b9c_x1000_gate | battle_rows_c3c_b04_b9c_x1000_gate | src/battle/gen761.c |  | battle rows: 3C3C/3B04/3B9C + 0x1000 gates with spin loops (L145F60); closes via 960C/95A0 on the a1/v0 latch. |
| 80146028 | fn_1x46028 | fn_1x46028 | src/battle/gen01682.c |  |  |
| 801460A4 | battle_c3c_b04_b9c_gates_s0_v0_v1 | battle_c3c_b04_b9c_gates_s0_v0_v1 | src/battle/gen1227.c |  | battle: 3C3C/3B04/3B9C gates; s0/v0+v1 regcmp latches on the 5480 row; returns at L1462C0. |
| 801462DC | battle_item_cast_x47_window_gates | battle_item_cast_x47_window_gates | src/battle/gen286.c |  | battle item cast: 0x47 window; 6434 gates (0x202/2) route the 5574(0xB0/0xC0) key ladder and 4248(0x30/0x20) row gates, with 90EC/8768 cell  |
| 8014654C | battle_c3c_b04_b9c_gate_tree_with | battle_c3c_b04_b9c_gate_tree_with | src/battle/gen1226.c |  | battle: 3C3C/3B04/3B9C gate tree with v1/v0 + a0/v1 + a2/v0 latches; returns at L1466CC. |
| 801466E0 | battle_c3c_b04_x2000_x3_b9c_gates | battle_c3c_b04_x2000_x3_b9c_gates | src/battle/gen964.c |  | battle: 3C3C/3B04(0x2000)x3/3B9C gates; 9330/939C rows with the v0/v1 latch loop L146824; closes 960C/95A0. |
| 80146954 | fn_1x46954 | fn_1x46954 | src/battle/gen1315.c |  |  |
| 80146980 | battle_c3c_b04_gates_pick_vs_rows | battle_c3c_b04_gates_pick_vs_rows | src/battle/gen1225.c |  | battle: 3C3C/3B04 gates pick 5410 vs 5480 rows. |
| 80146A44 | battle_magic_cast_flow_v0_cascades | battle_magic_cast_flow_v0_cascades | src/battle/gen1003.c |  | battle magic-cast flow. v0 cascades select the spell-target category; a0=1/2/8/3 delay-consts are the target-type ids for each route. |
| 80147000 | - | - | - | Y |  |
| 80147020 | battle_c3c_b9c_gates_ac_rows_tails | battle_c3c_b9c_gates_ac_rows_tails | src/battle/gen1110.c |  | battle: 3C3C/3B9C gates; 800728AC rows + 5480/5410 tails. |
| 801470F8 | battle_c3c_b04_gates_row | battle_c3c_b04_gates_row | src/battle/gen1314.c |  | battle: 3C3C/3B04 gates; 80146954 row. |
| 801471C4 | battle_status_cast_x29c5_x2003_x20 | battle_status_cast_x29c5_x2003_x20 | src/battle/gen311.c |  | battle status-cast: 0x29C5/0x2003/0x2001 texts, 80147434 + 801473A4 rows, 8007275C/80072CB0 commits; loop L1471DC polls 5574(0xFF)/5958(5). |
| 801473A4 | fn_1x473a4 | fn_1x473a4 | src/rows/gen_801473A4.c |  |  |
| 80147414 | fn_1x47414 | fn_1x47414 | src/rows/gen_80147414.c | Y |  |
| 80147434 | fn_1x47434 | fn_1x47434 | src/battle/gen01681.c |  |  |
| 801474B0 | fn_1x474b0 | fn_1x474b0 | src/battle/gen230.c |  |  |
| 80147888 | battle_item_detail_twin_of_dc_x47 | battle_item_detail_twin_of_dc_x47 | src/battle/gen359.c |  | battle item detail (twin of 801462DC): 0x47 window; 6434(0x202) gate routes the 4248(0x30/0x20) row picks; 801470F8 + 960C/95A0 close. |
| 80147AA8 | battle_rows_c3c_b04_x2000_x2_b9c_x | battle_rows_c3c_b04_x2000_x2_b9c_x | src/battle/gen926.c |  | battle rows: 3C3C/3B04(0x2000)x2/3B9C(0xF0) gates; spins L147B14/L147B38; 9330 + 80146A44 row; 3B9C/95A0 then the 80147FA0/801466E0 gated bl |
| 80147FA0 | battle_c3c_b04_b9c_x2000_gates_x_a | battle_c3c_b04_b9c_x2000_gates_x_a | src/battle/gen1002.c |  | battle: 3C3C/3B04/3B9C(0x2000) gates; 2x 800728AC rows and the s0/v1 regcmp loops with 9330/95A0 closes. |
| 801482E8 | fn_1x482e8 | fn_1x482e8 | src/battle/gen22.c |  |  |
| 801486D8 | battle_item_detail_xe_x10_x11_wind | battle_item_detail_xe_x10_x11_wind | src/battle/gen365.c |  | battle item detail: 0xE/0x10/0x11 windows, 0x500/0x301-0x303 cells, 78C4(3C3C(0x10)) rows, 6434(2)/6CC0 gates. |
| 801488D4 | battle_item_sublist_x14_x15_x16_xe | battle_item_sublist_x14_x15_x16_xe | src/battle/gen47.c |  | battle item-sublist: 0x14/0x15/0x16/0xE/0x10/0x12 windows, 0x6CC0/0x300 gates; 80148D04/80148CAC/80148BE0 row handlers and the L148A74 refre |
| 80148BE0 | fn_1x48be0 | fn_1x48be0 | src/battle/gen925.c | Y |  |
| 80148C28 | fn_1x48c28 | fn_1x48c28 | src/battle/gen01680.c |  |  |
| 80148C6C | fn_1x48c6c | fn_1x48c6c | src/rows/gen_80148C6C.c | Y |  |
| 80148C8C | fn_1x48c8c | fn_1x48c8c | src/rows/gen_80148C8C.c | Y |  |
| 80148CAC | battle_rows_xf42b_text_x_xaa_bytes | battle_rows_xf42b_text_x_xaa_bytes | src/battle/gen1313.c |  | battle rows: 0xF42B text; 17 x 0xAA bytes at 0x800D0515 (descending); 80148C28 + 95A0 close. |
| 80148D04 | battle_rows_clear_variant_zero_byt | battle_rows_clear_variant_zero_byt | src/battle/gen1312.c |  | battle rows (clear variant): 17 zero bytes at 0x800D0515. |
| 80148D58 | battle_rows_twin_two_f38_b04_pair | battle_rows_twin_two_f38_b04_pair | src/battle/gen924.c |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80148DE8 | fn_1x48de8 | fn_1x48de8 | src/rows/gen_80148DE8.c | Y |  |
| 80148E08 | fn_1x48e08 | fn_1x48e08 | src/battle/gen760.c | Y |  |
| 80148E60 | fn_1x48e60 | fn_1x48e60 | src/rows/gen_80148E60.c | Y |  |
| 80148E80 | fn_1x48e80 | fn_1x48e80 | src/battle/gen884.c | Y |  |
| 80148ED0 | - | func_80148ED0 | src/battle/gen923.c |  | battle rows (twin): two 3F38(3B04) pair reads; linear. |
| 80148F60 | fn_1x48f60 | fn_1x48f60 | src/battle/gen1052.c | Y |  |
| 80148FA0 | fn_1x48fa0 | fn_1x48fa0 | src/rows/gen_80148FA0.c | Y |  |
| 80148FC0 | battle_rows_x26_x2b_windows_row_ga | battle_rows_x26_x2b_windows_row_ga | src/battle/gen883.c |  | battle rows: 0x26/0x2B windows, 80072720 row; gates 6434/ 60A8/6434(0x80) route the 5480/5410 tails. |
| 801490AC | fn_1x490ac | fn_1x490ac | src/rows/gen_801490AC.c | Y |  |
| 801490CC | battle_info_dialog_two_identical_c | battle_info_dialog_two_identical_c | src/battle/gen247.c |  | battle info-dialog: two identical confirm blocks (54D4/53C0 -> option select vs 6240 tail), then 0x26/0x28/0x2A detail rows and 8007262C com |
| 80149374 | fn_1x49374 | fn_1x49374 | src/rows/gen_80149374.c | Y |  |
| 80149394 | battle_spell_detail_f38_b04_row_pa | battle_spell_detail_f38_b04_row_pa | src/battle/gen88.c |  | battle spell-detail: 3F38(3B04) row pair draws (L1493BC loop), gate on 54D4(3B04)/53C0 with 658C/4264/8274 stat cells (L14940C loop); tail 5 |
| 801495B4 | - | - | - | Y |  |
| 801495D4 | fn_1x495d4 | fn_1x495d4 | src/rows/gen_801495D4.c | Y |  |
| 801495F4 | fn_1x495f4 | fn_1x495f4 | src/rows/gen_801495F4.c | Y |  |
| 80149614 | cast_alt2 | cast_alt2 | src/battle/itemcast.c |  | battle item/statcast: 29B5/38E6/29A4 texts, 0x1800/0x1B7 gates, 800976A4/801495D4/80166218/80074B98/80099938/801669BC sub-casts and the 8014 |
| 80149924 | battle_rows_x38e6_text_x4e_x1_x4e | battle_rows_x38e6_text_x4e_x1_x4e | src/battle/gen540.c |  | battle rows: 0x38E6 text, 0x4E/0x1/0x4E windows, 8014D568/ 8007259C/80094D14/80168148 rows; loops L1499A4 and L1499D8 (5958(0x20)). |
| 80149A98 | battle_rows_x28_x4_x2b_x5_x2_windo | battle_rows_x28_x4_x2b_x5_x2_windo | src/battle/gen460.c |  | battle rows: 0x28/0x4/0x2B/0x5/0x2 windows, 80148FC0 row, 7600 cells; loop L149B6C on 5DD4/5C64(0x202). |
| 80149BE4 | battle_item_flow_x48_x4_x49_window | battle_item_flow_x48_x4_x49_window | src/battle/gen474.c |  | battle item flow: 0x48/0x4/0x49 windows, 0x38E2/0x34C2 texts, 8014FE84/800760D0/8014B248/8014DA2C/80148CAC rows. |
| 80149D68 | battle_confirm_fe0_c_rows_with_the | battle_confirm_fe0_c_rows_with_the | src/battle/gen484.c |  | battle confirm: 80075FE0/8007411C/80072068 rows with the 9644/6CF4/6558/8274 cell draws; 0x4D/0xD/0xD windows. |
| 80149EE0 | fn_1x49ee0 | fn_1x49ee0 | src/battle/gen1311.c |  |  |
| 80149F20 | battle_item_help_mix_gates_x4d_x5e | battle_item_help_mix_gates_x4d_x5e | src/battle/gen304.c |  | battle item/help mix: 5574 gates (0x4D/0x5E), 80149D68 + 80168BC4 detail, 0x34C5 gate; then the 8014FEC8 stats rows with the L149FF0 poll ch |
| 8014A154 | jr_a0_the_entry_battle_item_action | jr_a0_the_entry_battle_item_action | src/battle/gen01679.c |  | jr $a0 : the ~46-entry battle item/action master table (invoked via the item menu). Each entry calls one sub-screen then jumps to L8014A478  |
| 8014A488 | fn_1x4a488 | fn_1x4a488 | src/battle/gen1310.c |  |  |
| 8014A4DC | jr_a0_twin_of_a154_same_entry_batt | jr_a0_twin_of_a154_same_entry_batt | src/battle/gen01678.c |  | jr $a0 : twin of 8014A154 (same 46-entry battle item/action master table; entries jump to L8014A800 -> return). Handlers in index order: 801 |
| 8014A810 | fn_1x4a810 | fn_1x4a810 | src/battle/gen1224.c | Y |  |
| 8014A860 | - | - | - | Y |  |
| 8014A888 | fn_1x4a888 | fn_1x4a888 | src/battle/gen01459.c | Y |  |
| 8014A8B8 | - | - | - | Y |  |
| 8014A8E8 | fn_1x4a8e8 | fn_1x4a8e8 | src/battle/gen1223.c | Y |  |
| 8014A920 | - | - | - | Y |  |
| 8014A950 | - | - | - | Y |  |
| 8014A980 | - | - | - | Y |  |
| 8014A9B0 | fn_1x4a9b0 | fn_1x4a9b0 | src/battle/gen759.c | Y |  |
| 8014AA30 | - | - | - | Y |  |
| 8014AA68 | fn_1x4aa68 | fn_1x4aa68 | src/battle/gen1109.c | Y |  |
| 8014AAA8 | battle_confirm_c96c_aa68_b9b4_ba34 | battle_confirm_c96c_aa68_b9b4_ba34 | src/battle/gen792.c |  | battle confirm: 8014C96C/8014AA68/8014B9B4/8014BA34 rows, 0x34C4/0x34C5/0x3522 texts; 6434(2) gate. |
| 8014AB70 | - | - | - | Y |  |
| 8014AB90 | - | - | - | Y |  |
| 8014ABB8 | - | - | - |  |  |
| 8014AC3C | battle_call_c96c_b9b4_e5d0_e2f8_ba | battle_call_c96c_b9b4_e5d0_e2f8_ba | src/battle/gen723.c |  | battle call: 8014C96C/8014B9B4/8013E5D0/8013E2F8/8014BA34 rows; 0x34C4/0x34C5 texts with 6434(2) gates. |
| 8014AD24 | - | - | - | Y |  |
| 8014AD44 | fn_1x4ad44 | fn_1x4ad44 | src/battle/gen614.c | Y |  |
| 8014ADD4 | fn_1x4add4 | fn_1x4add4 | src/battle/gen1158.c | Y |  |
| 8014AE1C | fn_1x4ae1c | fn_1x4ae1c | src/battle/gen882.c | Y |  |
| 8014AEC4 | fn_1x4aec4 | fn_1x4aec4 | src/battle/gen01677.c |  |  |
| 8014AF3C | fn_1x4af3c | fn_1x4af3c | src/battle/gen1001.c | Y |  |
| 8014AF74 | battle_rows_x34c5_x34c4_x49_texts | battle_rows_x34c5_x34c4_x49_texts | src/battle/gen791.c |  | battle rows: 0x34C5/0x34C4/0x49 texts; gates 6434(2) route 801420D4 vs the 8014B9B4/8014B044 row block. |
| 8014B044 | battle_rows_x3523_text_loop_l14b05 | battle_rows_x3523_text_loop_l14b05 | src/battle/gen963.c |  | battle rows: 0x3523 text; loop L14B058 on 54D4(3B04(0x3523))/ 5958(8). |
| 8014B0D8 | fn_1x4b0d8 | fn_1x4b0d8 | src/battle/gen1108.c | Y |  |
| 8014B118 | - | - | - |  |  |
| 8014B188 | - | - | - | Y |  |
| 8014B1A8 | - | - | - | Y |  |
| 8014B1D0 | fn_1x4b1d0 | fn_1x4b1d0 | src/battle/gen1107.c | Y |  |
| 8014B248 | fn_1x4b248 | fn_1x4b248 | src/rows/gen_8014B248.c |  |  |
| 8014B294 | fn_1x4b294 | fn_1x4b294 | src/battle/gen639.c | Y |  |
| 8014B334 | fn_1x4b334 | fn_1x4b334 | src/battle/gen01458.c | Y |  |
| 8014B36C | fn_1x4b36c | fn_1x4b36c | src/battle/gen665.c | Y |  |
| 8014B3FC | fn_1x4b3fc | fn_1x4b3fc | src/battle/gen01676.c | Y |  |
| 8014B42C | - | - | - | Y |  |
| 8014B454 | battle_item_cell_x49_x8_windows_b2 | battle_item_cell_x49_x8_windows_b2 | src/battle/gen501.c |  | battle item cell: 0x49/0x8 windows, 8014B294/801490CC/8014B5A8/ 80141FEC/800953F4 rows; 8058(0x10) gate. |
| 8014B5A8 | fn_1x4b5a8 | fn_1x4b5a8 | src/battle/gen1309.c | Y |  |
| 8014B5F8 | - | - | - | Y |  |
| 8014B620 | - | - | - | Y |  |
| 8014B648 | fn_1x4b648 | fn_1x4b648 | src/battle/gen1106.c | Y |  |
| 8014B698 | - | - | - | Y |  |
| 8014B6C0 | - | - | - | Y |  |
| 8014B6E8 | battle_item_bc_b98c_cac_f4_preps_l | battle_item_bc_b98c_cac_f4_preps_l | src/battle/gen638.c |  | battle item: 801442BC/8014B98C/80148CAC/800953F4 preps; loop L14B738 (6D70(0x29C5)/5A90(5) gates), closes 8014DA2C/8014D568. |
| 8014B804 | - | - | - | Y |  |
| 8014B82C | - | - | - | Y |  |
| 8014B854 | - | - | - | Y |  |
| 8014B884 | - | - | - | Y |  |
| 8014B8AC | fn_1x4b8ac | fn_1x4b8ac | src/battle/gen758.c | Y |  |
| 8014B914 | fn_1x4b914 | fn_1x4b914 | src/rows/gen_8014B914.c | Y |  |
| 8014B93C | fn_1x4b93c | fn_1x4b93c | src/rows/gen_8014B93C.c | Y |  |
| 8014B964 | fn_1x4b964 | fn_1x4b964 | src/battle/gen01457.c | Y |  |
| 8014B98C | battle_row_f2a0 | battle_row_f2a0 | src/battle/gen01456.c | Y |  |
| 8014B9B4 | battle_row_34c4 | battle_row_34c4 | src/battle/gen1000.c | Y |  |
| 8014B9FC | fn_1x4b9fc | fn_1x4b9fc | src/battle/gen1157.c | Y |  |
| 8014BA34 | fn_1x4ba34 | fn_1x4ba34 | src/battle/gen01675.c |  |  |
| 8014BAA4 | fn_1x4baa4 | fn_1x4baa4 | src/battle/gen01674.c |  |  |
| 8014BB0C | fn_1x4bb0c | fn_1x4bb0c | src/battle/gen1222.c | Y |  |
| 8014BB3C | fn_1x4bb3c | fn_1x4bb3c | src/battle/gen1221.c | Y |  |
| 8014BB6C | fn_1x4bb6c | fn_1x4bb6c | src/battle/gen01455.c | Y |  |
| 8014BB94 | fn_1x4bb94 | fn_1x4bb94 | src/battle/gen10.c |  |  |
| 8014C114 | fn_1x4c114 | fn_1x4c114 | src/battle/gen01454.c | Y |  |
| 8014C13C | fn_1x4c13c | fn_1x4c13c | src/battle/gen219.c |  |  |
| 8014C4BC | battle_rows_x1_x40_windows_d14_row | battle_rows_x1_x40_windows_d14_row | src/battle/gen722.c |  | battle rows: 0x1/0x40 windows, 80094D14 row; loop L14C4EC on 5958(0xC0). |
| 8014C57C | battle_rows_x1802_text_c_c664_rows | battle_rows_x1802_text_c_c664_rows | src/battle/gen757.c |  | battle rows: 0x1802 text, 8007259C/8014C664 rows; loops L14C5AC (5958(0x40)) and L14C62C (5C64(0x202)). |
| 8014C664 | battle_rows_loop_l14c67c_on_x40_wi | battle_rows_loop_l14c67c_on_x40_wi | src/battle/gen756.c |  | battle rows: loop L14C67C on 5958(0x40) with 80094D14 row. |
| 8014C714 | battle_rows_x1802_text_c_c81c_rows | battle_rows_x1802_text_c_c81c_rows | src/battle/gen721.c |  | battle rows: 0x1802 text, 8007259C + 8014C81C rows; loops L14C78C and L14C7DC (5958(0x40)). |
| 8014C81C | battle_rows_twin_with_x2_window_lo | battle_rows_twin_with_x2_window_lo | src/battle/gen755.c |  | battle rows (twin with 0x2 window): loop L14C834 on 5958(0x40). |
| 8014C8CC | fn_1x4c8cc | fn_1x4c8cc | src/battle/gen830.c |  |  |
| 8014C96C | fn_1x4c96c | fn_1x4c96c | src/battle/gen1220.c | Y |  |
| 8014C994 | fn_1x4c994 | fn_1x4c994 | src/battle/gen1219.c | Y |  |
| 8014C9CC | fn_1x4c9cc | fn_1x4c9cc | src/battle/gen01673.c |  |  |
| 8014CA24 | fn_1x4ca24 | fn_1x4ca24 | src/battle/gen11.c |  |  |
| 8014CE94 | battle_rows_x_cells_x7612_x77b6_lo | battle_rows_x_cells_x7612_x77b6_lo | src/battle/gen962.c |  | battle rows: 4x 8768 cells (0x7612-0x77B6); loop L14CEAC on 5958(0x8C). |
| 8014CF14 | battle_rows_x1802_x7992_x7b36_cell | battle_rows_x1802_x7992_x7b36_cell | src/battle/gen790.c |  | battle rows: 0x1802/0x7992-0x7B36 cells; gate 5574(0x10); loop L14CF64 on 5958(0x8C). |
| 8014CFC4 | battle_rows_gates_route_the_xff_wi | battle_rows_gates_route_the_xff_wi | src/battle/gen789.c |  | battle rows: 5574(2/3) gates route the 0xFF window fill; loop L14D038 on 5A90(0x10); 8014E424 detail. |
| 8014D080 | battle_cast_rows_d4_b98_preps_fac | battle_cast_rows_d4_b98_preps_fac | src/battle/gen829.c |  | battle cast rows: 801495D4/80074B98 preps, 4FAC(0x101) gate loop L14D0A0, 80073EB0/800744A0/800999A0/801495F4 close. |
| 8014D14C | battle_item_count_x26_x28_x2a_wind | battle_item_count_x26_x28_x2a_wind | src/battle/gen344.c |  | battle item-count: 0x26/0x28/0x2A windows, 4FAC(0x101) gate rows, 80072720 prep; loops L14D1B4 (5DA0(0x28)/5B8C(0x202)), L14D248 (row cells) |
| 8014D31C | fn_1x4d31c | fn_1x4d31c | src/battle/gen754.c | Y |  |
| 8014D394 | fn_1x4d394 | fn_1x4d394 | src/battle/gen788.c | Y |  |
| 8014D414 | fn_1x4d414 | fn_1x4d414 | src/battle/gen01453.c | Y |  |
| 8014D43C | fn_1x4d43c | fn_1x4d43c | src/rows/gen_8014D43C.c |  |  |
| 8014D490 | battle_rows_x1813_text_x07_cells_d | battle_rows_x1813_text_x07_cells_d | src/battle/gen01452.c |  | battle rows: 0x1813 text + 0x07 cells; D54 <- D44 copy then 8014D4D4. |
| 8014D4D4 | fn_1x4d4d4 | fn_1x4d4d4 | src/battle/gen01451.c | Y |  |
| 8014D500 | fn_1x4d500 | fn_1x4d500 | src/rows/gen_8014D500.c | Y |  |
| 8014D528 | battle_row_d568 | battle_row_d568 | src/battle/rowd568.c | Y |  |
| 8014D548 | - | - | - | Y |  |
| 8014D568 | fn_1x4d568 | fn_1x4d568 | src/battle/gen1105.c | Y |  |
| 8014D5A0 | battle_confirm_x31_x33_x80_gates_p | battle_confirm_x31_x33_x80_gates_p | src/battle/gen613.c |  | battle confirm: 5574(0x31/0x33)/6434(0x80) gates pick the 0x80/0xC0/0x40 colors, 80177DAC commit. |
| 8014D680 | battle_rows_d5a0_row_gate_xff_pick | battle_rows_d5a0_row_gate_xff_pick | src/battle/rows3.c |  | battle rows: 8014D5A0 row; gate 5574(0xFF) picks the 960C/95A0 tail. |
| 8014D708 | fn_1x4d708 | fn_1x4d708 | src/rows/gen_8014D708.c | Y |  |
| 8014D728 | fn_1x4d728 | fn_1x4d728 | src/rows/gen_8014D728.c | Y |  |
| 8014D748 | fn_1x4d748 | fn_1x4d748 | src/battle/gen1104.c | Y |  |
| 8014D780 | battle_item_flow_gate_routes_to_d7 | battle_item_flow_gate_routes_to_d7 | src/battle/gen339.c |  | battle item flow: 4248(8)/4120(2) gate routes to 8014D748 rows vs the 0x20/0x4200 alt rows; L14D7F8 renders 6CF4/81B0 cells and closes with  |
| 8014D96C | fn_1x4d96c | fn_1x4d96c | src/rows/gen_8014D96C.c | Y |  |
| 8014D98C | battle_rows_gates_x202_route_the_d | battle_rows_gates_x202_route_the_d | src/battle/gen881.c |  | battle rows: gates 6434(2)/4280/4120(0x202) route the 800760D0 0xF row; closes with 6240. |
| 8014DA2C | fn_1x4da2c | fn_1x4da2c | src/battle/screen_i.c |  |  |
| 8014E38C | fn_1x4e38c | fn_1x4e38c | src/battle/gen587.c | Y |  |
| 8014E424 | fn_1x4e424 | fn_1x4e424 | src/battle/gen56.c |  |  |
| 8014E75C | fn_1x4e75c | fn_1x4e75c | src/battle/gen922.c | Y |  |
| 8014E7C4 | battle_item_rows_x8_x50_x22_xff_x3 | battle_item_rows_x8_x50_x22_xff_x3 | src/battle/gen358.c |  | battle item rows: 0x8/0x50/0x22/0xFF/0x3E windows, 8014D568 + 8014E984 rows; two 7F48(3C3C)/3F38(3B04) cell blocks. |
| 8014E984 | battle_row_26 | battle_row_26 | src/battle/gen1308.c | Y |  |
| 8014E9C4 | fn_1x4e9c4 | fn_1x4e9c4 | src/rows/gen_8014E9C4.c |  |  |
| 8014EA0C | battle_rows_x2_window_loop_l14ea34 | battle_rows_x2_window_loop_l14ea34 | src/battle/gen828.c |  | battle rows: 0x2 window; loop L14EA34 on 4FAC(0x101)/5958(5). |
| 8014EAE4 | jr_a0_the_entry_battle_item_cast_t | jr_a0_the_entry_battle_item_cast_t | src/battle/gen1218.c |  | jr $a0 : the 9-entry battle item-cast table. Each entry calls one effect then jumps to L14EC08 (return). Handlers in index order: 8014ED40,  |
| 8014EC18 | fn_1x4ec18 | fn_1x4ec18 | src/battle/gen1051.c | Y |  |
| 8014EC68 | fn_1x4ec68 | fn_1x4ec68 | src/battle/gen1103.c | Y |  |
| 8014EC98 | fn_1x4ec98 | fn_1x4ec98 | src/battle/gen1156.c | Y |  |
| 8014ECC8 | fn_1x4ecc8 | fn_1x4ecc8 | src/battle/gen1102.c | Y |  |
| 8014ED10 | fn_1x4ed10 | fn_1x4ed10 | src/battle/gen1101.c | Y |  |
| 8014ED40 | fn_1x4ed40 | fn_1x4ed40 | src/battle/gen1100.c | Y |  |
| 8014ED88 | fn_1x4ed88 | fn_1x4ed88 | src/battle/gen1099.c | Y |  |
| 8014EDD0 | fn_1x4edd0 | fn_1x4edd0 | src/battle/gen1050.c | Y |  |
| 8014EE20 | battle_status_cast_xe_x10_xd_windo | battle_status_cast_xe_x10_xd_windo | src/battle/gen273.c |  | battle status-cast: 0xE/0x10/0xD windows, 4FAC(0x101) gate loops (L14EE88 stat rows, L14EF60 scroll, L14F030 alt), 6DE8/922C/89D4 cell draws |
| 8014F0BC | battle_item_count_detail_ee20_row | battle_item_count_detail_ee20_row | src/battle/gen319.c |  | battle item-count detail: 8014EE20 row, 80148CAC close, 8014FA4C sub-list, 8014F2CC/8014F7A8 row handlers; loop L14F1CC picks rows on 4FAC k |
| 8014F2CC | fn_1x4f2cc | fn_1x4f2cc | src/battle/gen235.c |  |  |
| 8014F7A8 | battle_item_count_screen_x18_windo | battle_item_count_screen_x18_windo | src/battle/gen87.c |  | battle item-count screen: 0x18 window, 0x18/0x19 rows, 0x6CC0 gate picks the 300/301 vs 769/770/771 count cells; loop L14F850 (6434(2)) poll |
| 8014FA4C | fn_1x4fa4c | fn_1x4fa4c | src/battle/gen36.c |  |  |
| 8014FE84 | fn_1x4fe84 | fn_1x4fe84 | src/rows/gen_8014FE84.c |  |  |
| 8014FEC8 | fn_1x4fec8 | fn_1x4fec8 | src/battle/gen35.c |  |  |
| 80150364 | rows_c3c_v0_spin_loop_l1503c0 | rows_c3c_v0_spin_loop_l1503c0 | src/config/gen01450.c |  | rows: 3C3C + v0 spin loop L1503C0. |
| 80150400 | fn_1x50400 | fn_1x50400 | src/config/gen1217.c | Y |  |
| 80150458 | battle_cast_flow_c_gates_l1504a8_s | battle_cast_flow_c_gates_l1504a8_s | src/config/gen292.c |  | battle cast flow: 8007259C gates, L1504A8 spin loop, then the stat block (8E50/4264/81B0 cells) and the L150578 scan loop with 5D24/5B8C(2)  |
| 80150610 | battle_rows_x3ff_x2_xc_windows_c_r | battle_rows_x3ff_x2_xc_windows_c_r | src/config/gen880.c |  | battle rows: 0x3FF/0x2/0xC windows, 8007411C row. |
| 801506BC | fn_1x506bc | fn_1x506bc | src/rows/gen_801506BC.c |  |  |
| 8015084C | battle_splash_e8_fc_bc_preps_loop | battle_splash_e8_fc_bc_preps_loop | src/config/gen586.c |  | battle splash: 80194394/801928E8/801942FC/801506BC preps; loop L15089C renders 0x2100/0x420C/0x420B icons and closes via 80150C58; redraws o |
| 80150A30 | battle_splash_x30_window_x7e_windo | battle_splash_x30_window_x7e_windo | src/config/gen521.c |  | battle splash: 0x30 window, 0x7E window, 801582D8 row; linear render + 0x30 icon set. |
| 80150B88 | options_rows_x353e_x353f_texts_c38 | options_rows_x353e_x353f_texts_c38 | src/config/gen827.c |  | options rows: 0x353E/0x353F texts, 80150C38 row; gates 5F20(0x202)/5574(2)/6434(0x202). |
| 80150C38 | gpu_driver_run_b | gpu_driver_run_b | src/config/roww.c | Y |  |
| 80150C58 | fn_1x50c58 | fn_1x50c58 | src/config/screen_b.c |  |  |
| 80151C0C | options_row_x39f0_text_read_v1_v0 | options_row_x39f0_text_read_v1_v0 | src/config/gen01449.c |  | options row: 0x39F0 text read; v1/v0 gate tree dispatches 8015BB9C / 8005A424 / 8015E84C / 8015D1C8. |
| 80151CD8 | fn_1x51cd8 | fn_1x51cd8 | src/config/gen234.c | Y |  |
| 80151F28 | fn_1x51f28 | fn_1x51f28 | src/config/gen265.c |  |  |
| 80152224 | config_banner_96 | config_banner_96 | src/config/rowflat.c |  | config banner: 0x96/0x97 windows, 0x3947-0x394B texts, 8015254C rows; gates 58BC(0xFF)/54D4(3C3C(0x96)); loop on 5574(0xFF). |
| 8015236C | fn_1x5236c | fn_1x5236c | src/config/gen01672.c |  |  |
| 8015240C | - | - | - |  | options: 3C3C(0x394D)/3B04 rows; 971C close. |
| 8015254C | options_b04_x2000_gates_v0_run_l15 | options_b04_x2000_gates_v0_run_l15 | src/config/gen1155.c |  | options: 3B04(0x2000) gates; v0 run -> L152614 / L152630. |
| 80152640 | shop_rows_x82_x80_xe5_windows_loop | shop_rows_x82_x80_xe5_windows_loop | src/config/gen787.c |  | shop rows: 0x82/0x80/0xE5 windows; loop L152690 on 67FC(0x80)/5574(0xFF) gates; closes via 63BC. |
| 801526F8 | shop_rows_xe1_xe5_xdf_windows_c_ro | shop_rows_xe1_xe5_xdf_windows_c_ro | src/config/gen786.c |  | shop rows: 0xE1/0xE5/0xDF windows, 8015240C row + 0xE3; loop L15275C on 56AC(3C3C(0xE5)). |
| 801527AC | fn_1x527ac | fn_1x527ac | src/config/gen1216.c |  |  |
| 80152808 | - | func_80152808 | src/config/gen1154.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152894 | - | func_80152894 | src/config/gen1153.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152908 | options_row_v0_gate_picks_f4c_vs_c | options_row_v0_gate_picks_f4c_vs_c | src/config/gen1152.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152994 | - | func_80152994 | src/config/gen1151.c |  | options row: v0 gate picks 5140/4F4C vs 516C/5050. |
| 80152A20 | options_row_v0_gate_picks_e8_vs_cc | options_row_v0_gate_picks_e8_vs_cc | src/config/gen1150.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152AAC | - | func_80152AAC | src/config/gen1149.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152B38 | - | func_80152B38 | src/config/gen1148.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152BC4 | - | func_80152BC4 | src/config/gen1147.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152C50 | - | func_80152C50 | src/config/gen1146.c |  | options row: v0 gate picks 7864/76E8 vs 7894/77CC. |
| 80152CDC | options_rows_run | options_rows_run | src/config/gen01448.c |  | options: 3C3C/3B04(0x2000) gates; 4x 8015240C + 8015236C rows. |
| 80152DE4 | fn_1x52de4 | fn_1x52de4 | src/config/gen879.c | Y |  |
| 80152E54 | fn_1x52e54 | fn_1x52e54 | src/config/gen999.c | Y |  |
| 80152EAC | fn_1x52eac | fn_1x52eac | src/config/gen753.c | Y |  |
| 80152F0C | fn_1x52f0c | fn_1x52f0c | src/config/gen443.c |  |  |
| 80153074 | fn_1x53074 | fn_1x53074 | src/config/gen01447.c | Y |  |
| 80153098 | option_mark_54 | option_mark_54 | src/config/gen01446.c |  |  |
| 801530E0 | fn_1x530e0 | fn_1x530e0 | src/config/gen1215.c | Y |  |
| 8015310C | option_value_copy | option_value_copy | src/config/gen01671.c |  | rows: buffer[0x1530:31] s16 + D40[0] -> stored back at 0x1598:99. |
| 8015316C | fn_1x5316c | fn_1x5316c | src/config/gen1214.c | Y |  |
| 8015319C | fn_1x5319c | fn_1x5319c | src/config/gen01445.c | Y |  |
| 801531CC | fn_1x531cc | fn_1x531cc | src/rows/gen_801531CC.c |  |  |
| 80153218 | fn_1x53218 | fn_1x53218 | src/rows/gen_80153218.c |  |  |
| 80153264 | fn_1x53264 | fn_1x53264 | src/config/gen1098.c | Y |  |
| 8015329C | config_row_5329c | config_row_5329c | src/config/gen1097.c | Y |  |
| 801532D4 | fn_1x532d4 | fn_1x532d4 | src/config/gen1096.c | Y |  |
| 8015330C | rows_u16_d44_d54_swap_chain_with_c | rows_u16_d44_d54_swap_chain_with_c | src/config/rowpair.c |  | rows: u16 D44<->D54 swap chain with 5410/971C. |
| 80153374 | option_row_d4 | option_row_d4 | src/config/gen1145.c | Y |  |
| 801533BC | fn_1x533bc | fn_1x533bc | src/config/gen998.c | Y |  |
| 801533FC | options_xa9_xab_windows_x1800_x180 | options_xa9_xab_windows_x1800_x180 | src/config/gen752.c |  | options: 0xA9/0xAB windows, 0x1800/0x1801 texts; loop L153430 on 67FC(0xAB)/54D4(3B04) gates. |
| 801534D8 | fn_1x534d8 | fn_1x534d8 | src/config/gen997.c | Y |  |
| 80153518 | options_x2003_x2006_cells_with_x38 | options_x2003_x2006_cells_with_x38 | src/config/gen637.c |  | options: 0x2003-0x2006 cells with 0x38BF-0x38C1 stats, 8015330C row; loop L153560 on 5A90(0xF). |
| 80153608 | fn_1x53608 | fn_1x53608 | src/config/gen18.c |  |  |
| 801539C4 | - | - | - |  | CONFIG MENU root (344 calls): register gate ladder; linear call chain with constants from asm, in order. |
| 801548F4 | - | func_801548F4 | src/config/screen_d.c |  |  |
| 80155658 | options_row_x8a_window_x29b5_x29cd | options_row_x8a_window_x29b5_x29cd | src/config/gen559.c |  | options row: 0x8A window, 0x29B5/0x29CD/0xDF/0xE1/0xE3/0x2003/ 0x29EB texts, 8015240C row; 5B2C(3B04(0xA9))+5D24(0x29CD) gates. |
| 80155778 | fn_1x55778 | fn_1x55778 | src/config/screen_z.c |  |  |
| 80155C88 | - | func_80155C88 | src/config/rowb.c |  |  |
| 80156480 | - | func_80156480 | src/battle/screen_p.c |  |  |
| 801569EC | - | func_801569EC | src/battle/screen_j.c |  |  |
| 80157148 | options_rows_xdf_xe1_xe3_windows_x | options_rows_xdf_xe1_xe3_windows_x | src/config/gen785.c |  | options rows: 0xDF/0xE1/0xE3 windows, 0x289C cell, 8015240C row; loop L15718C on 5A90(0x83). |
| 801571DC | fn_1x571dc | fn_1x571dc | src/config/screen_m.c |  |  |
| 801577D0 | options_grid_x16a8_gate_picks_the | options_grid_x16a8_gate_picks_the | src/config/gen459.c |  | options grid: 0x16A8 gate picks the 0x2001-0x2201 row fill vs reversed order; fully parallel to 8016571C's tail. |
| 80157948 | - | func_80157948 | src/config/rowd.c |  | options value screen: 0xCD window, 0x3540/0xDF/0xE1/0xE3/0x2003 gates, 8015240C/8015A374/80153374 rows; loop L157978 on 5574(5)/53D4. |
| 80157AD0 | status_panel_loop_renders_stat_pan | status_panel_loop_renders_stat_pan | src/config/gen585.c |  | status/panel loop: renders stat panels (971C/9660(0x20)/9644 window-op triples) each iteration; a0/v1 regcmp gates pick the two-pass vs one- |
| 80157F30 | options_screen_xd1_x38f6_x35eb_tex | options_screen_xd1_x38f6_x35eb_tex | src/config/gen382.c |  | options screen: 0xD1/0x38F6/0x35EB texts, 0xA9/0xAB/0xAE windows, 801580B0 row; loops L157F58 (5574(0xFF)) and L157FE0 (4FAC(0x101) rows). |
| 801580B0 | options_xa9_xd2_xad_xaf_windows_x2 | options_xa9_xd2_xad_xaf_windows_x2 | src/config/gen612.c |  | options: 0xA9/0xD2/0xAD/0xAF windows, 0x2A04/0x3598 texts, 80152CDC/8015310C rows; gates 7918(0x202)/4120(2). |
| 80158190 | options_screen_xd2_window_x38f6_x3 | options_screen_xd2_window_x38f6_x3 | src/config/gen431.c |  | options screen: 0xD2 window + 0x38F6/0x35D8 texts, 80152CDC + 8015310C rows; 5574(0xD) ladder picks 0x352E codes via 4120(0x202)/53C0 gates. |
| 801582D8 | ability_plot_x3975_text_xa7_xa6_wi | ability_plot_x3975_text_xa7_xa6_wi | src/config/gen483.c |  | ability plot: 0x3975 text, 0xA7/0xA6 windows, 80151CD8/ 801571DC/80155778/801583FC rows; loop L158374 on 5A90(0x40). |
| 801583FC | fn_1x583fc | fn_1x583fc | src/config/rowe.c |  |  |
| 8015902C | - | func_8015902C | src/config/optionsfull.c | Y |  |
| 8015A094 | fn_1x5a094 | fn_1x5a094 | src/config/gen961.c | Y |  |
| 8015A0F4 | fn_1x5a0f4 | fn_1x5a0f4 | src/config/gen272.c | Y |  |
| 8015A284 | fn_1x5a284 | fn_1x5a284 | src/rows/gen_8015A284.c |  |  |
| 8015A30C | fn_1x5a30c | fn_1x5a30c | src/config/gen1095.c | Y |  |
| 8015A344 | fn_1x5a344 | fn_1x5a344 | src/config/gen1213.c | Y |  |
| 8015A374 | options_value_table | options_value_table | src/config/gen696.c |  | options value table: 0x3558/0x2060/0x2061/0x203B texts, 0xA9/ 0xAA windows, 80152CDC header; the 10-entry jr-a0 dispatch picks 8015A524 / 80 |
| 8015A524 | fn_1x5a524 | fn_1x5a524 | src/config/gen1094.c | Y |  |
| 8015A56C | options_cursor_cells | options_cursor_cells | src/config/gen01670.c |  | options: s16 cursor from buf[0xAB:AC], sign-clean 0x8000, latched into buf[0xD4:D5]. |
| 8015A5B8 | fn_1x5a5b8 | fn_1x5a5b8 | src/config/gen01444.c | Y |  |
| 8015A614 | fn_1x5a614 | fn_1x5a614 | src/config/gen878.c | Y |  |
| 8015A670 | fn_1x5a670 | fn_1x5a670 | src/config/gen877.c | Y |  |
| 8015A6CC | options_rows_x1f_xa9_xaa_windows_x | options_rows_x1f_xa9_xaa_windows_x | src/config/gen876.c |  | options rows: 0x1F/0xA9/0xAA windows, 0x388B text, 8015ABEC/8015A56C rows; 6434(2) gate. |
| 8015A784 | options_value_row_x3558_x202f_x201 | options_value_row_x3558_x202f_x201 | src/config/gen473.c |  | options value row: 0x3558/0x202F/0x2018 texts, 0xAD/0xA9/0xAA/ 0xAB windows, 8015ABEC/8015254C/8015A56C rows; 6434(2) gate picks the 0x3558/ |
| 8015A89C | options_x3558_x2016_texts_x202f_ce | options_x3558_x2016_texts_x202f_ce | src/config/gen1049.c |  | options: 0x3558/0x2016 texts, 0x202F cell, 8015ABEC/8015A56C rows; gate 6434(2). |
| 8015A91C | fn_1x5a91c | fn_1x5a91c | src/config/gen720.c | Y |  |
| 8015A9BC | options_c3c_b04_x2000_gates_c_abec | options_c3c_b04_x2000_gates_c_abec | src/config/gen01443.c |  | options: 3C3C/3B04(0x2000) gates; 8015240C/8015ABEC/ 8015A56C rows. |
| 8015AA6C | fn_1x5aa6c | fn_1x5aa6c | src/config/gen875.c | Y |  |
| 8015AACC | options_c3c_b04_x2000_b9c_gates_s0 | options_c3c_b04_x2000_b9c_gates_s0 | src/config/gen1306.c |  | options: 3C3C/3B04(0x2000)/3B9C gates; s0/v0 latch picks 8015A5B8 vs 8015236C/8015254C rows; closes 8015ABEC/8015A56C. |
| 8015ABEC | options_rows_b | options_rows_b | src/config/gen01442.c |  | options: 3C3C/3B04(0x2000) + 8015236C/8015254C rows. |
| 8015AC7C | fn_1x5ac7c | fn_1x5ac7c | src/config/gen216.c |  |  |
| 8015B078 | config_status_row_xa9_xaa_xaf_wind | config_status_row_xa9_xaa_xaf_wind | src/config/gen285.c |  | config status row: 0xA9/0xAA/0xAF windows, 0x1822 text, 0x2001 gate; 80152CDC/8015B284 renders; loops L15B0DC (7A40/5C64) and L15B14C (6434( |
| 8015B284 | config_row_x353d_text_xe5_x82_xab | config_row_x353d_text_xe5_x82_xab | src/config/gen419.c |  | config row: 0x353D text, 0xE5/0x82/0xAB/0xAC windows, 801526F8 header; 5574 ladders (0x6D/0xDE/0xB0) route the 43A0(0xA9)/41E8(0x202) gates. |
| 8015B3F4 | options_c3c_b04_x2000_b04_gates_b6 | options_c3c_b04_x2000_b04_gates_b6 | src/config/gen1212.c |  | options: 3C3C/3B04(0x2000)/3B04 gates; 8015B6FC rows and the regcmp-loop with 80150C38 icon rows. |
| 8015B6FC | config_status_row_xb5_window_x3303 | config_status_row_xb5_window_x3303 | src/config/gen303.c |  | config status row: 0xB5 window + 0x3303 text; 5574 key ladder (5/8/C/10 codes) routes to 8015B8E4 (detail row), then the 0xB3/0xB4 cursor ce |
| 8015B8E4 | config_status_row_screen_key_codes | config_status_row_screen_key_codes | src/config/gen55.c |  | config status-row screen. 5574 key-codes 8/C/10 pick the row variant; tails L5BB84 (close B3) and L5BB8C (return) are shared. |
| 8015BB9C | options_c3c_b04_x2000_x2_gates_a0 | options_c3c_b04_x2000_x2_gates_a0 | src/config/gen01441.c |  | options: 3C3C/3B04(0x2000)x2 gates; a0 latches; 80152CDC/ 8015310C/8015C54C rows; returns at L15BD1C. |
| 8015BD34 | fn_1x5bd34 | fn_1x5bd34 | src/config/gen34.c |  |  |
| 8015C1B0 | fn_1x5c1b0 | fn_1x5c1b0 | src/config/gen01669.c |  |  |
| 8015C220 | fn_1x5c220 | fn_1x5c220 | src/config/gen243.c |  |  |
| 8015C54C | fn_1x5c54c | fn_1x5c54c | src/config/gen500.c | Y |  |
| 8015C604 | fn_1x5c604 | fn_1x5c604 | src/config/screen_s.c |  |  |
| 8015CB80 | options_seed_row_x393b_x393a_texts | options_seed_row_x393b_x393a_texts | src/config/gen539.c |  | options seed row: 0x393B/0x393A texts, 0xA9/0xAD/0xAB windows, 80152EAC/8015CC80 rows; 5C64(2) gate. |
| 8015CC80 | options_save_row_xaa_window_xa9_x2 | options_save_row_xaa_window_xa9_x2 | src/config/gen611.c |  | options save-row: 0xAA window, 0xA9/0x2003 rows, 80153074; loop L15CC90 on 54D4(3C3C(0xAB)). |
| 8015CD98 | options_seeds_xd0_x393d_x393f_x393 | options_seeds_xd0_x393d_x393f_x393 | src/config/gen520.c |  | options seeds: 0xD0/0x393D/0x393F/0x3932 windows/texts, 0xAB/0xAD rows, 8015236C/80152DE4/8015240C; ends on 0xA6/0x2065/0x2066 cells. |
| 8015CEA0 | fn_1x5cea0 | fn_1x5cea0 | src/config/gen664.c | Y |  |
| 8015CF18 | options_screen_x321b_x321c_texts_c | options_screen_x321b_x321c_texts_c | src/config/gen418.c |  | options screen: 0x321B/0x321C texts, 80150C38 row; loop L15CF60 (5958(0xC0)) with the 5574(0xCE)/53D4 and 53C0 ladders. |
| 8015D0B8 | options_seeds_x1822_x38fc_x3975_te | options_seeds_x1822_x38fc_x3975_te | src/config/gen636.c |  | options seeds: 0x1822/0x38FC/0x3975 texts, 0x32ED-0x32F0 cells, 80152908/80152CDC/8015A284/80155778/801583FC rows; 6434 gates. |
| 8015D1C8 | options_dispatch_a234_prep_xd2_xd3 | options_dispatch_a234_prep_xd2_xd3 | src/config/gen874.c |  | options dispatch: 8005A234 prep, 0xD2/0xD3 windows, 0xAB/0x3598/ 0x3535 texts; the 6-entry jr-a0 table selects the value-row: 8015D310 / 801 |
| 8015D310 | options_row_xa6_x2005_x3530_window | options_row_xa6_x2005_x3530_window | src/config/gen610.c |  | options row: 0xA6/0x2005/0x3530 windows/cells, 0x2A06/0x29EB cells, 8015310C row; 6434 gate. |
| 8015D3E8 | fn_1x5d3e8 | fn_1x5d3e8 | src/config/gen695.c | Y |  |
| 8015D450 | - | - | - |  |  |
| 8015D4C8 | options_volume_screen_xa6_xa9_xaa | options_volume_screen_xa6_xa9_xaa | src/config/gen284.c |  | options/volume screen: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006 gates, 0x2B2A/0x2B2B/0x3535 texts, 0x2A04-0x2A06 cells, 80152BC4 + 80061C8 |
| 8015D6C0 | options_detail_xa6_xa9_xaa_xd2_win | options_detail_xa6_xa9_xaa_xd2_win | src/config/gen331.c |  | options detail: 0xA6/0xA9/0xAA/0xD2 windows, 0x2005/0x2006/0x2004 gates, 0x29EB/0x29E4 texts, 0x29C4/0x29F4 cells + 0x3535 title; confirm pa |
| 8015D878 | - | - | - |  |  |
| 8015D8F0 | options_rows_xa6_x2005_x29eb_cells | options_rows_xa6_x2005_x29eb_cells | src/config/gen826.c |  | options rows: 0xA6/0x2005/0x29EB cells, 0xD2 window; gates 4120(0x202)/6434(0x80). |
| 8015D9A8 | - | func_8015D9A8 | src/config/valview.c |  | options main: gates on (v1/v0) branches with 8005A234 + 80152CDC/8016E870; L15DA08 detail loop, L15DBA0/L15DC2C refresh loops, 80150C38 icon |
| 8015DCA4 | fn_1x5dca4 | fn_1x5dca4 | src/config/gen52.c |  |  |
| 8015DFE0 | options_row_xa6_x90_windows_x2053 | options_row_xa6_x90_windows_x2053 | src/config/gen417.c |  | options row: 0xA6/0x90 windows, 0x2053/0x2054/0x3303 cells, 801531CC + 8015E158 + 8015319C/80153098 rows; loops L15E030 (5C64(0x202)) and L1 |
| 8015E158 | fn_1x5e158 | fn_1x5e158 | src/config/gen54.c |  |  |
| 8015E464 | options_stat_row_xa6_xa9_xab_xe3_x | options_stat_row_xa6_xa9_xab_xe3_x | src/config/gen330.c |  | options stat row: 0xA6/0xA9/0xAB/0xE3/0xA6 windows, 0x2050-0x2053 cells, 80152224 + 8015240C + 80153098/8015316C rows; loop L15E4BC polls 64 |
| 8015E66C | fn_1x5e66c | fn_1x5e66c | src/config/gen1093.c | Y |  |
| 8015E6A4 | fn_1x5e6a4 | fn_1x5e6a4 | src/config/gen1092.c | Y |  |
| 8015E6DC | rows_x2050_text_d54_d44_copy_c_xa6 | rows_x2050_text_d54_d44_copy_c_xa6 | src/config/gen996.c |  | rows: 0x2050 text; D54 <- D44 copy + 971C; 80153098/ 7270(0xA6)/8768(0x2054)/71DC(1)/8D6C(0xD4). |
| 8015E758 | options_row_x3540_x2003_texts_xa9 | options_row_x3540_x2003_texts_xa9 | src/config/gen663.c |  | options row: 0x3540/0x2003 texts, 0xA9 window, 8015330C row; loop L15E7B4 on 6434(0x202)/4120(0x202) gates. |
| 8015E84C | options_x14_x280_x2001_cells_c38_c | options_x14_x280_x2001_cells_c38_c | src/config/gen825.c |  | options: 0x14/0x280/0x2001 cells, 80150C38/8015330C/80058554 rows; loop L15E890 on 5A90(8). |
| 8015E910 | options_cast_x2703_text_xd6_xcf_wi | options_cast_x2703_text_xd6_xcf_wi | src/config/gen694.c |  | options cast: 0x2703 text, 0xD6/0xCF windows, 8015A374 + 80153374 rows with 0x2A06/0x29EB/0x2B2A/0x2B2B cells. |
| 8015EA00 | options_prep_xa4_window_x270b_x270 | options_prep_xa4_window_x270b_x270 | src/config/gen751.c |  | options: 80061860 prep, 0xA4 window, 0x270B/0x270D cells; gate 53C0 picks 658C(0x270D). |
| 8015EAB0 | fn_1x5eab0 | fn_1x5eab0 | src/config/gen1048.c | Y |  |
| 8015EB00 | fn_1x5eb00 | fn_1x5eb00 | src/config/gen1211.c | Y |  |
| 8015EB70 | fn_1x5eb70 | fn_1x5eb70 | src/config/gen1210.c | Y |  |
| 8015EBE0 | options_x38fe_text_aac_b8c_preps_w | options_x38fe_text_aac_b8c_preps_w | src/config/gen995.c |  | options: 0x38FE text, 80160AAC/80160B8C/80061860 preps with 8006508C/80065774 tails; gate 6434(). |
| 8015EC70 | fn_1x5ec70 | fn_1x5ec70 | src/config/gen223.c |  |  |
| 8015F028 | options_row_x354d_x3550_x2703_x354 | options_row_x354d_x3550_x2703_x354 | src/config/gen392.c |  | options row: 0x354D/0x3550/0x2703/0x354F texts, 0xA9/0xAB windows, 801531CC/80160A4C/8015330C/8015240C rows; loops L15F090/L15F110. |
| 8015F1D0 | options_x2705_x289d_texts_xcf_wind | options_x2705_x289d_texts_xcf_wind | src/config/gen750.c |  | options: 0x2705/0x289D texts, 0xCF window, 0x2A04-0x2A06/0x29EB cells, 80152CDC/8015310C rows. |
| 8015F2B0 | options_x289d_x38fe_x2709_x270a_te | options_x289d_x38fe_x2709_x270a_te | src/config/gen519.c |  | options: 0x289D/0x38FE/0x2709/0x270A texts, 0xA9 window, 80160AAC/80160B8C/8006508C/8015254C rows; 6434/53C0 gates. |
| 8015F3E0 | options_music_screen_x38fe_gate_x2 | options_music_screen_x38fe_gate_x2 | src/config/gen364.c |  | options/music screen: 0x38FE gate, 0x2724/0x2704 texts, 0xAA/0xD6/ 0xCF windows, 80160AAC prep, 8006508C/801608C4/800654CC/ 8015A374/8015337 |
| 8015F5A0 | options_x3_x5_x28a4_texts_xa9_wind | options_x3_x5_x28a4_texts_xa9_wind | src/config/gen824.c |  | options: 0x3/0x5/0x28A4 texts, 0xA9 window, 80152224 row; loop L15F5E8 on 7CC8(3B04(0x28A4))/5C64(0x202); 80065774/ 80065534 gates. |
| 8015F660 | options_x28a3_x28a4_texts_bc_x202 | options_x28a3_x28a4_texts_bc_x202 | src/config/gen1047.c |  | options: 0x28A3/0x28A4 texts; 70BC(0x202) gate picks 80065534/80065774. |
| 8015F6F0 | options_x2_x28a4_x28a3_texts_f70bc | options_x2_x28a4_x28a3_texts_f70bc | src/config/gen873.c |  | options: 0x2/0x28A4/0x28A3 texts, 80152224/800F70BC/ 80065774/80065534 rows; 5C64(0x202) gate. |
| 8015F7B0 | - | func_8015F7B0 | src/config/rowf.c | Y |  |
| 8015F7E8 | options_cast_x2706_text_xd6_xcf_wi | options_cast_x2706_text_xd6_xcf_wi | src/config/gen823.c |  | options cast: 0x2706 text, 0xD6/0xCF windows, 8015A374 + 80153374 rows. |
| 8015F8B8 | fn_1x5f8b8 | fn_1x5f8b8 | src/config/gen01668.c |  |  |
| 8015F940 | fn_1x5f940 | fn_1x5f940 | src/config/gen960.c | Y |  |
| 8015F9A0 | fn_1x5f9a0 | fn_1x5f9a0 | src/config/gen01440.c |  |  |
| 8015FA20 | fn_1x5fa20 | fn_1x5fa20 | src/config/gen1091.c | Y |  |
| 8015FA70 | options_c_row_x3949_xa4_xa5_texts | options_c_row_x3949_xa4_xa5_texts | src/config/gen959.c |  | options: 8015254C row, 0x3949/0xA4/0xA5 texts; gate 53C0 + 5958(0x270F). |
| 8015FAF8 | fn_1x5faf8 | fn_1x5faf8 | src/config/gen1090.c | Y |  |
| 8015FB48 | - | - | - | Y |  |
| 8015FB70 | options_x38e6_x29b5_texts_x8a_wind | options_x38e6_x29b5_texts_x8a_wind | src/config/gen994.c |  | options: 0x38E6/0x29B5 texts, 0x8A window, 8016046C row; loop L15FBA4 on 5574(0xFF). |
| 8015FBFC | fn_1x5fbfc | fn_1x5fbfc | src/config/gen749.c | Y |  |
| 8015FC5C | - | - | - |  |  |
| 8015FCCC | fn_1x5fccc | fn_1x5fccc | src/config/gen01439.c | Y |  |
| 8015FCEC | - | - | - | Y |  |
| 8015FCF4 | fn_1x5fcf4 | fn_1x5fcf4 | src/config/gen01438.c | Y |  |
| 8015FD14 | options_cast_x38e6_x2703_texts_x2a | options_cast_x38e6_x2703_texts_x2a | src/config/gen416.c |  | options cast: 0x38E6/0x2703 texts, 0x2A06/0x353F/0x29EB cells, 0xD6/0xCF windows, 8015A374/80153374 rows; 6434/53C0 gates. |
| 8015FE98 | fn_1x5fe98 | fn_1x5fe98 | src/config/gen39.c |  |  |
| 8016046C | options_ports_x8a_window_x29b5_x29 | options_ports_x8a_window_x29b5_x29 | src/config/ports.c |  | options ports: 0x8A window, 0x29B5/0x29CD texts, 0x88/0xDF/0xE1/ 0xE3 windows, 0x2003-0x200A cells, 0xD6/0x88 windows, 8015240C/8015A374/801 |
| 801605D0 | options_x280_x29b5_cells_xb1_xb2_w | options_x280_x29b5_cells_xb1_xb2_w | src/shop/gen822.c |  | options: 0x280/0x29B5 cells, 0xB1/0xB2 windows, 54D4(3C3C) gates, 8015330C row; loop L160604 on 5A90(8). |
| 801606AC | fn_1x606ac | fn_1x606ac | src/shop/gen1209.c | Y |  |
| 801606D4 | fn_1x606d4 | fn_1x606d4 | src/shop/gen921.c |  |  |
| 80160774 | - | - | - |  |  |
| 801607F4 | options_x2000_xa9_x2a04_x2a06_text | options_x2000_xa9_x2a04_x2a06_text | src/shop/gen719.c |  | options: 0x2000/0xA9/0x2A04-0x2A06 texts/windows, 8015330C/ 80152CDC/8015310C rows; loops L160824 and L160864. |
| 801608C4 | options_x3554_text_xce_window_row | options_x3554_text_xce_window_row | src/shop/gen920.c |  | options: 0x3554 text, 0xCE window, 80153074 row; gate 6434(0x202) picks the 0x3550/0x3523 variants. |
| 8016097C | options_banner_x3e_x3f_ladders_rou | options_banner_x3e_x3f_ladders_rou | src/shop/gen609.c |  | options banner: 5574(0x3E/0x3F) ladders route the 0x5D/0x2/ 0xF8/0x26D4/0x26D2/0x3584 codes; 80152224 row. |
| 80160A4C | fn_1x60a4c | fn_1x60a4c | src/shop/gen1305.c |  |  |
| 80160AAC | options_banner_x2726_x2725_x28a2_x | options_banner_x2726_x2725_x28a2_x | src/shop/gen584.c | Y | options banner: 0x2726/0x2725/0x28A2/0x38FE texts; 4120 gates pick the 0xFE values. |
| 80160B8C | fn_1x60b8c | fn_1x60b8c | src/shop/gen784.c | Y |  |
| 80160C2C | options_help_x2770_gate_x2707_x270 | options_help_x2770_gate_x2707_x270 | src/shop/gen357.c |  | options help: 0x2770 gate, 0x2707/0x2709/0x359A/0x359D texts, 0x2710/0x2715 gates, 0xA9 window; 8015329C row; loop L160D3C (76BC(3C3C(0xA9)) |
| 80160DF8 | options_x38e6_x2003_x34ca_x390a_x3 | options_x38e6_x2003_x34ca_x390a_x3 | src/shop/gen821.c |  | options: 0x38E6/0x2003/0x34CA/0x390A/0x33C2 texts. |
| 80160E88 | fn_1x60e88 | fn_1x60e88 | src/shop/gen16.c |  |  |
| 80161368 | fn_1x61368 | fn_1x61368 | src/rows/gen_80161368.c |  |  |
| 801613D0 | options_screen_xc1_window_x33c4_ti | options_screen_xc1_window_x33c4_ti | src/shop/gen291.c |  | options screen: 0xC1 window + 0x33C4 title, 0x321B/0x321A stat rows, 8015329C alt + 80150C38 + 80062B08 commits; loop L161428 polls 5574(0xC |
| 801615D0 | options_screen_x16_x34c8_headers_x | options_screen_x16_x34c8_headers_x | src/shop/gen264.c |  | options screen: 0x16/0x34C8 headers, 0x33C6/0x33C7/0x33C4 row texts, 0xCE/0xD3 windows; 8015329C alternative, 801526F8/8015240C detail, 8015 |
| 801617D8 | options_bars_x2001_xa9_xaa_cells_l | options_bars_x2001_xa9_xaa_cells_l | src/shop/gen635.c |  | options bars: 0x2001/0xA9/0xAA cells; loop L161820 on 5A90(5). |
| 80161900 | fn_1x61900 | fn_1x61900 | src/shop/gen405.c | Y |  |
| 801619D8 | fn_1x619d8 | fn_1x619d8 | src/shop/gen1208.c | Y |  |
| 80161A00 | options_config_screen_xcd_window_t | options_config_screen_xcd_window_t | src/shop/gen86.c |  | options/config screen: 0xCD window + 3539 text gate (80152CDC), 0xA6/0x2003 cursor row; branch L161AC8 runs the 26D0-26D3/ 2050-2053 stat ce |
| 80161C48 | fn_1x61c48 | fn_1x61c48 | src/shop/gen1207.c | Y |  |
| 80161C88 | - | func_80161C88 | src/config/screen_x.c |  |  |
| 801621D0 | options_timer_xce_x357a_x2006_x353 | options_timer_xce_x357a_x2006_x353 | src/shop/gen482.c |  | options timer: 0xCE/0x357A/0x2006/0x3534/0x3303 windows/texts, 80152CDC + 80150C38 rows; loop L162238 on 5574(0x13). |
| 801622F0 | options_timer_alt_x1d_x34c8_x34c7 | options_timer_alt_x1d_x34c8_x34c7 | src/shop/gen481.c |  | options timer (alt): 0x1D/0x34C8/0x34C7/0x357A/0x2006/0x3534/ 0x3303 texts/windows, 80152CDC + 80150C38; loop L162360 on 5574(0x1D). |
| 801623F8 | fn_1x623f8 | fn_1x623f8 | src/shop/gen820.c | Y |  |
| 80162468 | - | func_80162468 | src/config/rowh2.c | Y |  |
| 80162490 | options_x390a_x397b_texts_xd6_xcd | options_x390a_x397b_texts_xd6_xcd | src/shop/gen518.c |  | options: 0x390A/0x397B texts, 0xD6/0xCD windows, 8015A374 + 80153374 rows. |
| 80162558 | fn_1x62558 | fn_1x62558 | src/shop/gen1144.c | Y |  |
| 801625A8 | fn_1x625a8 | fn_1x625a8 | src/shop/gen634.c | Y |  |
| 80162628 | options_c_rows_gate_x80_picks_the | options_c_rows_gate_x80_picks_the | src/shop/gen919.c | Y | options: 80153218/8015329C rows; gate 5574(0x80) picks the 0x34CA/0x26D2 variants. |
| 801626B8 | options_counter_xa6_x2006_x3534_xa | options_counter_xa6_x2006_x3534_xa | src/shop/gen458.c |  | options counter: 0xA6/0x2006/0x3534/0xA9/0xCD windows, 0x3303/ 0x3302 texts, 80150C38 row; loop L162700 on 5574(9/5). |
| 801627F8 | options_stat_row_xa6_x2006_x3534_x | options_stat_row_xa6_x2006_x3534_x | src/shop/gen430.c |  | options stat row: 0xA6/0x2006/0x3534/0xA9 windows, 0x3303/ 0x3302 texts, 80150C38 row; loop L162830 on 5574(5). |
| 80162918 | options_banner_x2683_gate_ladder_x | options_banner_x2683_gate_ladder_x | src/shop/gen429.c |  | options banner: 0x2683 gate; 5574 ladder (0xC0/0x80/0x40 codes) with 80153218 one-shot, ending 0x26D2/0x34C8/0x34C7 + 0x34CA via 80062B08/80 |
| 80162A70 | options_music_xcd_xce_windows_x33c | options_music_xcd_xce_windows_x33c | src/shop/gen442.c |  | options music: 0xCD/0xCE windows, 0x33C4/0x34CA/0x352E/0x2005/ 0x2051/0x2A2A texts, 8015329C/80153374 rows; 6434(0x80) gate. |
| 80162BD0 | options_row_ffec_prep_xcd_x2005_x3 | options_row_ffec_prep_xcd_x2005_x3 | src/shop/gen517.c |  | options row: 8005FFEC prep, 0xCD/0x2005/0x357F windows/texts, 80152CDC row; 6434 gate closes with 0x33A2-0x33A5 codes. |
| 80162CD8 | fn_1x62cd8 | fn_1x62cd8 | src/shop/gen01667.c |  |  |
| 80162D20 | options_timeline_xcd_window_x2009 | options_timeline_xcd_window_x2009 | src/shop/gen583.c |  | options timeline: 0xCD window, 0x2009/0x2007/0x2003 gates, 80152BC4/80162DF8 rows; 53C0/6434(0x80) gates. |
| 80162DF8 | fn_1x62df8 | fn_1x62df8 | src/shop/gen04.c |  |  |
| 8016343C | fn_1x6343c | fn_1x6343c | src/shop/gen46.c |  |  |
| 80163774 | options_x11_x34c8_x34c7_xa6_x2017 | options_x11_x34c8_x34c7_xa6_x2017 | src/shop/gen748.c | Y | options: 0x11/0x34C8/0x34C7/0xA6/0x2017 texts, 8015329C row; gate 5574(0x63). |
| 8016380C | options_value_x34c8_x34c7_titles_x | options_value_x34c8_x34c7_titles_x | src/shop/gen428.c |  | options value: 0x34C8/0x34C7 titles, 0xA6/0x202F/0xA9/0xAB windows, 80152CDC + 8015329C rows; loop L16386C on 5574(0xD). |
| 80163950 | options_row_screen_key_ladder_xde | options_row_screen_key_ladder_xde | src/shop/gen266.c |  | options row screen: 5574 key ladder (0xDE/0xB0/0x6D/0x61 codes) routes to the 0x289C/0x289F stat rows (801526F8 header, 80152BC4 detail, 0x3 |
| 80163B88 | options_confirm_x2683_x2684_x2685 | options_confirm_x2683_x2684_x2685 | src/shop/gen318.c |  | options confirm: 0x2683/0x2684/0x2685/0x26D2/0x26D0/0x26D5 texts, 80163D68 alt, 80062B08 commit; key ladders 0xCA/0xB0/ 0x61 codes. |
| 80163D68 | options_dialog_xe5_x33c4_x38ed_x35 | options_dialog_xe5_x33c4_x38ed_x35 | src/shop/gen371.c |  | options dialog: 0xE5/0x33C4/0x38ED/0x3584 texts, 80152224/ 8015240C/80153098; loop L163E1C polls 6434(0x514)/4120(0x202) gates; 0xDF/0xE1/0x |
| 80163F68 | - | func_80163F68 | src/config/screen_a.c |  |  |
| 8016501C | fn_1x6501c | fn_1x6501c | src/shop/gen239.c |  |  |
| 801652FC | options_status_xb5_xb6_windows_xa6 | options_status_xb5_xb6_windows_xa6 | src/config/statusview.c |  | options status: 0xB5/0xB6 windows, 0xA6 row, 0xB1/0xAF/0xB0/0xB3 cells, 80152BC4/80152224 rows; 53C0 gate (0x1000 text). |
| 8016543C | options_sub_screen_x289c_x289d_x29 | options_sub_screen_x289c_x289d_x29 | src/shop/gen70.c |  | options sub-screen: 0x289C/0x289D/0x291C stat rows, 0xB5/0x9A/0xB9/ 0xB3/0xB7 windows; 80152640 intro, 8015240C detail; three loops. |
| 8016571C | options_stat_screen_x2041_x203d_x3 | options_stat_screen_x2041_x203d_x3 | src/shop/gen33.c |  | options stat screen: 0x2041/0x203D/0x38BF/0x2003/0x2004/0x2006 texts, 8015330C row; loops L165764 (5A90(0xF)), L165838 (scroll), L16593C (0x |
| 80165B94 | shop_b04_c3c_gates_s0_a0_s0_s4 | shop_b04_c3c_gates_s0_a0_s0_s4 | src/shop/gen1304.c |  | shop: 3B04/3C3C(8) gates; s0/a0+s0/s4 latch loops with 80165C7C rows; 5410 tail. |
| 80165C7C | shop_c3c_row | shop_c3c_row | src/shop/gen01666.c |  | shop: 3C3C row. |
| 80165D60 | - | func_80165D60 | src/config/rowj2.c |  |  |
| 80166218 | battle_cast_flow_d528_c_preps_loop | battle_cast_flow_d528_c_preps_loop | src/shop/gen391.c |  | battle cast flow: 8014D528/8016762C preps, loops L1662EC (5A90(0x40)) and L16638C (70174/4120(0x202) rows), 80166458 row; 0x5E window + 0x10 |
| 80166458 | battle_cast_rows_x2_x4_windows_x76 | battle_cast_rows_x2_x4_windows_x76 | src/shop/gen390.c |  | battle cast rows: 0x2/0x4 windows, 0x7600 cells, 6658/89D4/ 5DD4(2) reads; loop L1664D0 on 5A90(0x230). |
| 801665C0 | options_status_band_x12_x13_x10_x1 | options_status_band_x12_x13_x10_x1 | src/shop/gen263.c |  | options/status band: 0x12/0x13/0x10/0x14/0x11 windows, 78C4 (3C3C(0x1A)) heading, 6434(2)/5B8C(0x202) gates. |
| 801667F0 | battle_rows_x4e_window_c68_bc_cell | battle_rows_x4e_window_c68_bc_cell | src/shop/gen993.c |  | battle rows: 0x4E window + 6C68/8960/63BC cells; loop L166844 on 5A90(0x20). |
| 8016688C | fn_1x6688c | fn_1x6688c | src/shop/gen01665.c |  |  |
| 801668EC | fn_1x668ec | fn_1x668ec | src/shop/gen01664.c |  |  |
| 8016694C | shop_rows_x13_window_x03_cells_d54 | shop_rows_x13_window_x03_cells_d54 | src/shop/gen01437.c |  | shop rows: 0x13 window + 0x03 cells; D54 <- D44 copy then D40 <- D_8019A12C[D54] via 8014D528. |
| 801669BC | battle_confirm_flow_x42_x38be_x38b | battle_confirm_flow_x42_x38be_x38b | src/shop/gen404.c |  | battle confirm flow: 0x42/0x38BE/0x38BD texts, 8016694C/80166B80/ 8016762C/80140944 preps, L166A44 loop with 70174/7534 gates and 80140310/8 |
| 80166B80 | fn_1x66b80 | fn_1x66b80 | src/shop/gen1089.c | Y |  |
| 80166BF8 | fn_1x66bf8 | fn_1x66bf8 | src/shop/gen1046.c | Y |  |
| 80166C50 | fn_1x66c50 | fn_1x66c50 | src/shop/gen1045.c | Y |  |
| 80166CA8 | shop_rows_x1d_window_x30_x20_gates | shop_rows_x1d_window_x30_x20_gates | src/shop/gen718.c |  | shop rows: 0x1D window + 4248(0x30/0x20) gates route the 0xB8 window fills. |
| 80166DB8 | fn_1x66db8 | fn_1x66db8 | src/shop/gen992.c |  |  |
| 80166E58 | shop_c3c_b04_x2000_x2_gates_s0_v0 | shop_c3c_b04_x2000_x2_gates_s0_v0 | src/shop/gen1143.c |  | shop: 3C3C/3B04(0x2000)x2 gates; s0/v0 + a1/v0 latch loops with 9330/95A0 rows. |
| 80166FB8 | options_rows_x2001_x41_cell_xf_gat | options_rows_x2001_x41_cell_xf_gat | src/shop/gen872.c |  | options rows: 0x2001/0x41 cell; 5574(0xF) gate picks the 5CCC vs 8768 paths. |
| 80167074 | shop_b04_gate_loop_on_s0_v1_latch | shop_b04_gate_loop_on_s0_v1_latch | src/shop/gen1142.c |  | shop: 3B04 gate; 5410 loop on s0/v1 latch. |
| 8016711C | battle_b04_x1000_x2000_x3_gates_ro | battle_b04_x1000_x2000_x3_gates_ro | src/shop/gen1088.c |  | battle: 3B04(0x1000/0x2000)x3 gates; 80167074 rows; a0/a1 regcmp latch loop; 5480 tail. |
| 801671E4 | battle_stat_row_x1802_text_x2a_win | battle_stat_row_x1802_text_x2a_win | src/shop/gen356.c |  | battle stat row: 0x1802 text, 0x2A window with 5024 cells (5 copies), 6434(0x202)/4120(2) gates; loop L167364 (5DA0/ 5B8C(0x202)). |
| 801673C4 | - | - | - | Y |  |
| 801673CC | battle_row_xe_x1c_x10_windows_gate | battle_row_xe_x1c_x10_windows_gate | src/shop/gen355.c |  | battle row: 0xE/0x1C/0x10 windows, 6434(2) gate routes the 0x1C cursor read; 63F8/6130 cells, 5574/53D4 ladders. |
| 8016752C | fn_1x6752c | fn_1x6752c | src/shop/gen871.c | Y |  |
| 801675A4 | fn_1x675a4 | fn_1x675a4 | src/shop/gen01436.c | Y |  |
| 80167604 | battle_row_8 | battle_row_8 | src/shop/gen01663.c | Y |  |
| 8016762C | fn_1x6762c | fn_1x6762c | src/shop/gen1206.c | Y |  |
| 80167664 | battle_anim_loop_a488_c8c_preps_l1 | battle_anim_loop_a488_c8c_preps_l1 | src/shop/gen783.c |  | battle anim loop: 80167774/8014A488/80148C8C preps; L1676DC alternates 80140994/8014096C/80140944/801409BC/801409E4 with 80167604; closes vi |
| 80167774 | battle_rows_x70174_fb8_dc_preps_b2 | battle_rows_x70174_fb8_dc_preps_b2 | src/shop/gen782.c |  | battle rows: 0x70174/8FB8/71DC preps, 5B2C(3B04) check; loops L167798 and L167780 on 5958(0x12)/6434(0x202). |
| 80167844 | battle_rows_twin_with_x70174_fb8_d | battle_rows_twin_with_x70174_fb8_d | src/shop/gen781.c |  | battle rows (twin with 6048): 0x70174/8FB8/71DC preps; loops L167868 and L167850 on 5958(0x12)/6434(0x202). |
| 80167914 | shop_c3c_b04_x3_gates_t0_t1_regcmp | shop_c3c_b04_x3_gates_t0_t1_regcmp | src/shop/gen1141.c |  | shop: 3C3C/3B04 x3 gates; t0/t1 regcmp latch loop; returns at L167A14. |
| 80167A34 | battle_rows_x4e_window_x70174_rows | battle_rows_x4e_window_x70174_rows | src/shop/gen633.c |  | battle rows: 0x4E window, 0x70174/80140310 rows; loop L167A74 on 5574(0x40)/5A90 gates. |
| 80167B48 | fn_1x67b48 | fn_1x67b48 | src/rows/gen_80167B48.c |  |  |
| 80167BA0 | battle_cast_driver_dd4_anim_rows_c | battle_cast_driver_dd4_anim_rows_c | src/config/rowk2.c |  | battle cast driver: 80167DD4 anim rows, 8014096C cast, 80167E44 status block; loops L167BDC/L167C20/L167C70/L167CB0/L167D24. |
| 80167DD4 | fn_1x67dd4 | fn_1x67dd4 | src/shop/gen747.c | Y |  |
| 80167E44 | battle_class_status_screen_windows | battle_class_status_screen_windows | src/shop/gen82.c |  | battle class/status screen: 1/2/4/5 windows with 6C68 draws, inner row loop L167F70 (6EA8 + 340-343 gates, 80168118 row commits); outer loop |
| 80168118 | fn_1x68118 | fn_1x68118 | src/shop/gen1087.c | Y |  |
| 80168148 | fn_1x68148 | fn_1x68148 | src/shop/gen1140.c |  |  |
| 801681C0 | shop_c3c_b04_x2000_b9c_gates_c_loo | shop_c3c_b04_x2000_b9c_gates_c_loo | src/shop/gen1086.c |  | shop: 3C3C/3B04(0x2000)/3B9C gates; 971C loop on s2 latch. |
| 8016838C | shop_b04_x7000_x2_v1_t0_latch_loop | shop_b04_x7000_x2_v1_t0_latch_loop | src/shop/gen01435.c |  | shop: 3B04(0x7000) x2 + v1/t0 latch loop. |
| 80168400 | fn_1x68400 | fn_1x68400 | src/config/cells.c | Y |  |
| 80168438 | fn_1x68438 | fn_1x68438 | src/config/cells2.c |  |  |
| 80168474 | fn_1x68474 | fn_1x68474 | src/shop/gen01434.c | Y |  |
| 801684AC | config_status_text_screen_x4219_x4 | config_status_text_screen_x4219_x4 | src/shop/gen65.c |  | config status text screen: 0x4219/0x421B choose header, 0x38D9 the detail row; 80168400/80168474/8016838C draw the option rows. |
| 80168750 | fn_1x68750 | fn_1x68750 | src/shop/gen227.c |  |  |
| 80168B94 | fn_1x68b94 | fn_1x68b94 | src/shop/gen1303.c | Y |  |
| 80168BC4 | config_help_credits_x180f_x1813_x1 | config_help_credits_x180f_x1813_x1 | src/shop/gen96.c |  | config help/credits: 0x180F/0x1813/0x1900 texts; key confirms (5574 0xD/0x10, 13/10 ladders), two scroll loops (L168D60/ L168DD8 on 5A90(4/0 |
| 80168E30 | - | func_80168E30 | src/shop/rowb.c |  | shop rows: 3C3C/3B04(0x4000)/3B9C gates + 8011EB9C row; v1/v0 gate closes. |
| 80168F1C | fn_1x68f1c | fn_1x68f1c | src/shop/gen271.c | Y |  |
| 801690AC | fn_1x690ac | fn_1x690ac | src/shop/gen01662.c |  |  |
| 801690F8 | - | - | - | Y |  |
| 80169100 | - | - | - | Y |  |
| 80169120 | - | - | - | Y |  |
| 80169128 | - | - | - | Y |  |
| 80169148 | - | - | - | Y | 77548 80169148 0800E003 |
| 80169150 | - | - | - | Y |  |
| 80169158 | - | - | - | Y |  |
| 80169160 | - | - | - | Y |  |
| 80169168 | - | - | - | Y |  |
| 80169170 | rows_x1e05_text_x29_x14a_windows_f | rows_x1e05_text_x29_x14a_windows_f | src/config/rowl2.c |  | rows: 0x1E05 text, 0x29/0x14A windows, 801691F0/8011F300 rows; loop L1691B0 on 5C64(0x202). |
| 801691F0 | fn_1x691f0 | fn_1x691f0 | src/shop/gen1302.c | Y |  |
| 80169228 | fn_1x69228 | fn_1x69228 | src/shop/gen1044.c | Y |  |
| 80169290 | battle_loop_f098_intro_x9a_window | battle_loop_f098_intro_x9a_window | src/shop/gen958.c |  | battle loop: 8018F098 intro + 0x9A window; loops L169408 (80194640/94394) and L16942C (62BC(0x9A)/6630(0x9A) gates); ends on 5574(0xF)/0x330 |
| 801694A4 | shop_seed_x64_window_x1b_x2107_tex | shop_seed_x64_window_x1b_x2107_tex | src/shop/gen582.c |  | shop seed: 0x64 window, 0x1B/0x2107 texts; loop L169548 on 5958(0x320). |
| 80169614 | fn_1x69614 | fn_1x69614 | src/shop/gen278.c |  |  |
| 80169958 | shop_rows_xa0_x211a_texts_x7d1b_x7 | shop_rows_xa0_x211a_texts_x7d1b_x7 | src/shop/gen717.c |  | shop rows: 0xA0/0x211A texts + 0x7D1B/0x7D19/0x7D1E/0x7D1D texts, 8016D4D8 close; loop L169998 on 5958. |
| 80169A18 | config_map_name_screen_x64_x2_x4_x | config_map_name_screen_x64_x2_x4_x | src/shop/gen281.c |  | config map-name screen: 0x64/0x2/0x4/0x6 windows, 0x3D1E/0x7D1B/ 0x7D19/0x7D1E/0x7D1D texts, 80169958/8016D4D8 rows; loops L169B10/L169B34/L |
| 80169C7C | fn_1x69c7c | fn_1x69c7c | src/shop/gen457.c |  |  |
| 80169DE8 | fn_1x69de8 | fn_1x69de8 | src/shop/gen456.c |  |  |
| 80169F58 | shop_rows_c4a0_prep_xa_x8_windows | shop_rows_c4a0_prep_xa_x8_windows | src/shop/gen516.c |  | shop rows: 8016C4A0 prep, 0xA/0x8 windows, 0x2703 text; loops L169FB0 (7594/8 cells) and L169FC8 (67FC/5B8C(0x202)). |
| 8016A080 | fn_1x6a080 | fn_1x6a080 | src/shop/gen957.c | Y |  |
| 8016A0C8 | shop_cells_x2_window_x8_gate_loops | shop_cells_x2_window_x8_gate_loops | src/shop/gen515.c |  | shop cells: 0x2 window, 0x8 gate; loops L16A124 (6764 cells) and L16A18C (66D8 cells) on 5C64/5B8C(0x202). |
| 8016A208 | shop_rows_x66_x53_x55_xa_windows_x | shop_rows_x66_x53_x55_xa_windows_x | src/shop/gen370.c |  | shop rows: 0x66/0x53/0x55/0xA windows, 0x2F03 text, 8016A4E4 header; loops L16A248 (5A90(0x20)), L16A290, L16A2A8 (5DA0(8)/5B8C(0x202)). |
| 8016A390 | shop_icon_row_x_b04_a40_a68_icon | shop_icon_row_x_b04_a40_a68_icon | src/shop/gen455.c |  | shop icon row: 9x (3B04/7A40/7A68) icon triplets. |
| 8016A4E4 | fn_1x6a4e4 | fn_1x6a4e4 | src/shop/screen_w.c |  |  |
| 8016AA54 | fn_1x6aa54 | fn_1x6aa54 | src/shop/gen1205.c | Y |  |
| 8016AA84 | fn_1x6aa84 | fn_1x6aa84 | src/shop/gen991.c | Y |  |
| 8016AACC | fn_1x6aacc | fn_1x6aacc | src/shop/gen990.c | Y |  |
| 8016AB14 | shop_store_run | shop_store_run | src/shop/store.c |  | shop store registers: 0x3304 gate title, 0x43/0x42 windows with 0x4300-0x4330 index rows (8188/8D00 pairs); loop L16AB44 polls 5958(0x15). |
| 8016AC7C | shop_status_x4a_window_x2203_x22c1 | shop_status_x4a_window_x2203_x22c1 | src/shop/gen441.c |  | shop status: 0x4A window, 0x2203/0x22C1/0x22A3/0x22B3 texts, gates 4120(0x202); loops L16ACFC (5A90(0x20)) and L16AD74 (5958(0x12)). |
| 8016ADDC | shop_rows_x3319_x371b_x331b_x3719 | shop_rows_x3319_x371b_x331b_x3719 | src/shop/gen693.c |  | shop rows: 0x3319/0x371B/0x331B/0x3719 cells; loop L16AE14 on 5958(0x400). |
| 8016AE94 | fn_1x6ae94 | fn_1x6ae94 | src/shop/screen_q.c |  |  |
| 8016B470 | fn_1x6b470 | fn_1x6b470 | src/shop/gen632.c | Y |  |
| 8016B530 | shop_gate_d348 | shop_gate_d348 | src/shop/gen01433.c |  | shop: 3C3C/3B04 gates + 8016D348/8016D2B0 rows. |
| 8016B5B0 | fn_1x6b5b0 | fn_1x6b5b0 | src/shop/gen440.c | Y |  |
| 8016B650 | fn_1x6b650 | fn_1x6b650 | src/shop/gen01432.c | Y |  |
| 8016B68C | battle_prep_x118_x_xf0_bytes_at_bu | battle_prep_x118_x_xf0_bytes_at_bu | src/shop/gen01661.c |  | battle prep: 0x118 x 0xF0 bytes at buffer(0x300). |
| 8016B6D0 | fn_1x6b6d0 | fn_1x6b6d0 | src/shop/gen222.c |  |  |
| 8016BAAC | fn_1x6baac | fn_1x6baac | src/shop/gen472.c | Y |  |
| 8016BB44 | shop_row_41 | shop_row_41 | src/shop/gen1085.c | Y |  |
| 8016BB84 | fn_1x6bb84 | fn_1x6bb84 | src/shop/gen1084.c | Y |  |
| 8016BBC4 | - | - | - | Y |  |
| 8016BBCC | fn_1x6bbcc | fn_1x6bbcc | src/shop/gen439.c | Y |  |
| 8016BC6C | shop_row_x4a_x57_windows_x400_x28 | shop_row_x4a_x57_windows_x400_x28 | src/shop/gen692.c |  | shop row: 0x4A/0x57 windows, 0x400/0x28/0x57 consts, 8016BBCC row; gate 4120(0x202). |
| 8016BD2C | fn_1x6bd2c | fn_1x6bd2c | src/shop/gen01660.c |  |  |
| 8016BD78 | shop_rows_x18_x1a_x1c_windows_x421 | shop_rows_x18_x1a_x1c_windows_x421 | src/shop/gen870.c |  | shop rows: 0x18/0x1A/0x1C windows, 0x4218 text; linear. |
| 8016BE1C | shop_rows_f94_b04_reads_x2000_x204 | shop_rows_f94_b04_reads_x2000_x204 | src/shop/gen869.c |  | shop rows: 3F94(3B04) reads + 0x2000/0x2040 cells; linear. |
| 8016BED4 | shop_rows_x2000_x2040_cells_via_dc | shop_rows_x2000_x2040_cells_via_dc | src/shop/gen868.c |  | shop rows: 0x2000/0x2040 cells via 9140/87DC; loop L16BF0C on 5958(0x40). |
| 8016BF64 | fn_1x6bf64 | fn_1x6bf64 | src/shop/gen989.c |  |  |
| 8016BFE8 | fn_1x6bfe8 | fn_1x6bfe8 | src/shop/gen631.c | Y |  |
| 8016C0A8 | fn_1x6c0a8 | fn_1x6c0a8 | src/shop/gen630.c | Y |  |
| 8016C128 | fn_1x6c128 | fn_1x6c128 | src/shop/gen354.c | Y |  |
| 8016C280 | battle_row_render_x74_x76_x70_x72 | battle_row_render_x74_x76_x70_x72 | src/shop/gen85.c |  | battle row render: 0x74/0x76/0x70/0x72 stat windows with 3F94(3C3C) / 4064(8) value cells, 0x5B/0x5D headers; then the 0x61/0xA1 secondary c |
| 8016C4A0 | shop_memory_x48_x50_windows_x7d27 | shop_memory_x48_x50_windows_x7d27 | src/shop/gen471.c |  | shop memory: 0x48/0x50 windows, 0x7D27 text, 0x4B/0x4D cells, 80176F60 row; loop L16C4DC on 5574(0x38). |
| 8016C624 | fn_1x6c624 | fn_1x6c624 | src/shop/gen538.c | Y |  |
| 8016C6FC | fn_1x6c6fc | fn_1x6c6fc | src/shop/gen1083.c | Y |  |
| 8016C734 | fn_1x6c734 | fn_1x6c734 | src/shop/gen819.c | Y |  |
| 8016C78C | shop_rows_x2000_x2a_x28_cells_x4f | shop_rows_x2000_x2a_x28_cells_x4f | src/shop/gen780.c |  | shop rows: 0x2000/0x2A/0x28 cells, 0x4F window; 4264(0x1FF) + 3F38(3C3C(0x28)) reads. |
| 8016C858 | battle_terrain_affinity_screen_x21 | battle_terrain_affinity_screen_x21 | src/shop/gen329.c |  | battle terrain/affinity screen: 0x2101/0x2102/0x2100 title rows, 0x2005/0x2001/0x2003 gates, 0x50/0x4A windows; 8016C280/8016C624 row draws, |
| 8016CA94 | fn_1x6ca94 | fn_1x6ca94 | src/shop/gen09.c |  |  |
| 8016D028 | shop_c3c_gates_returns_at_l16d0f4 | shop_c3c_gates_returns_at_l16d0f4 | src/shop/gen01659.c |  | shop: 3C3C gates; returns at L16D0F4. |
| 8016D160 | shop_c3c_x20_rows_a0_close | shop_c3c_x20_rows_a0_close | src/shop/gen1204.c |  | shop: 3C3C/9330/9644(0x20) rows; 95A0 close. |
| 8016D2B0 | shop_c3c_b04_x2000_d3e0_row_a0 | shop_c3c_b04_x2000_d3e0_row_a0 | src/shop/gen1203.c |  | shop: 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. |
| 8016D348 | shop_twin_c3c_b04_x2000_d3e0_row_a | shop_twin_c3c_b04_x2000_d3e0_row_a | src/shop/gen1202.c |  | shop (twin): 3C3C/3B04(0x2000)/9330 + 8016D3E0 row + 95A0. |
| 8016D3E0 | shop_c3c_b9c_gates_d160_row_with_t | shop_c3c_b9c_gates_d160_row_with_t | src/shop/gen1201.c |  | shop: 3C3C/3B9C gates; 8016D160 row with 5480/5410 tails. |
| 8016D4D8 | config_map_x7d19_x36_x7d1e_x38_x7d | config_map_x7d19_x36_x7d1e_x38_x7d | src/shop/gen608.c |  | config map: 0x7D19/0x36/0x7D1E/0x38/0x7D1B/0x39/0x3A/0x3B texts + windows, 8016D798/8016D768/8016D600 rows; loop L16D574 on 6EA8(0x36)/6434( |
| 8016D600 | config_map_x7d1d_text_x39_x3c_wind | config_map_x7d1d_text_x39_x3c_wind | src/shop/gen499.c |  | config map: 0x7D1D text, 0x39/0x3C windows, 8016D730/8016D768 rows; 5574 ladder (1/0xA codes) with loop L16D660 on 5B8C(0x202). |
| 8016D730 | fn_1x6d730 | fn_1x6d730 | src/shop/gen1043.c | Y |  |
| 8016D768 | fn_1x6d768 | fn_1x6d768 | src/shop/gen1082.c | Y |  |
| 8016D798 | config_rows_x3c_x39_x60_x57_window | config_rows_x3c_x39_x60_x57_window | src/shop/gen746.c |  | config rows: 0x3C/0x39/0x60/0x57 windows; gate 5574(0x42) routes the 82EC cell fills. |
| 8016D850 | fn_1x6d850 | fn_1x6d850 | src/shop/gen64.c | Y |  |
| 8016D9B0 | global_stats_screen_x7d1f_gate_x4a | global_stats_screen_x7d1f_gate_x4a | src/shop/gen310.c |  | global-stats screen: 0x7D1F gate, 0x4A window, 0x92/0x90 rows with 0x2116/0x4352/0x4354/0x4350/0x4351/0x4355 texts; renders via 800F9868; al |
| 8016DB38 | - | - | - |  |  |
| 8016DB94 | config_x1ff_ec_gates_x14_x20_windo | config_x1ff_ec_gates_x14_x20_windo | src/shop/gen514.c |  | config: 4264(0x1FF)/64EC gates, 0x14/0x20 windows, 8016D028 rows; 6180(0x202)/5480 close. |
| 8016DCE0 | shop_rows_x2303_x2883_cells_via_lo | shop_rows_x2303_x2883_cells_via_lo | src/shop/gen867.c |  | shop rows: 0x2303/0x2883 cells via 8768; loops L16DD0C (5958(0x900)) and L16DD5C (5958(0x80)). |
| 8016DD9C | - | - | - |  | shop: 3C3C/3B04(0x2000)/3B9C gates; 8016DB38/8016DB94x2/ 80177DAC rows; s5/s0 latches loop L16DDFC. |
| 8016E0F8 | monster_status_run | monster_status_run | src/battle/monster.c |  | battle monster status: 0x95 window + 0x2303/0x2384 gate texts, 0x300-0x303 cells with 8016B650 prep; loop L16E168 (5A90/53D4) polls 6434(2). |
| 8016E358 | shop_memory_x7d21_gate_x2121_x2123 | shop_memory_x7d21_gate_x2121_x2123 | src/shop/gen454.c |  | shop memory: 0x7D21 gate, 0x2121/0x2123/0x2127/0x7D24/0x7D1A texts, 0x1C window; loop L16E398 (5958(4)) with the 5D24/5B8C ladders. |
| 8016E490 | fn_1x6e490 | fn_1x6e490 | src/rows/gen_8016E490.c |  |  |
| 8016E500 | - | func_8016E500 | src/shop/rowd.c | Y |  |
| 8016E560 | options_x3540_x2003_cells_ec_x2007 | options_x3540_x2003_cells_ec_x2007 | src/shop/gen716.c |  | options: 0x3540/0x2003 cells, 90EC(0x2007/0x2008) rows; loop L16E5A8 on 5A90(5). |
| 8016E668 | battle_stat_overlay_xa9_xab_xb5_xb | battle_stat_overlay_xa9_xab_xb5_xb | src/shop/gen75.c |  | battle stat overlay: 0xA9/0xAB/0xB5/0xB7/0xB1/0xB3 windows, 0x3591/0x3593 titles; 7B40/7B7C row pair draws + 7FCC/3F94(3C3C) value cells; lo |
| 8016E870 | options_x2000_x2003_x2004_gates_x3 | options_x2000_x2003_x2004_gates_x3 | src/shop/gen513.c |  | options: 0x2000/0x2003/0x2004 gates, 0x357C text, 0xA6 window; gates 53D4/4120 pick the 0x2000 cell writes. |
| 8016E99C | fn_1x6e99c | fn_1x6e99c | src/rows/gen_8016E99C.c | Y |  |
| 8016E9BC | fn_1x6e9bc | fn_1x6e9bc | src/rows/gen_8016E9BC.c | Y |  |
| 8016E9DC | fn_1x6e9dc | fn_1x6e9dc | src/rows/gen_8016E9DC.c | Y |  |
| 8016E9FC | - | - | - | Y |  |
| 8016EA1C | fn_1x6ea1c | fn_1x6ea1c | src/rows/gen_8016EA1C.c | Y |  |
| 8016EA3C | - | - | - | Y |  |
| 8016EA5C | - | - | - | Y |  |
| 8016EA7C | shop_row_kick_f0 | shop_row_kick_f0 | src/shop/rowkick.c | Y |  |
| 8016EA9C | fn_1x6ea9c | fn_1x6ea9c | src/rows/gen_8016EA9C.c | Y |  |
| 8016EABC | shop_flow_x4200_x1000_x4218_texts | shop_flow_x4200_x1000_x4218_texts | src/shop/gen438.c |  | shop flow: 0x4200/0x1000/0x4218 texts, 0x32 window, 80170198 row; loop L16EB5C polls 9644/9330 pairs; tail 94B8/9448 close. |
| 8016ED64 | shop_rows_x64_x6a_x6b_texts_ef88_r | shop_rows_x64_x6a_x6b_texts_ef88_r | src/shop/gen918.c |  | shop rows: 0x64/0x6A/0x6B texts, 8016EF88 row; linear. |
| 8016EE10 | shop_rows_xa1_xa3_windows_x64_x6a | shop_rows_xa1_xa3_windows_x64_x6a | src/shop/gen745.c |  | shop rows: 0xA1/0xA3 windows, 0x64/0x6A/0x6B texts, 8016EF88 row; linear. |
| 8016EEDC | shop_rows_variant_x64_x6a_x6b_text | shop_rows_variant_x64_x6a_x6b_text | src/shop/gen917.c |  | shop rows (variant): 0x64/0x6A/0x6B texts, 8016EF88 row. |
| 8016EF88 | fn_1x6ef88 | fn_1x6ef88 | src/shop/gen02.c |  |  |
| 8016F97C | config_help_status_x43_window_x16a | config_help_status_x43_window_x16a | src/shop/gen84.c |  | config help/status: 0x43 window, 0x16A9/0x1A05/0x1A3E-0x1A45 texts, 801702DC sub-rows, 0x1A0D key icons; fully linear render. |
| 8016FB78 | config_bars_x1f_x1d_x1e_windows_x2 | config_bars_x1f_x1d_x1e_windows_x2 | src/shop/gen415.c |  | config bars: 0x1F/0x1D/0x1E windows, 0x29 window cells; loops L16FC1C (5DA0(0x1D)) and L16FCA8 (5DA0(0x1E)). |
| 8016FCF0 | shop_map_the_fixed_sprite_row_x8a | shop_map_the_fixed_sprite_row_x8a | src/shop/gen512.c |  | shop map: the fixed 15-sprite row (0x8A-0xA0 windows) then 9448/93DC close. |
| 8016FFC0 | shop_rows_x88_window_x2100_x2115_t | shop_rows_x88_window_x2100_x2115_t | src/shop/gen916.c |  | shop rows: 0x88 window + 0x2100/0x2115 titles; linear. |
| 80170084 | fn_1x70084 | fn_1x70084 | src/anim/gen1200.c | Y |  |
| 801700BC | rows_x_dc_cell_pairs_x3319_x371b_x | rows_x_dc_cell_pairs_x3319_x371b_x | src/anim/gen581.c |  | rows: 4x 6658/87DC cell pairs (0x3319/0x371B/0x331B/0x3719); loop L1700F8 on 5958(0x400). |
| 80170198 | shop_c3c_b04_x1000_x2_b9c_gates_a0 | shop_c3c_b04_x1000_x2_b9c_gates_a0 | src/anim/gen1199.c |  | shop: 3C3C/3B04(0x1000)x2/3B9C gates; a0/a2 latch | v0 gates; returns at L1702C4. |
| 801702DC | fn_1x702dc | fn_1x702dc | src/anim/gen629.c | Y |  |
| 80170348 | fn_1x70348 | fn_1x70348 | src/anim/gen662.c | Y |  |
| 801703E8 | fn_1x703e8 | fn_1x703e8 | src/anim/gen661.c | Y |  |
| 80170458 | shop_row_render_x2115_x4300_x4301 | shop_row_render_x2115_x4300_x4301 | src/anim/gen262.c |  | shop row render: 0x2115/0x4300/0x4301 title, 0x421F/0x2116/ 0x4302/0x4305 desc rows, 800F9868 catalog dispatch, then the 0x4F/0x79/0x50 item |
| 801706C0 | shop_buy_flow_xfd8_gate_detail_alt | shop_buy_flow_xfd8_gate_detail_alt | src/anim/gen317.c |  | shop buy-flow: 0xFD8 gate, 80170884 detail; alt renders the 0x47/ 0x45/0x1800 rows (3C/3D/3E/0x20/0x21 windows) and commits through 800F9868 |
| 80170884 | fn_1x70884 | fn_1x70884 | src/anim/gen511.c | Y |  |
| 8017091C | fn_1x7091c | fn_1x7091c | src/anim/gen403.c | Y |  |
| 801709E4 | shop_confirm_rows_x3e_x3d_windows | shop_confirm_rows_x3e_x3d_windows | src/anim/gen363.c |  | shop confirm rows: 0x3E/0x3D windows, 0x1700/0xBD cells and 0x8 window; loops L170A4C (5A90(0x100)) and L170ACC (3F38 (3B04) rows + 4120(0x2 |
| 80170C14 | fn_1x70c14 | fn_1x70c14 | src/shop/screen_o.c |  |  |
| 80171194 | fn_1x71194 | fn_1x71194 | src/anim/gen221.c |  |  |
| 801714C4 | shop_picker_7 | shop_picker_7 | src/anim/gen558.c |  | shop picker: 0x7/0x500 windows; 3F38(3C3C(7)) + 78C4(3C3C(7)) rows with the 0x500 count cell. |
| 80171608 | fn_1x71608 | fn_1x71608 | src/anim/gen26.c |  |  |
| 801719C8 | fn_1x719c8 | fn_1x719c8 | src/anim/gen13.c |  |  |
| 80171E18 | shop_rows_xc_xe_xad_windows_x4f1_x | shop_rows_xc_xe_xad_windows_x4f1_x | src/anim/gen498.c |  | shop rows: 0xC/0xE/0xAD windows, 0x4F1/0x4F0/0x4F2/0x4F3 texts, gates 5480/8058(2/4/5)/53C0. |
| 80171F90 | shop_sell_row_screen_twin_of_e8_wi | shop_sell_row_screen_twin_of_e8_wi | src/anim/gen81.c |  | shop sell-row screen (twin of 801721E8 without the bottom commit): 0x1701 header, 0xB/0xC/0xE/0xD windows, 80173ED8 stat block, 801714C4 qua |
| 801721E8 | shop_sell_detail_screen_headers_bu | shop_sell_detail_screen_headers_bu | src/anim/gen242.c |  | shop sell/detail screen: 1730/1731 headers, buy rows 12/14 with per-row gate reads; 80173ED8 draws the stat block, 801714C4 the quantity pic |
| 801724D0 | - | func_801724D0 | src/battle/rowm.c |  |  |
| 80172998 | fn_1x72998 | fn_1x72998 | src/anim/gen1081.c | Y |  |
| 801729E0 | shop_detail_wanted_x4c0_x4c7_texts | shop_detail_wanted_x4c0_x4c7_texts | src/anim/gen302.c |  | shop detail: WANTED: 0x4C0-0x4C7 texts, 0xF3/0x7A/0xA1/0xE5 windows; 3F38(3C3C(6)) rows and 0x4C0-0x4C7 rank cells. |
| 80172BA8 | fn_1x72ba8 | fn_1x72ba8 | src/anim/rowa.c |  |  |
| 80173008 | - | func_80173008 | src/anim/rowb.c |  |  |
| 80173654 | shop_banner_x15_window_xc8_x7a_xb9 | shop_banner_x15_window_xc8_x7a_xb9 | src/anim/gen497.c |  | shop banner: 0x15 window, 0xC8/0x7A/0xB9 windows, 0x4C0 gate; loop L173730 on 5A90(0x20). |
| 80173780 | fn_1x73780 | fn_1x73780 | src/battle/rown.c |  |  |
| 80173ED8 | shop_stat_block_called_by_the_e8_f | shop_stat_block_called_by_the_e8_f | src/anim/gen956.c |  | shop stat block (called by the 801721E8/80171F90 family): 0x15 window + 3B04 statue reads; the a3/t1 register gates choose among the stat di |
| 80174348 | shop_rows_x128a_text_x4c_x4e_x4a_x | shop_rows_x128a_text_x4c_x4e_x4a_x | src/anim/gen866.c |  | shop rows: 0x128A text + 0x4C/0x4E/0x4A/0x49/0x73 windows, 80170458 + 8017F8F8 rows; gate 4120(0x202). |
| 801743E0 | fn_1x743e0 | fn_1x743e0 | src/anim/gen238.c | Y |  |
| 801745F4 | shop_title_xfe0_x19_x18_windows_xc | shop_title_xfe0_x19_x18_windows_xc | src/anim/gen557.c |  | shop title: 0xFE0/0x19/0x18 windows, 0xCDB/0xCEB texts, 73E0(0x202) gates; loops L17464C and L174650. |
| 80174710 | fn_1x74710 | fn_1x74710 | src/anim/gen988.c | Y |  |
| 80174774 | - | - | - | Y |  |
| 8017477C | fn_1x7477c | fn_1x7477c | src/anim/gen343.c | Y |  |
| 80174880 | battle_action_confirm_overlay_memb | battle_action_confirm_overlay_memb | src/anim/gen290.c |  | battle action-confirm overlay: 4 members; each gets a highlight pass (6630/5574(0xA) + 4008(0x38) select-read) and a detail pass (6630/4248( |
| 80174CE4 | shop_stats_x30_x32_windows_x33_x34 | shop_stats_x30_x32_windows_x33_x34 | src/anim/gen338.c |  | shop stats: 0x30/0x32 windows, 0x33/0x34 profit cells, 3F94/ 7FCC(3B9C) rows; loops L174D04/L174D14 (5A90(0x10)). |
| 80174F0C | fn_1x74f0c | fn_1x74f0c | src/anim/gen01658.c |  |  |
| 80174F64 | fn_1x74f64 | fn_1x74f64 | src/anim/gen955.c |  |  |
| 80175004 | shop_rows_x1700_x1288_texts_x7a_xc | shop_rows_x1700_x1288_texts_x7a_xc | src/anim/gen691.c |  | shop rows: 0x1700/0x1288 texts, 0x7A/0xCDB/0xCDC windows; 5574 gates pick the 0x1E/0x7E rows and 0xCDB/0xCDC fills. |
| 801750DC | fn_1x750dc | fn_1x750dc | src/anim/gen41.c |  |  |
| 80175494 | shop_rows_x1700_text_x7a_window_xc | shop_rows_x1700_text_x7a_window_xc | src/anim/gen628.c |  | shop rows: 0x1700 text, 0x7A window, 0xCFE cell; 5574(1) gate; loop L175534 on 5A90(0x10). |
| 8017559C | shop_buy_list | shop_buy_list | src/anim/gen277.c |  | shop buy list: 0x1700 gate picks the 0xD25 cells vs the 0xCF5/ 0xCF7/0xD1D/0xD1F/0xD21/0xCD7/0xCD9/0xCDD/0xCE0 families (6CF4/81B0 pairs). |
| 801757A4 | shop_rows_xcdb_xbd5_cells_values_l | shop_rows_xcdb_xbd5_cells_values_l | src/anim/gen818.c |  | shop rows: 0xCDB/0xBD5 cells, 4264/7894 values; loop L1757BC on 5958(0x100). |
| 8017583C | shop_dungeon_item_menu_x93_window | shop_dungeon_item_menu_x93_window | src/anim/gen248.c |  | shop/dungeon item menu: 0x93 window, 0x1281-0x1286 texts; 5574 key-code ladders route through 885C color fills; exits at L75B50. |
| 80175B60 | shop_rows_xd4_window_x2115_x6fe_x7 | shop_rows_xd4_window_x2115_x6fe_x7 | src/anim/gen627.c |  | shop rows: 0xD4 window, 0x2115/0x6FE/0x700 texts + 0x6FE/0x6FF window rows; gate 6434(0x202). |
| 80175CB4 | shop_rows_xddb_cells_loops_l175ccc | shop_rows_xddb_cells_loops_l175ccc | src/anim/gen715.c |  | shop rows: 0xDDB cells; loops L175CCC/L175CD0/L175D20 on 4120(0x202)/5A90(0x80). |
| 80175D90 | fn_1x75d90 | fn_1x75d90 | src/anim/gen744.c | Y |  |
| 80175E08 | fn_1x75e08 | fn_1x75e08 | src/anim/gen607.c | Y |  |
| 80175E88 | fn_1x75e88 | fn_1x75e88 | src/anim/gen817.c | Y |  |
| 80175F00 | row_picker_xcc_window_x1003_gate_e | row_picker_xcc_window_x1003_gate_e | src/anim/gen389.c | Y | row picker: 0xCC window + 0x1003 gate; 80175E88 header; then the 4248(0x20)/0x10/0x8 row-gate ladder and 80170458 row render. |
| 80176060 | battle_godtext_a | battle_godtext_a | src/anim/gen241.c |  |  |
| 801762D0 | battle_timer_screen_staged_poll_lo | battle_timer_screen_staged_poll_lo | src/anim/gen276.c |  | battle timer screen: staged poll loops reading 0x1900/0x1A00 (and 0x2000/0x1FFF/0x1A05/0x1E00/0x2000 gate texts) with 90EC/6364/ 5958 pacing |
| 801764DC | battle_option_icon_row_windows_wit | battle_option_icon_row_windows_wit | src/anim/gen316.c |  | battle option-icon row: 2/3 windows with 4248(0xBF) fills, then per-index 4120(0x202) gates showing the 0x54/0x50/0x52/0x53/0x55/ 0x51/0x56/ |
| 8017668C | fn_1x7668c | fn_1x7668c | src/rows/gen_8017668C.c | Y |  |
| 801766B0 | fn_1x766b0 | fn_1x766b0 | src/anim/gen510.c | Y |  |
| 80176748 | fn_1x76748 | fn_1x76748 | src/anim/gen537.c | Y |  |
| 801767D8 | shop_row_xfd8_title_x3e_x3d_window | shop_row_xfd8_title_x3e_x3d_window | src/anim/gen328.c |  | shop row: 0xFD8 title + 0x3E/0x3D windows (76BC/7CC8 pair cells), 0x5000 gate, 8011F724-style sprint; loops L1768B4/L1768B8 (4968/5A90(0x800 |
| 801769B4 | shop_sell_flow_x1700_header_x7a_x1 | shop_sell_flow_x1700_header_x7a_x1 | src/shop/rowf.c |  | shop sell-flow: 0x1700 header, 0x7A/0x12/0x13 rows, 0x2115/0x420B/ 0x4300/0x4301/0x4304 titles with 800F9868 catalog + 80181DA4 commit; loop |
| 80176B6C | fn_1x76b6c | fn_1x76b6c | src/anim/gen496.c | Y |  |
| 80176BFC | fn_1x76bfc | fn_1x76bfc | src/anim/gen714.c | Y |  |
| 80176C6C | shop_row_x43_window_x1fff_xfff_x7f | shop_row_x43_window_x1fff_xfff_x7f | src/anim/gen626.c |  | shop row: 0x43 window; 4264(0x1FFF)/4064 + 4264(0xFFF)/4064 (0x7F/0x7E7E) value cells. |
| 80176D40 | shop_stat_icons_the_fixed_icon_cel | shop_stat_icons_the_fixed_icon_cel | src/anim/gen342.c |  | shop stat icons: the fixed 1-3/5-12 icon-cell row (654C/824C pairs), 0x420B/0x420C icons, 0x15/0x16/0x17/0x22-0x2F windows, 8017EA90 commit. |
| 80176E98 | fn_1x76e98 | fn_1x76e98 | src/anim/gen437.c | Y |  |
| 80176F60 | shop_row_52 | shop_row_52 | src/anim/gen01431.c | Y |  |
| 80176F88 | battle_anim_c3c_x300_b04_b9cx2_gat | battle_anim_c3c_x300_b04_b9cx2_gat | src/anim/gen1080.c |  | battle anim: 3C3C(0x300)/3B04/3B9Cx2 gates; 9330 row then 95A0 close. |
| 80177178 | fn_1x77178 | fn_1x77178 | src/rows/gen_80177178.c |  |  |
| 801771AC | fn_1x771ac | fn_1x771ac | src/anim/gen01430.c | Y |  |
| 801771D4 | fn_1x771d4 | fn_1x771d4 | src/anim/gen1079.c | Y |  |
| 80177224 | fn_1x77224 | fn_1x77224 | src/anim/gen987.c | Y |  |
| 80177284 | fn_1x77284 | fn_1x77284 | src/anim/gen986.c | Y |  |
| 801772E4 | shop_item_cells_xd9_xda_windows_x1 | shop_item_cells_xd9_xda_windows_x1 | src/anim/gen536.c |  | shop item cells: 0xD9/0xDA windows, 0x1BCD/0x1BCF/0x1BD1 texts, 801771D4 rows + 6BE0/922C + 6DE8/87DC cell pairs. |
| 801773D4 | fn_1x773d4 | fn_1x773d4 | src/anim/gen1198.c | Y |  |
| 801773FC | fn_1x773fc | fn_1x773fc | src/rows/gen_801773FC.c |  |  |
| 801774B4 | battle_anim_chain_f94_af8_f538_dd0 | battle_anim_chain_f94_af8_f538_dd0 | src/rows/gen_801774B4.c |  | battle anim chain: 80189F94/80192AF8/8018F538/80178DD0 preps, 80194018(1)+8019418C+80178BB4+80178730 core, then 6 splash rows (801782C0x2/80 |
| 801776E8 | battle_anim_b8_x2_f9bd0_c8_bec_row | battle_anim_b8_x2_f9bd0_c8_bec_row | src/anim/gen01657.c |  | battle anim: 801947B8 x2/800F9BD0/801928C8/80192BEC rows. |
| 80177790 | battle_anim_register_gates_route_f | battle_anim_register_gates_route_f | src/rows/gen_80177790.c |  | battle anim: register gates route 80198058/80197FB8 vs the 80194518/801947B8/80182AF0 row; ends 80197208/80195120/ 80197208/80194988 through |
| 8017794C | battle_input_gate_locks_clears_the | battle_input_gate_locks_clears_the | src/rows/gen_8017794C.c |  | battle input gate: locks/clears the input latch; returns the clamped menu index when accepted, else 0. |
| 801779E4 | battle_substate_router_early_v1_v0 | battle_substate_router_early_v1_v0 | src/anim/gen1197.c |  | battle substate router. Early v1/v0 gates select 80184AF8 variants; the main chunk then dispatches to 80183A80 / 80185380 / (80183244 | 8018 |
| 80177DAC | fn_1x77dac | fn_1x77dac | src/rows/gen_80177DAC.c | Y |  |
| 80177DCC | fn_1x77dcc | fn_1x77dcc | src/rows/gen_80177DCC.c | Y |  |
| 80177DEC | battle_anim_chain_e8_c_c14_ef0c_fe | battle_anim_chain_e8_c_c14_ef0c_fe | src/anim/rowc.c |  | battle anim chain: 80194394/801928E8/80194988/8017841C/ 80178C14/8011EF0C/800FEF7C/801947B8/8017D078/8017E220/ 8017E740/80178D00; linear. |
| 80177F3C | - | - | - |  | battle anim: v1/v0 gates; 80194BC4/801949F8 rows, 801942FC commits, then 80186810 (deep-pass) + 80179958 via the L178064 latch. |
| 801780AC | - | - | - | Y |  |
| 801780B4 | battle_anim_d8_preps_loop_l17815c | battle_anim_d8_preps_loop_l17815c | src/anim/gen01656.c |  | battle anim: 80197378/801972D8/80197308 preps; loop L17815C with 80197338 + s2/s7 regcmp branch to 801972D8; 80197398 closes. |
| 80178220 | - | - | - |  |  |
| 801782C0 | - | - | - |  | battle anim: 801971A8 x2 + 8017F644 rows. |
| 8017835C | - | - | - |  | battle anim: 801971A8(2) x2 + 801973B8 x2 rows. |
| 8017841C | battle_anim_twin_v0_gate_ladders_l | battle_anim_twin_v0_gate_ladders_l | src/rows/gen_8017841C.c |  | battle anim: twin v0 gate ladders (L178480..L178504, L1785C0..L178644); 80194018(1)/80187D1C/80178890/80178BB4/ 80187B00/80194394/80197708/8 |
| 80178730 | battle_anim_a8_x3_x2_rows_e8_spin | battle_anim_a8_x3_x2_rows_e8_spin | src/anim/gen01655.c |  | battle anim: 801970A8 x3 / 80197168 x2 rows; 801971E8 spin loop on 0xE0/1/0x200. |
| 80178890 | - | - | - |  | battle anim prep: clears 0x9F panel records (0xE stride) and writes the master header; D_8019EE28 = 0. |
| 8017890C | - | - | - |  | battle anim: 801981D8/80198208 x2/8019822C/801981F8 rows. |
| 80178988 | - | - | - |  | anim/event: 8018F068 x2 preps, 8018F708 spin; loop L1789EC with 80191878/80192478 rows and 801928E8/80192614 gates. |
| 80178A58 | - | - | - |  | battle anim: two 80178988 + 80194640x2 + 80194394 blocks. |
| 80178BB4 | fn_1x78bb4 | fn_1x78bb4 | src/rows/gen_80178BB4.c |  |  |
| 80178C14 | - | - | - |  | battle status-table init: header fields, per-slot geometry and the layout state blocks (0xEE/0xF2/0x230/0x234/0x242 rows). |
| 80178D00 | battle_row_commit_seven_e794_write | battle_row_commit_seven_e794_write | src/rows/gen_80178D00.c |  | battle row-commit: seven 8017E794 writes. |
| 80178DD0 | - | - | - |  | battle anim: 801976E8 + 8x 80197658 rows + 801976F8/80197B24/ 8018F168(1)/8018F1F8/8018F0D8 preps; loop L178F08 on 80197BB4. |
| 80178F20 | - | - | - |  | battle anim loops: 2x (80178988/97458/97468/79248 + 94640x2) pre-roll, then two 971E8 wait loops. |
| 80179248 | - | - | - |  | anim event builder: 3 words + 4x2 u16 pairs into dst. |
| 801792D0 | battle_anim_a0x2_x2_pairs_linear | battle_anim_a0x2_x2_pairs_linear | src/rows/gen_801792D0.c |  | battle anim: 80194640/80194394/801946A0x2/80194700x2/ 80194518 pairs; linear. |
| 801793F8 | battle_anim_e8_fc_preps_v1_v0_gate | battle_anim_e8_fc_preps_v1_v0_gate | src/anim/gen01654.c |  | battle anim: 80194394/801928E8/801942FC preps; v1/v0 gate picks 8008CB5C/800888C0 rows; 801792D0 closes. |
| 801794A8 | - | - | - |  |  |
| 80179500 | - | - | - | Y |  |
| 8017953C | - | - | - |  |  |
| 801795BC | - | - | - |  | battle anim: 80194700/80194394 x2 + 80194518/80194394 pair rows; linear. |
| 80179670 | - | - | - |  | battle animation driver: 80178988/801942FC/8017953C preps, 8x 80197668 sprite rows, 80192BEC/80192AF8 sound rows, 8018F538/80178DD0/80178BB4 |
| 801798F0 | - | - | - |  |  |
| 80179930 | - | - | - |  |  |
| 80179958 | - | - | - |  | battle frame ticker: cascading 1/60 counters at 0x800D16A3, rolling into the next when a level wraps (0x3C for the first). |
| 801799F0 | - | - | - |  | v0 gates (L79D90/L79D9C) |
| 80179FBC | battle_anim_v0_v1_gate_tree_row_at | battle_anim_v0_v1_gate_tree_row_at | src/anim/gen1301.c |  | battle anim: v0/v1 gate tree; 80197208 row at L17A17C. |
| 8017A208 | battle_anim_jr_a0_dispatch_gate_tr | battle_anim_jr_a0_dispatch_gate_tr | src/anim/gen01653.c |  | battle anim: jr-$a0 dispatch; gate tree with 80179FBC row (L17A540), 80197208 + 8017CCB0 rows (L17A6D8/L17A8A4); returns L17A908. |
| 8017AAC4 | - | - | - |  |  |
| 8017BDB0 | - | - | - |  |  |
| 8017CCB0 | battle_anim_x_rows_with_v0_gates_t | battle_anim_x_rows_with_v0_gates_t | src/anim/gen1196.c |  | battle anim: 4x 80197208 rows with v0 gates + tail gates. |
| 8017CE9C | battle_anim_v0_gates_spin_loop_clo | battle_anim_v0_gates_spin_loop_clo | src/anim/gen1300.c |  | battle anim: v0 gates; 80195120 + 80197208 spin loop; closes with 801971A8/801973B8/80197208. |
| 8017D078 | selection_screen_driver_register_g | selection_screen_driver_register_g | src/rows/gen_8017D078.c |  | selection-screen driver. Register gates (a0/a1/a3/v1/s3) are the cursor/state comparisons; s3 = selection index. All calls are the inventory |
| 8017D7D8 | battle_sprite_blit_copies_width_ro | battle_sprite_blit_copies_width_ro | src/rows/gen_8017D7D8.c |  | battle sprite blit: copies width rows of 0x20 u16 cells from the palette/pattern table into the framebuffer row. |
| 8017D898 | battle_sprite_blit_plane_variant_m | battle_sprite_blit_plane_variant_m | src/rows/gen_8017D898.c |  | battle sprite blit (plane variant): mirrors 8017D7D8 with the source plane select bit from rec[0]. |
| 8017D980 | battle_sprite_blit_plane_variant_s | battle_sprite_blit_plane_variant_s | src/rows/gen_8017D980.c |  | battle sprite blit (plane variant 2): select bit tracks the row counter inside the pitch. |
| 8017DA64 | battle_sprite_blit_stagger_variant | battle_sprite_blit_stagger_variant | src/rows/gen_8017DA64.c |  | battle sprite blit (stagger variant): 2-bit selection with per-pixel phase flip. |
| 8017DB7C | battle_anim_dispatch_a0_v0_v0_gate | battle_anim_dispatch_a0_v0_v0_gate | src/anim/gen01652.c |  | battle anim dispatch: a0/v0 + v0 gate tree routes 8017D7D8 / 8017D898 / 8017D980 / 8017DA64 rows. |
| 8017DC28 | battle_anim_dispatch_twin_a0_v0_v0 | battle_anim_dispatch_twin_a0_v0_v0 | src/anim/gen01651.c |  | battle anim dispatch (twin): a0/v0 + v0 gates route 8017D7D8 / 8017DD08 / 8017D980 / 8017DF20 rows. |
| 8017DD08 | fn_1x7dd08 | fn_1x7dd08 | src/rows/gen_8017DD08.c |  |  |
| 8017DF20 | battle_tile_blit_x300_pattern_vari | battle_tile_blit_x300_pattern_vari | src/rows/gen_8017DF20.c |  | battle tile blit (0x300, pattern variant): same grid walk as 8017DD08 with the 2-bit plane select folded from rec[0]/rec[2] and the D_801DEF |
| 8017E220 | battle_anim_chain_x520_a0_v1_latch | battle_anim_chain_x520_a0_v1_latch | src/rows/gen_8017E220.c |  | battle anim chain (0x520): a0/v1 latch + jr-$a0 sub-table (L8017E2CC); gate ladder through L8017E3D4/L8017E4C4 to the row-driver blocks — a  |
| 8017E740 | fn_1x7e740 | fn_1x7e740 | src/rows/gen_8017E740.c |  |  |
| 8017E794 | battle_anim_spin_loop_l17e8cc_gate | battle_anim_spin_loop_l17e8cc_gate | src/anim/gen1042.c |  | battle anim: 80195120 + 80197208 spin loop (L17E8CC); gates; returns at L17E90C. |
| 8017E930 | battle_anim_twin_spin_loop_l17ea2c | battle_anim_twin_spin_loop_l17ea2c | src/anim/gen1078.c |  | battle anim (twin): 80195120 + 80197208 spin loop (L17EA2C). |
| 8017EA90 | fn_1x7ea90 | fn_1x7ea90 | src/rows/gen_8017EA90.c |  |  |
| 8017EAC8 | battle_anim_wide_v0_gate_ladder_l1 | battle_anim_wide_v0_gate_ladder_l1 | src/anim/gen01650.c |  | battle anim: wide v0 gate ladder (L17EB3C..L17EF48) then the 2x 80194640 + spin + 80194640 close (L17F01C). |
| 8017F148 | - | func_8017F148 | src/anim/gen01429.c |  | battle anim: wide v0 gate ladder (L17F1EC..L17F398 spins), L17F25C main loop; closes with 2x 80194640. |
| 8017F5C0 | battle_v0_gate_picks_eac8_vs_f148 | battle_v0_gate_picks_eac8_vs_f148 | src/anim/gen01649.c |  | battle: v0 gate picks 8017EAC8 vs 8017F148 rows. |
| 8017F644 | battle_anim_x_b8_rows_v0_gate_x | battle_anim_x_b8_rows_v0_gate_x | src/anim/gen01648.c |  | battle anim: 6x 801973B8 rows, v0 gate, 8x 801973B8 tail. |
| 8017F8F8 | battle_mode_dispatch | battle_mode_dispatch | src/battle/battle_rows2.c |  |  |
| 8017F954 | - | - | - |  |  |
| 8017F9A8 | stack_swap_trick_sp_swapped_throug | stack_swap_trick_sp_swapped_throug | src/rows/gen_8017F9A8.c |  | stack-swap trick: SP swapped through a scratch frame at 0x1F80037C before calling 8017F954 (params masked). |
| 8017F9FC | anim_cmd_tail | anim_cmd_tail | src/battle/animrows.c |  |  |
| 8017FA2C | battle_anim_rows_a | battle_anim_rows_a | src/battle/animrows.c |  | battle anim: v0 spin loops with 2x 80194640; closes 801971A8(1)/8017F9FC. |
| 8017FC50 | - | - | - |  | battle anim phase machine (0x398): t0/v0 regcmp spin ladder (L8017FC28..L8017FF94) — the four move segments each poll a t0 register until it |
| 8017FFE8 | - | - | - |  | battle anim: v0 spin loops with 2x 80194640; 8017FC50(0xE0/ 0x80) row via v1/v0 gate; 801971A8(1)/8017F9FC tail. |
| 80180314 | battle_anim_v0_spin_loops_l180338 | battle_anim_v0_spin_loops_l180338 | src/event/gen1299.c |  | battle anim: v0 spin loops (L180338/L180350) then 80194640. |
| 80180414 | - | func_80180414 | src/event/gen1298.c |  | battle anim (twin): spin loops then 80194640. |
| 80180504 | battle_anim_twin_spin_loops_then | battle_anim_twin_spin_loops_then | src/event/gen1297.c |  | battle anim (twin): spin loops then 80194640. |
| 801805F8 | - | - | - |  | battle anim phase machine (0x2E0): a0/s0 + a0/v0 regcmp ladder (L18060C..L18088C) with spin loops — register-only. |
| 801808D8 | battle_anim_fp_regcmp_spin_loops_d | battle_anim_fp_regcmp_spin_loops_d | src/rows/gen_801808D8.c |  | battle anim: fp regcmp spin loops; 801824D8 gates route 801805F8; 80194640 closes via L180A60. |
| 80180BB4 | battle_anim_d8_spin_row | battle_anim_d8_spin_row | src/event/gen01647.c |  | battle anim: 801824D8 spin; 80194640 row. |
| 80180C90 | battle_anim_twin_v0_spin_l180ce8_t | battle_anim_twin_v0_spin_l180ce8_t | src/event/gen01646.c |  | battle anim (twin): v0 spin (L180CE8) then 80194640. |
| 80180D64 | battle_anim_twin_v0_spin_l180dbc_t | battle_anim_twin_v0_spin_l180dbc_t | src/event/gen01645.c |  | battle anim (twin): v0 spin (L180DBC) then 80194640. |
| 80180E28 | battle_anim_twin_v0_spin_l180e74_t | battle_anim_twin_v0_spin_l180e74_t | src/event/gen01644.c |  | battle anim (twin): v0 spin (L180E74) then 80194640. |
| 80180EF0 | - | - | - |  | window slot add: pushes (a0 & 0xFFF0, a1) and terminates the run with -1. |
| 80180F70 | battle_anim_v0_gates_f0_l181004_vs | battle_anim_v0_gates_f0_l181004_vs | src/event/gen1296.c |  | battle anim: v0 gates; 801811F0 (L181004) vs 801810B8 (L181040) rows. |
| 801810B8 | battle_anim_bb4_e28_d64_c90_row_lo | battle_anim_bb4_e28_d64_c90_row_lo | src/event/gen1195.c |  | battle anim: 80180BB4/80180E28/80180D64/80180C90 row loop L181180 on v0 gates; returns at L1811D0. |
| 801811F0 | battle_anim_v0_gates_bb4_row_loop | battle_anim_v0_gates_bb4_row_loop | src/event/gen1295.c |  | battle anim: v0 gates; 80180BB4 row loop L1812B0. |
| 80181300 | battle_anim_v1_v0_gates_c0_row_at | battle_anim_v1_v0_gates_c0_row_at | src/event/gen01643.c |  | battle anim: v1/v0 gates; 801813C0 row at L18138C. |
| 801813C0 | battle_anim_v0_gates_d8_row_loop_l | battle_anim_v0_gates_d8_row_loop_l | src/event/gen1294.c |  | battle anim: v0 gates; 801808D8 row loop L181450. |
| 80181498 | battle_anim_d8_spin_loops_l181500 | battle_anim_d8_spin_loops_l181500 | src/event/gen1293.c |  | battle anim: 801824D8 spin loops (L181500/L181578), 80194640 closes. |
| 80181604 | battle_anim_rows_b | battle_anim_rows_b | src/event/gen01642.c |  | battle anim: s4 gates; 801808D8/80180504/80180414/80180314 row loop L1816CC; closes 801971A8/8017F9FC. |
| 801817EC | battle_anim_t2_v0_regcmp_spin_loop | battle_anim_t2_v0_regcmp_spin_loop | src/rows/gen_801817EC.c |  | battle anim: t2/v0 regcmp spin loops (L1818E8/L1819BC/ L181A94/L181B6C); pure registers. |
| 80181C20 | battle_anim_s5_v0_s5_s6_latches_d8 | battle_anim_s5_v0_s5_s6_latches_d8 | src/event/gen01641.c |  | battle anim: s5/v0 + s5/s6 latches; 801808D8 row loop; 801817EC then 801971A8/8017F9FC closes. |
| 80181DA4 | battle_anim_d8_spin_loops_l181e04 | battle_anim_d8_spin_loops_l181e04 | src/event/gen01428.c |  | battle anim: 801824D8 spin loops L181E04/L181FF4 with 80194640 rows; returns at L1820CC. |
| 801820F4 | battle_anim_row_v0_spin_loops_l182 | battle_anim_row_v0_spin_loops_l182 | src/event/gen01427.c |  | battle anim: 80194640 row + v0 spin loops L18220C/L182200. |
| 8018226C | battle_anim_v0_gate_tree_with_spin | battle_anim_v0_gate_tree_with_spin | src/event/gen01640.c |  | battle anim: v0 gate tree with spin loops L1822D4/L1822EC around the single 80194640 row (L182388); returns L1823D0. |
| 801823F8 | battle_anim_d8_spin_loops_l182450 | battle_anim_d8_spin_loops_l182450 | src/event/gen01426.c |  | battle anim: 801808D8 spin loops (L182450/L18249C) with 80194394 rows. |
| 801824D8 | x_byte_bit_gather_rotates_four_inp | x_byte_bit_gather_rotates_four_inp | src/rows/gen_801824D8.c |  | 4x byte bit-gather: rotates four input bytes and packs one output byte per pass into out[0..3]. |
| 801825B8 | battle_anim_v1_v0_v0_gates_spin_lo | battle_anim_v1_v0_v0_gates_spin_lo | src/event/gen1292.c |  | battle anim: v1/v0 + v0 gates; spin loops L182608/L18266C. |
| 801826C8 | battle_anim_spin_loops_l1827a8_l18 | battle_anim_spin_loops_l1827a8_l18 | src/event/gen1291.c |  | battle anim: 80197208 spin loops (L1827A8/L1828F4/L182A20) gated by v1/v0 + a0/v0 latches; returns at L182AC0. |
| 80182AF0 | battle_anim_v0_v1_v0_gate_tree_b8 | battle_anim_v0_v1_v0_gate_tree_b8 | src/event/gen01425.c |  | battle anim: v0 + v1/v0 gate tree; 801825B8/801826C8 rows via L182C74. |
| 80182CB4 | battle_anim_v1_v0_v0_gates_rows | battle_anim_v1_v0_v0_gates_rows | src/event/gen1290.c |  | battle anim: v1/v0 + v0 gates; 80197208 rows. |
| 80182DDC | fn_1x82ddc | fn_1x82ddc | src/rows/gen_80182DDC.c | Y |  |
| 80182E18 | fn_1x82e18 | fn_1x82e18 | src/rows/gen_80182E18.c | Y |  |
| 80182E54 | battle_anim_v0_t0_v0_gates_a8_tail | battle_anim_v0_t0_v0_gates_a8_tail | src/event/gen01639.c |  | battle anim: v0 + t0/v0 gates; 801971A8(1)/80197208 tail. |
| 80183048 | battle_anim_fb8_preps_then_x_ddc_e | battle_anim_fb8_preps_then_x_ddc_e | src/event/gen01638.c |  | battle anim: 80198058/80197FB8 preps then 4x 80182DDC/80182E18 pairs. |
| 80183244 | battle_anim_fsm_v0_t1_v0_gates_rou | battle_anim_fsm_v0_t1_v0_gates_rou | src/event/gen1139.c |  | battle anim FSM: v0 + t1/v0 gates route the 80182E54 spin loops (L183354/L183368 or L183504/L183518); L183650 branch runs 80183048; tail gat |
| 80183A80 | battle_anim_x_a8_spin_loops_plus_a | battle_anim_x_a8_spin_loops_plus_a | src/event/gen1194.c |  | battle anim: 3x 801971A8(1)/80197208 spin loops plus a final 801971A8(1)/80197208 pair. |
| 80183F40 | - | - | - |  | hardware-beat driver for the battle effect overlay: writes the scratchpad timers (0x1F800012/16/18/1A) with step counts 0x10/0x14/ 0x30/0x40 |
| 801847D8 | - | - | - |  | battle anim loop: 5x 801970A8 pre-roll, L1848B0 loop (854A0/ 97288 reads), L184950 loop (85540/97288 rows), tail 972B8 latches. |
| 80184AF8 | battle_anim_chain_s2_s1_v0_registe | battle_anim_chain_s2_s1_v0_registe | src/rows/gen_80184AF8.c |  | battle anim chain: s2/s1/v0 register gates select the sprite slots; 3x 801971A8(2), 801951E0/801973B8 reads, 5x 80197248 row commits; return |
| 80185030 | - | - | - |  | sequence-driver for the battle portrait loop: four 971A8(1)/973B8(1) commits, then 5 poll loops (854A0/97288 pairs) with 972B8 selects betwe |
| 80185380 | battle_anim_gates_v0_spin_l1853ac | battle_anim_gates_v0_spin_l1853ac | src/event/gen01637.c |  | battle anim: 80197248 gates (v0 spin L1853AC); v1/a0 latch rows; returns at L18548C. |
| 801854A0 | - | - | - |  |  |
| 80185540 | - | - | - |  | battle anim: 80197338/80197308(2)/801971A8 rows. |
| 80185634 | - | - | - |  | battle slot search: walk i while rows[i].field2 + i == a2; returns the failing index. |
| 8018567C | - | - | - |  | battle slot search (linked rows, field2/6): walk while the row B field links forward; returns i + 1. |
| 801856CC | - | - | - |  | battle slot search (field0 variant). |
| 80185714 | - | - | - |  | battle slot search (linked rows, field0/4 variant). |
| 80185764 | battle_cutscene_driver_s2_v0_latch | battle_cutscene_driver_s2_v0_latch | src/rows/gen_80185764.c |  | battle cutscene driver: s2/v0 latches pick 801856CC/80185714 vs 80185634/8018567C row loops; returns at L185AA0. |
| 80185AC8 | battle_cutscene_b9c_gate_rows_with | battle_cutscene_b9c_gate_rows_with | src/event/gen690.c |  | battle cutscene: 3B9C gate rows with spins; 80185764 called 3x (L185C70/L185D8C/L185EF4); returns at L185F04. |
| 80185F2C | - | - | - |  | event: 80189820/80189884/8018CAD8(1)/8018A140(0x7F)/ 80189AE8/8018C608 rows; linear. |
| 80185FA0 | - | - | - |  |  |
| 8018600C | - | - | - | Y |  |
| 80186024 | - | - | - |  |  |
| 801860A0 | - | - | - |  | DF/battle timer: decrement the countdown; when expired, set the delay and adjust the active-panel counter (a0 = command). |
| 80186120 | battle_fsm_v0_t0_v0_a3_v0_a2 | battle_fsm_v0_t0_v0_a3_v0_a2 | src/event/gen01424.c |  | battle FSM: v0/t0+v0/a3+v0/a2+v0/a1 regcmp ladder (L186148); v1/v0 gate routes 801875AC row (L1861A8) or the 80188240/ 801881AC pair (L18623 |
| 80186810 | - | - | - |  | battle FSM (0xBF4): jr-$a0 dispatch handler; register gate ladder with documented segments. Linear call chain. |
| 80187404 | - | - | - |  |  |
| 8018746C | battle_v0_gates_c_row_at_l1874e8 | battle_v0_gates_c_row_at_l1874e8 | src/event/gen01636.c |  | battle: v0 gates; 8018767C row at L1874E8. |
| 80187504 | battle_v0_gates_c_row_at_l187590 | battle_v0_gates_c_row_at_l187590 | src/event/gen01423.c |  | battle: v0 gates; 8018767C row at L187590. |
| 801875AC | fn_1x875ac | fn_1x875ac | src/rows/gen_801875AC.c |  |  |
| 80187608 | - | - | - |  | battle rows: 80188C58(1)/8018ECE8/80188C58(0xFF)/80188EF8. |
| 8018767C | fn_1x8767c | fn_1x8767c | src/rows/gen_8018767C.c |  |  |
| 801876E0 | - | - | - |  | battle menu: jr-$a0 dispatch (sub-rows); 80188240 gate runs 80187924, else 801917F8/80187A10 or 80189B8C/80191878 rows; returns at L187910/L |
| 80187924 | - | - | - |  | battle: 80191AE8(0xE)/80191878(0xD)/80191878(0x15) rows. |
| 801879E4 | - | - | - |  |  |
| 80187A10 | battle_v1_v0_v0_gates_b8c_b4_rows | battle_v1_v0_v0_gates_b8c_b4_rows | src/event/gen01422.c |  | battle: v1/v0 + v0 gates; 80189B8C(1)/801919B4(6) rows. |
| 80187AA0 | - | - | - |  | copies two words (unaligned) from D_8019B074 to D_801F6230 and clears the layout latch. |
| 80187AEC | - | - | - | Y |  |
| 80187B00 | - | - | - |  |  |
| 80187B50 | battle_c40_rows_s0_v1_latches_rout | battle_c40_rows_s0_v1_latches_rout | src/event/gen1289.c |  | battle: 80188240/80193C40/80193924 rows; s0/v1 latches route 801881AC or the 80188240 spin loops. |
| 80187C20 | fn_1x87c20 | fn_1x87c20 | src/rows/gen_80187C20.c | Y |  |
| 80187C34 | - | - | - | Y |  |
| 80187C54 | - | - | - |  |  |
| 80187C9C | - | - | - | Y |  |
| 80187CB8 | - | - | - | Y |  |
| 80187CD0 | fn_1x87cd0 | fn_1x87cd0 | src/rows/gen_80187CD0.c |  |  |
| 80187D1C | battle_v0_gates_cd0_row_when_nonze | battle_v0_gates_cd0_row_when_nonze | src/event/gen01421.c |  | battle: v0 gates; 80187CD0 row when nonzero. |
| 80187DAC | battle_ff0ac_row_loop_l187dc0 | battle_ff0ac_row_loop_l187dc0 | src/event/gen01420.c |  | battle: 800FF0AC row loop L187DC0. |
| 80187E5C | - | - | - |  | menu-box author: rejects when the box is already active; fills the D_801F6678 box record. |
| 80187EC4 | battle_ae8_gate_ca18_ae28_rows_dcd | battle_ae8_gate_ca18_ae28_rows_dcd | src/event/gen1193.c |  | battle: 80188AE8(8) gate; 8018CA18/8018AE28 rows; 8018DCD8 (0x4000) + 8018DFA0/8018DFC4/8018DFE8/80191858 block; 8018E4E8 x2 gate; 80188C58( |
| 801881AC | placeholder_unused | placeholder_unused | src/rows/gen_801881AC.c |  | box claim: promote the pending box state and arm up to two cursor entries into the EF5C slot table. |
| 80188240 | fn_1x88240 | fn_1x88240 | src/rows/gen_80188240.c | Y |  |
| 80188250 | battle_v1_v0_v0_gates_dc58_row_at | battle_v1_v0_v0_gates_dc58_row_at | src/event/gen01635.c |  | battle: v1/v0 + v0 gates; 8018DC58(4) row at L188328. |
| 80188360 | - | - | - |  | battle: a1/v1 latch; 8018DC58(5) row. |
| 80188448 | battle_v0_gate_tree_on_the_e4_pair | battle_v0_gate_tree_on_the_e4_pair | src/event/gen01419.c |  | battle: v0 gate tree on the 80191638/801890E4 pair rows. |
| 801886B4 | - | - | - |  | battle: 8018E4E8 gate (called twice); row chain 80188FD0/ 8018C608/8018DDEC/8018B4C8/80191858/8018DFA0/8018DFC4/ 8018DFE8. |
| 801887A8 | battle_a0_v1_latch_v0_gate_c58_row | battle_a0_v1_latch_v0_gate_c58_row | src/event/gen01418.c |  | battle: a0/v1 latch + v0 gate; 80191C58 rows. |
| 801888BC | - | - | - |  | battle rows: 801886B4/801917B8/80191748/80189750(0x40)/ 801896C0. |
| 80188940 | event_f538_d8_a8_rows_spin_l1889b8 | event_f538_d8_a8_rows_spin_l1889b8 | src/event/gen01417.c |  | event: 8018F538/801917D8/80191838/801928A8/80191858 rows; spin L1889B8; 80191878(0xE) closes. |
| 80188A0C | - | - | - |  |  |
| 80188A60 | - | - | - |  | event: a0/v0 latch; 801917B8/80191748 rows + 80191878(0xE). |
| 80188AE8 | fn_1x88ae8 | fn_1x88ae8 | src/rows/gen_80188AE8.c |  |  |
| 80188B28 | - | - | - | Y |  |
| 80188B34 | - | - | - |  | battle: 80188AE8(1) gate; a1/a0 latch rows. |
| 80188BA8 | - | - | - |  | battle: 80188AE8(2) gate; a0/t0 + a3/t0 latch rows. |
| 80188C58 | battle_ae8_gate_v1_t0_a3_t0_a1 | battle_ae8_gate_v1_t0_a3_t0_a1 | src/rows/gen_80188C58.c |  | battle: 80188AE8(3) gate; v1/t0 + a3/t0 + a1/t0 latch rows. |
| 80188D28 | - | - | - |  | battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. |
| 80188DE8 | - | - | - |  | battle: 80188AE8(3) gate; a0/v1 + v0/a3 + a1/a3 latch rows. |
| 80188EA8 | - | - | - | Y |  |
| 80188EF8 | - | - | - |  |  |
| 80188F28 | - | - | - |  | battle: 80188AE8(3) gate; a1/a3 + a2/a3 + a0/a3 latches. |
| 80188FD0 | - | - | - |  | battle: 80188AE8(3) gate; v1/a3 + s0/v0 + a1/a3 + a0/v0 latch rows. |
| 801890E4 | battle_ae8_gate_d28_a1_a0_latch | battle_ae8_gate_d28_a1_a0_latch | src/rows/gen_801890E4.c |  | battle: 80188AE8(4) gate; 80188D28 + a1/a0 latch. |
| 80189190 | - | - | - |  | party-menu action dispatcher. s0 = action id; ids with dedicated handlers route straight, catalog/generic ids funnel through 801919B4(id). R |
| 80189590 | - | - | - |  |  |
| 8018960C | - | - | - |  |  |
| 80189678 | - | - | - | Y |  |
| 80189698 | - | - | - | Y |  |
| 801896C0 | event_a8_rows_v0_spin | event_a8_rows_v0_spin | src/event/gen01634.c |  | event: 80191838/801928A8/80191858 rows + v0 spin. |
| 80189750 | - | - | - |  |  |
| 80189790 | - | - | - |  | event: 8018AD28(8)/8018ADC8/8018CA18/8018C9B8(0x1010)/ 8018C858 prep rows; 8018C438/8018B548 tail. |
| 80189820 | - | - | - |  |  |
| 80189884 | - | - | - |  | event: 8018AE28 + a1/v0 latch + 8018C9B8/8018C7F8 rows. |
| 80189920 | event_v0_gate_ae28_t0_v0_latch_c9b | event_v0_gate_ae28_t0_v0_latch_c9b | src/event/gen01416.c |  | event: v0 gate; 8018AE28 + t0/v0 latch + 8018C9B8; 8018CA48 tail. |
| 80189A4C | - | - | - |  | event registry: registers a0 at slot a1 (stride 20); returns the slot or -1 when taken already. |
| 80189A90 | - | - | - |  | event registry (free): clears slot a0 (stride 20) and runs 8018B4C8 on its payload. |
| 80189AE8 | - | - | - |  |  |
| 80189B28 | - | - | - |  |  |
| 80189B8C | fn_1x89b8c | fn_1x89b8c | src/rows/gen_80189B8C.c |  |  |
| 80189BCC | event_cb88_row_v0_gates_returns_at | event_cb88_row_v0_gates_returns_at | src/event/gen01415.c |  | event: 8018CB88 row; v0 gates; returns at L189C24. |
| 80189C58 | event_v0_gate_on_c3e8_ba38_b838_ro | event_v0_gate_on_c3e8_ba38_b838_ro | src/event/gen01633.c |  | event: v0 gate on 8018C3E8(1); 8018BA38/8018B838(1) rows. |
| 80189CF4 | - | - | - |  |  |
| 80189D38 | - | - | - |  | event: 80189E44/8018C7C8 rows. |
| 80189E44 | - | - | - |  | sprite scale: two products folded into the panel size. |
| 80189F6C | - | - | - |  |  |
| 80189F94 | - | - | - | Y |  |
| 80189F9C | event_e8_prep_b4_loop_l189fac | event_e8_prep_b4_loop_l189fac | src/event/gen01632.c |  | event: 801975E8 prep + 801774B4 loop L189FAC. |
| 8018A058 | - | - | - |  | event: 80192AF8/8018A1B8 preps; 8018A140(0xD1)/8018AAC4 tail. |
| 8018A140 | - | - | - |  |  |
| 8018A1B8 | event_ac90_gate_spins_l18a240_l18a | event_ac90_gate_spins_l18a240_l18a | src/event/gen01631.c |  | event: 8018AC90 gate; spins L18A240/L18A2F0 with 8018F0C8; 8018A438 row; 8x 8018AC90 tail. |
| 8018A438 | event_ac90_intro_branches_with_f0c | event_ac90_intro_branches_with_f0c | src/event/gen1077.c |  | event: 8018AC90 intro/branches with 8018F0C8 spins; loops L18A49C/L18A500/L18A594 on regcmp latches. |
| 8018A5F8 | event_ac90_v0_spins_tail_row | event_ac90_v0_spins_tail_row | src/event/gen1192.c |  | event: 8018AC90 + v0 spins; 80197648 tail row. |
| 8018A6B4 | - | - | - |  | event: 8018AC90 x2 + 8018AC68 rows. |
| 8018A75C | event_drive | event_drive | src/event/eventq.c |  | drive-event queue dispatch: modes 0..3 select which slot is armed, then wait for the cell latch and signal completion. |
| 8018A9DC | event_v0_gate_picks_a75c_vs_a438_r | event_v0_gate_picks_a75c_vs_a438_r | src/event/gen01630.c |  | event: v0 gate picks 8018A75C(2/1/3) vs 8018A438 row. |
| 8018AA60 | - | - | - |  |  |
| 8018AAC4 | fn_1x8aac4 | fn_1x8aac4 | src/rows/gen_8018AAC4.c |  |  |
| 8018AB08 | event_cache_quantizes_a1_down_to_t | event_cache_quantizes_a1_down_to_t | src/rows/gen_8018AB08.c |  | event cache: quantizes a1 down to the table slot a0. |
| 8018ABAC | - | - | - | Y |  |
| 8018ABE8 | fn_1x8abe8 | fn_1x8abe8 | src/rows/gen_8018ABE8.c |  |  |
| 8018AC40 | - | - | - |  |  |
| 8018AC68 | - | - | - |  |  |
| 8018AC90 | self_test_loop | self_test_loop | src/dev/selfloop.c |  |  |
| 8018ACF8 | fn_1x8acf8 | fn_1x8acf8 | src/rows/gen_8018ACF8.c |  |  |
| 8018AD28 | - | - | - |  |  |
| 8018AD48 | event_v1_v0_gate_e8_acf8_a8_f8 | event_v1_v0_gate_e8_acf8_a8_f8 | src/event/gen01629.c |  | event: v1/v0 gate; 801976E8/8018ACF8/80197668/801976A8/ 801976F8 rows. |
| 8018ADC8 | - | - | - |  | DMA-ish prep: writes 0x40001010 header + shifted size into a1 unless a0 <= 0. |
| 8018AE28 | event_v0_gate_tree_b1c8_spins_l18a | event_v0_gate_tree_b1c8_spins_l18a | src/event/gen01628.c |  | event: v0 gate tree; 8018B1C8 spins L18AF44; 8018B16C + s6 latches; returns at L18B138 via L18B13C. |
| 8018B16C | fn_1x8b16c | fn_1x8b16c | src/rows/gen_8018B16C.c |  |  |
| 8018B1C8 | region_walker_x300_v0_t2_v1_a3_reg | region_walker_x300_v0_t2_v1_a3_reg | src/rows/gen_8018B1C8.c |  | region walker (0x300): v0/t2 + v1/a3 regcmp gates threading the D_8019B17C-adjacent record list; register-only. |
| 8018B4C8 | event_v0_v1_a0_latch_loop_b1c8_tai | event_v0_v1_a0_latch_loop_b1c8_tai | src/event/gen01414.c |  | event: v0 + v1/a0 latch loop; 8018B1C8 tail. |
| 8018B548 | - | - | - |  |  |
| 8018B578 | - | - | - |  | region walker variant (0x2BC): t1/t3 + t1/v0 latch ladder over the record spans with spin folds — register-only. |
| 8018B838 | event_s0_v0_v0_s0_latches_b9a8_row | event_s0_v0_v0_s0_latches_b9a8_row | src/rows/gen_8018B838.c |  | event: s0/v0 + v0/s0 latches; 8018B9A8 row; returns L18B908. |
| 8018B928 | - | - | - |  | region walk: heads/used records are skipped (hi bits); returns 1 while a0 is covered by a record span, 0 past the end. |
| 8018B9A8 | region_walk_shifted_like_b928_with | region_walk_shifted_like_b928_with | src/rows/gen_8018B9A8.c |  | region walk (shifted): like 8018B928 with a0 <<= bank shift. |
| 8018BA38 | event_b9a8_gate_at_l18bab8_wide_a1 | event_b9a8_gate_at_l18bab8_wide_a1 | src/event/gen01627.c |  | event: 8018B9A8 gate at L18BAB8; wide a1/a3 + a0/a2 regcmp gate trees; returns at L18BE5C. |
| 8018BF18 | - | - | - |  | pure-math leaf (0x4D0, no calls): 33 loads of table/state words feeding a long sll/sra/and/or/mult chain — the byte-verified arithmetic is t |
| 8018C3E8 | fn_1x8c3e8 | fn_1x8c3e8 | src/rows/gen_8018C3E8.c |  |  |
| 8018C438 | - | - | - |  |  |
| 8018C468 | event_b9a8_gate_s4_latch_a75c_rows | event_b9a8_gate_s4_latch_a75c_rows | src/event/gen01626.c |  | event: 8018B9A8 gate; s4 latch; 8018A75C(2/1/3) + 80197678 rows; returns at L18C5D8. |
| 8018C608 | event_mask_queue_arm_park_a_u16_pa | event_mask_queue_arm_park_a_u16_pa | src/rows/gen_8018C608.c |  | event-mask queue: arm/park a u16 pair (packed 24-bit) against the DMA record or the direct B114 cells. |
| 8018C7C8 | - | - | - | Y |  |
| 8018C7F8 | - | - | - |  |  |
| 8018C858 | event_s5_v0_latch_a75c_rows_return | event_s5_v0_latch_a75c_rows_return | src/event/gen01625.c |  | event: s5/v0 latch; 8018A75C(2/1/3) + 80197678 rows; returns at L18C988. |
| 8018C9B8 | fn_1x8c9b8 | fn_1x8c9b8 | src/rows/gen_8018C9B8.c |  |  |
| 8018CA18 | fn_1x8ca18 | fn_1x8ca18 | src/rows/gen_8018CA18.c |  |  |
| 8018CA48 | event_v0_gate_a9dc_ab08_rows | event_v0_gate_a9dc_ab08_rows | src/event/gen01624.c |  | event: v0 gate; 8018A9DC/8018AB08 rows. |
| 8018CAD8 | event_v0_s0_s1_s0_latches_spin_row | event_v0_s0_s1_s0_latches_spin_row | src/event/gen01413.c |  | event: v0/s0 + s1/s0 latches; 80197688 spin rows. |
| 8018CB88 | gate_monolith_x304_v1_v0_compare_a | gate_monolith_x304_v1_v0_compare_a | src/rows/gen_8018CB88.c |  | gate monolith (0x304): ~40 v1/v0 compare-and-branch lanes over (a3 & 0xF000) etc. — the catalog of icon/menu state transitions; register-onl |
| 8018CE98 | - | - | - |  | event: 8018E4B8 gate, 8018ABE8(1); spins L18CF58 on the 8018A75C rows (2/1/3). |
| 8018CFF8 | event_spin_l18d01c_v1_a2_v1_v0_gat | event_spin_l18d01c_v1_a2_v1_v0_gat | src/event/gen01412.c |  | event: spin L18D01C; v1/a2 + v1/v0 gate tree; 8018E4B8/ 8018ABE8 rows then 8018A75C(2/1/3); returns at L18D194. |
| 8018D1AC | event_a75c_v1_v0_gate_spin_loops_l | event_a75c_v1_v0_gate_spin_loops_l | src/event/gen1138.c |  | event: 8018A75C(2) + v1/v0 gate; spin loops L18D300/L18D340; 8018A75C(1) closes. |
| 8018D3C8 | - | - | - |  |  |
| 8018D82C | event_aac4_gate_spins_then_e408_e2 | event_aac4_gate_spins_then_e408_e2 | src/event/gen01411.c |  | event: 8018AAC4 gate spins; then 8018E408/8018E2C8(1) rows with the 8018D1AC/8018A75C(3) tail. |
| 8018DAB4 | event_v1_v0_gates_c608_e0c8_rows_t | event_v1_v0_gates_c608_e0c8_rows_t | src/event/gen01623.c |  | event: v1/v0 gates; 8018C608(1)/8018E0C8(1) rows then L18DB6C: 8018E4B8/8018ABE8 and L18DBDC: 8018E448/8018D1AC/ 8018E2C8/8018A75C(3). |
| 8018DC58 | event_v0_v1_gate_v1_v0_gate_picks | event_v0_v1_gate_v1_v0_gate_picks | src/event/gen01410.c |  | event: v0/v1 gate; v1/v0 gate picks 8018CFF8 vs the 8018DAB4 row. |
| 8018DCD8 | queue_command_state_reset_header_s | queue_command_state_reset_header_s | src/rows/gen_8018DCD8.c |  | queue/command state reset: header + 24 slots (0x10 stride). |
| 8018DDEC | - | - | - |  | queue/command state reset (paired with 8018DCD8): gated on the active state; returns 1 when reset ran. |
| 8018DF10 | - | - | - | Y | queue phase -> step id. |
| 8018DF90 | - | - | - | Y |  |
| 8018DFA0 | fn_1x8dfa0 | fn_1x8dfa0 | src/rows/gen_8018DFA0.c |  |  |
| 8018DFC4 | fn_1x8dfc4 | fn_1x8dfc4 | src/rows/gen_8018DFC4.c |  |  |
| 8018DFE8 | fn_1x8dfe8 | fn_1x8dfe8 | src/rows/gen_8018DFE8.c |  |  |
| 8018E00C | event_e2c8_e448_e4b8_gate_abe8_tai | event_e2c8_e448_e4b8_gate_abe8_tai | src/event/gen01622.c |  | event: 8018E2C8/8018E448/8018E4B8 gate; 8018ABE8(1) tail. |
| 8018E0C8 | waiter_latch_up_to_four_pending_u1 | waiter_latch_up_to_four_pending_u1 | src/rows/gen_8018E0C8.c |  | waiter: latch up to four pending u16 pairs from the F67xx queue into B114 and clear their busy bits (gated on a0). |
| 8018E2C8 | event_a0_v0_latch_chain_l18e2e0_l1 | event_a0_v0_latch_chain_l18e2e0_l1 | src/event/gen01409.c |  | event: a0/v0 latch chain (L18E2E0/L18E314/L18E35C); 8018F0C8 row inside; returns at L18E3F4. |
| 8018E408 | fn_1x8e408 | fn_1x8e408 | src/rows/gen_8018E408.c |  |  |
| 8018E448 | fn_1x8e448 | fn_1x8e448 | src/rows/gen_8018E448.c |  |  |
| 8018E488 | - | - | - |  |  |
| 8018E4B8 | fn_1x8e4b8 | fn_1x8e4b8 | src/rows/gen_8018E4B8.c |  |  |
| 8018E4E8 | event_gate_ladders_with_jr_v0_sub | event_gate_ladders_with_jr_v0_sub | src/rows/gen_8018E4E8.c |  | event: gate ladders with jr-$v0 sub-dispatches (L18E5D0/ L18E6CC); 8018EAE8 row; 2x 8018AB08 rows (L18E790/L18E7B0); returns at L18E814+. |
| 8018EAE8 | - | - | - |  | pan/step math: quantize, /3 via magic, two-table product. |
| 8018EBB8 | - | - | - |  | packed sprite-field: normalize the value, two table divisions, recombine (t1 index + geometry). |
| 8018ECE8 | - | - | - |  | gate monolith (0x37C): twin jr-$v0 sub-dispatches (L8018ED78 / L8018EE38) with 8-way slots each, then a v0-latch tail; the sub-handlers are  |
| 8018F068 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F078 | register_only_stub_x1c_see_asm_for | register_only_stub_x1c_see_asm_for | src/rows/gen_8018F078.c |  | register-only stub (0x1C); see asm for exact dataflow. |
| 8018F098 | register_only_stub_x2c_see_asm_for | register_only_stub_x2c_see_asm_for | src/rows/gen_8018F098.c |  | register-only stub (0x2C); see asm for exact dataflow. |
| 8018F0C8 | anim_reg_stub | anim_reg_stub | src/anim/regstub.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F0D8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 8018F0E8 | event_jr_t2_dispatch_slots_f158_f1 | event_jr_t2_dispatch_slots_f158_f1 | src/rows/gen_8018F0E8.c |  | event: jr-$t2 dispatch (2 slots); 8018F158/8018F148 rows. |
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
| 8018F408 | event_e8_prep_t2_t1_latch_loop_tai | event_e8_prep_t2_t1_latch_loop_tai | src/event/gen01620.c |  | event: 801976E8 prep; t2/t1 latch loop; 80197608 tail. |
| 8018F478 | - | - | - |  |  |
| 8018F4B8 | event_e8_prep_t2_t1_latch_loop_f8 | event_e8_prep_t2_t1_latch_loop_f8 | src/event/gen01619.c |  | event: 801976E8 prep; t2/t1 latch loop; 80197608/801976F8 tail. |
| 8018F538 | event_f5c8_v0_v1_s0_v0_latch_loop | event_f5c8_v0_v1_s0_v0_latch_loop | src/rows/gen_8018F538.c |  | event: 8018F5C8 + v0/v1 + s0/v0 latch loop; 8018F0C8 tail. |
| 8018F5C8 | - | - | - | Y |  |
| 8018F604 | - | - | - | Y |  |
| 8018F62C | - | - | - | Y |  |
| 8018F654 | - | - | - |  |  |
| 8018F688 | fn_1x8f688 | fn_1x8f688 | src/rows/gen_8018F688.c |  |  |
| 8018F708 | event_v1_v0_gates_fa00_row_loops_l | event_v1_v0_gates_fa00_row_loops_l | src/event/gen01408.c |  | event: v1/v0 gates; 8018FA00 row; loops L18F7A0/L18F7B4 with 8018FCC4; 8018F0C8/8018FD68/8018F9E0 rows. |
| 8018F9E0 | fn_1x8f9e0 | fn_1x8f9e0 | src/rows/gen_8018F9E0.c |  |  |
| 8018FA00 | event_s1_v0_v0_s1_latches_rows_wit | event_s1_v0_v0_s1_latches_rows_wit | src/event/gen985.c |  | event: s1/v0 + v0/s1 latches; 80190004(1)/80190078/80190088 rows with 8018F0C8 polls; returns at L18FC9C. |
| 8018FCC4 | event_v0_v0_s3_gates_f078_spin_loo | event_v0_v0_s3_gates_f078_spin_loo | src/event/gen1288.c |  | event: v0 + v0/s3 gates; 8018F078 spin loop L18FCF8. |
| 8018FD68 | event_s6_gate_f0c8_rows_with_s2_v0 | event_s6_gate_f0c8_rows_with_s2_v0 | src/event/gen1076.c |  | event: s6 gate; 80190004(1) + 8018F0C8/80191638/80190088 rows with s2/v0 + v0 latches. |
| 80190004 | fn_1x90004 | fn_1x90004 | src/rows/gen_80190004.c |  |  |
| 80190078 | register_only_stub_xc_see_asm_for_1900 | register_only_stub_xc_see_asm_for_1900 | src/rows/gen_80190078.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80190088 | register_only_stub_xc_see_asm_for_1900_88 | register_only_stub_xc_see_asm_for_1900_88 | src/rows/gen_80190088.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80190098 | event_dispatcher_gate_tree_with_jr | event_dispatcher_gate_tree_with_jr | src/event/gen01618.c |  | event dispatcher: gate tree with jr-$v0 sub-dispatch at L1902CC; 2x 8018F0C8 poll rows; a0/a2 + v1/a2 spin latches; returns at L1905E8. |
| 801905FC | event_e8_gates_f0c8_fd8_rows_c4c_l | event_e8_gates_f0c8_fd8_rows_c4c_l | src/rows/gen_801905FC.c |  | event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows, 80192C4C + 80190098 loops; a2/s3 + v1/a3 regcmp latches. |
| 8019087C | - | - | - |  | event: 801928E8 gates; 80191620/8018F0C8/80190FD8 rows, 80192C4C + 80190098 loops; v1/a3 regcmp latches close. |
| 80190B44 | event_cmd_flow_v0_v1_gates_through | event_cmd_flow_v0_v1_gates_through | src/rows/gen_80190B44.c |  | event-cmd flow: v0/v1 gates through 8018F0C8/801905FC checks, 801928E8/80191620/80190FD8/80192C4C/80190098 rows with spin loops; returns at  |
| 80190F50 | - | - | - |  |  |
| 80190FD8 | psy_q_runtime_lock_enter_stub_vari | psy_q_runtime_lock_enter_stub_vari | src/rows/gen_80190FD8.c |  | PSY-Q runtime lock-enter stub variant (t1 = 0x3F pole). |
| 801910AC | event_v0_gate_run_l1910e8_l1910ec | event_v0_gate_run_l1910e8_l1910ec | src/event/gen01407.c |  | event: v0 gate run -> L1910E8/L1910EC. |
| 8019119C | - | - | - |  |  |
| 801911E8 | - | - | - |  | event: 80191620/8018F0C8/80192AF8/80192B28(2) preps; then 3x 80190B44 (idx 1/1/10/12) with spin loops and the 801905FC tail. |
| 801913C8 | event_e8_x2_f0c8_fd8_rows_with_gat | event_e8_x2_f0c8_fd8_rows_with_gat | src/event/gen01406.c |  | event: 801928E8 x2; 80191620/8018F0C8/80190FD8 rows with gate at L1914E0. |
| 80191530 | - | - | - |  |  |
| 8019153C | event_poll_loop_l191570_returns_at | event_poll_loop_l191570_returns_at | src/event/gen1287.c |  | event: 80190098 poll loop L191570; returns at L1915E8. |
| 80191618 | - | - | - |  | register-only stub (0x8); see asm for exact dataflow. |
| 80191620 | register_only_stub_xc_see_asm_for_1916 | register_only_stub_xc_see_asm_for_1916 | src/rows/gen_80191620.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80191638 | play_time_splitter_x104_magic_mult | play_time_splitter_x104_magic_mult | src/rows/gen_80191638.c |  | play-time splitter (0x104): magic-mult chain on (a0+0x96) (-75/-5/-6/-10 style stages using 0x1B4E81B5/0x88888889/ 0x66666667) packing the r |
| 80191748 | - | - | - |  |  |
| 801917B8 | - | - | - | Y |  |
| 801917D8 | fn_1x917d8 | fn_1x917d8 | src/rows/gen_801917D8.c |  |  |
| 801917F8 | - | - | - | Y |  |
| 80191818 | fn_1x91818 | fn_1x91818 | src/rows/gen_80191818.c | Y |  |
| 80191838 | fn_1x91838 | fn_1x91838 | src/rows/gen_80191838.c |  |  |
| 80191858 | fn_1x91858 | fn_1x91858 | src/rows/gen_80191858.c |  |  |
| 80191878 | event_b44_rows_on_s3_t0_s0_fp | event_b44_rows_on_s3_t0_s0_fp | src/event/gen01405.c |  | event: 80190B44(1/2/0) rows on s3/t0 + s0/fp latch loop L1918D8. |
| 801919B4 | event_twin_b44_rows_on_s2_fp_s0 | event_twin_b44_rows_on_s2_fp_s0 | src/event/gen01404.c |  | event (twin): 80190B44(1/2/0) rows on s2/fp + s0/s7 latch. |
| 80191AE8 | event_s3_fp_s0_s7_latch_loops_on | event_s3_fp_s0_s7_latch_loops_on | src/event/gen1286.c |  | event: s3/fp + s0/s7 latch loops on 80190B44(1/2/0); 801905FC tail. |
| 80191C38 | - | - | - |  |  |
| 80191C58 | fn_1x91c58 | fn_1x91c58 | src/rows/gen_80191C58.c | Y |  |
| 80191C78 | - | - | - |  | device command chain: seed registers, poll the start flag, kick the DMA chain, then finalize. |
| 80191D78 | - | - | - |  |  |
| 80191DAC | - | - | - |  | event flow: a0/v0 + v1/v0 gates route 80192858/80192748/ 80192888 (or 80191C58) rows through 8018F688/80191620; then 801928E8 + 801920F0(1)  |
| 80192020 | event_gate_b4_rows | event_gate_b4_rows | src/event/gen01403.c |  | event: 80191858 gate; 80192858/80191838(9)/801919B4(2) rows. |
| 801920F0 | battle_command_maps_preps_with_beq | battle_command_maps_preps_with_beq | src/rows/gen_801920F0.c |  | battle command maps: 80191838/80191858/80192858 preps with beqz/v0 gates routing through 801928E8/80191620/801919B4/ 80191878/80192738/80191 |
| 801922D8 | event_flow_e8_spins_b4_rows_gates | event_flow_e8_spins_b4_rows_gates | src/event/gen984.c |  | event flow: 80192888/801928E8 spins, 80191838/80191858/ 80192858/801919B4 rows; gates at L192300/L192380. |
| 80192478 | event_e8_spins_rows_then_e8_ae8_f0 | event_e8_spins_rows_then_e8_ae8_f0 | src/event/gen1191.c |  | event: 801928E8 spins, 80191838/80191858/80192858 rows, then 801928E8/80192718/80191AE8(9)/801920F0 tail. |
| 80192614 | event_e8_x2_f0_rows_gate_tail_retu | event_e8_x2_f0_rows_gate_tail_retu | src/event/gen01402.c |  | event: 801928E8 x2 + 801920F0(1) rows; 80191818 gate tail; returns at L1926F8. |
| 80192718 | fn_1x92718 | fn_1x92718 | src/rows/gen_80192718.c | Y |  |
| 80192728 | - | - | - | Y |  |
| 80192738 | - | - | - | Y |  |
| 80192748 | - | - | - | Y |  |
| 80192768 | - | - | - |  | device command chain (variant): same handshake, 0x11400100 kick, no completion poll. |
| 80192858 | fn_1x92858 | fn_1x92858 | src/rows/gen_80192858.c |  |  |
| 80192888 | fn_1x92888 | fn_1x92888 | src/rows/gen_80192888.c | Y |  |
| 801928A8 | fn_1x928a8 | fn_1x928a8 | src/rows/gen_801928A8.c |  |  |
| 801928C8 | fn_1x928c8 | fn_1x928c8 | src/rows/gen_801928C8.c | Y |  |
| 801928E8 | event_spin_wait | event_spin_wait | src/event/gen1285.c |  | event: v1/v0 spin loop L19290C; a0/v0 latches; 2x 80192A60 rows with spin loops; returns at L192A4C. |
| 80192A60 | event_v0_v1_latch_loop_l192a88_on | event_v0_v1_latch_loop_l192a88_on | src/event/gen01401.c |  | event: v0/v1 latch loop L192A88 on 80191620/80197798(3)/ 801977B8 rows. |
| 80192AF8 | - | - | - | Y |  |
| 80192B28 | - | - | - | Y |  |
| 80192B58 | - | - | - | Y |  |
| 80192B88 | - | - | - |  |  |
| 80192BBC | - | - | - | Y |  |
| 80192BEC | fn_1x92bec | fn_1x92bec | src/rows/gen_80192BEC.c | Y |  |
| 80192C1C | - | - | - | Y |  |
| 80192C4C | - | - | - | Y |  |
| 80192C5C | - | - | - | Y |  |
| 80192C74 | - | - | - |  |  |
| 80192C8C | event_b8_gates_d64_d8_c8_e8_f8 | event_b8_gates_d64_d8_c8_e8_f8 | src/event/gen01400.c |  | event: 80193194/801931B8 gates; 80192D64/801976D8/801931C8/ 801932E8/80197630/801976F8 rows; returns at L192D54. |
| 80192D64 | event_f0c8_b8_rows_spin_loops_l192 | event_f0c8_b8_rows_spin_loops_l192 | src/event/gen01399.c |  | event: 8018F0C8/801976B8 rows; spin loops L192E04/L192DF8 on v0 gates; closes 8018F0C8/801976B8. |
| 80192F34 | event_s2_s4_gate_b8_spin_rows_with | event_s2_s4_gate_b8_spin_rows_with | src/event/gen01617.c |  | event: s2/s4 gate; 80197798(3) + 801977B8 spin rows with s1 latches; returns at L193058. |
| 8019307C | - | - | - |  |  |
| 8019311C | - | - | - |  |  |
| 80193194 | clear_a1_u32_cells_countdown_from | clear_a1_u32_cells_countdown_from | src/rows/gen_80193194.c | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 801931B8 | register_only_stub_xc_see_asm_for_1931 | register_only_stub_xc_see_asm_for_1931 | src/rows/gen_801931B8.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801931C8 | fn_1x931c8 | fn_1x931c8 | src/rows/gen_801931C8.c |  |  |
| 80193220 | - | - | - |  | trampoline bucket: bump the tick and run the 8 registered callbacks. |
| 8019328C | - | - | - | Y |  |
| 801932B8 | - | - | - | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 801932E8 | fn_1x932e8 | fn_1x932e8 | src/rows/gen_801932E8.c |  |  |
| 80193334 | - | - | - |  |  |
| 801934B4 | - | - | - |  | callback-slot flag: set/clear bit (a0+0x10) and keep the slot. |
| 80193560 | - | - | - | Y | clear a1 u32 cells (countdown from a1-1 to -1). |
| 80193588 | - | - | - |  |  |
| 801935C8 | - | - | - |  |  |
| 80193668 | battle_anim_v0_gates_route_b8_d8_r | battle_anim_v0_gates_route_b8_d8_r | src/event/gen01398.c |  | battle anim: v0 gates route 801973B8/80197398/801972D8 rows and the 80197358 spin loop L1938A8. |
| 80193924 | battle_anim_v1_v0_gate_tree_b8_row | battle_anim_v1_v0_gate_tree_b8_row | src/event/gen01616.c |  | battle anim: v1/v0 gate tree; 801972B8/80197208 rows; returns at L193C10. |
| 80193C40 | event_pure_gate_tree_with_the_jr_v | event_pure_gate_tree_with_the_jr_v | src/rows/gen_80193C40.c |  | event: pure gate tree with the jr-$v0 dispatch (L193DC4) and regcmp spin loops; 80194008 tail row; returns at L193FE0. |
| 80194008 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80194018 | - | - | - |  |  |
| 8019418C | - | - | - |  | state change: latch a0 into the state byte; when non-zero, dispatch the DB50 message handler. |
| 801941E8 | - | - | - |  |  |
| 8019428C | - | - | - | Y |  |
| 8019429C | - | - | - |  | state slot: dispatch while the phase is low, then store a0. |
| 801942FC | fn_1x942fc | fn_1x942fc | src/rows/gen_801942FC.c |  |  |
| 80194394 | - | - | - |  |  |
| 801943FC | battle_ui_phase_state_hit_box_gate | battle_ui_phase_state_hit_box_gate | src/rows/gen_801943FC.c |  | battle-UI phase state: hit-box gate then two message slots. |
| 80194518 | fn_1x94518 | fn_1x94518 | src/rows/gen_80194518.c |  |  |
| 801945A8 | - | - | - |  | battle anim: 801943FC row. |
| 80194640 | cb_slot2 | cb_slot2 | src/battle/animrows.c |  |  |
| 801946A0 | - | - | - |  |  |
| 80194700 | battle_anim_gate_a | battle_anim_gate_a | src/event/gen01615.c |  | battle anim: 801943FC gates -> L1947A0 / L194758. |
| 801947B8 | battle_anim_v0_gates_returns_at_l1 | battle_anim_v0_gates_returns_at_l1 | src/event/gen01397.c |  | battle anim: v0 gates; returns at L194838. |
| 80194880 | - | - | - |  |  |
| 8019492C | - | - | - |  |  |
| 80194988 | fn_1x94988 | fn_1x94988 | src/rows/gen_80194988.c |  |  |
| 801949F8 | fn_1x949f8 | fn_1x949f8 | src/rows/gen_801949F8.c |  |  |
| 80194AB8 | - | - | - |  |  |
| 80194B90 | - | - | - |  |  |
| 80194BC4 | - | - | - |  |  |
| 801950BC | - | - | - |  |  |
| 801950F0 | - | - | - | Y |  |
| 80195120 | event_rows | event_rows | src/rows/gen_80195120.c |  | event: 80195668/80195700 rows. |
| 801951A0 | - | - | - |  |  |
| 801951E0 | - | - | - |  | event: 80195668/80195700/80195798/80195648/801957B4 preps; gate tree; returns at L1953BC. |
| 801953D8 | - | - | - |  | event: 80195668/80195700/80195798/80195648/801957B4 preps; v0 gate tree; returns at L19562C. |
| 80195648 | - | - | - |  |  |
| 80195668 | - | - | - |  | GPU E300 word: clamp (x,y) into the sprite grid then pack. |
| 80195700 | - | - | - |  | GPU E400 word: clamp (x,y) then pack. |
| 80195798 | - | - | - |  |  |
| 801957B4 | - | - | - |  | sprite/quad command word from the (w,h,sx,sy) sprite struct. |
| 80195834 | - | - | - | Y |  |
| 8019584C | event_gate_cc_spin_loop_l1958e8 | event_gate_cc_spin_loop_l1958e8 | src/event/gen01396.c |  | event: 80196898 gate; 801968CC spin loop L1958E8. |
| 8019592C | event_v0_gates_bc_rows_tail | event_v0_gates_bc_rows_tail | src/event/gen1284.c |  | event: v0 gates; 801960BC rows (3/4/5); 80196074 tail. |
| 80195B5C | event_gates_cc_spin_rows_l195c68_s | event_gates_cc_spin_rows_l195c68_s | src/event/gen1283.c |  | event: 80196898 gates; 801968CC spin rows (L195C68) + s0 latches; returns L195D74. |
| 80195D98 | event_gate_cc_spin_rows_l195e9c_l1 | event_gate_cc_spin_rows_l195e9c_l1 | src/event/gen01395.c |  | event: 80196898 gate; 801968CC spin rows (L195E9C/L195F48); s0/v0 + s0/v1 latch loops; returns at L195FF8. |
| 80196018 | - | - | - |  | latch a GPU word into the DC5C pointer; returns the pointer. |
| 8019602C | - | - | - | Y |  |
| 80196034 | - | - | - |  |  |
| 80196074 | fn_1x96074 | fn_1x96074 | src/rows/gen_80196074.c |  |  |
| 801960BC | fn_1x960bc | fn_1x960bc | src/rows/gen_801960BC.c |  |  |
| 801960EC | - | - | - | Y |  |
| 80196110 | - | - | - |  |  |
| 801963C0 | fn_1x963c0 | fn_1x963c0 | src/rows/gen_801963C0.c |  |  |
| 80196620 | - | - | - |  | event: 80192C74 gate tree; 80196EF0 row; 80192C74 tail gate with 80196A10. |
| 8019675C | battle_anim_intro_loops_l1967b8_l1 | battle_anim_intro_loops_l1967b8_l1 | src/event/gen1190.c |  | battle anim: 80196898 intro; loops L1967B8/L1967C8 on 801963C0/801968CC rows; 80196888 tail. |
| 80196898 | fn_1x96898 | fn_1x96898 | src/rows/gen_80196898.c |  |  |
| 801968CC | event_e8_gate_f0c8_x_c74_rows | event_e8_gate_f0c8_x_c74_rows | src/rows/gen_801968CC.c |  | event: 801928E8 gate; 8018F0C8 + 2x 80192C74 rows. |
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
| 801970A8 | battle_anim_f2c_v0_gates_l19711c_l | battle_anim_f2c_v0_gates_l19711c_l | src/rows/gen_801970A8.c |  | battle anim: 80196F2C + v0 gates -> L19711C / L197120. |
| 80197168 | anim_struct_init_u16s_u8s_zero_run | anim_struct_init_u16s_u8s_zero_run | src/rows/gen_80197168.c |  | anim struct init: 8 u16s + 4 u8s zero run. |
| 801971A8 | anim_pack_word | anim_pack_word | src/battle/animrows.c |  |  |
| 801971E8 | fn_1x971e8 | fn_1x971e8 | src/rows/gen_801971E8.c | Y |  |
| 80197208 | - | - | - | Y |  |
| 80197248 | fn_1x97248 | fn_1x97248 | src/rows/gen_80197248.c | Y |  |
| 80197288 | fn_1x97288 | fn_1x97288 | src/rows/gen_80197288.c | Y |  |
| 801972B8 | fn_1x972b8 | fn_1x972b8 | src/rows/gen_801972B8.c | Y |  |
| 801972D8 | fn_1x972d8 | fn_1x972d8 | src/rows/gen_801972D8.c |  |  |
| 80197308 | fn_1x97308 | fn_1x97308 | src/rows/gen_80197308.c |  |  |
| 80197338 | fn_1x97338 | fn_1x97338 | src/rows/gen_80197338.c | Y |  |
| 80197358 | fn_1x97358 | fn_1x97358 | src/rows/gen_80197358.c | Y |  |
| 80197378 | fn_1x97378 | fn_1x97378 | src/rows/gen_80197378.c | Y |  |
| 80197398 | fn_1x97398 | fn_1x97398 | src/rows/gen_80197398.c | Y |  |
| 801973B8 | anim_cmd_header | - | - |  | anim command header: GPU-ish control word + optional 2nd word. |
| 80197458 | - | - | - | Y |  |
| 80197468 | - | - | - |  |  |
| 801974CC | - | - | - |  | event: v1/v0 gate; 3x 8019428C + v0/s2 latch + 8018F0C8 rows; returns at L1975CC. |
| 801975E8 | register_only_stub_xc_see_asm_for_1975 | register_only_stub_xc_see_asm_for_1975 | src/rows/gen_801975E8.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801975F8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197608 | register_only_stub_xc_see_asm_for_1976 | register_only_stub_xc_see_asm_for_1976 | src/rows/gen_80197608.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197618 | - | - | - |  | register-only stub (0x18); see asm for exact dataflow. |
| 80197630 | register_only_stub_xc_see_asm_for_1976_30 | register_only_stub_xc_see_asm_for_1976_30 | src/rows/gen_80197630.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197648 | register_only_stub_xc_see_asm_for_1976_48 | register_only_stub_xc_see_asm_for_1976_48 | src/rows/gen_80197648.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197658 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197668 | register_only_stub_xc_see_asm_for_1976_68 | register_only_stub_xc_see_asm_for_1976_68 | src/rows/gen_80197668.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197678 | register_only_stub_xc_see_asm_for_1976_78 | register_only_stub_xc_see_asm_for_1976_78 | src/rows/gen_80197678.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197688 | register_only_stub_xc_see_asm_for | register_only_stub_xc_see_asm_for | src/rows/gen_80197688.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 80197698 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976A8 | register_only_stub_xc_see_asm_for_1976_a8 | register_only_stub_xc_see_asm_for_1976_a8 | src/rows/gen_801976A8.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976B8 | register_only_stub_xc_see_asm_for_1976_b8 | register_only_stub_xc_see_asm_for_1976_b8 | src/rows/gen_801976B8.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976C8 | - | - | - |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976D8 | register_only_stub_xc_see_asm_for_1976_d8 | register_only_stub_xc_see_asm_for_1976_d8 | src/rows/gen_801976D8.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801976E8 | psy_q_runtime_lock_enter_stub_sysc | psy_q_runtime_lock_enter_stub_sysc | src/rows/gen_801976E8.c |  | PSY-Q runtime lock-enter stub: syscall 0 with a0 = 1 (handwritten instruction). Callers read the return and run the paired 801976F8 (lock-ex |
| 801976F8 | psy_q_runtime_lock_exit_stub_sysca | psy_q_runtime_lock_exit_stub_sysca | src/rows/gen_801976F8.c |  | PSY-Q runtime lock-exit stub: syscall 0 with a0 = 2 (handwritten instruction), paired with 801976E8. PS1-only; no SNES counterpart. |
| 80197708 | - | - | - |  | stack pivot: SP := A0 (scratch-stack select); returns old SP — unrepresentable in C; register-only. |
| 80197718 | - | - | - |  | jump-pole table base: this slot jumps vector 0xB0 with id 0x32; slots 0x33/0x34/0x35/0x36/0x41/0x43/0x45 share the same fixed block (unreach |
| 80197798 | register_only_stub_xc_see_asm_for_1977 | register_only_stub_xc_see_asm_for_1977 | src/rows/gen_80197798.c |  | register-only stub (0xC); see asm for exact dataflow. |
| 801977A8 | - | - | - | Y |  |
| 801977B8 | event_jr_t2_dispatch_f078_spin_loo | event_jr_t2_dispatch_f078_spin_loo | src/event/gen1189.c |  | event: jr-$t2 dispatch; 8018F078 spin loops (L197860/L197908); 80197A68 tail; returns at L197948. |
| 80197964 | event_v0_gates_f078_spin_loop_l197 | event_v0_gates_f078_spin_loop_l197 | src/event/gen1188.c |  | event: v0 gates; 8018F078 spin loop L1979E8. |
| 80197A68 | register_only_stub_xc_see_asm_for_197a | register_only_stub_xc_see_asm_for_197a | src/rows/gen_80197A68.c |  | register-only stub (0xC); see asm for exact dataflow. |
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
| 80197E78 | event_e8_prep_loop_l197ea8_on_f8 | event_e8_prep_loop_l197ea8_on_f8 | src/event/gen01614.c |  | event: 801976E8 prep; loop L197EA8 on 80197608/801976F8. |
| 80197EE8 | - | - | - | Y |  |
| 80197F24 | - | - | - |  | trig table with quadrant folds. |
| 80197FB8 | trig_table_abs_folds | trig_table_abs_folds | src/rows/gen_80197FB8.c |  | trig table (abs + folds). |
| 80198058 | angle_from_ratio_quadrant_correcte | angle_from_ratio_quadrant_correcte | src/rows/gen_80198058.c |  | angle from ratio: quadrant-corrected table arctangent. |
| 801981D8 | - | - | - |  | register-only stub (0x20); see asm for exact dataflow. |
| 801981F8 | - | - | - |  | PSY-Q BREAK hook stub: marshals a0 into a1 then `break 0, 260`; returns v1 (or -1 when the handler clears v0). Handwritten SDK hook — the on |
| 80198208 | - | - | - |  | register-only stub (0x24); see asm for exact dataflow. |
| 8019822C | event_v0_gates_e8_v0_s4_latch_rows | event_v0_gates_e8_v0_s4_latch_rows | src/event/gen01613.c |  | event: v0 gates; 801982E8 + v0/s4 latch rows. |
| 801982E8 | register_only_stub_x18_see_asm_for | register_only_stub_x18_see_asm_for | src/rows/gen_801982E8.c |  | register-only stub (0x18); see asm for exact dataflow. |
| 80198300 | - | func_80198300 | src/event/gen1282.c |  | event: v0 gate tree; 80198990(0x22) row; returns L198494. |
| 801984B0 | event_v0_gate_tree_x22_row_returns | event_v0_gate_tree_x22_row_returns | src/event/gen1137.c |  | event: v0 gate tree; 80198990(0x22) row; returns L1985E4. |
| 80198600 | - | - | - |  |  |
| 80198630 | event_v0_gates_x22_row_returns_l19 | event_v0_gates_x22_row_returns_l19 | src/event/gen01612.c |  | event: v0 gates; 80198990(0x22) row; returns L1986C4. |
| 801986E0 | - | - | - |  | float-bits builder: extract the exponent/mantissa layout. |
| 801987B0 | - | - | - |  | float-bits compare (<=): handles zeros, signs, exponents. |
| 80198860 | - | - | - |  | float-bits compare: -1/0 result for the +/- ordering. |
| 80198910 | - | - | - |  |  |
| 80198970 | - | - | - |  |  |
| 80198990 | fn_1x98990 | fn_1x98990 | src/rows/gen_80198990.c |  |  |
| 80198A00 | - | - | - |  | register-only stub (0x0); see asm for exact dataflow. |

#!/usr/bin/env python3
"""Port naming manifest — 0x800F primitive ids -> semantic names.

The deck used to call raw func_800Fxxxx ids everywhere (969/1450 gen
modules). This manifest maps the hot primitive family to honest,
observation-based names so port source reads like SoH/LTTP-style code
instead of an id dump. Names describe what the asm demonstrably does
(cells touched), never invented intent.

Usage:
  tools/port_names.py rename <port/src>   apply names + drop externs
  tools/port_names.py report             print coverage of the table

The same table feeds port_rowmap.py's M list (kept in sync by hand).
"""
import re
import sys
from pathlib import Path

# id -> semantic name (curated; see port/docs/functions.md for roles)
NM = {
    # ---- window/row/text primitives (device layer implements these) ----
    "800F71DC": "wnd_open",      "800F8D6C": "tail",       "800F6630": "row_page",
    "800F4248": "row_read",      "800F6564": "txt_set",    "800F7210": "page_open",
    "800F824C": "cell_put",      "800F6B68": "txt_cell",   "800F8768": "cell_draw",
    "800F8188": "txt_draw",      "800F8D00": "label",      "800F8FB8": "open_row",
    "800F9644": "row_prep",      "800F9660": "row_prep_close", "800F971C": "sep",
    "800F5410": "sep_a",         "800F5480": "sep_b",      "800F654C": "latch",
    "800F6434": "gate",          "800F53D4": "io_just",    "800F53C0": "io_go",
    "800F5574": "io_poll",       "800F5958": "poll_t",     "800F5A90": "poll_t",
    "800F6364": "cell_step",     "800F63BC": "step2",      "800F7270": "page",
    "800F7500": "draw_pad",      "800F90EC": "page_paint", "800F62BC": "key_page",
    "800F5DA0": "poll_pair",     "800F5EA0": "poll_pair",  "800F5B8C": "poll_go",
    "800F5C64": "poll_go",       "800F9330": "row_open",   "800F939C": "row_sync",
    "800F95A0": "row_close",     "800F960C": "row_done",   "800F926C": "row_open2",
    "800F9298": "row_open3",     "800F9448": "row_pad",    "800F5140": "row_sel_cell",
    "800F4F4C": "row_sel_cell2", "800F516C": "row_arm_s",  "800F5050": "row_arm_s2",
    "800F5CF8": "row_scan",      "800F6558": "row_sync2",  "800F6658": "row_read2",
    "800F6214": "row_done2",     "800F7828": "row_act2",   "800F7834": "row_act3",
    "800F6028": "row_ptr",       "800F54D4": "io_press",   "800F6048": "cell_dispatch",
    "800F6240": "page_paint2",   "800F4008": "row_open_w", "800F7594": "cell_fmt2",
    "800F7894": "row_sel2",      "800F7A40": "row_sel2",   "800F4F28": "row_arm2",
    "800F6268": "key_page2",     "800F5CCC": "poll_spin",  "800F5160": "row_arm_t",
    "800F5C0C": "poll_cmd",      "800F8EBC": "row_info",   "800F9244": "row_line",
    "800F93DC": "row_close2",    "800F7320": "row_frame",  "800F8070": "row_attr",
    # ---- db/ catalog layer (interpreted in port/src/db) ----
    "800F3B04": "catalog_base",       "800F3C3C": "cell_addr16",
    "800F3B9C": "cell_add16",         "800F3D48": "scratch_swap_status",
    "800F3F38": "ticker_advance",     "800F40CC": "ticker_mask",
    "800F4120": "ticker_reblend",     "800F3CC4": "cell_merge",
    "800F3C94": "cell_window",        "800F3C6C": "cell_read32",
    # ---- scratch<->cell copy family (uninterpreted; stub-backed now) ----
    "800F8960": "cell_pull_c8",       "800F8F74": "cell_clear_bank",
    "800F6C68": "cell_push_c8",       "800F6D70": "cell_push_c8_d58",
    "800F66D8": "cell_push_c8_sel",   "800F81E8": "cell_pull_c8_lo",
    "800F885C": "cell_pull_c8_off",   "800F82EC": "cell_pull_c8_bank",
    "800F8274": "cell_put_hi9",       "800F81B0": "cell_pull9_hi",
    "800F87DC": "cell_stamp8_9",      "800F89D4": "cell_stamp8_9_b",
    "800F658C": "cell_push9",         "800F6CF4": "cell_push9_bank",
    "800F6BE0": "cell_sink8_9",       "800F5D24": "cell_dec_bank",
    # ---- cursor/ticker/pos machines ----
    "800F9200": "cell_cursor_dec",    "800F9410": "cell_cursor_adv2",
    "800F922C": "cell_cursor_ret2",   "800F94B8": "cell_cursor_read",
    "800F4064": "cell_pos_fwd",       "800F3F94": "cell_pos_fwd2",
    "800F8058": "cell_pos_back",      "800F7F48": "cell_tick_sub",
    "800F78C4": "cell_tick_or",       "800F7864": "cell_tick_half",
    "800F76BC": "cell_word_half",     "800F7CC8": "cell_word_half_s",
    "800F5E48": "cell_set50_from54",  "800F61E8": "cell_set50_from40",
    "800F4264": "cell_pos_mask",      "800F56AC": "cell_flags_cmp",
    "800F7170": "cell_flags_pack",    "800F76E8": "cell_flags_repack",
    "800F7A68": "cell_flags_repack2",
    # ---- window fx / pad clear sequences ----
    "800FE778": "wnd_fx_7d",          "800FE7B0": "wnd_fx_7d_b",
    "800FCC84": "wnd_fx_tags",        "800FE870": "cell_clear_pad",
    "800F3A70": "cell_bank_sel",
    # ---- next tier (catalog/shop/battle dispatchers + cell ops) ----
    "800FCCBC": "catalog_dispatch_0",  "800F9868": "catalog_dispatch",
    "800F3D64": "battle_wait_just",    "800F62F0": "cell_inc_cell",
    "800F5DD4": "cell_dec_cell",       "800F8E50": "cell_pull60",
    "800F7C6C": "cell_tick_dbl",       "800F80D0": "cell_pos_back2",
    "800F5520": "cell_flags_cmp_pos",  "800F4FAC": "cell_flags_zero50",
    "800F9690": "cell_cur_save54",     "800F6E30": "cell_push_c8_lo",
    "800F6764": "cell_push89_sel",     "800FE7D8": "shop_view_run",
    "800FF024": "shop_buy_run",        "800FD804": "wnd_fx_pads",
    # ---- batch 3: cell-sink/stamp family + flags + battle dispatch ----
    "800F8378": "cell_pull89_bank",    "800F6DE8": "cell_sink89",
    "800F65F0": "cell_sink89_c",       "800F4370": "cell_tick_and",
    "800F7FCC": "cell_pos_sub16",      "800F7D0C": "cell_flags_pack3",
    "800F7918": "ticker_reblend2",     "800F6EA8": "cell_push_c8_b4",
    "800F65C8": "cell_push_c8_cur",    "800F63F8": "cell_flags_scr",
    "800F8F94": "cell_clear_bank2",    "800F54B8": "cell_flags_set4",
    "800F67FC": "cell_push_c8_b4o",    "800FD718": "battle_rows_run",
    "800F7728": "cell_flags_nz50",     "800F55C0": "cell_flags_cmp3",
    # ---- batch 5: tail cell ops + shop dispatch ----
    "800F4280": "cell_tick_and2",     "800F5024": "cell_pair_dbl2",
    "800F5ECC": "cell_tick_xor",      "800F7B40": "cell_pair_dbl",
    "800F96E0": "cell_cur_save58",    "800F6A78": "cell_push_c8_c2",
    "800F8A18": "cell_pull_c8_sel2",  "800F88E4": "cell_pull89_fn",
    "800F7534": "cell_push60",        "800F53FC": "cell_flags_hi7",
    "800F40E8": "cell_flags_tick2",   "800F7B7C": "cell_flags_overflow",
    "800F64EC": "cell_flags_pos0",    "800F41E8": "cell_flags_pos0",
    "800F5448": "cell_flags_clr4",    "800FB3F8": "wnd_fx_2100",
    "800FE6E4": "battle_gate_early",  "800FD85C": "shop_rows_run",
    "800FD914": "shop_rows2_run",     "800FB09C": "shop_view2_run",
    # ---- 801x row-gate interpretations (hand modules, this + prior waves) ----
    "8011EA5C": "battle_wndfx_run",    "801224D0": "battle_put43",
    "8011EF30": "battle_rows_sync",    "8011FBA4": "battle_rows_29",
    "8017F8F8": "battle_mode_dispatch","8015240C": "options_row_run",
    "80152CDC": "options_rows_run",    "8010B010": "state_ok",
    "801109A8": "battle_spell_run",    "80116720": "menu_screen_tramp",
    "8011F9C4": "row_prep2_close",     "80127F2C": "status_panel_install_labels",
    "80138458": "status_pane_build",   "8013B95C": "cell_step2",
    "80149614": "cast_alt2",           "801539C4": "final_row",
    "8016AB14": "shop_store_run",      "8016DD9C": "shop_machine_run",
    "8016E0F8": "monster_status_run",  "80178C14": "status_table_init",
    # ---- 801x row-mid/wrapper/cb batch (Block A) ----
    "8012D204": "midrow_prep_a",      "801210AC": "midrow_paint_a",
    "80120E2C": "midrow_paint_b",     "801241B8": "midrow_paint_c",
    "8011F884": "midrow_degen",       "8011F320": "midrow_pad88",
    "8011F684": "midrow_pad88_run",   "80117594": "battle_tick_text",
    "8011EF0C": "battle_state_dc400", "80140558": "gpu_driver_run",
    "80150C38": "gpu_driver_run_b",   "80169128": "battle_cb_86120",
    "80124EAC": "cell_cur_save54_b",  "80197208": "tex_link_packets",
    "80194640": "cb_slot2",           "80194394": "cb_slot15",
    "8018A75C": "event_drive",
    # ---- Block A batch 2 (rowmap-mapped + named) ----
    "8010D9D4": "battle_row_linear",
    "80115BCC": "battle_row_e5",
    "80117DF8": "rows_swap44_54",
    "8011F6A4": "anim_noop",
    "80120F1C": "config_row_d600b",
    "80122D20": "equip_cells_render",
    "80125130": "config_row_1d",
    "80126610": "battle_row_88",
    "8012B0D8": "animation_row_310",
    "801345B4": "ability_rows_45",
    "8013D12C": "battle_row_wrap",
    "80140310": "config_row_8468",
    "80143E44": "battle_rows_twin",
    "8014B98C": "battle_row_f2a0",
    "80153374": "option_row_d4",
    "8015A374": "options_value_table",
    "8015A56C": "options_cursor_cells",
    "8015ABEC": "options_rows_b",
    "8016BB44": "shop_row_41",
    "8017559C": "shop_buy_list",
    "801928E8": "event_spin_wait",
    "801973B8": "anim_cmd_header",
    # ---- Block A batch 3 ----
    "80107C98": "config_sub_screen",
    "80107F3C": "config_confirm_loop_a",
    "8011416C": "cell_fill_aa",
    "8011581C": "battle_rows_300",
    "80115A34": "battle_item_rows",
    "80115D2C": "battle_window_24",
    "8011F724": "row_latch_7e",
    "801221EC": "config_row_221ec",
    "80123BD8": "shop_rows_37",
    "801264E8": "config_row_7800",
    "80126528": "config_row_26528",
    "801312BC": "ability_rows_29",
    "80152224": "config_banner_96",
    "8015329C": "config_row_5329c",
    "8018AC90": "self_test_loop",
    "8018F0C8": "anim_reg_stub",
    # ---- Block C: battle anim fan-out ----
    "8017F9FC": "anim_cmd_tail",
    "8017FA2C": "battle_anim_rows_a",
    "80181604": "battle_anim_rows_b",
    "801971A8": "anim_pack_word",
}
# ids whose extern declarations should be dropped (declared by the header)
HEADER = Path(__file__).resolve().parent.parent / "port/include/ff4_window.h"


def apply_to_file(path: Path, verbose=False):
    t = path.read_text()
    orig = t
    changed = 0
    # 1) drop externs for mapped primitives (the header declares them);
    #    matches both the raw id form and the already-renamed form
    def drop_extern(m):
        nonlocal changed
        changed += 1
        return ""
    ids = set(NM.keys())
    names = set(NM.values())
    pat = re.compile(
        r"^\s*extern\s+(?:int|void|u32|u16|u8|s32|s16|int32_t)\s+"
        r"(?:func_((?:800F[0-9A-F]{4}|801[0-9A-F]{5}))|(\w+))\s*\([^)]*\)\s*;\s*$",
        re.M)
    t2 = pat.sub(
        lambda m: drop_extern(m)
        if (m.group(1) in ids or m.group(2) in names) else m.group(0),
        t)
    # 2) rename id tokens everywhere (identifiers, incl. comments/strings)
    for fid, name in NM.items():
        if fid in t2:
            t2 = re.sub(r"\bfunc_%s\b" % fid, name, t2)
    if t2 != orig:
        path.write_text(t2)
    return changed


def main():
    args = sys.argv[1:]
    if not args:
        print(__doc__)
        return
    if args[0] == "rename":
        root = Path(args[1]) if len(args) > 1 else Path("port/src")
        nfiles = 0
        nextern = 0
        for p in sorted(root.rglob("*.c")):
            if "device" in p.parts:
                continue
            nextern += apply_to_file(p)
            nfiles += 1
        print(f"renamed in {nfiles} files; dropped {nextern} extern decls")
    elif args[0] == "report":
        import collections
        cnt = collections.Counter()
        for p in Path("port/src").rglob("gen*.c"):
            for m in re.findall(r"func_(800F[0-9A-F]{4})", p.read_text()):
                cnt[m] += 1
        left = {i: n for i, n in cnt.items() if i not in NM}
        total = sum(cnt.values())
        named = sum(n for i, n in cnt.items() if i in NM)
        print(f"gen refs: {total}, named: {named} ({100*named//max(total,1)}%)")
        print("still raw (>20 refs):")
        for i, n in sorted(left.items(), key=lambda kv: -kv[1])[:15]:
            print(f"  {n:4d} func_{i}")


if __name__ == "__main__":
    main()
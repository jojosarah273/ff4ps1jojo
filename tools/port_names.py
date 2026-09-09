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
}


# ids whose extern declarations should be dropped (declared by the header)
HEADER = Path(__file__).resolve().parent.parent / "port/include/ff4_window.h"


def apply_to_file(path: Path, verbose=False):
    t = path.read_text()
    orig = t
    changed = 0
    # 1) drop externs for mapped ids (the window header declares them)
    def drop_extern(m):
        nonlocal changed
        changed += 1
        return ""
    pat = re.compile(
        r"^\s*extern\s+(?:int|void|u32|u16|u8|s32)\s+func_(800F[0-9A-F]{4})\s*\([^)]*\)\s*;\s*$",
        re.M)
    t2 = pat.sub(lambda m: drop_extern(m) if m.group(1) in NM else m.group(0), t)
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
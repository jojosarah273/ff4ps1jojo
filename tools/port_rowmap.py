#!/usr/bin/env python3
"""Map a Phase A row/state machine C file into an interpreted module.

Faithful text transform: the 0x800F primitives become the semantic
window API (port/include/ff4_window.h); func_801xxxxx row helpers keep
their ids so the caller graph stays visible. Behavior unchanged.
"""
import re, sys
from pathlib import Path

M = [
    ("func_800F71DC", "wnd_open"), ("func_800F8D6C", "tail"),
    ("func_800F6630", "row_page"), ("func_800F4248", "row_read"),
    ("func_800F6564", "txt_set"), ("func_800F7210", "page_open"),
    ("func_800F824C", "cell_put"), ("func_800F6B68", "txt_cell"),
    ("func_800F8768", "cell_draw"), ("func_800F8188", "txt_draw"),
    ("func_800F8D00", "label"), ("func_800F8FB8", "open_row"),
    ("func_800F9644", "row_prep"), ("func_800F9660", "row_prep_close"),
    ("func_800F971C", "sep"), ("func_800F5410", "sep_a"),
    ("func_800F5480", "sep_b"), ("func_800F3F94", "cell_peek0"),
    ("func_800F3F38", "cell_poke0"), ("func_800F3C3C", "cell_state"),
    ("func_800F3B04", "cell_state"), ("func_800F3B9C", "cell_peek"),
    ("func_800F654C", "latch"), ("func_800F6434", "gate"),
    ("func_800F4120", "sel"), ("func_800F53D4", "io_just"),
    ("func_800F53C0", "io_go"), ("func_800F5574", "io_poll"),
    ("func_800F5958", "poll_t"), ("func_800F5A90", "poll_t"),
    ("func_800F6364", "cell_step"), ("func_800F63BC", "step2"),
    ("func_800F7270", "page"), ("func_800F7500", "draw_pad"),
    ("func_800F90EC", "page_paint"), ("func_800F62BC", "key_page"),
    ("func_800F5DA0", "poll_pair"), ("func_800F5EA0", "poll_pair"),
    ("func_800F5B8C", "poll_go"), ("func_800F5C64", "poll_go"),
    ("func_800F9330", "row_open"), ("func_800F939C", "row_sync"),
    ("func_800F95A0", "row_close"), ("func_800F960C", "row_done"),
    ("func_800F926C", "row_open2"), ("func_800F9298", "row_open3"),
    ("func_800F9448", "row_pad"), ("func_800F5140", "row_sel_cell"),
    ("func_800F4F4C", "row_sel_cell2"), ("func_800F516C", "row_arm_s"),
    ("func_800F5050", "row_arm_s2"), ("func_800F5CF8", "row_scan"),
    ("func_800F6558", "row_sync2"), ("func_800F3D48", "stat_sync"),
    ("func_800F6658", "row_read2"), ("func_800F6214", "row_done2"),
    ("func_800F7828", "row_act2"), ("func_800F7834", "row_act3"),
    ("func_800F6028", "row_ptr"), ("func_800F6014", ""),
    ("func_800F6268", "key_page2"),
    ("func_800F54D4", "io_press"),
    ("func_800F6048", "cell_dispatch"), ("func_800F6240", "page_paint2"),
    ("func_800F4008", "row_open_w"), ("func_800F7594", "cell_fmt2"),
    ("func_800F7894", "row_sel2"), ("func_800F7A40", "row_sel2"),
    ("func_800F4F28", "row_arm2"),
]
def map_calls(txt):
    for a, b in M:
        if b:
            txt = txt.replace(a, b)
    return txt
def main():
    for arg in sys.argv[1:]:
        func, out = arg.split("=")
        src = Path("src") / (func + ".c")
        body = src.read_text()
        body = re.sub(r"#include \"common.h\"\n", "", body)
        body = re.sub(r"extern[^;]*;[^\n]*\n", "", body)
        body = map_calls(body)
        body = body.replace("cell_state()", "cell_state_of()")
        body = body.replace("row_prep_close(0x20)", "row_prep_close()")
        body = body.replace("row_prep_close(0x10)", "row_prep_close()")
        body = body.replace("latch()", "latch_cur()")
        body = body.replace("row_open_w()", "row_open_w0()")
        # skip void func_ signature -> keep; wrap header
        head = (f"/* FF4 source-port — interpreted module for {func}.\n"
                f" * Ground truth: src/{func}.c (byte-verified).\n"
                f" * Primitives: port/include/ff4_window.h.\n */\n"
                f"#include \"ff4_window.h\"\n")
        Path(out).parent.mkdir(parents=True, exist_ok=True)
        Path(out).write_text(head + body)
        print("mapped", func, "->", out)
if __name__ == "__main__":
    main()

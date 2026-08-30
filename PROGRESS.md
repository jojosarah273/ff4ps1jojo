# FF4 PS1 (SLUS_013.60) Decompilation — Progress

Target: `ISODUMP/slus_013.60` — PSX EXE, 0xAD000 code bytes
Load vram: 0x800F2400 (file offset 0x800), gp = 0x8019ECFC
Splitter: splat 0.50.0 (`slus_013.60.yaml`), 2516 initial functions
Pipeline: mipsel-linux-gnu-gcc-13 -S -> maspsx (patched) -> GNU as -> .o
Verify:  asm-differ -o -f build/<f>.o -F build/expected/<f>.o  (0 = match)

## Status
- Matched: 59 / 2516 (2.3%)
- Blocked/deferred: ~16 (see below)
- Remaining nonmatchings: 2483

## Matched (33)
Initial: func_80169148
Gp setters: func_800F654C func_800F6558 func_800F71D0 func_800F71DC
            func_800F74F4 func_800F7500
void empties: func_800F9C90 func_8011F67C func_8011F6A4 func_8013A8C4
            func_8013B7B8 func_801442B4 func_80144F1C func_8015FCEC
            func_801673C4 func_801690F8 func_80169120 func_80169150
            func_80169158 func_80169160 func_80169168 func_8016BBC4
            func_80174774 func_801780AC func_80189F94 func_8019602C
Zero-stores: func_800F8CC0 func_800F8CC8
Global accessors: func_80188B28 (gp) func_8018DF90 func_80192718 func_80192728 (abs, -G0 group)

## Era lane (make psx FUNC=...) now unblocks the gcc-13 register/order deltas
PsyQ 4.4 CC1PSX.EXE under wine -> maspsx -> GNU as reproduces the original
codegen on the two-pointer patterns, INCLUDING gp-relative externs (maspsx
patch: `.extern sym,size` <= -G threshold -> gp-relative sbss member,
vendored in tools/maspsx).
- MATCHED via era lane: func_800F63E8 func_800F7074 func_800F7398 (*g = *p)
- Pending (compiler version/-f tuning): func_80188240 (abs return, base $v1
  vs $v0) func_80191530 (abs store, base $at vs $v0). Next: try -fforce-addr
  / other -f flags or the 2.8.1-SN / 4.5 cc1 variants.

## Deferred — non-C patterns
- func_8018F068 func_8018F0C8 func_8018F0D8 func_8018F148 func_8018F158
  func_8018F268 func_8018F278 func_8018F288 func_80190078 func_80190088
  (`addiu $t2,$zero,C; jr $t2` — jump-through-register trampolines)
- func_80191618 (data blob misdetected inside code; fix rodata boundaries)

## Toolchain findings (result-bearing)
- ASPSX 2.56+ semantics: `li <small const>` expands to `addiu` in the ROM,
  not `ori`. Fix = `--dont-expand-li` on BOTH maspsx lanes (done in
  Makefile). Unblocked func_8018600C / func_80187C9C immediately.
- CC1PSX (PsyQ 4.4) = gcc 2.8.1-family; matches *g=*p, getter-and, branches.
  BUT merges address+accumulator registers on `lw X; op X` chains (emits
  $v0 for both), while ROM getters keep a separate $v1 address. No -O level
  or -f flag on 4.4 changes this => those TUs used an older/newer rung
  (gcc-ladder: 2.6/2.7.x or SN32 4.5). Pending items below are rung-blocked,
  not semantics-blocked.

## Toolchain findings v2
- Xenogears-decomp vendors native-Linux gcc rungs (2.6.0 / 2.7.2 / 2.7.2-cdk,
  tools/gcc-2xx). None reproduce the ROM's fresh-register reloads (`$a1`)
  on multi-store functions => that register shape is rung-independent here;
  assign to the per-TU allocator artifact class, not to a specific version.
- Classified-and-matched patterns so far (modern lane): void empties,
  gp accessors (returns/setters), zero stores, getter-and masks,
  or-imm stores, address-of-global, abs-u16. (era lane): *g=*p copies,
  bitop-mask (&=|^=|&=~ with param), store batches.

## Blocked — semantics known, byte-blocked on compiler rung
- getter_and_ret x4 + copy_dup x4 + byte-pair copy func_800F6488 /
  func_800F710C (base $v1/$a1 vs $v0 accumulator merge; C solved, src files
  present in repo)
- func_80188240 (abs return, $v1 base), func_80191530 / func_80197A78
  (abs store, $at base), all same class: gcc2.x per-TU allocation nuance.
- func_8018F068..func_80190088 (10x jr $t2 trampolines; non-C)
- func_80191618 (data blob mis-split; fix config rodata boundaries)
- func_800F3A68 (single-nop slot alignment; splat boundary artifact)

## Remote
Add a GitHub/GitLab remote and push `main` (exFAT has no journaling;
see exFAT notes in git history / earlier reports).
## Toolchain findings v3 (era+sched lane)
- CC1PSX needs `-O2 -fschedule-insns` to reproduce jal-wrapper functions
  (tail-calls on gcc-13 vs real frames in the ROM). Added `make psxs FUNC=`.
- MMIO 0x1F8003C8 byte-port family (47 fns): the ROM folds `lui/base-reg +
  offset` loads; that fold requires the C to express the port as a local
  declared AFTER the call (`volatile u8 *port = (volatile u8*)0x1F800000;
  *dst = port[0x3C8];`). Port-family currently sits at 180-1200 (register
  reuse + epilogue-slot scheduler deltas); C is in src/.
- Wrapper callers with stale/uninit first args pass the arg through with NO
  setup: declare the callee `(void)` or use an uninitialized local.

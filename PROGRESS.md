# FF4 PS1 (SLUS_013.60) Decompilation — Progress

Target: `ISODUMP/slus_013.60` — PSX EXE, 0xAD000 code bytes
Load vram: 0x800F2400 (file offset 0x800), gp = 0x8019ECFC
Splitter: splat 0.50.0 (`slus_013.60.yaml`), 2516 initial functions
Pipeline: mipsel-linux-gnu-gcc-13 -S -> maspsx (patched) -> GNU as -> .o
Verify:  asm-differ -o -f build/<f>.o -F build/expected/<f>.o  (0 = match)

## Status
- Matched: 33 / 2516 (1.3%)  — all leaf/trivial functions
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

## Blocked — register allocation / scheduling deltas (needs old gcc 2.8.1)
All semantic C is known; gcc-13's allocator/scheduler differs from the
original PsyQ-era compiler on these patterns:
- func_800F63E8 func_800F7074 func_800F7398  (*g = *p; wants lw-gp first, ptr in $v1)
- func_80188240 (absolute return: address base in $v1 not $v0)
- func_80191530 (absolute store: base in $at not $v0)

## Deferred — non-C patterns
- func_8018F068 func_8018F0C8 func_8018F0D8 func_8018F148 func_8018F158
  func_8018F268 func_8018F278 func_8018F288 func_80190078 func_80190088
  (`addiu $t2,$zero,C; jr $t2` — jump-through-register trampolines)
- func_80191618 (data blob misdetected inside code; fix rodata boundaries)

## Notes for the era-correct compiler
zeldin's build instruction set (gcc 2.8.1 native cross for mipsel-linux-gnu)
is the documented maspsx path (decompals/old-gcc). When available, switch
CC in the Makefile; the loop and diff plumbing is compiler-agnostic.

## Remote
Add a GitHub/GitLab remote and push `main` (exFAT has no journaling;
see exFAT notes in git history / earlier reports).
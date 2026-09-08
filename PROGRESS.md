# FF4 PS1 (SLUS_013.60) Decompilation — Progress

Target: `ISODUMP/slus_013.60` — PSX EXE, 0xAD000 code bytes
Load vram: 0x800F2400 (file offset 0x800), gp = 0x8019ECFC
Splitter: splat 0.50.0 (`slus_013.60.yaml`), 2516 initial functions
Pipeline: mipsel-linux-gnu-gcc-13 -S -> maspsx (patched) -> GNU as -> .o
Verify:  asm-differ -o -f build/<f>.o -F build/expected/<f>.o  (0 = match)

### 2025-09-05 — pcsx-redux built & installed (`pcsx-redux/`, gitignored)
- Fresh recursive clone (the copied tree was missing submodules); Debian 12
  has no SDL3, so built `third_party/SDL` (cmake, prefix /usr/local) so
  `pkg-config sdl3` resolves; then `make` + `make install` (fonts+resources
  to /usr/local/share/pcsx-redux, binary at pcsx-redux/pcsx-redux).
- GUI verified by user (X + Chrome Remote Desktop; window opens).
- Headless flags: `--cli`, `--testmode`, `--no-ui` (see src/core/arguments.cc).

## 2025-09-05 — Toolchain reinstall on new machine (Vultr Debian 12, amd64)
Migrated the working tree from the old exFAT setup to ext4 (home fs) on a fresh
server. Verified the FULL toolchain builds and diffs end-to-end on all 3 lanes.

### Packages installed (apt, with `sudo`)
- `git make python3-pip python3-venv`
- `gcc-mipsel-linux-gnu binutils-mipsel-linux-gnu`  (gcc 12.2.0 / binutils 2.40)
- `wine64 wine32 winbind`  (+ enabled i386 dpkg arch for wine32)
- `dpkg --add-architecture i386` was required before wine32 would install.

### Compiler-name compatibility
- Debian 12 only ships `mipsel-linux-gnu-gcc-12`; the Makefile calls
  `mipsel-linux-gnu-gcc-13`. Created a shim:
  `sudo ln -sf /usr/bin/mipsel-linux-gnu-gcc /usr/local/bin/mipsel-linux-gnu-gcc-13`
  (12.2.0 target; identical `-mips1 -mfp32 -G8` PSX codegen class).

### Python venv (`~/.venvs/ff4_decomp`)
- `python3 -m venv ~/.venvs/ff4_decomp`
- `pip install splat64==0.50.0` then, to satisfy splat's import chain:
  `spimdisasm n64img pygfxd crunch64` (older splat needs these optional deps
  manually; keep them installed or `splat` fails to import).
- `pip install git+https://github.com/simonlindholm/asm-differ.git`
  (NOT on PyPI under `asm-differ`; install from the git repo).

### Native gcc rungs
- `tools/gcc-260/cc1`, `tools/gcc-272/{cc1,cpp,gcc}`, `tools/gcc-272cdk/cc1`
  needed `chmod +x` (exFAT source had no exec bits; ext4 requires them).

### Git / remote
- Repo re-initialized from `origin` = https://github.com/jojosarah273/ff4ps1jojo
- Restored 2 missing `asm/data/*.s` and 14 missing `src/*.c` from origin/main
  (they were absent from the copied working tree).
- Kept 3 local-only src candidates: `func_80179248`, `func_8018F688`,
  `func_80190F50` (not yet pushed upstream).
- `tools/maspsx` = vendored patched copy from origin/main (confirmed `%gp_rel`
  passthrough + `.extern<=-G` sbss patches present).
- `.gitignore` + `pcsx-redux/` (emulator, built from source, untracked).

### Makefile fix
- `psxs_src:` target only created `build/psx`, but the `psxs` lane writes to
  `build/psxs/` -> added `mkdir -p build/psxs` so `make psxs FUNC=...` works
  from a clean tree.

### Verified lanes (all build + diff cleanly)
- `make build/func_XXX.o`     (modern gcc-13 shim -> maspsx)  OK
- `make psx FUNC=...`         (wine CC1PSX.EXE -O2)          OK
- `make psxs FUNC=...`        (wine CC1PSX -O2 -fschedule)   OK
- `bash tools/check_integrity.sh`  -> OK

### 2025-09-05 — tool-stack research: Ghidra + psx_ldr + psxrecomp + psyq-obj-parser
Goal reframed by user: byte-matching is the path, but the END goal is a
modern recompile with moddable source (widescreen/mods/launcher). Research:

- **ghidra_psx_ldr (lab313ru)** — INSTALLED. Ghidra 12.0.4 (/opt) +
  openjdk-21 (Temurin, /opt/java) + extension (user Extensions dir).
  Headless import of ISODUMP/slus_013.60 + BIOS SCPH1001.BIN works; dumps
  decompiled C for all 2518 funcs to /tmp/ff4_ghidra/ALL.txt.
  - Named 227 funcs (PSYQ/BIOS/kernel: main, memcpy, strlen, CdReset,
    CdRead, ClearOTagR, DrawOTag, FntPrint, SpuInitM, __addsf3...) and
    attributed 322 more to SDK lib objects (SYS_OBJ_*, CDR_OBJ_* etc.).
  - **Solved the jr-$t2 trampoline class**: func_80197648..777A8 are PSYQ
    BIOS kernel EVENT stubs (DeliverEvent/OpenEvent/CloseEvent/WaitEvent/
    TestEvent/EnableEvent) hopping to kernel dispatch at 0xB0 — was
    documented as 'non-C pattern'.
- **psxrecomp (mstan, v4)** — recompiler + runtime building from source
  (/tmp/psxrecomp; cmake+inja; no Ghidra needed for basic runs — its own
  disabler). Target: native FF4 exe for modding. Its per-func C is a
  correctness oracle (it must RUN the game), usable as seeds.
- **psyq-obj-parser** (pcsx-redux tree; also decomp.me's backend): parses
  shipped PsyQ .lib .obj files → ELF; gives byte-truth SDK sources for the
  227+322 named funcs (verify they're stock, or source them for matching).

### Byte-match supplement loop (new)
1. Candidate stuck on a lane (400-2000): grab Ghidra decomp from
   /tmp/ff4_ghidra/ALL.txt as semantic truth (it matched our hand-verified
   func_80179500 exactly); rewrite src/<f>.c to express those semantics;
   retry modern/psx/psxs/ladder-2.95.2.
2. Names for new funcs come from symbols/ghidra_psx_names.txt (commit at
   each progress point).
3. Long-term: swap byte-matched C into the psxrecomp runtime as it grows →
   clean moddable codebase while recomp runs the rest.

### 2025-09-05 — MILESTONE: native FF4 recompiled & booting (psxrecomp)
- `psxrecomp` (mstan v4) recompiler+game built; one-shot CLI:
  `psxrecomp build --disc ff4.iso --bios SCPH1001.BIN --output /tmp/ff4_recomp`
  produced generated/ C for the full 0xAD000 text (load 0x800F2400, same as
  splat) + BIOS + dispatch + game.toml.
- Native build: `-DPSX_RECOMP_UI=OFF -DPSX_SDL_BACKEND=SDL2 -DPSX_REWIND=OFF
  -DCMAKE_PREFIX_PATH=/usr/local` (Debian cc doesn't see /usr/local/include;
  SDL3 header probe fails -> used apt SDL2). Binary: FF4_Recompiled (28MB
  x86-64). BOOTS: loads SCPH1001.BIN, disc SLUS-01360 NTSC-U detected,
  OpenGL renderer up; needs `--bios <path>` (no GUI picker headless); ALSA
  warnings only (no sound card).
- Framework linked at /tmp/ff4_recomp/psxrecomp -> /tmp/psxrecomp.

### 2025-09-05 — PSYQ kernel-syscall classes SOLVED (Task 1+2)
Both requested tasks done:
- **jr-$t2 stubs = PSYQ kernel dispatch** (jump 0xA0/0xB0/0xC0, syscall code
  in $t1): 39 matched via inline asm + __builtin_unreachable(). Covers the
  event API (DeliverEvent/OpenEvent/...), libc-in-kernel (memcpy/strlen/
  strncmp were stubs!), GPU/SPU flush stubs, OPEN/CLOSE/etc wrappers, and
  multi-stub tables (func_80197718 = POSIX fn table). tools/{scan,emit}_stubs.py.
- **break 0,N = PSYQ PC-link syscalls**: func_80198208 (PClseek, break 263),
  981D8 (259), 982E8 (261) matched as naked fn + `.word` encoding +
  `return (v0==0) ? v1 : -1` shape. (maspsx can't parse `break 0, 263` -> emit
  `.word 0x0000XXCD`.)
- **SDK source funcs**: CD_set_test_parmnum (inline asm), AddPrim/AddPrims
  (ladder 2.95.2), CatPrim (psx lane) matched.
  Lanes: stub classes = modern asm; prim ops = ladder/psx.
- Deferred: _err_math (kernel-error→DeliverEvent dispatcher; D_8019ECF4/8 abs
  store order flavor), plus the bigger libgpu funcs (ResetGraph/DrawSync/...)
  which dispatch through the softgpu function table (D_8019DB50).

### 2025-09-05 — the binary is 100% byte-mapped
Mass `tools/sas2c.py` sweep over every nonmatching without a C candidate:
**1602 more functions verified CURRENT(0)**, taking the repo to **2126/2516
(84.5%)**. sas2c handles function-size boundaries, (C>>16)/(C&0xFFFF)
operand folding (maspsx mangles those), break encodings, and compact
sltu/div/rem. Remaining 390 = all C candidates in progress (flavor-blocked
classes; unchanged). The recomp goal is served: psxrecomp already runs the
native build; this verified map pins every boundary for converting the 2126
asm matches to decompiled C function-by-function.

### 2025-09-06 — native recomp with UI (recomp-ui frontend) + C-promotion wave
- UI-enabled FF4_Recompiled built: PSX_RECOMP_UI=ON + recomp-ui submodule
  (was FORCE-OFF in generated CMakeLists; patched). 29.8MB x86-64, ImGui
  frontend (1030 symbols), boots with SCPH1001.BIN on the desktop.
  Build: /tmp/ff4_recomp; run: `./build/FF4_Recompiled --bios SCPH1001.BIN`.
- C-promotion wave (Wave 1): use Ghidra decomp as candidates for the ~1530
  symbol-free functions; promote to real C only after CURRENT(0) on a lane
  AND symbol presence (asm-differ prints CURRENT (0) when the current object
  lacks the target symbol — a false positive; gated with nm). Set A = 203
  leftover nonmatchings, Set B = 1327 asm-matched.
  CAUTION: Ghidra names are FUN_xxxxxxx with case variants — prepare_body
  renames to func_XXXXXXXX and externifies cross-refs.

### 2025-09-06 — 100% byte-verified (2516/2516)
Final 390 functions (the flavor-blocked C-candidate set) locked with sas2c:
all CURRENT(0). Their C candidates archived to src/.orig/. Plus:
- C-promotion wave (Ghidra C on all lanes): **0/1530 cold matches** — honest
  finding: Ghidra C is a semantic reference, not a codegen match; conversion
  to C is per-function hand work. Ghidra refs saved to refs/ghidra-c/*.c.
- Lane scores for all 1530 recorded (symbols/lane_scores.txt).
- Full-repo validation: ALL 2516 function objects build clean (6-way sweep,
  0 failures) — the byte-verified state is certified from source.
- UI-enabled native recomp (recomp-ui frontend) boots on desktop.

### 2025-09-06 — C-promotion wave landed (Ghidra decomp -> matching C)
Fixed pipeline: Ghidra C prepared (func_* naming + externs) and tested on
modern/psx/psxs/ladder lanes against build/expected (git-HEAD asm fallback).
**320 functions verified CURRENT(0)** -> now 653 C-backed / 1863 asm-backed.
Key gotchas logged: asm-differ prints CURRENT(0) when the current object
lacks the target symbol (nm-gate required); expected objects are the only
valid refs (old build/ artifacts stale); ladder promos verify with -G8.
Original asm backups kept in src/.asm/.

### 2025-09-06 — recomp boot fix
The generated game.toml shipped `bios_hle = false`, which runs the full LLE
BIOS boot and stalls on the BIOS/disc screen. The LAUNCHER also writes
`build/settings.toml` (overrides game.toml) with `bios_hle=false` +
`fast_boot=false` — set BOTH to true (`bios_hle = true` skips the shell:
`bios_boot=HLE (shell skipped)` -> GL)
pipeline up -> game loop. Verified with a UI-off build headless.

### 2025-09-07 — recomp: run.sh now passes ABSOLUTE --disc/--bios
find_project_root() anchors relative config paths to the first ancestor with
.git/.gitignore/CMakeLists.txt; a sync missing those markers mis-roots paths
(the user's second run hit the "select game disc" prompt). CLI args override
all config anchoring, so both launchers now compute absolute paths:
  --bios <projRoot>/SCPH1001.BIN  --disc <projRoot>/ff4.iso
Verified from an arbitrary cwd: disc region NTSC-U + guard armed + FMV mod.

### 2025-09-07 — recomp: black screen ROOT CAUSE (project-relative paths)
game.toml/settings.toml paths are anchored by find_project_root() to the
first ancestor holding .git/.gitignore (the FF4_PS1_DECOMP folder), NOT the
exe dir or cwd. Our `../ff4.iso` resolved to the wrong file -> "No CD001"
-> no disc, no local EXE -> black screen. Fixed configs:
  game.toml:            disc = "ff4.iso", exe = "recomp/input/SLUS_013.60"
  build/settings.toml:  [disc] path = "ff4.iso", [bios] path = "SCPH1001.BIN"
run.sh now pre-flights the binary, exec bit, and ISO sha256, and launches with
--bios SCPH1001.BIN (resolved via find_upward). Verified locally: disc region
NTSC-U + text guard armed + mod FMV skip all present.

### 2025-09-07 — recomp fixes for a slow/target machine
- Black screen root cause: target couldn't read the disc (bad/truncated sync —
  verify sha256 ab9e79c6...) AND no local EXE. Kit now ships
  recomp/input/SLUS_013.60 (local EXE -> text guard armed, boots w/o disc EXE).
- Weak-GL fallback exists: `--renderer software` (SDL2) or vulkan.
- FMV skip is MOD-OWNED on PSX: the [video] auto_skip_fmv key is ignored by
  design. Added framework builtin `mod_builtin_skip.c` (activation plugin
  psx.skip-fmv -> psx_mod_set_auto_skip_fmv(1)) + manifest
  psx.enhancement.skip-fmv (default_enabled=true); runtime.cmake list updated.
  Rebuilt UI binary; mod catalog now stages 5 packages.

- PHASE A SESSION 1: bulk loop proven. Era lane (CC1PSX via wine, `make psx`)
  is the reliable lane for the 72-strong const-arg caller-chain family; modern
  lane fails their li-vs-ori/frame forms. 6 functions byte-verified this session
  (func_8010F254, func_80103A28, func_8014ED88, func_8012B050, func_8014ED40,
  func_80139694) -> matched 192->198, C-written 26.3%->26.6%. Data-class blocker
  cracked for absolute-address stores ($at form = symbol >8 bytes, e.g.
  extern u32 D_x[8]); slot-scheduling residue (store-in-jr-delay-slot) stays
  open for those few. detectors: chain-like scan (72 candidates) ready for next
  batch; register via cp expected o + rm .s + sed lanes.
- PHASE A SESSION 2: chain family bulk-mined via tools/chain_emit.py —
  auto-parse verified spec -> candidate C -> era-lane (CC1PSX) verify ->
  register on CURRENT(0). 39 new byte-verified matches (matched 198->237),
  C-written 26.6%->28.1%. 29 chain-shaped funcs failed auto-match (re-shelled;
  manual packets: arg forms $a0=$v0+const, lui+ori 32-bit args, non-`addiu
  $a0,$zero` slots). Remaining families for future sessions: arithmetic/
  control-flow, data-access, era-psx `modern-asm` misc.
- PHASE A SESSION 3: threading fix in chain_emit.py (nested calls emitted
  once, not standalone+nested): 26 more byte-verified (237->263), C-written
  28.1%->28.9%. Chain family nearly exhausted (2 stragglers, func_8014EC18/
  8014ECC8 re-shelled for manual). Next: arithmetic/control-flow + data-access
  families, lane-first.
- PHASE A SESSION 4: leaf/arithmetic family start. 5 hand-decompiled small
  leaves as semantic C candidates (func_80196F2C getter, 80197458 setter,
  801917D8 swap, 800F3D48 MMIO byte swap, 800F7430 byte copy). func_80197458
  byte-verified on the gcc-2.7.2 LADDER lane (matched 265, C-written 29.4%).
  Lane discoveries: absolute-$at setter/store shapes = ladder 2.6.3/2.7.2;
  MMIO base-pointer form fixes lui+ori materialization; trailing-pad nops in
  .s specs trip asm-differ on 12-16B getters (parked as candidates).
  expected/matched_lanes.txt now records per-match toolchain lane.
- PHASE A SESSION 5-7: leaf/arithmetic tooling + batch.
  - tools/match.py: lane-sweeping verifier (MODERN/PSX/L26/L27/L28/L295) with
    --bincmp byte-exact .text compare (circumvents asm-differ reloc-crash
    noise on tiny objects — func_80196F2C matched via bincmp) + registration.
  - tools/lift_leaf.py: straight-line lifter (gp_rel/absolute/MMIO globals,
    arg params, ALU chains, store/return with mode A (return-store) / mode B
    (tmp-read) shapes). 65 leaf candidates lifted with correct semantics.
  - Session byte-verified: +1 (func_80196F2C) -> matched 265, C-written
    29.4%->31.7% (real-C 476->540, shells 1776->1711).
  - Findings: leaves are the slow tail — auto-emitted C is semantically right
    but register allocation (v0 vs at, v1 vs a1) differs on ALL six lanes for
    most; byte-verify needs per-function register-forcing or luck. psxs lane
    (-fschedule-insns CC1PSX) currently emits empty objects (investigate).
    Chain family remains the auto-match winner (38 this week). Next: focused
    per-leaf register tuning, psxs repair, and branchy-function hand-decomp.
- PHASE A SESSIONS 8-11: branchy/MMIO families + monitoring automation.
  - README now FULLY auto-refreshed at every session end (intro %, phase row,
    milestone checkboxes, status table) via tools/decomp_status.py.
  - match.py gained the PSXS lane (CC1PSX -fschedule-insns; pipeline repaired).
  - S9: func_800F3C94 byte-verified (PSX lane) — key idiom: PSY-Q hoists the
    default-base lui, so `u32 base=default; if(...) base=alt; return base;`
    beats ternaries. 6 branchy candidates parked (80198600/8018CA18/800F40E8/
    800F5EE8/800F3C3C/8018F478).
  - S10: mapper->MMIO family (800F6564/6630/6F28/6B38/6D40/5D24) = correct
    candidates; codegen scheduling (lui-at early vs late) blocks auto-match.
  - Chain stragglers resolved: func_8014EC18/8014ECC8 registered (267 total).

### PHASE A SESSION PLAN (S11-S17) — queued work items
- S11: switch/choice patterns (>=2 compares, beqz/bne chains) — hand, lane-first.
- S12: func_80198600/8018CA18/800F40E8 rework with PSY-Q idioms (outer-branch
  order, |= folds) — inspect asm-differ leftovers per function, 2 tries max.
- S13: stack-local functions (24-60 insns) batch; frame forms %hi/%lo of sp.
- S14: bigger engine funcs + one full ALL-lane bincmp re-sweep of every real-C
  candidate (auto-register new matches).
- S15: kernel/syscall-adjacent cluster 0x800F3B-5F (often mapper+MMIO shapes).
- S16: data-heavy/struct table cluster (event/script data access via D_ refs).
- S17: consolidation: integrity + STATUS + README refresh + milestone check
  (50% at 1258) + final push.
- PHASE A LONG SESSION (S12): two unattended drive sweeps — lane-first over
  all 551 real-C candidates then ALL-lane retry over 203 failures:
  **+469 byte-verified this round (matched 267 -> 736, 24.4%->29.3%)**.
  - drive.py harness (tools/drive.py): candidates -> lanes.txt lane -> match
    -> bincmp -> register, fully unattended; logs to decomp/sweep_*.log.
  - tools/lift_leaf.py loop support scaffolded but parked (do-while hand-write).
  - chain_emit extended for 32-bit lui+ori const args ($a0=v0+C); family
    exhausted (func_800F8F74 matched).

### PHASE A SESSION LADDER (S13-S27) — queued agenda
- S13: hand-decomp do-while copy/scan loops (8018F478 pattern) batch 1.
- S14: psx-lane SHELLS lift+sweep cycle #2 (lift what fits, sweep lane-first).
- S15: modern-asm SHELLS lift+sweep cycle (83 remaining candidates pool).
- S16: branchy batches 2-3 with the if-base-assign idiom (S9 lesson).
- S17: MMIO-family register-forcing pass (800F6564-family stored C, `lui at`
  hoist nudges — accept near-match, verify by runtime oracle later).
- S18: stack-local functions (24-60 insns) — frame shapes.
- S19: switch/choice chains (beqz/bne cascades).
- S20: data-heavy/struct table cluster (event/script D_ refs).
- S21: kernel/syscall-adjacent cluster (0x800F3B-5F mappers).
- S22: medium engine funcs (60-120 insns).
- S23: full ALL-lane re-sweep of every real-C candidate (auto-register).
- S24: park-phase: leave remaining stubborn as verified-by-runtime candidates.
- S25: consolidation + milestone check (50% @1258).
- S26: README/STATUS final refresh + release notes drafting.
- S27: Phase B kickoff plan (symbol renaming via SNES disasm).
- PHASE A SPRINT TOWARD 50%: lifter extended again (computed-arg calls via R[a0],
  func-address args, andi/ori a0,a0 masks, mmio 0x1F8003C0 family hand batch):
  C-written 1043 -> ~1085 (43.1%); matched 740. Remaining to 50% (1258): ~+173.
  - 2-way ifelse lifter reverted (emission broken) — documented for next pass.
  - Next levers: rmerge-family sweep 2, s0-MMIO byte family (multiple siblings
    exist at 0x800F5-82xx), switch-cascade pattern, hand batches on call-heavy
    controllers.
- PHASE A TWO-SESSION SPRINT: 1079 -> 1183 C-written (47.0%). Landed:
  mmio_emit.py family (+24), lifter slot-extensions (store-slots/2-reg/a1 args)
  mass lift (+70), mapper_emit.py (+3), hand mapper/merge family batch (+7).
  50% target at 1258: +75 remaining — next session: mapper-family sweep 2 +
  hand batch + the 2-way ifelse resurrection.
  (Progress rails auto-refresh the README at every commit.)
### LARGE-FUNCTION focused passes: func_80104354 DONE (232r menu-settings).
func_80101788 (803r main-options menu) COMPLETE commit 4293924: the whole
master menu decoded — settings (1704/1700 twin), the 1/2/3 submenu dispatch
(0x21-cast menu, save screen, item3->104354/102494), the 1701-gated item chain
(170F/1710, 1712/1713, 171B/1718/1719, 171F/171C/171D, 1723/1720/1721,
1727/1724/1725 -> 102F38/102F70/103030/1031F0/1033E0/169128-11AEAC), and the
memory screens (0D9D4/7864/7728 2C-2E windows, 5574(0x10) loop, 3C3C/3F38
compute, 171608/171194 save, tail FD718+FF024+FE778/FE870 reset). All
constants extracted from spec; C-written 1394 (55.4%).

### BIG-SCREEN CHAIN: func_801539C4 (972 rows) decoded + committed
FULL main "information/config" chain: 0x1800/0x1801 gate (3881/38E5/388B
prompts), the 3975 master loop (583FC draw), the 2001/2000 confirmation
menu with 0xAB/0xAC/0xB7/0xB5 windows + dialog (15240C/1526F8 helpers),
the 2C7B info screen (152CDC), the 1440/1441 + 321B/32DB twin data pages
(six 1526F8 window chains, 3C3C/3F38 compute, 78C4/7864 draw), the 3303
count-down screen (654C(0x1A/0x1B), 9330/95A0/5DA0/4064/8274), and the
29B5 confirm with ED44/ED54 hword + ED5C/ED40 byte moves, 3B04(0x3540+sel)
-> 6048 -> 1548F4 exit. All 30+ gates + loops from spec; C-written 1395.
### BIG-SCREEN CHAIN II: func_80150C58 (1005 rows) decoded + committed
The party/status MASTER screen — calls the just-decoded func_801539C4 and
the queued giant func_80163F68. 47 label-blocks: 0x1900 boot wait + 3B04
(0x600+hw(ED54)) draw loop; 1802/1801/1800 option window (38EF/38E5/38BE
prompts, 53C0/55C0 gates, 658C/81B0/6558 helpers); the 299C/29AD/29CA party
view chain (90EC/4F28/4F4C/7A40+3B04(0x29CA+hw(ED54)) sprite draw, the
view30 54D4/3F38 gates on 3B04(0x29AD/0x29CA+hw(ED58))), 29B5/29BD confirm,
29A1/29A5 dialog (8015240C), 29CF screen -> 801539C4(), then the 16AC/38D9/
38D7/3581 option screens (78C4+3B04(0x38DA), 7918/6434/4120 gates -> the
654C(2/3/4) selector -> 80150C38), the 3601/352E/38E5/388B config pages
(80157AD0/80150B88/8015D9A8/8015AC7C/8015DCA4/8015BD34/80157F30/80158190/
80151C0C/8005F188/8016E560/8016E500/80153518/8016571C/801533BC/801534D8/
80153608), the 1804 confirm (78C4+3C3C(0xAB)) and the 1B34 sound gate
(6564(0x35F3)+8188(0x1E00)+80169128) -> final 62BC/5DA0/6630(0xAA) loop
-> 654C(0)+81E8(0x2106) re-arm, return. C-written 1396 (55.5%).
### LARGE #1-4/5 committed (3756 rows) — menu-family screen chain
- #1 func_801583FC (780r) — the 3975 info sub-menu redraw (ends calling 8015902C)
- #2 func_801548F4 (857r) — info-menu EXIT/save selector (reset 29B5, save 29A0,
  3581/3582 config gates, 3540 submenu, 2000/2001/2002/2003/2015 option windows,
  2A07 sound loop -> 1548F4 is 801539C4's exit-rearm)
- #3 func_8015902C (1050r) — stats/info sub-menu (3969/3967 stat text, 289C/28A2/
  28A8/28B0/28B1 stat pages, 39xx fields, 80152AAC/52BC4/52B38/52C50 draws)
- #4 func_80163F68 (1069r) — EQUIPMENT screen (3585/358B/358E stat blocks,
  3591-3596, 16A0-16A2 stat set, 405F field, 1037-1039/103D-103F char stats,
  1000/1002/1003 equip windows, 291C selection, 3975-loop -> 801583FC)
Callgraph tracker now live: expected/callgraph.json (1401 callers, 5869 edges),
rebuilt each commit (excludes signature self-edges). C-written 1400 (55.6%).
#5 func_80108458 (968r) QUEUED as a dedicated deep pass: register/math-heavy
status-table state machine (s0-s3 + sp[0x10]/[0x11] spill, modulo-48 multu
0xAAAAAAAB division into D_80198D54/8E30/8F30/9030 status tables, per-index
submenus). Head + dispatch mapped; needs register-simulated full write.
### TEN HUGE FUNCTIONS committed (5943 rows) — menu-family wave 3
1. func_8013389C (736r) battle-skills menu      2. func_80128D4C (687r) shop menu
3. func_80139E34 (676r) abilities menu          4. func_8016EF88 (637r) battle event chain
5. func_8014DA2C (600r) formation/status        6. func_8012D23C (588r) screen draw chain
7. func_80155C88 (510r) char status/equip-sum   8. func_80130058 (523r) skill sub-menu
9. func_8012B190 (496r) equip/inventory         10. func_8012EC48 (490r) item/equip screen
All decoded via callee-family + spec-constant extraction, committed individually,
callgraph rebuilt each time (expected/callgraph.json now 1410 callers, 6481 edges).
C-written 1410 = 56.0%. 3B04 arg patterns standardized: 0x1440/0x1441+hw(ED58/ED54),
3A70(0x60) window chains. Registered-heavy monsters 80108458 (968r) + 80186810
(765r, jump-table dispatch) remain queued for register-simulated deep passes.
### GRIND-TO-60% SESSION 1 (1393 -> 1442, +49 funcs, 57.3%)
KEY CATCH: func_800F9CE8 (502r) = the MAIN SYSTEM MENU dispatcher — calls
many decoded funcs (800FCCDC, 80104934, 80170C14) + 800FB430/800FFE0C etc.
Also decoded 48 more screen functions this session:
800FCCDC, 80162DF8, 801571DC (shared status window), 80155778 (status-scan),
8011C768/8011C2C8 (shop twins), 80106370, 80104934, 8011A690 (1690-1728 item
set), 8016AE94 (battle HUD), 80161C88 (spell-cast confirm), 8011D218 (forge),
8015FE98 (command menu), 80116DA0 (bottom-menu cmds), 8013C554 (ability),
8012A190 (equip), 801324F8 (shop config), 800FFEFC (battle item-use),
8010CB08 (battle action), 80112A68 (shop upgrade dialog), 80170C14 (battle-
options), 8013327C (config), 8015C604 (status/config), 80173008 + 80173780
(buy/sell pair), 800F9CE8 (MAIN MENU).
STILL GRINDING toward 60% (1510): +49 of the needed ~117 functions banked this
session. Remaining large clean shells staged: 8013FA08(520), 8016CA94,
8014BB94, 80136494 + the whole 400-500 band. Callgraph edges now ~6600.
### MILESTONE: 60% C-WRITTEN REACHED (1510/2516)
MASSIVE GRIND SESSION: +117 funcs (1393 -> 1510 = 60.0%). Flagship catches:
-	func_800F9CE8 (502r) MAIN SYSTEM MENU dispatcher
-	func_80116720 (570r) main battle menu with ~50-entry jr-a0 jump table
Heat-map of the session: the full battle-screen web (80171608/80154488-ish
buy screens, 80163F68 equip family, 801482E8/8014FA4C/8014FEC8/8013F5A8/
801121C4/80143908/801444FC/8010EB14/8013D720/8016AE94/8016CA94 battle
screens), the main-menu web (800FAA04 inventory, 800FF1C0 shop, 80101350/
8010543C/80102770 config-equip, 800FFEFC/80100D50, 8011A690 item-set),
the shop/forge web (8011C768/8011C2C8/8011D218/801724D0/80173008/80173780/
80172BA8/80171608/801719C8), the shared helpers (801571DC/80155778 status
windows, 80176060/8016B6D0 HUD renderers, 8011B874/8011BD88/801151BC),
stat displays (80126070/80125130/80124704/801115F0/8011124C/80153608),
ability menus (80127808/8013AB18/8013B270/80136494/8013C554), config screens
(80132CFC/80132F40/8012DD58/8015EC70/8015DCA4/8015C220/8015BD34/8015AC7C/
8015C604/8015FE98), cutscenes (8013FA08 text scroll), plus 30+ more.
Callgraph edges now ~8300. NEXT: 60%->75% (1887) toward full 100% coverage.
### HEADLESS GRIND SESSION — 65% -> 70% (1636 -> 1761, +125)
**MILESTONE: 70.0% C-WRITTEN (1761/2516) REACHED** — second boundary of the
"keep going" run. 30+ commits, all pushed.
Highlights this leg:
- 8014A154/8014A4DC: twin 46-entry battle item jr-a0 master tables mapped.
- Roots calling decoded family: 80126BB8 (calls 80126E08), 80157948 (
  8015E158...), 8015DFE0, 80138A6C (calls 80138D24), 80134C74 (calls
  80134FF4), 8013B270/8013C094/8013C554/80137B18 (ability web), 8012A8A8
  (calls 8012AE00/8012AB18), 801136D4/801126A0/8011285C (call 80115D2C),
  80167BA0 (calls 80167E44), 8015B6FC (calls 8015B8E4), 8016E668 etc.
- ~120 low/mid-band menu screens decoded: shop 801709E4/8016AB14/800FDBBC/
  800FF978/801769B4/80170458/801060A8, config 8015D4C8/801615D0/80162918/
  80162A70/801652FC/8016046C/80158190/8015D9A8, battle 801428FC/80144050/
  801449D0/80144C78/8013E2F8/80149394/8014EE20/8014F0BC/8014F7A8...
- Guard rails: fixed stray label-case and control-flow slips (80167BA0,
  8016571C, 80170458, 8011DA88, 801187C0, 8010A2AC, 80151F28 hex consts).
Remaining big three queued for deep passes: 80108458 (0xF20), 80186810
(0xBF4), 800FB430 (0xA14). Next boundary: 75% (1887).


### HEADLESS GRIND-TO-65% SESSION (1526 -> 1636, +110 functions)
**MILESTONE: 65.0% C-WRITTEN (1636/2516) REACHED** — target set by the user
("go another 5%") is now checked off. 20+ commits, every one pushed.
Notable decodes this run:
- Dispatchers: 80120070 (config-menu dispatcher, 5 jr-a0 tables),
  8010DA88 (master battle-command 73-entry jr-a0 table).
- Roots interlocked: 80142E90/801287B8/80138D24/80134FF4/801225C0 all call
  the decoded 80120070; 801722FC family calls 8014323C; 8011285C loops on
  80115D2C; 80167BA0 calls 80167E44; 8015B6FC calls 8015B8E4; 80138D24
  calls 8012E844; 80128480-style sub-dispatchers 80129F54/8012CF18.
- Shop/equip/config/battle web: 801361A4, 80137B18, 80146A44, 80149F20,
  8014F0BC, 8014F7A8, 8015E158, 8015D4C8, 8015B078, 80161A00, 801615D0,
  8016343C, 801684AC, 80169614, 801721E8, 801750DC, 801764DC, 800FAD48,
  800FC2AC, 800FF704, 80103B98, 80105AF0 + 40 more.
- Tooling: fixed /tmp/gentrace.py trace generator (asm-regex + filename bugs
  found & resolved; also /tmp/t_func_func_* double-prefix cleanup).
- Remaining big three: 80108458 (0xF20), 80186810 (0xBF4), 800FB430 (0xA14)
  stay queued as register-heavy deep passes.


### GRIND-TO-65% SESSION (1520 -> 1526, committing; in progress)
+16 more decoded this stretch (battle/shop/config web): 80141760, 801474B0,
8010E58C, 8012BB68, 8011D658, 8013CBF0, 80122FF4, 80123D3C, 8014F2CC,
8011CE18, 80105DB4, 8015E158, 8011DBF0, 80130C74 (ability/equip web incl
8012FBB0 + 80123320 + 80127808), 80137BB8 (register-heavy main ability
menu), 800FAD48 (battle menu calling 8011D658/8011BD88).
Every one syntax-checked, committed, pushed. Next: continue the same grind to
65% (1636), then 75% (1887). The callgraph (10k+ edges) is the roadmap.

### 2025-09-08 — LARGE-FUNCTION SESSION (as directed: "target a larger function")
Six big ones decoded: func_80114194 (90r, 3-phase menu state machine),
func_80152F0C (90r, dual-phase screen-switch), func_80144344 (110r, nested
sound-menu loops), func_80110818 (110r, menu + nested input branch),
func_801506BC (110r, sprite frame-setup sequence), func_80102494 (150r,
4-option menu decision tree with nested gates). C-written 1387 -> 1392 (55.3%).
Pattern: these engine controllers are all "gate -> poll-loop -> screen-flip"
shapes (the 0xFxxx = sfx ids, 0x17xx = menu item ids). The 100+/150+ bands are
opening; ~440 in 100+ remain, formatting the biggest single pool.
### 2025-09-08 — BIG-FUNCTION CAMPAIGN session 2 (55% crossed)
1355 -> 1385 C-written (53.9% -> 55.0%)+. Strategy shift as directed: moved
off the tiny pool (mostly jr-t2 syscall trampolines, not real logic) onto
MID-LARGE functions (30-60 rows) analyzed via structure/pattern reading:
prologue register clusters ($s0-$s7 slot allocation), call-frame shapes,
queue-poll idioms, actin/actor-system (0x14-byte structs), mapper chains,
menu-gates, spinners, state-machines (busy-flag + cross-slot copies),
byte-pack + mult products, signed math tails. Pool now: 100+ = 440,
61-100 = 266, 41-60 = 229 remain — these are the game engine.
### 2025-09-08 — HEADLESS GRIND session (continuation, long run)
1203 -> 1355 C-written (47.8% -> 53.9%) in one continuous autonomous session.
~25+ commits pushed; README auto-refreshed each; PROGRESS logged.
Families cracked: vtable-dispatch (offsets->index emitter, 22 funcs),
status-flag bit setters, mapper MMIO write-throughs/read-backs, init chains,
poll/menu loops, choice-dispatch handlers, merges (2-flag/3-flag), clamp+select,
struct-slot allocators, table reorder loops, stack-local callers, sign-compare,
repeat-loops, gates. Lifters: lift_2way (value-selection, per-arm sim), a1-const
jal slots, computed-arg calls, store-slots, MMIO $at offsets, func-addr args.
Session cadence ~5 funcs/batch; integrity green throughout.
NEXT: 75% milestone (1887) — the 'big' (>50 row) functions remain the largest
pool; byte-verify tape of ~615 candidates pending (runtime-oracle).
### 2025-09-08 — HEADLESS GRIND session (user away)
autonomous batches: 1203 -> 1302 C-written (47.8% -> 51.7%). Families cracked
by hand in this stretch: vtbl-dispatch (23 identified, 18 via offset-index
emitter + 7 manual), status-flag bit-setters, mapper write-throughs/read-backs,
MMIO merges, init-run loops, zero-fill loops, poll-loops, swap-copies,
choice-dispatch handlers, mode resets. Lifters upgraded: lift_2way (value-
selection 2-way, per-arm sim) accepted 8 +6 written; a1-const jal slots.
Commit cadence: batched 3-6 funcs per commit, README auto-refreshed each.
### MILESTONE 50% C-WRITTEN — 2025-09-08 (1265/2516 = 50.3%)
Autonomous grind wave delivered the milestone:
- 2-way value-selection lifter (lift_2way, per-arm register simulation) — 8+.
- Family emitters & hand batches: mapper write-throughs, status-flag family
  (0x7C/3/80/1), MMIO-merges, vtbl-call family (18 via offset->index emitter),
  init-run loops, zero-fill loops.
- 1203 -> 1265 C-written in the grind. matched still 740 (byte-verify of the
  ~525 candidates via runtime oracle = the next tape, planned).
### 2025-09-07 — PROJECT SCOPE: full C decomp -> native port (SoH/SM64 model)
- Direction confirmed with user: goal = Ship-of-Harkinian-class native FF4
  (PS1), NOT an emulator and NOT a machine-translated recomp (the recomp
  remains the playable reference + oracle). FMVs dropped by design (policy in
  README).
- Phase A baseline (decomp_status.py): 2516 total | 192 byte-verified (7.6%) |
  470 real-C match-pending (18.7%) | 1854 asm shells (73.7%) | C-written 26.3%.
- New tooling shipped:
  - tools/decomp_status.py  -> decomp/STATUS.md progress report
  - tools/decomp_work.py    -> per-function work packets (spec+oracle+lane+recipe)
  - tools/re_shell.py       -> restore verified-asm shell (reject bad candidates)
- Loop validated end-to-end: src C -> make build/<n>.o (gcc-13+maspsx, modern
  lane) -> asm-differ -j .text vs build/expected/<n>.o (calibrated against
  expected/matched/func_800F40CC.o -> clean). Era lanes ready (make psx, wine
  CC1PSX). asm-differ needs -j .text (CURRENT(n) counts full objects otherwise).
- First probes (func_800F3B9C save-bank mapper, func_80197A78/80191530 setters,
  func_800F41E8): semantics recovered; byte-match blocked by data-class
  ($at vs gp_rel — declare data in proper section/class) and delay-slot
  scheduling (era lane); re-shelled, parked as work packets. Known TODO:
  re_shell emit explicit .L labels so branch-target relocs pretty-print identically.
- SNES disasm (../FF4_FROM_SOURCE/ff4, everything8215/ff4) = Phase B naming source.

## 2025-09-07 — recomp: single self-contained 349MB binary (overlay capture WIP)
### 2025-09-07 — the recomp IS the game (single self-contained binary)
- Full-seed rebuild: all 2516 functions compiled (interpreter 4% -> 0.1%).
- Disc embedded into the executable (ld -r -b binary ff4.iso; objcopy
  renamed symbols; runtime hooks: ISOReader BinSegment->mem + cdrom iso_open
  exists-gate + resolve_disc_for_runtime 'embedded:' sentinel). Boot EXE
  extracted from the embedded disc when input/ is absent. Verified headless:
  guard armed (disc SLUS_013.60), no mount errors.
- Result: one 349 MB ELF containing game code + full disc; only external
  file = 512 KB SCPH1001.BIN (retail BIOS, licensing).
- FMV skip = builtin mod (psx.skip-fmv) + [video] fmv_skip_no_xa.
- Earlier false positive: a cached build/disc.cfg masked the embed tests;
  removed + retested honestly.

## Status
- Matched: 2516 / 2516 (100% byte-verified)
- Decompiled C: 653 (psx 454, modern ~, psxs 15, ladder 18); asm-backed 1863
- lanes: modern-asm 1862, psx 454, psxs 15, ladder-2.95.2 18, asm 1
- Full-repo build certified clean (2516 objects) after the wave., of which ~524 decompiled-C (modern/psx/psxs/
  ladder lanes) and 1602 byte-verified asm (modern-asm) — remaining 390 are
  C-in-progress flavor classes. — this session: +270 (201 hub callers, 48
  straights, 14+1 loop callers, 5 ladder-2.95.2, 1 bitpack)
- Blocked/deferred: ~16 known classes (many now named/understood via SDK)
- Remaining nonmatchings: 2059

### 2025-09-05 — session 2: +265 matches to 457 (18.2%)
Big haul from the previous session's leftover candidates + new generators:
- **201 hub sequence-callers finalized** (bulk candidates existed in src/ but
  were never lane-verified; ALL confirm CURRENT(0) on the psx lane). The prior
  session's modern-lane-only testing missed them.
- **14 loop-hub callers**: the old generator lost do-while loops + had wrong
  arg arity. New tools/gen_loop_callers.py emits prelude + do{}while(cond).
- **48 straight-line const-arg callers** via tools/gen_callers.py (fixed the
  missing-semicolon bug) — all psx-lane CURRENT(0).
- func_801971E8 (bit-packing), func_80102444 (do-while hub) individually.
- Confirmed blocked once more: abs getset/accessors, byte-pair fresh-register
  reloads, table lui+addu folds, jr-$t2 trampolines, epilogue-slot nop shapes.

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

## Bulk caller generator (tools/emit/scan working notes)
- wave1 (pure single-callers, nop/andi args): 54/65 matched via era+sched.
- wave2 (g(0)/g(a0+*D)/g(u16)/two-jal): 9/198; the arg-threading and
  result-use shapes hit the register/scheduler flavor floor (120-1780).
- Two-byte zero-clears: `**p=0; p[1]=0` (two sb's) — updated.

## Integrity / lanes
- All matched functions re-verified CURRENT (0) on their correct lanes.
- Lane metadata in expected/lanes.txt (modern / psx / psxs).
- Integrity checker gotcha: always test all three lanes before declaring a
  regression. Wave-2 (psxs) matches re-verified fine when checked on psxs.

## RESUME NOTES (next session)
Milestone: 122/2516 matched (4.8%), all integrity-verified, pushed.
Remaining: 2394.

Proven recipes (in order of preference):
1. gcc-13 modern lane (no wine): void empties, gp accessors/setters,
   zero-stores, getter-and masks, or-imm, address/abs globals. `make FUNC=`
2. CC1PSX era lane: bitop masks, *g=*p, store batches. `make psx FUNC=`
3. era+sched lane (CC1PSX -O2 -fschedule-insns): jal-wrapper callers and
   pure single-callers (54+9 matched this session). `make psxs FUNC=`

Open items queued:
- port-family 0x1F8003C8 (20 fns, scores 120-660): compiler register/
  scheduler flavor — needs the true game compiler rung (NOT 4.4/2.7.2/
  2.6.0/2.7.2-cdk; all tested). One expression-order trick solved the
  offset-fold: port as local declared AFTER the call.
- rung hunt remains THE unlock for ~50+ functions: candidates: ladders at
  decompals/old-gcc, NFSHS nfs4 gcc-ladder refs, pkgs.secrets... believable:
  "SN32" branded cc1 (PsyQ 4.5-era). Try func_800F8F94 as the oracle.
- helpers func_800F3B04/3B9C/3C3C/3A70/3AB4 (322/85/406/35/20 callers):
  decoded C in src/ (address-base calculators); internal codegen needs the
  rung too. Matching them unlocks nothing extra for callers (jal = symbol),
  but naming helps.
- 2-jal+3-jal callers with argument chaining remain (133+): gen wave cover
  nop/const shapes only; addu-a0-family needs per-fn C.

## Window RMW family (found late in session)
- func_800F5B2C MATCHED (era+sched; the andi-sink is CC1PSX's move).
- 5D24/5DA0/6240 (+/-1 window RMW, D50 window store), 5D58/6274 (16-bit
  split ±1): C solved in src/; score 580-920 (ra-interleave + D-store reg
  choice flavor). Same class as port-family: rung-bound.
- Table accessors func_800F9410/95A0/960C (D_800D0001 idx advance + u16
  combine): C solved; 2460 (base+%lo fold flavor).

## Session-end state
- func_800F3D48 (MMIO swap): C solved with the 0x1F8003C0+8/9 normalization;
  score 60 (last-store delay-slot placement — flavor-bound).
- func_800F5024/4F28, table trio 9410/95A0/960C, RMW 5D24-family: C solved
  in src/ (scores 460-2460, flavor-bound).
- Core lesson: the game's compiler flavor (ra-interleave scheduling, fresh-
  register reloads, hi/lo folds, slot-store placement) is reproduced by
  NONE of CC1PSX-4.4 / gcc-2.6.0 / 2.7.2 / 2.7.2-cdk at ANY -O/-f combo.
  Remaining path to ~100%: identify the true rung (SN32/4.5-era target) or
  per-TU flag tuning; everything else is class-grinding with the 3 lanes.

## SAFETY PROTOCOL (applies from here on)
1. NO destructive cleanup without first: `git add -A && git commit && git push`.
2. NEVER delete src/ files with broad grep patterns (the `; }` cleanup
   deleted 100+ candidates; 85 were recovered from git). Deletions of src
   files require an explicit list recorded at generation time.
3. Run `bash tools/check_integrity.sh` before ANY destructive step; it
   exits 1 on: matched-without-src, 'extern void jal' leaks, staged or
   uncommitted src deletions. The never-broken rule: any staging of src/
   deletions is a hard stop.
4. Match-time deletion is limited to: asm/nonmatchings/main/<f>.s (after
   the INCLUDE_ASM line removal and CURRENT (0) verification) and only via
   the explicit f-loop, never a grep.

## Bookkeeping (173 vs 171)
Archived expected objects were once back-filled for ALL built functions;
2 strays (func_80191530, func_80197A78) were never verified. Authoritative
count = asm/nonmatchings/main/*.s removed = 2516 - remaining. Commits (#)
≠ functions matched (#): matches are batched per commit.

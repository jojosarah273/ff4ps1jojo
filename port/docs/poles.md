# PSY-Q runtime hook layer (the "poles")

50 functions in the 0x8018F0xx-0x80198xxx band are PSY-Q runtime stubs.
Their asm is `addiu t2,c; jr t2; addiu t1,idx` — a jump through the fixed
low-RAM vector:

| vector | meaning (inferred) |
|---|---|
| 0xA0  | general dispatcher (ids 0x15..0x49) |
| 0xB0  | anim/event dispatcher (ids 0x07..0x5B) |
| 0xC0  | pair dispatcher (ids 0x02..0x03) |

Plus SYSCALL stubs (801976E8/F8 = PSY-Q lock enter/exit pair — callers
check the enter return) and BREAK hooks (801981D8/981F8/98208/982E8 =
`break 0, 259..263` SDK marshalling).

These are PS1-only (the SNES build has no counterpart), register-only, and
were banked as documented stubs in Phase A. Phase B interpretative mapping:
the poles are the timer/anim-scheduler entry points; the vector targets
live in low RAM and are set at boot — the native port replaces them with a
plain callback table.

Files: src/func_8018F068..80198A00 (see the per-file doc comments).

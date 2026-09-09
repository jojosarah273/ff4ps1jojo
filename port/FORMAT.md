# Interpreted-source format (Phase B)

Every `port/src/**` module follows this contract so the port stays exact
while becoming readable:

1. **One behavior = asm order.** The statements mirror the byte-verified
   Phase A function 1:1. No reordering, no "obvious" refactors yet — the
   refactoring happens after the whole domain is interpreted and buildable.
2. **Semantic names** for functions and state; each primitive declares its
   `func_800Fxxxx`/`func_801xxxxx` origin in a comment or in the module's
   primitive table.
3. **Ground-truth reference** — the module header names the `src/func_*.c`
   files it interprets.
4. **No fabricated control flow.** Register-gated branches that resist C
   are kept as asm-order `if/else` or documented `goto` per the Phase A
   source; never silently simplified.
5. **State is exported** — the raw PS1 cells (D_8019ED40..68, D_8019B0xx,
   D_8019FFE8, ...) become named globals at the top of the module that
   owns them; a future pass consolidates them into structs (see
   ARCHITECTURE.md).

## Module template

```c
/* port/src/<domain>/<name>.c
 *
 * Interpretation of func_8012XXXX (one-line role).
 * Ground truth: src/func_8012XXXX.c (byte-verified).
 */
#include <stdint.h>

/* primitive table (mapped func ids) */
void txt_set(uint32_t id);   /* 800F6564 */
...

/* exported state (was D_8019EDxx) */
uint16_t g_xxx;
```

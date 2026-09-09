/* FF4 source-port — battle/animrows.c
 *
 * The battle-anim row fan-out under battle_mode_dispatch: the two
 * dispatcher targets plus the GPU-command word packer and the cb-table
 * tail. Exact mirrors.
 *
 * Ground truth: src/battle_anim_rows_a.c, 80181604, 801971A8, 8017F9FC
 * (byte-verified).
 */
#include <stdint.h>
#include "ff4_window.h"

void cb_slot2(void);
void anim_cmd_tail(void);
void anim_cmd_tail();
uint32_t anim_pack_word();

/* 801971A8: pack the anim command word (mode bits + coord fields).
 * K&R definition so 1-arg call sites (the asm's a0-only calls)
 * stay valid under gnu99. */
uint32_t anim_pack_word(a0, a1, a2, a3)
    uint32_t a0; uint32_t a1; uint32_t a2; uint32_t a3;
{
    return (((((a0 & 0x3) << 7) | ((a1 & 0x3) << 5)) |
             (((int32_t)(a3 & 0x100)) >> 4)) |
            (((int32_t)(a2 & 0x3FF)) >> 6)) |
           ((a3 & 0x200) << 2);
}

/* 8017F9FC: fire the anim command list for the current battle state. */
void anim_cmd_tail(void)
{
    extern uint32_t D_801B57A0;
    extern void func_8017F644();
    func_8017F644(D_801B57A0);
}

/* 8017FA2C: anim rows A (two cb-slot2 dispatches + close). */
void battle_anim_rows_a(void)
{
    cb_slot2();
    cb_slot2();
    anim_pack_word(1);
    anim_cmd_tail();
}


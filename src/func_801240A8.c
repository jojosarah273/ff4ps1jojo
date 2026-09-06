#include "common.h"
__asm__(
  ".globl func_801240A8\n"
  ".type func_801240A8, @function\n"
  "func_801240A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0xA600\n\tjal func_80124180\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801240A8, .-func_801240A8\n"
);

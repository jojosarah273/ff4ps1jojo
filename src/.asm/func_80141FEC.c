#include "common.h"
__asm__(
  ".globl func_80141FEC\n"
  ".type func_80141FEC, @function\n"
  "func_80141FEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF327\n\tjal func_8013EF78\n\tnop\n\tjal func_80141F54\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF326\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF327\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141FEC, .-func_80141FEC\n"
);

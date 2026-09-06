#include "common.h"
__asm__(
  ".globl func_801950F0\n"
  ".type func_801950F0, @function\n"
  "func_801950F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DB4C)\n\tlw $v0, %lo(D_8019DB4C)($v0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlw $v0, 0x38($v0)\n\tnop\n\tjalr $v0\n\tnop\n\tlw $ra, 0x10($sp)\n\tsrl $v0, $v0, 31\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801950F0, .-func_801950F0\n"
);

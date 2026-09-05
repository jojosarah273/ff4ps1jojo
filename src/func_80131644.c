#include "common.h"
__asm__(
  ".globl func_80131644\n"
  ".type func_80131644, @function\n"
  "func_80131644:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, (0xF97F5 >> 16)\n\tsw $ra, 0x10($sp)\n\tjal func_800F65C8\n\tori $a0, $a0, (0xF97F5 & 0xFFFF)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B91\n\tjal func_801317F0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131644, .-func_80131644\n"
);

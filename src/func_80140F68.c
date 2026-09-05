#include "common.h"
__asm__(
  ".globl func_80140F68\n"
  ".type func_80140F68, @function\n"
  "func_80140F68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF44C\n\tjal func_800F6564\n\tori $a0, $zero, 0xF41A\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80140FA0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_80141334\n\tnop\n\t.L80140FA0:\n\tjal func_80140FB8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140F68, .-func_80140F68\n"
);

#include "common.h"
__asm__(
  ".globl func_80109378\n"
  ".type func_80109378, @function\n"
  "func_80109378:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x42\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801093A8\n\taddiu $v0, $zero, 0x42\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tsb $v0, 0x0($v1)\n\t.L801093A8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80109378, .-func_80109378\n"
);

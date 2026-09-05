#include "common.h"
__asm__(
  ".globl func_801606D4\n"
  ".type func_801606D4, @function\n"
  "func_801606D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F6630\n\tsh $v1, 0x0($a1)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\tjal func_800F5480\n\tnop\n\t.L80160734:\n\tjal func_800F7EE8\n\tnop\n\tjal func_800F7D0C\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80160734\n\tnop\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3883\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801606D4, .-func_801606D4\n"
);

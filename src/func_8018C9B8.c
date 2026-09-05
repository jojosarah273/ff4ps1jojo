#include "common.h"
__asm__(
  ".globl func_8018C9B8\n"
  ".type func_8018C9B8, @function\n"
  "func_8018C9B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a1, $a0, $zero\n\tlui $v0, (0x7EFE8 >> 16)\n\tori $v0, $v0, (0x7EFE8 & 0xFFFF)\n\taddiu $v1, $a1, -0x1010\n\tsltu $v0,$v0,$v1\n\tbnez $v0, .L8018CA00\n\tsw $ra, 0x10($sp)\n\tjal func_8018AB08\n\taddiu $a0, $zero, -0x1\n\tlui $at, %hi(D_8019B12C)\n\tsh $v0, %lo(D_8019B12C)($at)\n\tlui $v1, %hi(D_8019B12C)\n\tlhu $v1, %lo(D_8019B12C)($v1)\n\tlui $v0, %hi(D_8019B13C)\n\tlw $v0, %lo(D_8019B13C)($v0)\n\tj .L8018CA04\n\tsllv $v0, $v1, $v0\n\t.L8018CA00:\n\taddu $v0, $zero, $zero\n\t.L8018CA04:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018C9B8, .-func_8018C9B8\n"
);

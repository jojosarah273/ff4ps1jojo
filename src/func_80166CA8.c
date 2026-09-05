#include "common.h"
__asm__(
  ".globl func_80166CA8\n"
  ".type func_80166CA8, @function\n"
  "func_80166CA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v1, 0x0($v0)\n\tori $a0, $zero, 0xEFC8\n\tjal func_800F90EC\n\tsb $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 2\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\tori $a0, $zero, 0xF015\n\tjal func_800F6D70\n\tsh $v0, 0x0($v1)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x30\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80166D98\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x20\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80166D88\n\tnop\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEFD1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F9330\n\tnop\n\tlui $a0, (0xDFFE5 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xDFFE5 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F95A0\n\tnop\n\tjal func_800F8768\n\tori $a0, $zero, 0xEFC8\n\t.L80166D88:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tj .L80166DA0\n\tnop\n\t.L80166D98:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\t.L80166DA0:\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166CA8, .-func_80166CA8\n"
);

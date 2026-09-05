#include "common.h"
__asm__(
  ".globl func_801714C4\n"
  ".type func_801714C4, @function\n"
  "func_801714C4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x20\n\tsrl $v0, $v0, 2\n\tjal func_800F9660\n\tsh $v0, 0x0($v1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tlui $a0, (0x15B3D8 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x15B3D8 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F93DC\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 2\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\taddiu $a0, $zero, 0x500\n\tjal func_800F6D70\n\tsh $v0, 0x0($v1)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x500\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801714C4, .-func_801714C4\n"
);

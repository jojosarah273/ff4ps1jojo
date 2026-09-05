#include "common.h"
__asm__(
  ".globl func_8016FFC0\n"
  ".type func_8016FFC0, @function\n"
  "func_8016FFC0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x88\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\taddiu $a0, $zero, 0x2000\n\tlui $v0, %hi(D_801CFD68)\n\taddiu $a3, $v0, %lo(D_801CFD68)\n\tlui $a1, (0x800E0A00 >> 16)\n\tori $a1, $a1, (0x800E0A00 & 0xFFFF)\n\taddiu $a2, $zero, 0x800\n\t.L80170028:\n\tsll $v1, $a0, 1\n\taddu $v1, $v1, $a3\n\taddiu $a2, $a2, -0x1\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $a0, 0x1\n\tsb $v0, 0x0($a1)\n\tlhu $v0, 0x0($v1)\n\tandi $a0, $a0, 0xFFFF\n\tsrl $v0, $v0, 8\n\tsb $v0, 0x1($a1)\n\tbnez $a2, .L80170028\n\taddiu $a1, $a1, 0x2\n\tsrl $v0, $a0, 8\n\tlui $at, %hi(D_800D2116)\n\tsb $a0, %lo(D_800D2116)($at)\n\tlui $at, %hi(D_800D2117)\n\tsb $v0, %lo(D_800D2117)($at)\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016FFC0, .-func_8016FFC0\n"
);

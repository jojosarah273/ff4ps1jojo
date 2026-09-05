#include "common.h"
__asm__(
  ".globl func_80141100\n"
  ".type func_80141100, @function\n"
  "func_80141100:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\taddu $s0, $v0, $zero\n\tlbu $v0, 0x744C($s0)\n\tnop\n\tbeqz $v0, .L801411A8\n\tnop\n\tlbu $v0, 0x741A($s0)\n\tnop\n\tbeqz $v0, .L80141178\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlbu $v0, 0x7422($s0)\n\tjal func_801411BC\n\tsb $v0, 0x0($v1)\n\taddiu $v0, $zero, 0x76\n\tsb $v0, 0x2($s1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddiu $v0, $zero, 0x88\n\tjal func_80141240\n\tsb $v0, 0x0($v1)\n\t.L80141178:\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlbu $v0, 0x7421($s0)\n\tjal func_801411BC\n\tsb $v0, 0x0($v1)\n\taddiu $v0, $zero, 0x72\n\tsb $v0, 0x2($s1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddiu $v0, $zero, 0x80\n\tjal func_80141240\n\tsb $v0, 0x0($v1)\n\t.L801411A8:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141100, .-func_80141100\n"
);

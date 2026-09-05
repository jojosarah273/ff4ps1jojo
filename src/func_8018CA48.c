#include "common.h"
__asm__(
  ".globl func_8018CA48\n"
  ".type func_8018CA48, @function\n"
  "func_8018CA48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tlui $v0, (0x7EFF0 >> 16)\n\tori $v0, $v0, (0x7EFF0 & 0xFFFF)\n\tsltu $v0,$v0,$s1\n\tsw $ra, 0x18($sp)\n\tbeqz $v0, .L8018CA74\n\tsw $s0, 0x10($sp)\n\tlui $s1, (0x7EFF0 >> 16)\n\tori $s1, $s1, (0x7EFF0 & 0xFFFF)\n\t.L8018CA74:\n\tlui $s0, %hi(D_8019B12C)\n\tlhu $s0, %lo(D_8019B12C)($s0)\n\tlui $v0, %hi(D_8019B13C)\n\tlw $v0, %lo(D_8019B13C)($v0)\n\taddu $a1, $s1, $zero\n\tjal func_8018A9DC\n\tsllv $s0, $s0, $v0\n\taddiu $a0, $zero, -0x1\n\tjal func_8018AB08\n\taddu $a1, $s0, $s1\n\tlui $v1, %hi(D_8019B14C)\n\tlw $v1, %lo(D_8019B14C)($v1)\n\tlui $at, %hi(D_8019B12C)\n\tsh $v0, %lo(D_8019B12C)($at)\n\tbnez $v1, .L8018CABC\n\taddu $v0, $s1, $zero\n\tlui $at, %hi(D_8019B148)\n\tsw $zero, %lo(D_8019B148)($at)\n\t.L8018CABC:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018CA48, .-func_8018CA48\n"
);

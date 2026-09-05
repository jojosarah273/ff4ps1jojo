#include "common.h"
__asm__(
  ".globl func_8013F2C4\n"
  ".type func_8013F2C4, @function\n"
  "func_8013F2C4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s1, $v0, $zero\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $a0, 0x0($v1)\n\tnop\n\taddu $s0, $a0, $s0\n\tsll $a0, $a0, 1\n\tlbu $v1, 0x9A5($s0)\n\taddu $a0, $a0, $v0\n\tsrl $v1, $v1, 4\n\tsb $v1, 0x0($s1)\n\tlbu $s0, 0x72A1($a0)\n\tjal func_800F5410\n\tnop\n\tlbu $v0, 0x0($s1)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\taddu $s0, $s0, $v0\n\tsb $s0, 0x0($v1)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013F2C4, .-func_8013F2C4\n"
);

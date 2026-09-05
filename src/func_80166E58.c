#include "common.h"
__asm__(
  ".globl func_80166E58\n"
  ".type func_80166E58, @function\n"
  "func_80166E58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x28($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s2, $v0, $zero\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s5, $v0, $zero\n\taddu $s4, $v0, $zero\n\taddu $s3, $zero, $zero\n\taddu $a1, $zero, $zero\n\taddu $s1, $a1, $s5\n\t.L80166EA8:\n\tlbu $s0, 0x9BD($s1)\n\taddiu $v0, $zero, 0xFF\n\tbne $s0, $v0, .L80166ED4\n\taddu $v0, $s3, $s4\n\tsb $s0, 0x7043($v0)\n\tsb $s0, 0x7044($v0)\n\tsb $s0, 0x705D($v0)\n\tsb $s0, 0x705E($v0)\n\tsb $s0, 0x7029($v0)\n\tj .L80166F78\n\tsb $s0, 0x702A($v0)\n\t.L80166ED4:\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tjal func_800F9330\n\tsh $a1, 0x0($v0)\n\tlbu $v1, 0x9A5($s1)\n\tsll $a1, $s0, 1\n\tandi $v1, $v1, 0xF0\n\tsrl $v1, $v1, 1\n\taddiu $v1, $v1, 0x10\n\tsb $v1, 0x2($s2)\n\tlbu $v0, 0x9A5($s1)\n\taddu $a1, $a1, $s5\n\tandi $v0, $v0, 0xF\n\tsll $v0, $v0, 3\n\tsb $v0, 0x3($s2)\n\tlbu $v0, 0x4CC3($a1)\n\taddu $a0, $s3, $s4\n\tsll $v0, $v0, 2\n\taddu $v1, $v1, $v0\n\tandi $s0, $v1, 0xFF\n\tsb $s0, 0x7043($a0)\n\tsb $s0, 0x705D($a0)\n\tsb $s0, 0x7029($a0)\n\tlbu $v1, 0x3($s2)\n\tnop\n\tsb $v1, 0x702A($a0)\n\tlbu $v0, 0x4CC4($a1)\n\tlbu $v1, 0x3($s2)\n\tsll $v0, $v0, 2\n\taddu $v1, $v1, $v0\n\tsb $v1, 0x7044($a0)\n\tlbu $v0, 0x4CC4($a1)\n\tlbu $v1, 0x3($s2)\n\tsll $v0, $v0, 3\n\taddu $v1, $v1, $v0\n\tjal func_800F95A0\n\tsb $v1, 0x705E($a0)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a1, 0x0($v0)\n\t.L80166F78:\n\taddiu $v0, $s3, 0x2\n\tandi $s3, $v0, 0xFFFF\n\taddiu $v1, $a1, 0x1\n\tandi $a1, $v1, 0xFFFF\n\taddiu $v0, $zero, 0x8\n\tbne $a1, $v0, .L80166EA8\n\taddu $s1, $a1, $s5\n\tlw $ra, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166E58, .-func_80166E58\n"
);

#include "common.h"
__asm__(
  ".globl func_80145EA4\n"
  ".type func_80145EA4, @function\n"
  "func_80145EA4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x28($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s3, $v0, $zero\n\tlui $a0, (0x1C8000 >> 16)\n\tori $a0, $a0, (0x1C8000 & 0xFFFF)\n\taddu $s2, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F3B04\n\taddu $s4, $v0, $zero\n\tjal func_800F9330\n\taddu $s5, $v0, $zero\n\tjal func_800F939C\n\tnop\n\tlbu $a1, 0x47($s3)\n\tnop\n\taddu $v0, $a1, $s2\n\tlbu $v1, 0x70A3($v0)\n\taddiu $s1, $a1, 0x9\n\tsb $zero, 0x1D($s3)\n\tsb $v1, 0x1C($s3)\n\tjal func_800F971C\n\tandi $s0, $v1, 0xFF\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\tsll $s1, $s1, 5\n\tjal func_800F939C\n\tsh $s1, 0x0($v0)\n\tlbu $v0, 0x70AD($s2)\n\tnop\n\tbnez $v0, .L80145F90\n\tsll $s0, $s0, 5\n\tlbu $v0, 0x7283($s2)\n\tnop\n\tbnez $v0, .L80145F90\n\taddu $a2, $zero, $zero\n\t.L80145F60:\n\taddu $v1, $s0, $s4\n\taddiu $v0, $s0, 0x1\n\tandi $s0, $v0, 0xFFFF\n\taddu $a0, $s1, $s2\n\taddiu $v0, $s1, 0x1\n\tandi $s1, $v0, 0xFFFF\n\taddiu $v0, $a2, 0x1\n\tandi $a2, $v0, 0xFFFF\n\tlbu $a1, 0x7D00($v1)\n\tsltiu $v0, $a2, 0x20\n\tbnez $v0, .L80145F60\n\tsb $a1, 0x6D50($a0)\n\t.L80145F90:\n\tjal func_800F960C\n\tnop\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\tlbu $v1, 0xD7($s3)\n\tlhu $s1, 0x0($v0)\n\tbeqz $v1, .L80145FF4\n\tnop\n\tlbu $a1, 0x47($s3)\n\tlbu $v0, 0x822($s5)\n\tnop\n\tbne $a1, $v0, .L80145FF4\n\tnop\n\tlbu $v0, 0x813($s5)\n\tnop\n\tandi $v0, $v0, 0x4\n\tbeqz $v0, .L80145FEC\n\taddu $v0, $s1, $s2\n\taddiu $v1, $zero, 0xEF\n\taddiu $a0, $zero, 0x3D\n\tsb $v1, 0x6D52($v0)\n\tj .L80145FF4\n\tsb $a0, 0x6D53($v0)\n\t.L80145FEC:\n\tsb $zero, 0x6D52($v0)\n\tsb $zero, 0x6D53($v0)\n\t.L80145FF4:\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80145EA4, .-func_80145EA4\n"
);

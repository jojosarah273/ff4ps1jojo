#include "common.h"
__asm__(
  ".globl func_8013EE18\n"
  ".type func_8013EE18, @function\n"
  "func_8013EE18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x28($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F3B04\n\taddu $s4, $v0, $zero\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s2, $v0, $zero\n\taddu $s1, $v0, $zero\n\taddu $s0, $zero, $zero\n\taddiu $a0, $zero, 0x80\n\taddiu $a1, $zero, 0x8\n\t.L8013EE68:\n\taddu $v0, $s0, $s2\n\taddiu $v1, $s0, 0x1\n\tandi $s0, $v1, 0xFFFF\n\tbne $s0, $a1, .L8013EE68\n\tsb $a0, 0x15EB($v0)\n\tlbu $v0, 0x7333($s1)\n\taddiu $v1, $zero, 0xFF\n\taddu $v0, $v0, $s1\n\tlbu $a0, 0x7123($v0)\n\tlui $a3, %hi(D_8019ED40)\n\tlw $a3, %lo(D_8019ED40)($a3)\n\tbne $a0, $v1, .L8013EED0\n\taddu $s0, $zero, $zero\n\taddiu $a2, $zero, 0x8\n\taddiu $a1, $zero, 0xFF\n\taddiu $v0, $s0, 0x1\n\t.L8013EEA8:\n\tandi $s0, $v0, 0xFFFF\n\tbeq $s0, $a2, .L8013EED0\n\taddu $v1, $s0, $s1\n\tlbu $v0, 0x7333($v1)\n\tnop\n\taddu $v0, $v0, $s1\n\tlbu $a0, 0x7123($v0)\n\tnop\n\tbeq $a0, $a1, .L8013EEA8\n\taddiu $v0, $s0, 0x1\n\t.L8013EED0:\n\taddu $v0, $s0, $s1\n\taddu $s0, $zero, $zero\n\tlbu $v1, 0x7333($v0)\n\taddiu $s5, $zero, 0xFF\n\tjal func_8013F2C4\n\tsb $v1, 0x0($a3)\n\tlbu $v0, 0x0($s4)\n\taddiu $s3, $zero, 0x8\n\tsb $v0, 0x2($s4)\n\t.L8013EEF4:\n\taddu $v0, $s0, $s1\n\tlbu $v1, 0x7123($v0)\n\tnop\n\tbeq $v1, $s5, .L8013EF48\n\taddiu $v0, $s0, 0x1\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tjal func_8013F2C4\n\tsb $s0, 0x0($v0)\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $v1, 0x0($v0)\n\tnop\n\taddiu $a0, $v1, -0x1\n\tsltiu $v0, $a0, 0x2\n\tbnez $v0, .L8013EF48\n\taddiu $v0, $s0, 0x1\n\taddu $v0, $s0, $s2\n\tsb $zero, 0x15EB($v0)\n\taddiu $v0, $s0, 0x1\n\t.L8013EF48:\n\tandi $s0, $v0, 0xFFFF\n\tbne $s0, $s3, .L8013EEF4\n\tnop\n\tlw $ra, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013EE18, .-func_8013EE18\n"
);

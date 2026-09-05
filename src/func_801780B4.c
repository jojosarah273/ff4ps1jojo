#include "common.h"
__asm__(
  ".globl func_801780B4\n"
  ".type func_801780B4, @function\n"
  "func_801780B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x38\n\tsw $s5, 0x24($sp)\n\taddu $s5, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $s5, 0x4370\n\tsw $s1, 0x14($sp)\n\taddiu $s1, $s5, 0x1030\n\tsw $s6, 0x28($sp)\n\tlui $s6, %hi(D_801DFD68)\n\tsw $s3, 0x1C($sp)\n\taddiu $s3, $zero, 0x80\n\tsw $s4, 0x20($sp)\n\taddiu $s4, $zero, 0x8\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $zero, 0xD47\n\tsw $ra, 0x30($sp)\n\tsw $s7, 0x2C($sp)\n\t.L801780F8:\n\tjal func_80197378\n\taddu $a0, $s0, $zero\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x1\n\tsb $s3, 0x4($s0)\n\tsb $s3, 0x5($s0)\n\tsb $s3, 0x6($s0)\n\tsh $s4, 0x10($s0)\n\tjal func_801972D8\n\tsh $s4, 0x12($s0)\n\taddu $a0, $s0, $zero\n\tjal func_80197308\n\taddiu $a1, $zero, 0x1\n\tsb $zero, 0xC($s0)\n\tsb $zero, 0xD($s0)\n\tlhu $v0, %lo(D_801DFD68)($s6)\n\taddiu $s2, $s2, -0x1\n\tsh $v0, 0xE($s0)\n\tbgez $s2, .L801780F8\n\taddiu $s0, $s0, 0x14\n\taddu $s2, $zero, $zero\n\taddiu $s4, $s5, 0x300\n\taddiu $s3, $zero, 0x80\n\taddiu $s0, $zero, 0x8\n\taddiu $s7, $zero, 0x147\n\t.L8017815C:\n\tjal func_80197338\n\taddu $a0, $s1, $zero\n\tsb $s3, 0x4($s1)\n\tsb $s3, 0x5($s1)\n\tbne $s2, $s7, .L80178188\n\tsb $s3, 0x6($s1)\n\taddu $a0, $s1, $zero\n\tjal func_801972D8\n\taddu $a1, $zero, $zero\n\tj .L80178198\n\tsb $zero, 0xC($s1)\n\t.L80178188:\n\taddu $a0, $s1, $zero\n\tjal func_801972D8\n\taddiu $a1, $zero, 0x1\n\tsb $zero, 0xC($s1)\n\t.L80178198:\n\tsb $zero, 0xD($s1)\n\tsb $s0, 0x14($s1)\n\tsb $zero, 0x15($s1)\n\tsb $zero, 0x1C($s1)\n\tsb $s0, 0x1D($s1)\n\tsb $s0, 0x24($s1)\n\tsb $s0, 0x25($s1)\n\tlhu $v0, %lo(D_801DFD68)($s6)\n\taddiu $s2, $s2, 0x1\n\tsh $v0, 0xE($s1)\n\tslti $v0, $s2, 0x148\n\tbnez $v0, .L8017815C\n\taddiu $s1, $s1, 0x28\n\tjal func_80197398\n\taddu $a0, $s4, $zero\n\taddiu $v0, $zero, 0xFA\n\tlw $ra, 0x30($sp)\n\tlw $s7, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\taddiu $v1, $zero, 0xFF\n\tsb $v0, 0x304($s5)\n\tsb $v0, 0x305($s5)\n\tsb $v0, 0x306($s5)\n\taddiu $v0, $zero, 0xE0\n\tsh $v1, 0x30C($s5)\n\tsh $v0, 0x30E($s5)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x38\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801780B4, .-func_801780B4\n"
);

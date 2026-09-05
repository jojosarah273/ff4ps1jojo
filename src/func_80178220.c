#include "common.h"
__asm__(
  ".globl func_80178220\n"
  ".type func_80178220, @function\n"
  "func_80178220:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $a0, 0x88\n\tsw $s4, 0x20($sp)\n\tlui $s4, %hi(D_801DFD68)\n\tsw $s2, 0x18($sp)\n\taddiu $s2, $zero, 0x80\n\tsw $s3, 0x1C($sp)\n\taddiu $s3, $zero, 0x8\n\tsw $s1, 0x14($sp)\n\taddiu $s1, $zero, 0x3FF\n\tsw $ra, 0x24($sp)\n\t.L80178250:\n\tjal func_80197378\n\taddu $a0, $s0, $zero\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x1\n\tsb $s2, 0x4($s0)\n\tsb $s2, 0x5($s0)\n\tsb $s2, 0x6($s0)\n\tsh $s3, 0x10($s0)\n\tjal func_801972D8\n\tsh $s3, 0x12($s0)\n\taddu $a0, $s0, $zero\n\tjal func_80197308\n\taddiu $a1, $zero, 0x1\n\tsb $zero, 0xC($s0)\n\tsb $zero, 0xD($s0)\n\tlhu $v0, %lo(D_801DFD68)($s4)\n\taddiu $s1, $s1, -0x1\n\tsh $v0, 0xE($s0)\n\tbgez $s1, .L80178250\n\taddiu $s0, $s0, 0x14\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178220, .-func_80178220\n"
);

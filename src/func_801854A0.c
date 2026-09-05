#include "common.h"
__asm__(
  ".globl func_801854A0\n"
  ".type func_801854A0, @function\n"
  "func_801854A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s6, 0x28($sp)\n\tlw $s6, 0x40($sp)\n\tsw $s2, 0x18($sp)\n\tlw $s2, 0x44($sp)\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a1, $zero\n\tsw $s5, 0x24($sp)\n\taddu $s5, $a2, $zero\n\tsw $s1, 0x14($sp)\n\tsw $s3, 0x1C($sp)\n\tlw $s3, 0x48($sp)\n\tsw $ra, 0x2C($sp)\n\tjal func_80197378\n\taddu $s1, $a3, $zero\n\tlw $ra, 0x2C($sp)\n\tsh $s5, 0x12($s0)\n\tlw $s5, 0x24($sp)\n\tsh $s4, 0x10($s0)\n\tlw $s4, 0x20($sp)\n\tsh $s1, 0x8($s0)\n\tlw $s1, 0x14($sp)\n\taddiu $v0, $zero, 0x80\n\tsb $v0, 0x4($s0)\n\tsb $v0, 0x5($s0)\n\tsb $v0, 0x6($s0)\n\tlui $v0, %hi(D_801DFD68)\n\tsb $s2, 0xC($s0)\n\tsb $s3, 0xD($s0)\n\tsh $s6, 0xA($s0)\n\tlhu $v1, %lo(D_801DFD68)($v0)\n\tlw $s6, 0x28($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tsh $v1, 0xE($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801854A0, .-func_801854A0\n"
);

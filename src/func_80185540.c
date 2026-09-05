#include "common.h"
__asm__(
  ".globl func_80185540\n"
  ".type func_80185540, @function\n"
  "func_80185540:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s2, 0x18($sp)\n\tlw $s2, 0x40($sp)\n\tsw $s4, 0x20($sp)\n\tlw $s4, 0x44($sp)\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s5, 0x24($sp)\n\tlw $s5, 0x48($sp)\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a1, $zero\n\tsw $s6, 0x28($sp)\n\taddu $s6, $a2, $zero\n\tsw $s1, 0x14($sp)\n\tsw $ra, 0x2C($sp)\n\tjal func_80197338\n\taddu $s1, $a3, $zero\n\taddu $a0, $s0, $zero\n\tjal func_80197308\n\taddiu $a1, $zero, 0x1\n\taddiu $a0, $zero, 0x2\n\taddu $a1, $zero, $zero\n\taddiu $v0, $zero, 0x80\n\tsb $v0, 0x4($s0)\n\tsb $v0, 0x5($s0)\n\tsb $v0, 0x6($s0)\n\taddu $v0, $s1, $s3\n\taddiu $a3, $zero, -0x100\n\tsh $s1, 0x8($s0)\n\tsh $v0, 0x10($s0)\n\tsh $s1, 0x18($s0)\n\tsh $v0, 0x20($s0)\n\taddu $s3, $s4, $s3\n\taddu $v0, $s5, $s6\n\tsh $s2, 0xA($s0)\n\tsh $s2, 0x12($s0)\n\taddu $s2, $s2, $s6\n\tand $a2, $s4, $a3\n\tand $a3, $s5, $a3\n\tsb $s4, 0xC($s0)\n\tsb $s5, 0xD($s0)\n\tsb $s3, 0x14($s0)\n\tsb $s5, 0x15($s0)\n\tsb $s4, 0x1C($s0)\n\tsb $v0, 0x1D($s0)\n\tsb $s3, 0x24($s0)\n\tsb $v0, 0x25($s0)\n\tsh $s2, 0x1A($s0)\n\tjal func_801971A8\n\tsh $s2, 0x22($s0)\n\tlw $ra, 0x2C($sp)\n\tlw $s6, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tsh $v0, 0x16($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80185540, .-func_80185540\n"
);

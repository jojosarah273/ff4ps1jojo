#include "common.h"
__asm__(
  ".globl func_8017890C\n"
  ".type func_8017890C, @function\n"
  "func_8017890C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tjal func_801981D8\n\tsw $s1, 0x14($sp)\n\taddu $s1, $v0, $zero\n\taddu $a0, $s1, $zero\n\taddu $a1, $zero, $zero\n\tjal func_80198208\n\taddiu $a2, $zero, 0x2\n\taddu $a0, $s1, $zero\n\taddu $a1, $zero, $zero\n\taddu $a2, $zero, $zero\n\tjal func_80198208\n\taddu $s2, $v0, $zero\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\tjal func_8019822C\n\taddu $a2, $s2, $zero\n\tjal func_801981F8\n\taddu $a0, $s1, $zero\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017890C, .-func_8017890C\n"
);

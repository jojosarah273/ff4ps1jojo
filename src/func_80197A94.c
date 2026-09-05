#include "common.h"
__asm__(
  ".globl func_80197A94\n"
  ".type func_80197A94, @function\n"
  "func_80197A94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a1, $zero\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a2, $zero\n\tsw $s3, 0x1C($sp)\n\tsw $ra, 0x20($sp)\n\tjal func_80197E78\n\taddu $s3, $a3, $zero\n\tjal func_801976E8\n\tnop\n\tjal func_80197D80\n\tnop\n\tjal func_801976F8\n\tnop\n\tjal func_80197798\n\taddu $a0, $zero, $zero\n\tjal func_80197BE4\n\tnop\n\taddu $a0, $s0, $zero\n\taddu $a1, $s1, $zero\n\taddu $a2, $s2, $zero\n\tjal func_80197D28\n\taddu $a3, $s3, $zero\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019DCB4)\n\tsw $v0, %lo(D_8019DCB4)($at)\n\tlw $ra, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197A94, .-func_80197A94\n"
);

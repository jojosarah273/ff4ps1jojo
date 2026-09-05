#include "common.h"
__asm__(
  ".globl func_80190004\n"
  ".type func_80190004, @function\n"
  "func_80190004:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s1, 0x1C($sp)\n\taddu $s1, $a0, $zero\n\taddu $a0, $a1, $zero\n\taddiu $a1, $sp, 0x10\n\tsw $s0, 0x18($sp)\n\tsw $ra, 0x20($sp)\n\tjal func_80191638\n\taddu $s0, $a2, $zero\n\taddiu $a0, $zero, 0x2\n\taddiu $a1, $sp, 0x10\n\tjal func_80191878\n\taddu $a2, $zero, $zero\n\taddu $a0, $s1, $zero\n\taddu $a1, $s0, $zero\n\tjal func_80192478\n\taddiu $a2, $zero, 0x80\n\taddu $a0, $zero, $zero\n\tjal func_80192614\n\taddu $a1, $zero, $zero\n\tsltiu $v0, $v0, 0x1\n\tlw $ra, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80190004, .-func_80190004\n"
);

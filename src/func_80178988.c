#include "common.h"
__asm__(
  ".globl func_80178988\n"
  ".type func_80178988, @function\n"
  "func_80178988:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x78\n\taddu $v0, $a0, $zero\n\tsw $s0, 0x68($sp)\n\taddiu $s0, $sp, 0x28\n\taddu $a0, $s0, $zero\n\tsw $s2, 0x70($sp)\n\taddu $s2, $a1, $zero\n\taddu $a1, $v0, $zero\n\tlui $v0, %hi(D_8019ED0C)\n\tlhu $v1, %lo(D_8019ED0C)($v0)\n\tsw $s1, 0x6C($sp)\n\taddu $s1, $s0, $zero\n\tsw $ra, 0x74($sp)\n\tjal func_8018F068\n\tsh $v1, 0x28($sp)\n\taddu $a0, $s0, $zero\n\tlui $a1, %hi(D_8019ED10)\n\tjal func_8018F068\n\taddiu $a1, $a1, %lo(D_8019ED10)\n\taddiu $a0, $sp, 0x10\n\t.L801789D8:\n\tjal func_8018F708\n\taddu $a1, $s1, $zero\n\tbeqz $v0, .L801789D8\n\taddiu $a0, $sp, 0x10\n\taddiu $a0, $zero, 0x2\n\t.L801789EC:\n\taddiu $a1, $sp, 0x10\n\tlw $s0, 0x14($sp)\n\taddu $a2, $zero, $zero\n\taddiu $s0, $s0, 0x7FF\n\tjal func_80191878\n\tsrl $s0, $s0, 11\n\taddu $a0, $s0, $zero\n\taddu $a1, $s2, $zero\n\tjal func_80192478\n\taddiu $a2, $zero, 0x80\n\tj .L80178A28\n\taddiu $a0, $zero, 0x1\n\t.L80178A1C:\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\taddiu $a0, $zero, 0x1\n\t.L80178A28:\n\tjal func_80192614\n\taddu $a1, $zero, $zero\n\tbgtz $v0, .L80178A1C\n\tnop\n\tbnez $v0, .L801789EC\n\taddiu $a0, $zero, 0x2\n\tlw $ra, 0x74($sp)\n\tlw $s2, 0x70($sp)\n\tlw $s1, 0x6C($sp)\n\tlw $s0, 0x68($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x78\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178988, .-func_80178988\n"
);

#include "common.h"
__asm__(
  ".globl func_800FD718\n"
  ".type func_800FD718, @function\n"
  "func_800FD718:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FD780\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F9690\n\tnop\n\tlui $v0, %hi(D_80198A8C)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\taddiu $v0, $v0, %lo(D_80198A8C)\n\tlhu $v1, 0x0($a0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1E01\n\tjal func_800F8188\n\tsb $v0, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tj .L800FD7E4\n\tnop\n\t.L800FD780:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FD7CC\n\tnop\n\tjal func_800F9690\n\tnop\n\tlui $v0, %hi(D_80198A88)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\taddiu $v0, $v0, %lo(D_80198A88)\n\tlhu $v1, 0x0($a0)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tj .L800FD7D4\n\tsb $v0, 0x0($a0)\n\t.L800FD7CC:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFE2\n\t.L800FD7D4:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1E01\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L800FD7E4:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1E00\n\tjal func_80169128\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FD718, .-func_800FD718\n"
);

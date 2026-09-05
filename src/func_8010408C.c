#include "common.h"
__asm__(
  ".globl func_8010408C\n"
  ".type func_8010408C, @function\n"
  "func_8010408C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x10\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L801040A4:\n\tjal func_8010D9D4\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x300\n\tjal func_8010D9D4\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x301\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x302\n\tjal func_8010D9D4\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5140\n\tnop\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x303\n\tori $v0, $v0, 0x1\n\tjal func_800F8960\n\tsb $v0, 0x0($v1)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tsh $v0, 0x0($v1)\n\tlw $a1, %gp_rel(D_8019ED58)($gp)\n\tnop\n\tlhu $v0, 0x0($a1)\n\taddiu $a0, $zero, 0x200\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5A90\n\tsh $v0, 0x0($a1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801040A4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010408C, .-func_8010408C\n"
);

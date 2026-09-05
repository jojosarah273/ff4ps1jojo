#include "common.h"
__asm__(
  ".globl func_80100A98\n"
  ".type func_80100A98, @function\n"
  "func_80100A98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x8FC\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tjal func_800F9690\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80100B00\n\tnop\n\tlw $v0, %gp_rel(D_8019ED5C)($gp)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F5410\n\tsb $v1, 0x0($a0)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9690\n\tnop\n\t.L80100B00:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x8FC\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F61E8\n\tnop\n\tjal func_800F96E0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80100A98, .-func_80100A98\n"
);

#include "common.h"
__asm__(
  ".globl func_80107B74\n"
  ".type func_80107B74, @function\n"
  "func_80107B74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80107B84:\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x712\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x60\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80107B84\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L80107BBC:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80107C58\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xE7\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80107C24\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xEB\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80107C58\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80107C58\n\tnop\n\t.L80107C24:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x712\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1441\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x713\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tsh $v0, 0x0($v1)\n\t.L80107C58:\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x60\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80107BBC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80107B74, .-func_80107B74\n"
);

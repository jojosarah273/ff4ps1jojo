#include "common.h"
__asm__(
  ".globl func_80113F3C\n"
  ".type func_80113F3C, @function\n"
  "func_80113F3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8011416C\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x21\n\t.L80113F5C:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 5\n\tjal func_800F5410\n\tsh $v0, 0x0($v1)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x18\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x6FB\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1A\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_80174F0C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x31\n\tjal func_801140A4\n\tnop\n\tjal func_80113C04\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x31\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x40\n\tjal func_801140A4\n\tnop\n\tjal func_80113C54\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x8F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011404C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x2\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8F\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\t.L8011404C:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x302\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x91\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x303\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x20\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x90\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80113F5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80113F3C, .-func_80113F3C\n"
);

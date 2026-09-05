#include "common.h"
__asm__(
  ".globl func_8011FF80\n"
  ".type func_8011FF80, @function\n"
  "func_8011FF80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlh $v1, %gp_rel(D_8019ED90)($gp)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L8011FF9C\n\tsw $ra, 0x10($sp)\n\tjal func_801360AC\n\tnop\n\t.L8011FF9C:\n\tlh $v1, %gp_rel(D_8019ED90)($gp)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L8011FFF0\n\tnop\n\tjal func_801360EC\n\tnop\n\tbgez $v0, .L8011FFF0\n\taddiu $v0, $zero, 0x2\n\tsh $v0, %gp_rel(D_8019ED90)($gp)\n\tjal func_80136148\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tj .L80120060\n\tnop\n\t.L8011FFF0:\n\tjal func_8011F320\n\tnop\n\tjal func_8011F884\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F7918\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011FF9C\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlh $v1, %gp_rel(D_8019ED90)($gp)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L80120060\n\tnop\n\tjal func_80136148\n\tnop\n\t.L80120060:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011FF80, .-func_8011FF80\n"
);

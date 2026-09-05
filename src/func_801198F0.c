#include "common.h"
__asm__(
  ".globl func_801198F0\n"
  ".type func_801198F0, @function\n"
  "func_801198F0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xB3\n\tjal func_80106370\n\tnop\n\tjal func_800FE7B0\n\tnop\n\tjal func_80109A28\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x8FB\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80119998\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xB3\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x9D5\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x8FB\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801199B0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x14\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB2\n\tjal func_801082C8\n\tnop\n\tjal func_80107C98\n\tnop\n\tjal func_80107F3C\n\tnop\n\t.L80119998:\n\tjal func_801175C4\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tj .L80119A88\n\tnop\n\t.L801199B0:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xEC\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80119A80\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801199F8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xED\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80119A80\n\tnop\n\t.L801199F8:\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80119A00:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x8FB\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80119A48\n\tnop\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tj .L80119A00\n\tsh $v0, 0x0($v1)\n\t.L80119A48:\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x1441\n\tjal func_800F5B2C\n\taddu $a0, $v0, $zero\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80119A80\n\tnop\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1440\n\t.L80119A80:\n\tjal func_8011EA5C\n\tnop\n\t.L80119A88:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801198F0, .-func_801198F0\n"
);

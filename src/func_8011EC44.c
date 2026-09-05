#include "common.h"
__asm__(
  ".globl func_8011EC44\n"
  ".type func_8011EC44, @function\n"
  "func_8011EC44:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $ra, 0x24($sp)\n\tsw $s2, 0x20($sp)\n\tsw $s1, 0x1C($sp)\n\tsw $s0, 0x18($sp)\n\t.L8011EC58:\n\tjal func_8016EA9C\n\tlui $s0, %hi(D_801D3D68)\n\tjal func_80123D3C\n\taddiu $s0, $s0, %lo(D_801D3D68)\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddu $a3, $zero, $zero\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, 0x11\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, 0x12\n\tlui $s2, (0x10000 >> 16)\n\tlui $v0, %hi(D_8019A7FC)\n\taddiu $s1, $v0, %lo(D_8019A7FC)\n\tlui $v1, %hi(D_8019A774)\n\taddiu $s0, $v1, %lo(D_8019A774)\n\tlui $at, %hi(D_8019EE30)\n\tsh $zero, %lo(D_8019EE30)($at)\n\tlui $at, %hi(D_8019EE2E)\n\tsh $zero, %lo(D_8019EE2E)($at)\n\tlui $at, %hi(D_8019EE2C)\n\tsh $zero, %lo(D_8019EE2C)($at)\n\t.L8011ECD0:\n\taddiu $a0, $sp, 0x10\n\tlh $a1, 0x0($s1)\n\tlhu $a2, 0x2($s1)\n\taddiu $s1, $s1, 0x4\n\tlhu $v0, 0x0($s0)\n\tlhu $v1, 0x2($s0)\n\tlhu $a3, 0x4($s0)\n\tlhu $t0, 0x6($s0)\n\taddiu $s0, $s0, 0x8\n\taddiu $a2, $a2, -0x100\n\tsll $a2, $a2, 16\n\tsra $a2, $a2, 16\n\tsh $v0, 0x10($sp)\n\tsh $v1, 0x12($sp)\n\tsh $a3, 0x14($sp)\n\tjal func_80194700\n\tsh $t0, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddu $v1, $s2, $zero\n\tlui $v0, (0x10000 >> 16)\n\tsra $v1, $v1, 16\n\tslti $v1, $v1, 0x11\n\tbnez $v1, .L8011ECD0\n\taddu $s2, $s2, $v0\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5E48\n\tsh $v0, 0x0($a0)\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A65\n\tsh $zero, %gp_rel(D_8019EDC8)($gp)\n\tjal func_801225C0\n\tnop\n\tjal func_80126610\n\tnop\n\tjal func_80122114\n\tnop\n\tlh $v1, %gp_rel(D_8019EDC8)($gp)\n\taddiu $v0, $zero, 0x1\n\tbeq $v1, $v0, .L8011EC58\n\tnop\n\tlw $ra, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011EC44, .-func_8011EC44\n"
);

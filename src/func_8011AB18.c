#include "common.h"
__asm__(
  ".globl func_8011AB18\n"
  ".type func_8011AB18, @function\n"
  "func_8011AB18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCA\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011AB50\n\tnop\n\tjal func_800FEC74\n\tnop\n\tj .L8011AB78\n\tnop\n\t.L8011AB50:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8011AB78\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800FD914\n\tnop\n\t.L8011AB78:\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011ABA8\n\tnop\n\tjal func_800FB09C\n\tnop\n\tj .L8011AC00\n\tnop\n\t.L8011ABA8:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011ABD0\n\tnop\n\tjal func_800FB160\n\tnop\n\tj .L8011AC00\n\tnop\n\t.L8011ABD0:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011ABF8\n\tnop\n\tjal func_800FB224\n\tnop\n\tj .L8011AC00\n\tnop\n\t.L8011ABF8:\n\tjal func_800FAA04\n\tnop\n\t.L8011AC00:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCA\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011AC3C\n\tlui $a0, %hi(D_801CFD68)\n\taddiu $a0, $a0, %lo(D_801CFD68)\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F9A8\n\taddu $a3, $zero, $zero\n\tjal func_800FED3C\n\tnop\n\tj .L8011AC44\n\tnop\n\t.L8011AC3C:\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xCA\n\t.L8011AC44:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011AB18, .-func_8011AB18\n"
);

#include "common.h"
__asm__(
  ".globl func_80119740\n"
  ".type func_80119740, @function\n"
  "func_80119740:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8A\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\t.L801197D8:\n\tjal func_800FE778\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80119810\n\tnop\n\tjal func_800FF024\n\tnop\n\tj .L80119820\n\tnop\n\t.L80119810:\n\tjal func_80170C14\n\tnop\n\tjal func_8010B010\n\tnop\n\t.L80119820:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801197D8\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119740, .-func_80119740\n"
);

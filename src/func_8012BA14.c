#include "common.h"
__asm__(
  ".globl func_8012BA14\n"
  ".type func_8012BA14, @function\n"
  "func_8012BA14:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x30\n\tsw $ra, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3F\n\tjal func_801267E8\n\tnop\n\tjal func_8011F320\n\tnop\n\tjal func_8011EF0C\n\tnop\n\tjal func_801210AC\n\tnop\n\tlui $v0, %hi(D_80199190)\n\taddiu $s0, $v0, %lo(D_80199190)\n\tlhu $a0, 0x1A($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0x26($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B22\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8012BAB4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tlhu $a0, 0x2C($s0)\n\tjal func_800F7500\n\tnop\n\tj .L8012BAC8\n\tnop\n\t.L8012BAB4:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tlhu $a0, 0x2E($s0)\n\tjal func_800F7500\n\tnop\n\t.L8012BAC8:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1BC1\n\tjal func_8011EF30\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1BC3\n\tjal func_8012B950\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012BA14, .-func_8012BA14\n"
);

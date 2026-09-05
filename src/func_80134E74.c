#include "common.h"
__asm__(
  ".globl func_80134E74\n"
  ".type func_80134E74, @function\n"
  "func_80134E74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_80120F1C\n\tsw $s0, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x48C0\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A71\n\tjal func_8012807C\n\tlui $s0, %hi(D_80199190)\n\tjal func_801257BC\n\taddiu $s0, $s0, %lo(D_80199190)\n\tlhu $a0, 0x64($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_80135298\n\tnop\n\tlhu $a0, 0x66($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0x68($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tlhu $a0, 0x6A($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A01\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 1\n\tjal func_800F5140\n\tsb $v0, 0x0($v1)\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1A01\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\tlhu $a0, 0x70($s0)\n\tjal func_800F4064\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x46\n\tjal func_8011F8D4\n\tnop\n\tlhu $a0, 0x72($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80134E74, .-func_80134E74\n"
);

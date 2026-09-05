#include "common.h"
__asm__(
  ".globl func_801390DC\n"
  ".type func_801390DC, @function\n"
  "func_801390DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tjal func_80120E2C\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_80199190)\n\taddiu $s0, $s0, %lo(D_80199190)\n\tlhu $a0, 0xBE($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011FBA4\n\tnop\n\tjal func_80126528\n\tnop\n\tjal func_80120E9C\n\tnop\n\tjal func_8012AAC0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x11\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE2\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFB0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x99\n\tjal func_80120E2C\n\tnop\n\tlhu $a0, 0xB8($s0)\n\tjal func_800F7500\n\tnop\n\tjal func_8011EF30\n\tnop\n\tjal func_801264C0\n\tnop\n\tjal func_80126528\n\tnop\n\tjal func_801391D4\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801390DC, .-func_801390DC\n"
);

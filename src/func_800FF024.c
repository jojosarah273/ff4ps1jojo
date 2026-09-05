#include "common.h"
__asm__(
  ".globl func_800FF024\n"
  ".type func_800FF024, @function\n"
  "func_800FF024:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80171194\n\tnop\n\tjal func_80171608\n\tnop\n\tjal func_801719C8\n\tnop\n\tjal func_801724D0\n\tnop\n\tjal func_80172BA8\n\tnop\n\tjal func_80173008\n\tnop\n\tjal func_80173780\n\tnop\n\tjal func_801721E8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3E\n\tjal func_8011B6B4\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FF09C\n\tnop\n\tjal func_80171F90\n\tnop\n\t.L800FF09C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FF024, .-func_800FF024\n"
);

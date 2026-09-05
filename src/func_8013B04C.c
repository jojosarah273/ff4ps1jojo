#include "common.h"
__asm__(
  ".globl func_8013B04C\n"
  ".type func_8013B04C, @function\n"
  "func_8013B04C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16AE\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A37\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16B0\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A39\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16B2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A3B\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 12\n\tlui $at, %hi(D_8019EE42)\n\tsb $v0, %lo(D_8019EE42)($at)\n\tjal func_80135B54\n\tnop\n\tjal func_8011F864\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013B04C, .-func_8013B04C\n"
);

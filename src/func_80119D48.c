#include "common.h"
__asm__(
  ".globl func_80119D48\n"
  ".type func_80119D48, @function\n"
  "func_80119D48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L80119D58:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F7864\n\tnop\n\tlui $a0, (0x14FA66 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x14FA66 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2106\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80119D58\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80119D48, .-func_80119D48\n"
);

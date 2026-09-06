#include "common.h"
__asm__(
  ".globl func_8014A810\n"
  ".type func_8014A810, @function\n"
  "func_8014A810:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8014D680\n\tnop\n\tjal func_8014C57C\n\tnop\n\tjal func_801409E4\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x20\n\tjal func_800996A8\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF87\n\tjal func_8014C714\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014A810, .-func_8014A810\n"
);

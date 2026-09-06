#include "common.h"
__asm__(
  ".globl func_80143D64\n"
  ".type func_80143D64, @function\n"
  "func_80143D64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF173\n\tjal func_80148FA0\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80143D64, .-func_80143D64\n"
);

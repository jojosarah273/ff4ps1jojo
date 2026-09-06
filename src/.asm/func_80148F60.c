#include "common.h"
__asm__(
  ".globl func_80148F60\n"
  ".type func_80148F60, @function\n"
  "func_80148F60:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF133\n\tjal func_80148FC0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148F60, .-func_80148F60\n"
);

#include "common.h"
__asm__(
  ".globl func_80148E08\n"
  ".type func_80148E08, @function\n"
  "func_80148E08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\t.L80148E20:\n\tjal func_800F90EC\n\tori $a0, $zero, 0xF133\n\tjal func_800F8768\n\tori $a0, $zero, 0xF173\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80148E20\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148E08, .-func_80148E08\n"
);

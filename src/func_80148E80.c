#include "common.h"
__asm__(
  ".globl func_80148E80\n"
  ".type func_80148E80, @function\n"
  "func_80148E80:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80148E90:\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80148E90\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148E80, .-func_80148E80\n"
);

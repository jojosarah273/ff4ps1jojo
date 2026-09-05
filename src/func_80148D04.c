#include "common.h"
__asm__(
  ".globl func_80148D04\n"
  ".type func_80148D04, @function\n"
  "func_80148D04:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF42B\n\taddiu $v1, $zero, 0x11\n\tlui $v0, (0x800D0515 >> 16)\n\tori $v0, $v0, (0x800D0515 & 0xFFFF)\n\t.L80148D28:\n\tsb $zero, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L80148D28\n\taddiu $v0, $v0, -0x1\n\tjal func_80148C28\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148D04, .-func_80148D04\n"
);

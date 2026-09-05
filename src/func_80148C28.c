#include "common.h"
__asm__(
  ".globl func_80148C28\n"
  ".type func_80148C28, @function\n"
  "func_80148C28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddiu $v1, $zero, 0x40\n\tlui $a1, %hi(D_800D0300)\n\taddiu $a0, $zero, 0xF0\n\taddu $v0, $v1, $a1\n\t.L80148C40:\n\tsb $a0, %lo(D_800D0300)($v0)\n\taddiu $v1, $v1, 0x1\n\tslti $v0, $v1, 0x160\n\tbnez $v0, .L80148C40\n\taddu $v0, $v1, $a1\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF42B\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80148C28, .-func_80148C28\n"
);

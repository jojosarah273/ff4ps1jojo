#include "common.h"
__asm__(
  ".globl func_800F6658\n"
  ".type func_800F6658, @function\n"
  "func_800F6658:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, 0x1F80\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlbu $a0, 0x0($v0)\n\tlw $ra, 0x14($sp)\n\tori $s0, $s0, 0x3C0\n\tsb $a0, 0x8($s0)\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x9($s0)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6658, .-func_800F6658\n"
);

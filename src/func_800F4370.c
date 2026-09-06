#include "common.h"
__asm__(
  ".globl func_800F4370\n"
  ".type func_800F4370, @function\n"
  "func_800F4370:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tlbu $a1, 0x0($v0)\n\tlbu $a0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tand $a0, $a0, $a1\n\tsb $a0, 0x0($v1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F4370, .-func_800F4370\n"
);

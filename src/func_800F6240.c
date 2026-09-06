#include "common.h"
__asm__(
  ".globl func_800F6240\n"
  ".type func_800F6240, @function\n"
  "func_800F6240:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\tnop\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\taddiu $v1, $v1, 0x1\n\tsb $v1, 0x0($v0)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tandi $v1, $v1, 0xFF\n\tsw $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6240, .-func_800F6240\n"
);

#include "common.h"
__asm__(
  ".globl func_800F6274\n"
  ".type func_800F6274, @function\n"
  "func_800F6274:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\tnop\n\tlbu $a0, 0x1($v0)\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tsll $a0, $a0, 8\n\tor $v1, $v1, $a0\n\taddiu $v1, $v1, 0x1\n\tsra $a0, $v1, 8\n\tsb $v1, 0x0($v0)\n\tsb $a0, 0x1($v0)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tnop\n\tsw $v1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6274, .-func_800F6274\n"
);

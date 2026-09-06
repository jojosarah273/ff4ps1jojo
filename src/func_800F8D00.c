#include "common.h"
__asm__(
  ".globl func_800F8D00\n"
  ".type func_800F8D00, @function\n"
  "func_800F8D00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\tnop\n\tlw $v1, %gp_rel(D_8019ED5C)($gp)\n\tnop\n\tlbu $a0, 0x0($v1)\n\tnop\n\tsb $a0, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED5C)($gp)\n\tlw $ra, 0x10($sp)\n\tlbu $a0, 0x1($v1)\n\tnop\n\tsb $a0, 0x1($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8D00, .-func_800F8D00\n"
);

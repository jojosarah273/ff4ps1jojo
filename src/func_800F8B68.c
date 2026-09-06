#include "common.h"
__asm__(
  ".globl func_800F8B68\n"
  ".type func_800F8B68, @function\n"
  "func_800F8B68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $a1, 0x0($v0)\n\tjal func_800F3CC4\n\tnop\n\tlui $v1, 0x1F80\n\tlbu $v1, 0x3C8($v1)\n\tlw $ra, 0x10($sp)\n\tsb $v1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8B68, .-func_800F8B68\n"
);

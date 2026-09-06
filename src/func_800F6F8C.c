#include "common.h"
__asm__(
  ".globl func_800F6F8C\n"
  ".type func_800F6F8C, @function\n"
  "func_800F6F8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $a1, 0x0($v0)\n\tjal func_800F3CC4\n\tnop\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tlui $at, 0x1F80\n\tsb $v1, 0x3C8($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6F8C, .-func_800F6F8C\n"
);

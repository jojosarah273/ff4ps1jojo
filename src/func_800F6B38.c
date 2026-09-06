#include "common.h"
__asm__(
  ".globl func_800F6B38\n"
  ".type func_800F6B38, @function\n"
  "func_800F6B38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED5C)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F3B04\n\taddu $a0, $a0, $v1\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tlui $at, 0x1F80\n\tsb $v1, 0x3C8($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6B38, .-func_800F6B38\n"
);

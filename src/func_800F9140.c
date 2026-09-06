#include "common.h"
__asm__(
  ".globl func_800F9140\n"
  ".type func_800F9140, @function\n"
  "func_800F9140:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tjal func_800F3B04\n\taddu $a0, $a0, $v1\n\tlw $ra, 0x10($sp)\n\tsb $zero, 0x0($v0)\n\tsb $zero, 0x1($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9140, .-func_800F9140\n"
);

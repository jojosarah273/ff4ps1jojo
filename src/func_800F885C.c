#include "common.h"
__asm__(
  ".globl func_800F885C\n"
  ".type func_800F885C, @function\n"
  "func_800F885C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tnop\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tlui $a1, 0x1F80\n\tlbu $a1, 0x3C8($a1)\n\tlhu $a0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\taddu $v0, $v0, $a0\n\tsb $a1, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F885C, .-func_800F885C\n"
);

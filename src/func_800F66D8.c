#include "common.h"
__asm__(
  ".globl func_800F66D8\n"
  ".type func_800F66D8, @function\n"
  "func_800F66D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3A70\n\tandi $a0, $a0, 0xFFFF\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\taddu $v0, $v0, $a0\n\tlbu $v1, 0x0($v0)\n\tlui $at, 0x1F80\n\tsb $v1, 0x3C8($at)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F66D8, .-func_800F66D8\n"
);

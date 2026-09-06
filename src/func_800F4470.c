#include "common.h"
__asm__(
  ".globl func_800F4470\n"
  ".type func_800F4470, @function\n"
  "func_800F4470:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3A70\n\tandi $a0, $a0, 0xFFFF\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlw $v1, %gp_rel(D_8019ED60)($gp)\n\tlw $a2, %gp_rel(D_8019ED40)($gp)\n\tlbu $a0, 0x0($v1)\n\tlbu $v1, 0x0($a2)\n\taddu $v0, $v0, $a0\n\tlbu $a0, 0x0($v0)\n\tnop\n\tand $v1, $v1, $a0\n\tsb $v1, 0x0($a2)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $a0, 0x1($v0)\n\tlbu $v1, 0x1($a1)\n\tlw $ra, 0x10($sp)\n\tand $v1, $v1, $a0\n\tsb $v1, 0x1($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F4470, .-func_800F4470\n"
);

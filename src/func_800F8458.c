#include "common.h"
__asm__(
  ".globl func_800F8458\n"
  ".type func_800F8458, @function\n"
  "func_800F8458:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tandi $a0, $a0, 0xFFFF\n\tsw $ra, 0x14($sp)\n\tjal func_800F3AB4\n\tsw $s0, 0x10($sp)\n\tlw $v1, %gp_rel(D_8019ED60)($gp)\n\tlui $s0, 0x1F80\n\tlbu $a1, 0x0($v1)\n\tjal func_800F3B9C\n\taddu $a0, $v0, $zero\n\tori $s0, $s0, 0x3C0\n\tlw $v1, %gp_rel(D_8019ED60)($gp)\n\tlbu $a1, 0x8($s0)\n\tlbu $a0, 0x0($v1)\n\tlw $ra, 0x14($sp)\n\taddu $v0, $v0, $a0\n\tsb $a1, 0x0($v0)\n\tlbu $v1, 0x9($s0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x1($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F8458, .-func_800F8458\n"
);

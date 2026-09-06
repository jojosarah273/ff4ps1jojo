#include "common.h"
__asm__(
  ".globl func_800F6CA8\n"
  ".type func_800F6CA8, @function\n"
  "func_800F6CA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED5C)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tnop\n\tlw $v1, %gp_rel(D_8019ED5C)($gp)\n\tlui $a0, 0x1F80\n\tlbu $a1, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\taddu $v0, $v0, $a1\n\tlbu $a2, 0x0($v0)\n\tori $a0, $a0, 0x3C0\n\tsb $a2, 0x8($a0)\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x9($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6CA8, .-func_800F6CA8\n"
);

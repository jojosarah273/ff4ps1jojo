#include "common.h"
__asm__(
  ".globl func_800F7358\n"
  ".type func_800F7358, @function\n"
  "func_800F7358:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED58)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tjal func_800F3B04\n\taddu $a0, $a0, $v1\n\tlw $a0, %gp_rel(D_8019ED5C)($gp)\n\tlbu $v1, 0x0($v0)\n\tlw $ra, 0x10($sp)\n\tsb $v1, 0x0($a0)\n\tlw $a1, %gp_rel(D_8019ED5C)($gp)\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x1($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F7358, .-func_800F7358\n"
);

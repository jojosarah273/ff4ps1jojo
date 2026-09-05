#include "common.h"
__asm__(
  ".globl func_800F88E4\n"
  ".type func_800F88E4, @function\n"
  "func_800F88E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tlui $s0, (0x1F8003C0 >> 16)\n\tori $s0, $s0, (0x1F8003C0 & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tlbu $a1, 0x8($s0)\n\tlhu $a0, 0x0($v1)\n\tlw $ra, 0x14($sp)\n\taddu $v0, $v0, $a0\n\tsb $a1, 0x0($v0)\n\tlbu $v1, 0x9($s0)\n\tlw $s0, 0x10($sp)\n\tsb $v1, 0x1($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F88E4, .-func_800F88E4\n"
);

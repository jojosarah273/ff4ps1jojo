#include "common.h"
__asm__(
  ".globl func_800F72E0\n"
  ".type func_800F72E0, @function\n"
  "func_800F72E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\tandi $a0, $a0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tlw $a1, %gp_rel(D_8019ED5C)($gp)\n\tlhu $a0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\taddu $v0, $v0, $a0\n\tlbu $v1, 0x0($v0)\n\tnop\n\tsb $v1, 0x0($a1)\n\tlw $a0, %gp_rel(D_8019ED5C)($gp)\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x1($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F72E0, .-func_800F72E0\n"
);

#include "common.h"
__asm__(
  ".globl func_800F68A0\n"
  ".type func_800F68A0, @function\n"
  "func_800F68A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3AB4\n\tandi $a0, $a0, 0xFFFF\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tnop\n\tlhu $a1, 0x0($v1)\n\tjal func_800F3B9C\n\taddu $a0, $v0, $zero\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\tlui $a0, 0x1F80\n\tlhu $a1, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\taddu $v0, $v0, $a1\n\tlbu $a2, 0x0($v0)\n\tori $a0, $a0, 0x3C0\n\tsb $a2, 0x8($a0)\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x9($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F68A0, .-func_800F68A0\n"
);

#include "common.h"
__asm__(
  ".globl func_800F91A4\n"
  ".type func_800F91A4, @function\n"
  "func_800F91A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3A70\n\tandi $a0, $a0, 0xFFFF\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlui $a1, 0x800C\n\tori $a1, $a1, 0x8000\n\tlui $v1, %hi(D_800D0000)\n\tlw $a2, %gp_rel(D_8019ED4C)($gp)\n\tlbu $a3, 0x0($v0)\n\tlhu $a0, 0x0($a2)\n\tlw $ra, 0x10($sp)\n\taddu $v1, $a0, $v1\n\tsb $a3, %lo(D_800D0000)($v1)\n\tlbu $a2, 0x1($v0)\n\taddu $a1, $a0, $a1\n\tsb $a2, 0x7FFF($a1)\n\tlw $v0, %gp_rel(D_8019ED4C)($gp)\n\taddiu $a0, $a0, -0x2\n\tsh $a0, 0x0($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F91A4, .-func_800F91A4\n"
);

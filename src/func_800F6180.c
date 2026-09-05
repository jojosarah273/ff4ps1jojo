#include "common.h"
__asm__(
  ".globl func_800F6180\n"
  ".type func_800F6180, @function\n"
  "func_800F6180:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a2, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a2)\n\tlw $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x8000\n\tbeqz $v0, .L800F61A8\n\tandi $v1, $v1, 0x7D\n\tj .L800F61AC\n\tori $v1, $v1, 0x80\n\t.L800F61A8:\n\tandi $v1, $v1, 0xFF\n\t.L800F61AC:\n\tlhu $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L800F61C4\n\tnop\n\tj .L800F61C8\n\tori $v0, $v1, 0x2\n\t.L800F61C4:\n\tandi $v0, $v1, 0xFF\n\t.L800F61C8:\n\taddu $v1, $v0, $zero\n\tsb $v1, 0x0($a2)\n\tandi $v0, $a0, 0xFF\n\tand $v1, $v1, $v0\n\tsra $v0, $a0, 8\n\txor $v0, $v1, $v0\n\tjr $ra\n\tandi $v0, $v0, 0xFF\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F6180, .-func_800F6180\n"
);

#include "common.h"
__asm__(
  ".globl func_800F5050\n"
  ".type func_800F5050, @function\n"
  "func_800F5050:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a1)\n\tlw $v1, 0x0($a0)\n\tandi $a2, $v0, 0x7C\n\tlui $v0, (0x10000 >> 16)\n\tand $v1, $v1, $v0\n\tbnez $v1, .L800F5078\n\tori $v1, $a2, 0x1\n\tandi $v1, $a2, 0xFF\n\t.L800F5078:\n\tlw $v0, 0x0($a0)\n\tnop\n\tandi $v0, $v0, 0x8000\n\tbeqz $v0, .L800F5094\n\taddu $a2, $v1, $zero\n\tj .L800F5098\n\tori $v1, $a2, 0x80\n\t.L800F5094:\n\tandi $v1, $a2, 0xFF\n\t.L800F5098:\n\tlhu $v0, 0x0($a0)\n\tnop\n\tbnez $v0, .L800F50B0\n\taddu $a2, $v1, $zero\n\tj .L800F50B4\n\tori $v0, $a2, 0x2\n\t.L800F50B0:\n\tandi $v0, $a2, 0xFF\n\t.L800F50B4:\n\tjr $ra\n\tsb $v0, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5050, .-func_800F5050\n"
);

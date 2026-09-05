#include "common.h"
__asm__(
  ".globl func_800F4F4C\n"
  ".type func_800F4F4C, @function\n"
  "func_800F4F4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a0, %gp_rel(D_8019ED68)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a0)\n\tlw $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x100\n\tbeqz $v0, .L800F4F74\n\tandi $a2, $v1, 0x7C\n\tj .L800F4F78\n\tori $v1, $a2, 0x1\n\t.L800F4F74:\n\tandi $v1, $a2, 0xFF\n\t.L800F4F78:\n\tlbu $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x80\n\tor $v0, $v1, $v0\n\tlbu $v1, 0x0($a1)\n\tnop\n\tbnez $v1, .L800F4FA0\n\tandi $a2, $v0, 0xFF\n\tj .L800F4FA4\n\tori $v0, $a2, 0x2\n\t.L800F4FA0:\n\tandi $v0, $a2, 0xFF\n\t.L800F4FA4:\n\tjr $ra\n\tsb $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F4F4C, .-func_800F4F4C\n"
);

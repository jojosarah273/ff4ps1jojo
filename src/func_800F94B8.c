#include "common.h"
__asm__(
  ".globl func_800F94B8\n"
  ".type func_800F94B8, @function\n"
  "func_800F94B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, %gp_rel(D_8019ED4C)($gp)\n\tlbu $a1, 0x0($v0)\n\tlui $v0, D_800D0001\n\tlhu $a2, 0x0($v1)\n\tnop\n\taddu $v0, $a2, $v0\n\tlbu $v1, D_800D0001($v0)\n\tlbu $a0, D_800D0002($v0)\n\tsll $v1, $v1, 8\n\tor $v1, $a0, $v1\n\tandi $v0, $v1, 0x8000\n\tbeqz $v0, .L800F94F8\n\tandi $a1, $a1, 0x7D\n\tj .L800F94FC\n\tori $v0, $a1, 0x80\n\t.L800F94F8:\n\tandi $v0, $a1, 0xFF\n\t.L800F94FC:\n\tbnez $v1, .L800F950C\n\taddu $a1, $v0, $0\n\tj .L800F9510\n\tori $a0, $a1, 0x2\n\t.L800F950C:\n\tandi $a0, $a1, 0xFF\n\t.L800F9510:\n\tlw $v0, %gp_rel(D_8019ED48)($gp)\n\tnop\n\tsh $v1, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tsb $a0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED4C)($gp)\n\taddiu $v0, $a2, 0x2\n\tjr $ra\n\tsh $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F94B8, .-func_800F94B8\n"
);

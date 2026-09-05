#include "common.h"
__asm__(
  ".globl func_800F5520\n"
  ".type func_800F5520, @function\n"
  "func_800F5520:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlbu $a2, 0x0($a0)\n\tlbu $v0, 0x1($a0)\n\tlbu $v1, 0x0($a1)\n\tsll $v0, $v0, 8\n\tandi $a0, $v1, 0x7C\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tor $a2, $a2, $v0\n\tlhu $v0, 0x0($v1)\n\tnop\n\tbne $v0, $a2, .L800F5558\n\tsltu $v0,$v0,$a2\n\tj .L800F556C\n\tori $a0, $a0, 0x3\n\t.L800F5558:\n\tbeqz $v0, .L800F5568\n\tnop\n\tj .L800F556C\n\tori $a0, $a0, 0x80\n\t.L800F5568:\n\tori $a0, $a0, 0x1\n\t.L800F556C:\n\tjr $ra\n\tsb $a0, 0x0($a1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5520, .-func_800F5520\n"
);

#include "common.h"
__asm__(
  ".globl func_800F5958\n"
  ".type func_800F5958, @function\n"
  "func_800F5958:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tandi $a0, $a0, 0xFFFF\n\tsw $a0, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x7C\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED54)($gp)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tlhu $v1, 0x0($a0)\n\tlhu $v0, 0x0($v0)\n\tnop\n\tbne $v1, $v0, .L800F59B4\n\tsltu $v0,$v1,$v0\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x3\n\tjr $ra\n\tsb $v0, 0x0($v1)\n\t.L800F59B4:\n\tbeqz $v0, .L800F59D8\n\tnop\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x80\n\tjr $ra\n\tsb $v0, 0x0($v1)\n\t.L800F59D8:\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x1\n\tjr $ra\n\tsb $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F5958, .-func_800F5958\n"
);

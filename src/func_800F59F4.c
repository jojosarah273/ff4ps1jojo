#include "common.h"
__asm__(
  ".globl func_800F59F4\n"
  ".type func_800F59F4, @function\n"
  "func_800F59F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tandi $a0, $a0, 0xFF\n\tsw $a0, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x7C\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED60)($gp)\n\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a0)\n\tlbu $v0, 0x0($v0)\n\tnop\n\tbne $v1, $v0, .L800F5A50\n\tsltu $v0,$v1,$v0\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x3\n\tjr $ra\n\tsb $v0, 0x0($v1)\n\t.L800F5A50:\n\tbeqz $v0, .L800F5A74\n\tnop\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x80\n\tjr $ra\n\tsb $v0, 0x0($v1)\n\t.L800F5A74:\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x1\n\tjr $ra\n\tsb $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F59F4, .-func_800F59F4\n"
);

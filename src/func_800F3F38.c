#include "common.h"
__asm__(
  ".globl func_800F3F38\n"
  ".type func_800F3F38, @function\n"
  "func_800F3F38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tlbu $v1, 0x0($a0)\n\tlbu $a2, 0x0($a1)\n\tlbu $a0, 0x0($v0)\n\taddu $a2, $a2, $v1\n\tandi $v0, $a0, 0x1\n\taddu $a2, $a2, $v0\n\tandi $a0, $a0, 0x3E\n\tandi $v0, $a2, 0xC0\n\tor $a0, $v0, $a0\n\tandi $v0, $a2, 0x100\n\tbeqz $v0, .L800F3F78\n\tsb $a2, 0x0($a1)\n\tj .L800F3F7C\n\tori $v1, $a0, 0x1\n\t.L800F3F78:\n\tandi $v1, $a0, 0xFF\n\t.L800F3F7C:\n\tlw $v0, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tsb $v1, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tjr $ra\n\tsw $a2, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3F38, .-func_800F3F38\n"
);

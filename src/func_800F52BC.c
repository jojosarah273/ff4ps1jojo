#include "common.h"
__asm__(
  ".globl func_800F52BC\n"
  ".type func_800F52BC, @function\n"
  "func_800F52BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED50)($gp)\n\tandi $a0, $a0, 0xFF\n\tsw $a0, 0x0($v0)\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x3D\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlbu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tandi $v0, $v0, 0xC0\n\tor $v1, $v1, $v0\n\tsb $v1, 0x0($a1)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v1, 0x0($a0)\n\tlw $v0, 0x0($a1)\n\tnop\n\tand $v0, $v0, $v1\n\tsw $v0, 0x0($a1)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlw $a0, %gp_rel(D_8019ED68)($gp)\n\tlbu $v0, 0x0($v1)\n\tlbu $v1, 0x0($a0)\n\tbnez $v0, .L800F5334\n\tnop\n\tori $v1, $v1, 0x2\n\t.L800F5334:\n\tjr $ra\n\tsb $v1, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F52BC, .-func_800F52BC\n"
);

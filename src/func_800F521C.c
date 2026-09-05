#include "common.h"
__asm__(
  ".globl func_800F521C\n"
  ".type func_800F521C, @function\n"
  "func_800F521C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsw $v0, 0x0($v1)\n\tlw $a2, %gp_rel(D_8019ED50)($gp)\n\tlbu $v0, 0x1($a0)\n\tlw $v1, 0x0($a2)\n\tsll $v0, $v0, 8\n\tor $v1, $v1, $v0\n\tsw $v1, 0x0($a2)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tnop\n\tandi $v0, $v0, 0x3D\n\tsb $v0, 0x0($a1)\n\tlw $a0, %gp_rel(D_8019ED50)($gp)\n\tlw $a1, %gp_rel(D_8019ED68)($gp)\n\tlw $v1, 0x0($a0)\n\tlbu $v0, 0x0($a1)\n\tandi $v1, $v1, 0xC000\n\tsra $v1, $v1, 8\n\tor $v0, $v0, $v1\n\tsb $v0, 0x0($a1)\n\tlw $v1, %gp_rel(D_8019ED44)($gp)\n\tlw $a1, %gp_rel(D_8019ED50)($gp)\n\tlhu $a0, 0x0($v1)\n\tlw $v0, 0x0($a1)\n\tnop\n\tand $v0, $v0, $a0\n\tsw $v0, 0x0($a1)\n\tlw $v1, %gp_rel(D_8019ED50)($gp)\n\tlw $a0, %gp_rel(D_8019ED68)($gp)\n\tlhu $v0, 0x0($v1)\n\tlbu $v1, 0x0($a0)\n\tbnez $v0, .L800F52B4\n\tnop\n\tori $v1, $v1, 0x2\n\t.L800F52B4:\n\tjr $ra\n\tsb $v1, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F521C, .-func_800F521C\n"
);

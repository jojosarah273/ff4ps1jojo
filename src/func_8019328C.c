#include "common.h"
__asm__(
  ".globl func_8019328C\n"
  ".type func_8019328C, @function\n"
  "func_8019328C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019CF14)\n\taddiu $v0, $v0, %lo(D_8019CF14)\n\tsll $a0, $a0, 2\n\taddu $a0, $a0, $v0\n\tlw $v0, 0x0($a0)\n\tnop\n\tbeq $a1, $v0, .L801932B0\n\tnop\n\tsw $a1, 0x0($a0)\n\t.L801932B0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019328C, .-func_8019328C\n"
);

#include "common.h"
__asm__(
  ".globl func_80193588\n"
  ".type func_80193588, @function\n"
  "func_80193588:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbltz $a0, .L801935C0\n\tnop\n\tlui $v0, %hi(D_8019D0F4)\n\tlw $v0, %lo(D_8019D0F4)($v0)\n\tnop\n\tslt $v0, $v0, $a0\n\tbnez $v0, .L801935C0\n\tnop\n\tlui $v0, %hi(func_80193C40)\n\taddiu $v0, $v0, %lo(func_80193C40)\n\tlui $at, %hi(D_8019D0F8)\n\tsw $a0, %lo(D_8019D0F8)($at)\n\tlui $at, %hi(D_8019DB50)\n\tsw $v0, %lo(D_8019DB50)($at)\n\t.L801935C0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80193588, .-func_80193588\n"
);

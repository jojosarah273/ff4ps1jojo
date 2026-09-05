#include "common.h"
__asm__(
  ".globl func_80196018\n"
  ".type func_80196018, @function\n"
  "func_80196018:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tnop\n\tjr $ra\n\tsw $a0, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196018, .-func_80196018\n"
);

#include "common.h"
__asm__(
  ".globl func_80196074\n"
  ".type func_80196074, @function\n"
  "func_80196074:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, 0x400\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tori $v1, $v1, 0x2\n\tsw $v1, 0x0($v0)\n\tlui $v0, %hi(D_8019DC60)\n\tlw $v0, %lo(D_8019DC60)($v0)\n\tnop\n\tsw $a0, 0x0($v0)\n\tlui $v0, %hi(D_8019DC64)\n\tlw $v0, %lo(D_8019DC64)($v0)\n\tlui $v1, 0x100\n\tsw $zero, 0x0($v0)\n\tlui $v0, %hi(D_8019DC68)\n\tlw $v0, %lo(D_8019DC68)($v0)\n\tori $v1, $v1, 0x401\n\tjr $ra\n\tsw $v1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196074, .-func_80196074\n"
);

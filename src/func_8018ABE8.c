#include "common.h"
__asm__(
  ".globl func_8018ABE8\n"
  ".type func_8018ABE8, @function\n"
  "func_8018ABE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a1, %hi(D_8019B124)\n\tlw $a1, %lo(D_8019B124)($a1)\n\tlui $v1, (0xFFF8FFFF >> 16)\n\tlw $v0, 0x0($a1)\n\tori $v1, $v1, (0xFFF8FFFF & 0xFFFF)\n\tand $v0, $v0, $v1\n\tbeqz $a0, .L8018AC20\n\tsw $v0, 0x0($a1)\n\tlui $v0, %hi(D_8019B124)\n\tlw $v0, %lo(D_8019B124)($v0)\n\tnop\n\tlw $v1, 0x0($v0)\n\tj .L8018AC34\n\tlui $a0, (0x30000 >> 16)\n\t.L8018AC20:\n\tlui $v0, %hi(D_8019B124)\n\tlw $v0, %lo(D_8019B124)($v0)\n\tnop\n\tlw $v1, 0x0($v0)\n\tlui $a0, (0x50000 >> 16)\n\t.L8018AC34:\n\tor $v1, $v1, $a0\n\tjr $ra\n\tsw $v1, 0x0($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018ABE8, .-func_8018ABE8\n"
);

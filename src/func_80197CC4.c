#include "common.h"
__asm__(
  ".globl func_80197CC4\n"
  ".type func_80197CC4, @function\n"
  "func_80197CC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019DCBC)\n\tlw $v1, %lo(D_8019DCBC)($v1)\n\tnop\n\tlw $v0, 0x4($v1)\n\tnop\n\tandi $v0, $v0, 0x1\n\tbeqz $v0, .L80197CFC\n\taddu $v0, $zero, $zero\n\tlw $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x1\n\tbnez $v0, .L80197CFC\n\taddiu $v0, $zero, 0x1\n\taddu $v0, $zero, $zero\n\t.L80197CFC:\n\tjr $ra\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197CC4, .-func_80197CC4\n"
);

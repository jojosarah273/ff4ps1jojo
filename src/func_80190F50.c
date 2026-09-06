#include "common.h"
__asm__(
  ".globl func_80190F50\n"
  ".type func_80190F50, @function\n"
  "func_80190F50:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019BCB0)\n\tlw $v1, %lo(D_8019BCB0)($v1)\n\taddiu $v0, $zero, 0x2\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCC0)\n\tlw $v1, %lo(D_8019BCC0)($v1)\n\tlbu $v0, 0x0($a0)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB4)\n\tlw $v1, %lo(D_8019BCB4)($v1)\n\tlbu $v0, 0x1($a0)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB0)\n\tlw $v1, %lo(D_8019BCB0)($v1)\n\taddiu $v0, $zero, 0x3\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCBC)\n\tlw $v1, %lo(D_8019BCBC)($v1)\n\tlbu $v0, 0x2($a0)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCC0)\n\tlw $v1, %lo(D_8019BCC0)($v1)\n\tlbu $v0, 0x3($a0)\n\tnop\n\tsb $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019BCB4)\n\tlw $v1, %lo(D_8019BCB4)($v1)\n\taddiu $v0, $zero, 0x20\n\tsb $v0, 0x0($v1)\n\tjr $ra\n\taddu $v0, $zero, $zero\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80190F50, .-func_80190F50\n"
);

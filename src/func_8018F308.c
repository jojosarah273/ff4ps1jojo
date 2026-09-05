#include "common.h"
__asm__(
  ".globl func_8018F308\n"
  ".type func_8018F308, @function\n"
  "func_8018F308:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, 0x1074($v1)\n\tnop\n\tandi $v0, $v0, 0x80\n\tbeqz $v0, .L8018F344\n\tnop\n\t.L8018F31C:\n\tlw $v0, 0x1044($v1)\n\tnop\n\tandi $v0, $v0, 0x80\n\tbnez $v0, .L8018F31C\n\tnop\n\tlui $v0, (0x10000 >> 16)\n\tlw $v0, -0x2004($v0)\n\tnop\n\tjr $v0\n\tnop\n\t.L8018F344:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F308, .-func_8018F308\n"
);

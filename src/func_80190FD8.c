#include "common.h"
__asm__(
  ".globl func_80190FD8\n"
  ".type func_80190FD8, @function\n"
  "func_80190FD8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, D_8019BCB0\n\tlw $v1, D_8019BCB0($v1)\n\taddiu $v0, $0, 0x1\n\tsb $v0, 0x0($v1)\n\tlui $v0, D_8019BCB4\n\tlw $v0, D_8019BCB4($v0)\n\tnop\n\tlbu $v0, 0x0($v0)\n\tnop\n\tandi $v0, $v0, 0x7\n\tbeqz $v0, .L8019105C\n\taddiu $a0, $0, 0x1\n\taddiu $v1, $0, 0x7\n\t.L8019100C:\n\tlui $v0, D_8019BCB0\n\tlw $v0, D_8019BCB0($v0)\n\tnop\n\tsb $a0, 0x0($v0)\n\tlui $v0, D_8019BCB4\n\tlw $v0, D_8019BCB4($v0)\n\tnop\n\tsb $v1, 0x0($v0)\n\tlui $v0, D_8019BCC0\n\tlw $v0, D_8019BCC0($v0)\n\tnop\n\tsb $v1, 0x0($v0)\n\tlui $v0, D_8019BCB4\n\tlw $v0, D_8019BCB4($v0)\n\tnop\n\tlbu $v0, 0x0($v0)\n\tnop\n\tandi $v0, $v0, 0x7\n\tbnez $v0, .L8019100C\n\tnop\n\t.L8019105C:\n\tlui $v1, D_8019BCC8\n\taddiu $v1, $v1, D_8019BCC8\n\tsb $0, 0x2($v1)\n\tlbu $v0, 0x2($v1)\n\tnop\n\tsb $v0, 0x1($v1)\n\tlui $a0, D_8019BCB0\n\tlw $a0, D_8019BCB0($a0)\n\taddiu $v0, $0, 0x2\n\tsb $v0, 0x0($v1)\n\tsb $0, 0x0($a0)\n\tlui $v0, D_8019BCB4\n\tlw $v0, D_8019BCB4($v0)\n\tnop\n\tsb $0, 0x0($v0)\n\tlui $v1, D_8019BCB8\n\tlw $v1, D_8019BCB8($v1)\n\taddiu $v0, $0, 0x1325\n\tjr $ra\n\tsw $v0, 0x0($v1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80190FD8, .-func_80190FD8\n"
);

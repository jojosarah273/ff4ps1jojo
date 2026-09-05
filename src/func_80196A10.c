#include "common.h"
__asm__(
  ".globl func_80196A10\n"
  ".type func_80196A10, @function\n"
  "func_80196A10:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, (0x10000007 >> 16)\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tori $v1, $v1, (0x10000007 & 0xFFFF)\n\tsw $v1, 0x0($v0)\n\tlui $a1, %hi(D_8019DC58)\n\tlw $a1, %lo(D_8019DC58)($a1)\n\tlui $v1, (0xFFFFFF >> 16)\n\tlw $v0, 0x0($a1)\n\tori $v1, $v1, (0xFFFFFF & 0xFFFF)\n\tand $v0, $v0, $v1\n\taddiu $v1, $zero, 0x2\n\tbeq $v0, $v1, .L80196A80\n\tlui $v1, (0xE1001000 >> 16)\n\tlui $v0, %hi(D_8019DC5C)\n\tlw $v0, %lo(D_8019DC5C)($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tori $v1, $v1, (0xE1001000 & 0xFFFF)\n\tandi $v0, $v0, 0x3FFF\n\tor $v0, $v0, $v1\n\tsw $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019DC58)\n\tlw $v1, %lo(D_8019DC58)($v1)\n\taddu $v0, $zero, $zero\n\tlw $v1, 0x0($v1)\n\tj .L80196AA8\n\tnop\n\t.L80196A80:\n\tandi $v0, $a0, 0x8\n\tbeqz $v0, .L80196AA4\n\tlui $a0, (0x9000001 >> 16)\n\tori $a0, $a0, (0x9000001 & 0xFFFF)\n\tlui $v1, %hi(D_8019DC5C)\n\tlw $v1, %lo(D_8019DC5C)($v1)\n\taddiu $v0, $zero, 0x2\n\tj .L80196AA8\n\tsw $a0, 0x0($v1)\n\t.L80196AA4:\n\taddiu $v0, $zero, 0x1\n\t.L80196AA8:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196A10, .-func_80196A10\n"
);

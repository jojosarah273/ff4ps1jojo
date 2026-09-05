#include "common.h"
__asm__(
  ".globl func_80151C0C\n"
  ".type func_80151C0C, @function\n"
  "func_80151C0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x352E\n\tjal func_800F5140\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tnop\n\tlbu $v1, 0x0($v1)\n\taddiu $v0, $zero, 0x2\n\tbeq $v1, $v0, .L80151CA0\n\tslti $v0, $v1, 0x3\n\tbeqz $v0, .L80151C74\n\tnop\n\tbeqz $v1, .L80151C90\n\tnop\n\tj .L80151CC8\n\tnop\n\t.L80151C74:\n\taddiu $v0, $zero, 0x4\n\tbeq $v1, $v0, .L80151CB0\n\taddiu $v0, $zero, 0x6\n\tbeq $v1, $v0, .L80151CC0\n\tnop\n\tj .L80151CC8\n\tnop\n\t.L80151C90:\n\tjal func_8015BB9C\n\tnop\n\tj .L80151CC8\n\tnop\n\t.L80151CA0:\n\tjal func_8005A424\n\tnop\n\tj .L80151CC8\n\tnop\n\t.L80151CB0:\n\tjal func_8015E84C\n\tnop\n\tj .L80151CC8\n\tnop\n\t.L80151CC0:\n\tjal func_8015D1C8\n\tnop\n\t.L80151CC8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80151C0C, .-func_80151C0C\n"
);

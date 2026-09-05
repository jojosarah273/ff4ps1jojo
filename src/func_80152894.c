#include "common.h"
__asm__(
  ".globl func_80152894\n"
  ".type func_80152894, @function\n"
  "func_80152894:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v1, 0x0($a0)\n\tnop\n\tandi $v0, $v1, 0x20\n\tbeqz $v0, .L801528D0\n\tsll $v0, $v1, 3\n\tjal func_800F5140\n\tsb $v0, 0x0($a0)\n\tjal func_800F4F4C\n\tnop\n\tj .L801528F8\n\tnop\n\t.L801528D0:\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F516C\n\tsh $v0, 0x0($v1)\n\tjal func_800F5050\n\tnop\n\t.L801528F8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152894, .-func_80152894\n"
);

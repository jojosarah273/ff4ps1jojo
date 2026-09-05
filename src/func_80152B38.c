#include "common.h"
__asm__(
  ".globl func_80152B38\n"
  ".type func_80152B38, @function\n"
  "func_80152B38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED68)\n\tlw $v1, %lo(D_8019ED68)($v1)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x20\n\tbeqz $v0, .L80152B8C\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tjal func_800F7864\n\tsb $v0, 0x0($v1)\n\tjal func_800F76E8\n\tnop\n\tj .L80152BB4\n\tnop\n\t.L80152B8C:\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tjal func_800F7894\n\tsh $v0, 0x0($v1)\n\tjal func_800F77CC\n\tnop\n\t.L80152BB4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152B38, .-func_80152B38\n"
);

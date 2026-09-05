#include "common.h"
__asm__(
  ".globl func_8015E84C\n"
  ".type func_8015E84C, @function\n"
  "func_8015E84C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x14\n\tjal func_80150C38\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x280\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8015E890:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2001\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tlui $v0, %hi(D_8019ED58)\n\tlw $v0, %lo(D_8019ED58)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x35EB\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2001\n\tjal func_8015330C\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015E890\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x390A\n\tjal func_80058554\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015E84C, .-func_8015E84C\n"
);

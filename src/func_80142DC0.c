#include "common.h"
__asm__(
  ".globl func_80142DC0\n"
  ".type func_80142DC0, @function\n"
  "func_80142DC0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80142E34\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80142DF4:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_80143E44\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80142DF4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80142DC0, .-func_80142DC0\n"
);

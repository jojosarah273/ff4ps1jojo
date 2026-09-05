#include "common.h"
__asm__(
  ".globl func_80152F0C\n"
  ".type func_80152F0C, @function\n"
  "func_80152F0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3553\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80152FC8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80152F5C\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x5\n\t.L80152F5C:\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80152F90:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x2680\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80152F90\n\tnop\n\t.L80152FC8:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80152FF8\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x5\n\t.L80152FF8:\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8015302C:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x2700\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015302C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152F0C, .-func_80152F0C\n"
);

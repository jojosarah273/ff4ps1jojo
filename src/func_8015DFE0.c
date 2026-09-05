#include "common.h"
__asm__(
  ".globl func_8015DFE0\n"
  ".type func_8015DFE0, @function\n"
  "func_8015DFE0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2053\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2054\n\tjal func_801531CC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x46\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8015E0D0\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3534\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x5\n\t.L8015E030:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3303\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015E0A8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8015E0A8\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015E030\n\tnop\n\tj .L8015E0D0\n\tnop\n\t.L8015E0A8:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x90\n\tjal func_8015E158\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x90\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L8015E148\n\tnop\n\t.L8015E0D0:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2050\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2051\n\t.L8015E0F0:\n\tjal func_8015319C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3540\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015E0F0\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_80153098\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2054\n\t.L8015E148:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015DFE0, .-func_8015DFE0\n"
);

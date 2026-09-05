#include "common.h"
__asm__(
  ".globl func_8016BC6C\n"
  ".type func_8016BC6C, @function\n"
  "func_8016BC6C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016BD1C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x400\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x57\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_8016BBCC\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x57\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x400\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x7FFF\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x57\n\tori $v0, $v0, 0x8000\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8016BD1C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BC6C, .-func_8016BC6C\n"
);

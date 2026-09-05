#include "common.h"
__asm__(
  ".globl func_8016BED4\n"
  ".type func_8016BED4, @function\n"
  "func_8016BED4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x80\n\tjal func_800F654C\n\tsh $v1, 0x0($a1)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\t.L8016BF0C:\n\tjal func_800F9140\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x2040\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016BF0C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016BED4, .-func_8016BED4\n"
);

#include "common.h"
__asm__(
  ".globl func_8015E6DC\n"
  ".type func_8015E6DC, @function\n"
  "func_8015E6DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2050\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x2053\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x8E\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tjal func_800F971C\n\tsh $v1, 0x0($a0)\n\tjal func_80153098\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2054\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xD4\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015E6DC, .-func_8015E6DC\n"
);

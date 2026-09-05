#include "common.h"
__asm__(
  ".globl func_80124EAC\n"
  ".type func_80124EAC, @function\n"
  "func_80124EAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0xFC625 >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0xFC625 & 0xFFFF)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124EAC, .-func_80124EAC\n"
);

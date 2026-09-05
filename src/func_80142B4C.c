#include "common.h"
__asm__(
  ".globl func_80142B4C\n"
  ".type func_80142B4C, @function\n"
  "func_80142B4C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x1900\n\tjal func_800F6D70\n\tsh $v1, 0x0($a1)\n\tjal func_800F8768\n\tori $a0, $zero, 0xF133\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8768\n\tori $a0, $zero, 0xF173\n\tjal func_800F93DC\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xFC\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80142B4C, .-func_80142B4C\n"
);

#include "common.h"
__asm__(
  ".globl func_80117698\n"
  ".type func_80117698, @function\n"
  "func_80117698:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A00\n\tlui $a0, (0x14FBA6 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x14FBA6 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A01\n\tjal func_800FC5A8\n\tnop\n\tjal func_8011EABC\n\tnop\n\tjal func_800FC5D8\n\tnop\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80117698, .-func_80117698\n"
);

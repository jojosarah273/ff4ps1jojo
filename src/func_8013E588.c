#include "common.h"
__asm__(
  ".globl func_8013E588\n"
  ".type func_8013E588, @function\n"
  "func_8013E588:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x97\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x97\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x1900\n\tjal func_800F6D70\n\tsh $v1, 0x0($a1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013E588, .-func_8013E588\n"
);

#include "common.h"
__asm__(
  ".globl func_80132310\n"
  ".type func_80132310, @function\n"
  "func_80132310:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1A03\n\tjal func_80132428\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0xB\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_80177284\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x1A65\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tlw $ra, 0x10($sp)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132310, .-func_80132310\n"
);

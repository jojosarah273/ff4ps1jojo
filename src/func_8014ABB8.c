#include "common.h"
__asm__(
  ".globl func_8014ABB8\n"
  ".type func_8014ABB8, @function\n"
  "func_8014ABB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F9330\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C3\n\tlui $a0, (0x16FC7E >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x16FC7E & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C5\n\tjal func_8014B98C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x34C4\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014ABB8, .-func_8014ABB8\n"
);

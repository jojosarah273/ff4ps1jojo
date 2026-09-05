#include "common.h"
__asm__(
  ".globl func_80166FB8\n"
  ".type func_80166FB8, @function\n"
  "func_80166FB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F9330\n\tsh $v0, 0x0($a0)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 7\n\tsh $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F971C\n\tsh $v0, 0x0($v1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2001\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80167054\n\tnop\n\tjal func_800F5CCC\n\tnop\n\t.L80167054:\n\tjal func_800F95A0\n\tnop\n\tjal func_800F8768\n\tori $a0, $zero, 0xF0A3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80166FB8, .-func_80166FB8\n"
);

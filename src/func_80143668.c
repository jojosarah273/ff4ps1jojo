#include "common.h"
__asm__(
  ".globl func_80143668\n"
  ".type func_80143668, @function\n"
  "func_80143668:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_8014A488\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L801436A4:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF123\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80143708\n\taddiu $a0, $zero, 0x34C3\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x48\n\tjal func_800F9330\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_8014A488\n\tnop\n\tjal func_800F95A0\n\tnop\n\t.L80143708:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801436A4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80143668, .-func_80143668\n"
);

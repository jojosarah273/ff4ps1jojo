#include "common.h"
__asm__(
  ".globl func_80141334\n"
  ".type func_80141334, @function\n"
  "func_80141334:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F971C\n\tsh $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $a0, (0xDFD1C >> 16)\n\t.L80141390:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xDFD1C & 0xFFFF)\n\tjal func_800F8960\n\tori $a0, $zero, 0xF41B\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80141390\n\tlui $a0, (0xDFD1C >> 16)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F7210\n\tori $a0, $zero, 0xF41B\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x4800\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1A\n\tjal func_800723D0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F7210\n\tori $a0, $zero, 0xF41D\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x4880\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1A\n\tjal func_800723D0\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF41F\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800761C8\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF420\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5\n\tjal func_800761C8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141334, .-func_80141334\n"
);

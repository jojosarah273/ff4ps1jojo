#include "common.h"
__asm__(
  ".globl func_80121678\n"
  ".type func_80121678, @function\n"
  "func_80121678:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6A78\n\taddiu $a0, $zero, 0xA2\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80121720\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6AF4\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F4264\n\taddiu $a0, $zero, 0x7FFF\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6AF4\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F7FCC\n\taddu $a0, $v0, $zero\n\tjal func_800F86F0\n\taddiu $a0, $zero, 0x89\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801217DC\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8B\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F5B2C\n\taddu $a0, $v0, $a0\n\tj .L801217DC\n\tnop\n\t.L80121720:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6AF4\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xA1\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F94\n\taddu $a0, $v0, $a0\n\tlui $v1, %hi(D_8019ED68)\n\tlw $v1, %lo(D_8019ED68)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0xFD\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED50)\n\tlw $a0, %lo(D_8019ED50)($a0)\n\tlui $a1, %hi(D_8019ED68)\n\tlw $a1, %lo(D_8019ED68)($a1)\n\tlhu $v0, 0x0($a0)\n\tlbu $v1, 0x0($a1)\n\tbnez $v0, .L80121798\n\tnop\n\tori $v1, $v1, 0x2\n\t.L80121798:\n\tsb $v1, 0x0($a1)\n\tjal func_800F86F0\n\taddiu $a0, $zero, 0x89\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801217DC\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8B\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F6048\n\taddu $a0, $v0, $a0\n\t.L801217DC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80121678, .-func_80121678\n"
);

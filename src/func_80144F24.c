#include "common.h"
__asm__(
  ".globl func_80144F24\n"
  ".type func_80144F24, @function\n"
  "func_80144F24:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF406\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF408\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_8014D528\n\tnop\n\t.L80144F6C:\n\tjal func_80140558\n\tnop\n\tjal func_80140310\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\tori $a0, $zero, 0xF406\n\tjal func_800F5480\n\tnop\n\tjal func_800F80D0\n\taddiu $a0, $zero, 0x8\n\tjal func_800F81B0\n\tori $a0, $zero, 0xF406\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tjal func_800F971C\n\tsh $v1, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5958\n\tori $a0, $zero, 0xFFA8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80144F6C\n\tnop\n\tjal func_80140310\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2C\n\tjal func_8009A0A0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x10\n\tjal func_8014202C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2A\n\tjal func_8009A0A0\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x34C4\n\tjal func_800F8D00\n\tori $a0, $zero, 0xF466\n\tjal func_8013DC04\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x38E2\n\t.L80145038:\n\tjal func_80140558\n\tnop\n\tjal func_80140310\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\tori $a0, $zero, 0xF406\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x8\n\tjal func_800F81B0\n\tori $a0, $zero, 0xF406\n\tjal func_800F922C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tjal func_800F7170\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80145038\n\tnop\n\tjal func_80140310\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80144F24, .-func_80144F24\n"
);

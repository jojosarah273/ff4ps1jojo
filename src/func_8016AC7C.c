#include "common.h"
__asm__(
  ".globl func_8016AC7C\n"
  ".type func_8016AC7C, @function\n"
  "func_8016AC7C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F7864\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tlui $a0, (0x13DBA7 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x13DBA7 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $a0, (0x13D200 >> 16)\n\t.L8016ACFC:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x13D200 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x2203\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016ACFC\n\tlui $a0, (0x13D200 >> 16)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016ADCC\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x22C1\n\tjal func_800F922C\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1C\n\t.L8016AD74:\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x22A3\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x22A5\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x12\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016AD74\n\tnop\n\tjal func_800F9410\n\tnop\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x22B7\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8016ADCC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016AC7C, .-func_8016AC7C\n"
);

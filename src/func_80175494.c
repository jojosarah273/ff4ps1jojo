#include "common.h"
__asm__(
  ".globl func_80175494\n"
  ".type func_80175494, @function\n"
  "func_80175494:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8017558C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x70\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tnop\n\tlbu $v0, 0x0($a1)\n\tlui $a0, (0x15C4FD >> 16)\n\tsrl $v0, $v0, 4\n\tsb $v0, 0x0($a1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v0, 0x0($v1)\n\tori $a0, $a0, (0x15C4FD & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v0, 0x0($a1)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\tsh $v1, 0x0($a1)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0x14FA16 >> 16)\n\t.L80175534:\n\tjal func_800F6CF4\n\tori $a0, $a0, (0x14FA16 & 0xFFFF)\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0xCFF\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80175534\n\tlui $a0, (0x14FA16 >> 16)\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L8017558C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175494, .-func_80175494\n"
);

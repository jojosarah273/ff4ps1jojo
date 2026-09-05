#include "common.h"
__asm__(
  ".globl func_80141468\n"
  ".type func_80141468, @function\n"
  "func_80141468:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF40F\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tjal func_800F6564\n\tori $a0, $zero, 0xF410\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlhu $v0, 0x0($a0)\n\tjal func_800F971C\n\tsh $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $a0, (0xDFD4C >> 16)\n\t.L801414E0:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xDFD4C & 0xFFFF)\n\tjal func_800F8960\n\tori $a0, $zero, 0xF0CA\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x6\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801414E0\n\tlui $a0, (0xDFD4C >> 16)\n\tjal func_800F6240\n\tori $a0, $zero, 0xF0C9\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141468, .-func_80141468\n"
);

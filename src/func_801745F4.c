#include "common.h"
__asm__(
  ".globl func_801745F4\n"
  ".type func_801745F4, @function\n"
  "func_801745F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFE0\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x18\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F76BC\n\taddu $a0, $v0, $zero\n\tjal func_800F76E8\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x18\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x20\n\t.L8017464C:\n\tlui $a0, (0x14DE10 >> 16)\n\t.L80174650:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14DE10 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xCDB\n\tlui $a0, (0x14DE90 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14DE90 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xCEB\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlui $v0, %hi(D_8019ED60)\n\tlw $v0, %lo(D_8019ED60)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8017464C\n\tnop\n\tlui $v1, %hi(D_8019ED60)\n\tlw $v1, %lo(D_8019ED60)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsb $v0, 0x0($a0)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x10\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x202\n\tjal func_800F73E0\n\tsh $v1, 0x0($a1)\n\tbnez $v0, .L80174650\n\tlui $a0, (0x14DE10 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801745F4, .-func_801745F4\n"
);

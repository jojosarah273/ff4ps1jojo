#include "common.h"
__asm__(
  ".globl func_801793F8\n"
  ".type func_801793F8, @function\n"
  "func_801793F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsll $v0, $a0, 16\n\taddu $a0, $zero, $zero\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x14($sp)\n\tjal func_80194394\n\tsra $s0, $v0, 16\n\tjal func_801928E8\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019EDA8)\n\tlh $v1, %lo(D_8019EDA8)($v1)\n\tnop\n\tbnez $v1, .L80179438\n\tnop\n\tjal func_801942FC\n\taddu $a0, $zero, $zero\n\t.L80179438:\n\tjal func_801792D0\n\tnop\n\tlui $v1, %hi(D_8019EDA6)\n\tlh $v1, %lo(D_8019EDA6)($v1)\n\taddiu $v0, $zero, 0x2\n\tbne $v1, $v0, .L80179464\n\tnop\n\tjal func_8008CB5C\n\tnop\n\tj .L8017946C\n\tnop\n\t.L80179464:\n\tjal func_800888C0\n\taddu $a0, $s0, $zero\n\t.L8017946C:\n\tlui $v0, %hi(D_8019EDA8)\n\tlh $v0, %lo(D_8019EDA8)($v0)\n\tnop\n\tbnez $v0, .L80179488\n\tnop\n\tjal func_801942FC\n\taddu $a0, $zero, $zero\n\t.L80179488:\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tjal func_801792D0\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801793F8, .-func_801793F8\n"
);

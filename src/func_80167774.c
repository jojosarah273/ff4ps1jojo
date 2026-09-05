#include "common.h"
__asm__(
  ".globl func_80167774\n"
  ".type func_80167774, @function\n"
  "func_80167774:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x14($sp)\n\tsw $s0, 0x10($sp)\n\t.L80167780:\n\tjal func_80070174\n\tlui $s0, %hi(D_8019A144)\n\tjal func_800F8FB8\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80167798:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF488\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $s0, %lo(D_8019A144)\n\taddu $v1, $v1, $a0\n\tlbu $a0, 0x0($v1)\n\tjal func_800F5574\n\tnop\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801677FC\n\tori $a0, $zero, 0xF488\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tjal func_800F3B04\n\taddu $a0, $v1, $a0\n\tjal func_800F5B2C\n\taddu $a0, $v0, $zero\n\tjal func_800F62BC\n\taddu $a0, $zero, $zero\n\t.L801677FC:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x12\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80167798\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80167780\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167774, .-func_80167774\n"
);

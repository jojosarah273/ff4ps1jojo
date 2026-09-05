#include "common.h"
__asm__(
  ".globl func_801387D8\n"
  ".type func_801387D8, @function\n"
  "func_801387D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x4E\n\tsw $ra, 0x14($sp)\n\tjal func_800F824C\n\tsw $s0, 0x10($sp)\n\tjal func_800F5140\n\tlui $s0, %hi(D_8019A074)\n\tjal func_800F4F4C\n\taddiu $s0, $s0, %lo(D_8019A074)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_801224D0\n\tnop\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F824C\n\tsb $v1, 0x0($a1)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x1($v0)\n\tnop\n\tsb $v1, 0x0($a1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x2($v0)\n\taddiu $a0, $zero, 0x4F\n\tjal func_800F8274\n\tsb $v1, 0x1($a1)\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x41\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x7FA\n\tjal func_800F5410\n\tnop\n\t.L801388B4:\n\tjal func_800F3AB4\n\taddiu $a0, $zero, 0x4E\n\taddu $a0, $v0, $zero\n\tjal func_800F3B9C\n\taddu $a1, $zero, $zero\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F62F0\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801388B4\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801387D8, .-func_801387D8\n"
);

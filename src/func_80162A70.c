#include "common.h"
__asm__(
  ".globl func_80162A70\n"
  ".type func_80162A70, @function\n"
  "func_80162A70:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80162AD8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80162AD8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xD3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x33C4\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_8015329C\n\tnop\n\tj .L80162BC0\n\tnop\n\t.L80162AD8:\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x390A\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xD4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_80153374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2005\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2005\n\tori $v0, $v0, 0x2\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F6434\n\tori $a0, $zero, 0x8080\n\tbnez $v0, .L80162B68\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xDE\n\tj .L80162B70\n\tnop\n\t.L80162B68:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1E\n\t.L80162B70:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2051\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F5140\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x29EA\n\tjal func_800F6B68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x357F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x29EA\n\t.L80162BC0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80162A70, .-func_80162A70\n"
);

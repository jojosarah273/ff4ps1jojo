#include "common.h"
__asm__(
  ".globl func_8015CD98\n"
  ".type func_8015CD98, @function\n"
  "func_8015CD98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD0\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x393D\n\tjal func_800F8D00\n\tsh $v1, 0x0($a1)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x393F\n\tjal func_8015236C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3941\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3956\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3958\n\tjal func_80152DE4\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3939\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8015240C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xE3\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3956\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x395A\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3958\n\tjal func_80152DE4\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x395A\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2055\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x395B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2056\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x81\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015CD98, .-func_8015CD98\n"
);

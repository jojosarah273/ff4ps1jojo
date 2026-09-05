#include "common.h"
__asm__(
  ".globl func_80110664\n"
  ".type func_80110664, @function\n"
  "func_80110664:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110024\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xCA\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x180\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L80110694:\n\tjal func_800FE778\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801106D8\n\taddiu $a0, $zero, 0x2100\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\t.L801106D8:\n\tjal func_800FE870\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x58\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD5\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xAD1\n\tjal func_80115D2C\n\tnop\n\tjal func_80110474\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80110758\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x23\n\tjal func_800FD804\n\tnop\n\t.L80110758:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80110694\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110664, .-func_80110664\n"
);

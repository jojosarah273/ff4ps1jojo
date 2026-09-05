#include "common.h"
__asm__(
  ".globl func_80163774\n"
  ".type func_80163774, @function\n"
  "func_80163774:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x11\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F5410\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2017\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x10\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x63\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L801637DC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x63\n\t.L801637DC:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2017\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x12\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tjal func_8015329C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80163774, .-func_80163774\n"
);

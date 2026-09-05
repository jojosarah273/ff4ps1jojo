#include "common.h"
__asm__(
  ".globl func_80162490\n"
  ".type func_80162490, @function\n"
  "func_80162490:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x390A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x397B\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD6\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_8015A374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_80153374\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2005\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2005\n\tori $v0, $v0, 0x8\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2051\n\tjal func_8015329C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x39\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34CA\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80162490, .-func_80162490\n"
);

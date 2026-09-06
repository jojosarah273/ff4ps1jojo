#include "common.h"
__asm__(
  ".globl func_8010A204\n"
  ".type func_8010A204, @function\n"
  "func_8010A204:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xEA\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010A29C\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xEA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2840\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x10\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x610\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\t.L8010A29C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010A204, .-func_8010A204\n"
);

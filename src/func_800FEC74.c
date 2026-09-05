#include "common.h"
__asm__(
  ".globl func_800FEC74\n"
  ".type func_800FEC74, @function\n"
  "func_800FEC74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD9\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212D\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tjal func_800F5448\n\tnop\n\t.L800FECD4:\n\tjal func_800FE778\n\tnop\n\t.L800FECDC:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FECDC\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FECD4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FEC74, .-func_800FEC74\n"
);

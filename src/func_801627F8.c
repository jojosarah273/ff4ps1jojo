#include "common.h"
__asm__(
  ".globl func_801627F8\n"
  ".type func_801627F8, @function\n"
  "func_801627F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2006\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x2006\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3534\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xA9\n\t.L80162830:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3303\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80162868\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3303\n\tj .L80162880\n\tnop\n\t.L80162868:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3302\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3302\n\t.L80162880:\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80162830\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_80150C38\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801627F8, .-func_801627F8\n"
);

#include "common.h"
__asm__(
  ".globl func_800FC110\n"
  ".type func_800FC110, @function\n"
  "func_800FC110:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3F\n\tjal func_800FD804\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\t.L800FC140:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F9690\n\tnop\n\tlui $a0, (0x14FB5E >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FB5E & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800FE5D4\n\tnop\n\tjal func_800FE6E4\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x28\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FC140\n\tnop\n\tlui $at, %hi(D_8019EE28)\n\tsw $zero, %lo(D_8019EE28)($at)\n\tjal func_800FC2AC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FC110, .-func_800FC110\n"
);

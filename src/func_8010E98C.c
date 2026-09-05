#include "common.h"
__asm__(
  ".globl func_8010E98C\n"
  ".type func_8010E98C, @function\n"
  "func_8010E98C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8010E0D0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800FE870\n\tnop\n\t.L8010E9B4:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xAD\n\tjal func_800FE5D4\n\tnop\n\tjal func_800FE6E4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tjal func_800F61E8\n\tsb $v0, 0x0($v1)\n\tjal func_8017559C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x78\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010E9B4\n\tnop\n\t.L8010EA2C:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800FE6E4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010EA74\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8010EA2C\n\tnop\n\t.L8010EA74:\n\tjal func_8010E128\n\tnop\n\t.L8010EA7C:\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xAD\n\tjal func_800FE5D4\n\tnop\n\tjal func_800FE6E4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 3\n\tjal func_8017559C\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010EA7C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010E98C, .-func_8010E98C\n"
);

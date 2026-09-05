#include "common.h"
__asm__(
  ".globl func_8010E158\n"
  ".type func_8010E158, @function\n"
  "func_8010E158:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7B\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x64\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L8010E180:\n\tjal func_800FE778\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8010E1E0\n\taddiu $a0, $zero, 0xB7\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 2\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x10\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\t.L8010E1E0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD5\n\tjal func_800FE870\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD5\n\tjal func_8010543C\n\tnop\n\tjal func_80102770\n\tnop\n\tjal func_80172BA8\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010E180\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010E158, .-func_8010E158\n"
);

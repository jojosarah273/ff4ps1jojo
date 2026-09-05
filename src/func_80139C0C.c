#include "common.h"
__asm__(
  ".globl func_80139C0C\n"
  ".type func_80139C0C, @function\n"
  "func_80139C0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x57\n\tjal func_8012D204\n\tnop\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80139C8C\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xE5\n\tjal func_80134AF8\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80139C8C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x57\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1B4B\n\t.L80139C8C:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139C0C, .-func_80139C0C\n"
);

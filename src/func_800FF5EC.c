#include "common.h"
__asm__(
  ".globl func_800FF5EC\n"
  ".type func_800FF5EC, @function\n"
  "func_800FF5EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x79\n\t.L800FF614:\n\tjal func_800FE7D8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x79\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L800FF65C\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\t.L800FF65C:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F9690\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF6A4\n\tlui $a0, (0x14FA86 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FA86 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB7\n\tj .L800FF6B4\n\tnop\n\t.L800FF6A4:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FA86 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB8\n\t.L800FF6B4:\n\tjal func_800FE870\n\tnop\n\tjal func_80172BA8\n\tnop\n\tjal func_80173008\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x30\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FF614\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FF5EC, .-func_800FF5EC\n"
);

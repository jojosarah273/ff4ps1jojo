#include "common.h"
__asm__(
  ".globl func_8014D5A0\n"
  ".type func_8014D5A0, @function\n"
  "func_8014D5A0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x31\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8014D5E0\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x33\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014D5F0\n\tnop\n\t.L8014D5E0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tj .L8014D620\n\tnop\n\t.L8014D5F0:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF485\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8014D618\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xC0\n\tj .L8014D620\n\tnop\n\t.L8014D618:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x40\n\t.L8014D620:\n\tjal func_800F8188\n\tori $a0, $zero, 0xF414\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8188\n\tori $a0, $zero, 0xF413\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF415\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\tori $a0, $zero, 0xF412\n\tjal func_80177DAC\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D5A0, .-func_8014D5A0\n"
);

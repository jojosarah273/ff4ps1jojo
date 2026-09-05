#include "common.h"
__asm__(
  ".globl func_800FFCAC\n"
  ".type func_800FFCAC, @function\n"
  "func_800FFCAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xC1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FFDD4\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L800FFCE4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FFDB4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1003\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L800FFDB4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1004\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x40\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFDB4\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xC1\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1007\n\tjal func_800F64EC\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FFDA4\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F80D0\n\taddiu $a0, $zero, 0x32\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1007\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L800FFD94\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L800FFDA4\n\tnop\n\t.L800FFD94:\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1007\n\t.L800FFDA4:\n\tjal func_800F6558\n\taddu $a0, $zero, $zero\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L800FFDB4:\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FFCE4\n\tnop\n\t.L800FFDD4:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xC1\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L800FFDFC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7B\n\tjal func_800FD804\n\tnop\n\t.L800FFDFC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FFCAC, .-func_800FFCAC\n"
);

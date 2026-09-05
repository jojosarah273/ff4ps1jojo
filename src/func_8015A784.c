#include "common.h"
__asm__(
  ".globl func_8015A784\n"
  ".type func_8015A784, @function\n"
  "func_8015A784:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3558\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8015A7B4\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x202F\n\tj .L8015A7BC\n\tnop\n\t.L8015A7B4:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2018\n\t.L8015A7BC:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F5480\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8058\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8015A844\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xA9\n\t.L8015A844:\n\tjal func_8015ABEC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3945\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x3947\n\tjal func_8015254C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3949\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xAB\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A784, .-func_8015A784\n"
);

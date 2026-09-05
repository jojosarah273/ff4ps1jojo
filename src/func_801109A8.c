#include "common.h"
__asm__(
  ".globl func_801109A8\n"
  ".type func_801109A8, @function\n"
  "func_801109A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6C8\n\tjal func_80110F2C\n\tnop\n\t.L801109C8:\n\tjal func_80110FA4\n\tnop\n\tjal func_80110B08\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801109C8\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x24\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x32\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801109C8\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x24\n\t.L80110A28:\n\tjal func_80110FA4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x48\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80110A68\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xDC\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB9\n\t.L80110A68:\n\tjal func_80173780\n\tnop\n\tjal func_80110BC8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x24\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80110AA0\n\tnop\n\tjal func_80110B08\n\tnop\n\t.L80110AA0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80110A28\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x24\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x64\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80110A28\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xC8\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801109A8, .-func_801109A8\n"
);

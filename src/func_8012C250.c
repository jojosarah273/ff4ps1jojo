#include "common.h"
__asm__(
  ".globl func_8012C250\n"
  ".type func_8012C250, @function\n"
  "func_8012C250:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x1B3C\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B3B\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1440\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x1441\n\tjal func_800F6048\n\taddu $a0, $v0, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE8\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8012C2D8\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B22\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012C2D8\n\tnop\n\tjal func_8012B168\n\tnop\n\tjal func_8011F684\n\tnop\n\t.L8012C2D8:\n\tjal func_8012219C\n\tnop\n\tjal func_8011FF40\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C250, .-func_8012C250\n"
);

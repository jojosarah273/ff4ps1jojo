#include "common.h"
__asm__(
  ".globl func_80158190\n"
  ".type func_80158190, @function\n"
  "func_80158190:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38F6\n\tjal func_80152CDC\n\tnop\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x38F6\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38F6\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xD\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801581E0\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x38F6\n\t.L801581E0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD3\n\tjal func_800F5140\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xD3\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_8015310C\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3598\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2A06\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80158288\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80158278\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tj .L801582B8\n\tnop\n\t.L80158278:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tj .L801582B8\n\tnop\n\t.L80158288:\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x8\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801582B0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tj .L801582B8\n\tnop\n\t.L801582B0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\t.L801582B8:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x352E\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xD1\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80158190, .-func_80158190\n"
);

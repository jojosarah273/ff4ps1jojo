#include "common.h"
__asm__(
  ".globl func_80110818\n"
  ".type func_80110818, @function\n"
  "func_80110818:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80110F2C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x6C8\n\t.L80110838:\n\tjal func_80110FA4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x24\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB9\n\tjal func_80173780\n\tnop\n\tjal func_80110BC8\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x24\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80110940\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x68\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x300\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x78\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x304\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x301\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x305\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2\n\tsrl $v0, $v0, 2\n\tjal func_800F4248\n\tsb $v0, 0x0($v1)\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xE4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x302\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x306\n\txori $v0, $v0, 0x2\n\tjal func_800F8188\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x37\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x303\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x307\n\t.L80110940:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80110838\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x24\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x24\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x48\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80110838\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xC8\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80110818, .-func_80110818\n"
);

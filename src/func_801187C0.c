#include "common.h"
__asm__(
  ".globl func_801187C0\n"
  ".type func_801187C0, @function\n"
  "func_801187C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xE0\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F93DC\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F5140\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x83\n\tjal func_800F93DC\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x10\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80118848\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\t.L80118848:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x81\n\t.L80118860:\n\tjal func_800FE7D8\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x2130\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x212D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x83\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2131\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x83\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xE0\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tjal func_8017EA90\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x82\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80118860\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x81\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x83\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80118860\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x81\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801187C0, .-func_801187C0\n"
);

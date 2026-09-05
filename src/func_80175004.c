#include "common.h"
__asm__(
  ".globl func_80175004\n"
  ".type func_80175004, @function\n"
  "func_80175004:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L801750CC\n\tnop\n\tjal func_800F5574\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80175054\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1E\n\tj .L8017505C\n\tnop\n\t.L80175054:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x7E\n\t.L8017505C:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1288\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801750BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F5140\n\tnop\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xCDB\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xCDC\n\tnor $v0, $zero, $v0\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tj .L801750CC\n\tnop\n\t.L801750BC:\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0xCDB\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0xCDC\n\t.L801750CC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175004, .-func_80175004\n"
);

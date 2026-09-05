#include "common.h"
__asm__(
  ".globl func_801621D0\n"
  ".type func_801621D0, @function\n"
  "func_801621D0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCE\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x357A\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x2006\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2006\n\tori $v0, $v0, 0x2\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_80152CDC\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x3534\n\t.L80162238:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3303\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x13\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80162280\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F6364\n\tnop\n\tj .L80162238\n\tnop\n\t.L80162280:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3303\n\tjal func_800F971C\n\tnop\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x3302\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xCD\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x9\n\tjal func_80150C38\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x34C7\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801621D0, .-func_801621D0\n"
);

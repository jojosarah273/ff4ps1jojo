#include "common.h"
__asm__(
  ".globl func_801009E8\n"
  ".type func_801009E8, @function\n"
  "func_801009E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80100A98\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\t.L80100A00:\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80100A28\n\tnop\n\tjal func_800F5140\n\tnop\n\tj .L80100A00\n\tnop\n\t.L80100A28:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x12A0\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80100A80\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x12A0\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x12A0\n\t.L80100A80:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801009E8, .-func_801009E8\n"
);

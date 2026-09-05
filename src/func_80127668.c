#include "common.h"
__asm__(
  ".globl func_80127668\n"
  ".type func_80127668, @function\n"
  "func_80127668:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L80127700\n\taddiu $a0, $zero, 0x46\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x45\n\tjal func_800F926C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x45\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x7FF\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x7000\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_80135B54\n\tnop\n\tjal func_800F9448\n\tnop\n\tj .L80127708\n\tnop\n\t.L80127700:\n\tjal func_80127718\n\tnop\n\t.L80127708:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80127668, .-func_80127668\n"
);

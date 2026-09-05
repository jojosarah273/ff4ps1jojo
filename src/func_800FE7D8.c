#include "common.h"
__asm__(
  ".globl func_800FE7D8\n"
  ".type func_800FE7D8, @function\n"
  "func_800FE7D8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FE7B0\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FE818\n\tnop\n\tjal func_800FE110\n\tnop\n\tjal func_800FDBBC\n\tnop\n\tj .L800FE848\n\tnop\n\t.L800FE818:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FE848\n\tnop\n\tjal func_800FDD8C\n\tnop\n\tjal func_800FDF34\n\tnop\n\tjal func_80175494\n\tnop\n\t.L800FE848:\n\tjal func_801769B4\n\tnop\n\tjal func_80174F64\n\tnop\n\tjal func_80175004\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE7D8, .-func_800FE7D8\n"
);

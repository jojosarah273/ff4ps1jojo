#include "common.h"
__asm__(
  ".globl func_80123CB4\n"
  ".type func_80123CB4, @function\n"
  "func_80123CB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16B7\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80123D24\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xEB\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x41\n\tjal func_800F971C\n\tnop\n\t.L80123CF4:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1B00\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80123CF4\n\tnop\n\tjal func_80126D48\n\tnop\n\t.L80123D24:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80123CB4, .-func_80123CB4\n"
);

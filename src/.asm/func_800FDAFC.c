#include "common.h"
__asm__(
  ".globl func_800FDAFC\n"
  ".type func_800FDAFC, @function\n"
  "func_800FDAFC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FDB2C\n\tnop\n\tjal func_800FE110\n\tnop\n\tj .L800FDB4C\n\tnop\n\t.L800FDB2C:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FDB4C\n\tnop\n\tjal func_800FDD8C\n\tnop\n\t.L800FDB4C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FDAFC, .-func_800FDAFC\n"
);

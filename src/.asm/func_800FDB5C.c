#include "common.h"
__asm__(
  ".globl func_800FDB5C\n"
  ".type func_800FDB5C, @function\n"
  "func_800FDB5C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FDB8C\n\tnop\n\tjal func_800FDBBC\n\tnop\n\tj .L800FDBAC\n\tnop\n\t.L800FDB8C:\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FDBAC\n\tnop\n\tjal func_800FDF34\n\tnop\n\t.L800FDBAC:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FDB5C, .-func_800FDB5C\n"
);

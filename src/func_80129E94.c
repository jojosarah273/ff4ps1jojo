#include "common.h"
__asm__(
  ".globl func_80129E94\n"
  ".type func_80129E94, @function\n"
  "func_80129E94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B06\n\tjal func_800F61E8\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B06\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80129ED4\n\tnop\n\tjal func_800F971C\n\tnop\n\t.L80129ED4:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B06\n\tjal func_80129808\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129E94, .-func_80129E94\n"
);

#include "common.h"
__asm__(
  ".globl func_80103F00\n"
  ".type func_80103F00, @function\n"
  "func_80103F00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80103F30\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\t.L80103F30:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103F00, .-func_80103F00\n"
);

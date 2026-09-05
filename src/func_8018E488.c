#include "common.h"
__asm__(
  ".globl func_8018E488\n"
  ".type func_8018E488, @function\n"
  "func_8018E488:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddu $a1, $a0, $zero\n\tjal func_80192B28\n\taddiu $a0, $zero, 0x9\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018E488, .-func_8018E488\n"
);

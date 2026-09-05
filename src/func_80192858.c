#include "common.h"
__asm__(
  ".globl func_80192858\n"
  ".type func_80192858, @function\n"
  "func_80192858:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddu $a1, $a0, $zero\n\tjal func_80192B58\n\taddiu $a0, $zero, 0x3\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192858, .-func_80192858\n"
);

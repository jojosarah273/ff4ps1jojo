#include "common.h"
__asm__(
  ".globl func_801960EC\n"
  ".type func_801960EC, @function\n"
  "func_801960EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddu $a3, $a2, $zero\n\tjal func_80196110\n\taddu $a2, $zero, $zero\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801960EC, .-func_801960EC\n"
);

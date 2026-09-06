#include "common.h"
__asm__(
  ".globl func_80168B94\n"
  ".type func_80168B94, @function\n"
  "func_80168B94:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x2131\n\tjal func_800F8188\n\tori $a0, $zero, 0xF43D\n\tjal func_800F8188\n\tori $a0, $zero, 0xF43F\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80168B94, .-func_80168B94\n"
);

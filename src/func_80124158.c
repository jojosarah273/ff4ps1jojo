#include "common.h"
__asm__(
  ".globl func_80124158\n"
  ".type func_80124158, @function\n"
  "func_80124158:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0xD600\n\tjal func_801240F8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124158, .-func_80124158\n"
);

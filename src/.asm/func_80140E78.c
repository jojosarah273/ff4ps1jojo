#include "common.h"
__asm__(
  ".globl func_80140E78\n"
  ".type func_80140E78, @function\n"
  "func_80140E78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF44C\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF41A\n\tjal func_80140EA8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140E78, .-func_80140E78\n"
);

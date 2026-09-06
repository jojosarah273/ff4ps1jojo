#include "common.h"
__asm__(
  ".globl func_801675A4\n"
  ".type func_801675A4, @function\n"
  "func_801675A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x24\n\tjal func_8014D528\n\tnop\n\tjal func_8014096C\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_80140944\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_801409E4\n\tnop\n\tjal func_80167604\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF87\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801675A4, .-func_801675A4\n"
);

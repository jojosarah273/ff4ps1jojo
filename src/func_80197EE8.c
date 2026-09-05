#include "common.h"
__asm__(
  ".globl func_80197EE8\n"
  ".type func_80197EE8, @function\n"
  "func_80197EE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tbltz $a0, .L80197F04\n\tsw $ra, 0x10($sp)\n\tjal func_80197F24\n\tandi $a0, $a0, 0xFFF\n\tj .L80197F14\n\tnop\n\t.L80197F04:\n\tnegu $a0, $a0\n\tjal func_80197F24\n\tandi $a0, $a0, 0xFFF\n\tnegu $v0, $v0\n\t.L80197F14:\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197EE8, .-func_80197EE8\n"
);

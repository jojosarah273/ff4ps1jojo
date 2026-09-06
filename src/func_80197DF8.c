#include "common.h"
__asm__(
  ".globl func_80197DF8\n"
  ".type func_80197DF8, @function\n"
  "func_80197DF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80197D6C\n\tnop\n\tjal func_80197E68\n\tnop\n\tjal func_80197E30\n\tnop\n\tjal func_80197A78\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197DF8, .-func_80197DF8\n"
);

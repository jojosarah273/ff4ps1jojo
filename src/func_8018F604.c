#include "common.h"
__asm__(
  ".globl func_8018F604\n"
  ".type func_8018F604, @function\n"
  "func_8018F604:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $a0, (0xF0000003 >> 16)\n\tori $a0, $a0, (0xF0000003 & 0xFFFF)\n\tjal func_80197648\n\taddiu $a1, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F604, .-func_8018F604\n"
);

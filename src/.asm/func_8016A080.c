#include "common.h"
__asm__(
  ".globl func_8016A080\n"
  ".type func_8016A080, @function\n"
  "func_8016A080:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x32\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\tori $a0, $zero, 0xD300\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_8016A0C8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016A080, .-func_8016A080\n"
);

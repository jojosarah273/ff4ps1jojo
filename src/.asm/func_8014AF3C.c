#include "common.h"
__asm__(
  ".globl func_8014AF3C\n"
  ".type func_8014AF3C, @function\n"
  "func_8014AF3C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF431\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x49\n\tjal func_800F7210\n\tori $a0, $zero, 0xF42F\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x34C4\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AF3C, .-func_8014AF3C\n"
);

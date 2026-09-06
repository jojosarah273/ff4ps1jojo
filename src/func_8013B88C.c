#include "common.h"
__asm__(
  ".globl func_8013B88C\n"
  ".type func_8013B88C, @function\n"
  "func_8013B88C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\tori $a0, $zero, 0xB81F\n\tjal func_8013B92C\n\tnop\n\tjal func_800F7500\n\tori $a0, $zero, 0xB89F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x6\n\tjal func_8013B8D4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013B88C, .-func_8013B88C\n"
);

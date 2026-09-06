#include "common.h"
__asm__(
  ".globl func_8012A868\n"
  ".type func_8012A868, @function\n"
  "func_8012A868:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFF28\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8012A8A8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012A868, .-func_8012A868\n"
);

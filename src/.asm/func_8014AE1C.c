#include "common.h"
__asm__(
  ".globl func_8014AE1C\n"
  ".type func_8014AE1C, @function\n"
  "func_8014AE1C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x34C5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014AE5C\n\tnop\n\tjal func_8014ADD4\n\tnop\n\tjal func_8014C994\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF42E\n\tj .L8014AEB4\n\tnop\n\t.L8014AE5C:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x3522\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014AEB4\n\tnop\n\tjal func_8014B9B4\n\tnop\n\tjal func_8014AEC4\n\tnop\n\tjal func_8014ADD4\n\tnop\n\tjal func_8014C96C\n\tnop\n\tjal func_800F6240\n\tori $a0, $zero, 0xF2A0\n\tjal func_8014AF3C\n\tnop\n\tjal func_8014BA34\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF42E\n\t.L8014AEB4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AE1C, .-func_8014AE1C\n"
);

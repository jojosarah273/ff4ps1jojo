#include "common.h"
__asm__(
  ".globl func_8012B100\n"
  ".type func_8012B100, @function\n"
  "func_8012B100:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4\n\t.L8012B110:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012B110\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012B100, .-func_8012B100\n"
);

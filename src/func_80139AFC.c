#include "common.h"
__asm__(
  ".globl func_80139AFC\n"
  ".type func_80139AFC, @function\n"
  "func_80139AFC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFC7D\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x480\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0x1E7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139AFC, .-func_80139AFC\n"
);

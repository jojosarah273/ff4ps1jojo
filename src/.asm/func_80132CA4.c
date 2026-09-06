#include "common.h"
__asm__(
  ".globl func_80132CA4\n"
  ".type func_80132CA4, @function\n"
  "func_80132CA4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0xF\n\tjal func_800F71DC\n\tori $a0, $zero, 0x8130\n\tjal func_800F7500\n\tori $a0, $zero, 0xA120\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7500\n\tori $a0, $zero, 0xF380\n\tjal func_801330F8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132CA4, .-func_80132CA4\n"
);

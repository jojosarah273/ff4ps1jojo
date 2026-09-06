#include "common.h"
__asm__(
  ".globl func_80176E98\n"
  ".type func_80176E98, @function\n"
  "func_80176E98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\tori $a0, $zero, 0x87D0\n\tjal func_800F7500\n\tori $a0, $zero, 0xA000\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x87D0\n\tjal func_800F7500\n\tori $a0, $zero, 0xA040\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x87D0\n\tjal func_800F7500\n\tori $a0, $zero, 0xA080\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x87D0\n\tjal func_800F7500\n\tori $a0, $zero, 0xA0C0\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x87D0\n\tjal func_800F7500\n\tori $a0, $zero, 0xA060\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x7\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xD7E\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80176E98, .-func_80176E98\n"
);

#include "common.h"
__asm__(
  ".globl func_8013B7C0\n"
  ".type func_8013B7C0, @function\n"
  "func_8013B7C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BC7\n\tjal func_801224D0\n\tnop\n\tlui $a0, (0x14FF9D >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FF9D & 0xFFFF)\n\tjal func_801224D0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x16B9\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013B7C0, .-func_8013B7C0\n"
);

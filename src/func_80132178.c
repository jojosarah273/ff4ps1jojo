#include "common.h"
__asm__(
  ".globl func_80132178\n"
  ".type func_80132178, @function\n"
  "func_80132178:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tlui $a0, (0x14FF9D >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FF9D & 0xFFFF)\n\tjal func_80124EAC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132178, .-func_80132178\n"
);

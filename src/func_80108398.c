#include "common.h"
__asm__(
  ".globl func_80108398\n"
  ".type func_80108398, @function\n"
  "func_80108398:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80108400\n\tnop\n\tlui $a0, (0x13A500 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x13A500 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x13A501 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x13A501 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x772\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDD\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80108398, .-func_80108398\n"
);

#include "common.h"
__asm__(
  ".globl func_80108330\n"
  ".type func_80108330, @function\n"
  "func_80108330:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80108400\n\tnop\n\tlui $a0, (0x108200 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x108200 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x108201 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x108201 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x772\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDD\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80108330, .-func_80108330\n"
);

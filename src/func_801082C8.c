#include "common.h"
__asm__(
  ".globl func_801082C8\n"
  ".type func_801082C8, @function\n"
  "func_801082C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80108400\n\tnop\n\tlui $a0, (0x108000 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x108000 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tlui $a0, (0x108001 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x108001 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x772\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDD\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801082C8, .-func_801082C8\n"
);

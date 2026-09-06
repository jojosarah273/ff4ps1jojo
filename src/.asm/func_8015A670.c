#include "common.h"
__asm__(
  ".globl func_8015A670\n"
  ".type func_8015A670, @function\n"
  "func_8015A670:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x397B\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8015240C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xE3\n\tlui $a0, (0xF97A0 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xF97A0 & 0xFFFF)\n\tjal func_8015A6CC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A670, .-func_8015A670\n"
);

#include "common.h"
__asm__(
  ".globl func_801702DC\n"
  ".type func_801702DC, @function\n"
  "func_801702DC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tlui $a0, (0x14FE79 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FE79 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9410\n\tnop\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1A05\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801702DC, .-func_801702DC\n"
);

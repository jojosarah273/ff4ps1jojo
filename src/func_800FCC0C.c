#include "common.h"
__asm__(
  ".globl func_800FCC0C\n"
  ".type func_800FCC0C, @function\n"
  "func_800FCC0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F7CC8\n\taddu $a0, $v0, $zero\n\tjal func_800F7D0C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x8\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FCC0C, .-func_800FCC0C\n"
);

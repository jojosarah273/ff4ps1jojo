#include "common.h"
__asm__(
  ".globl func_8016C624\n"
  ".type func_8016C624, @function\n"
  "func_8016C624:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2\n\tjal func_8016C734\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x78\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6C\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7C\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x4B\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6E\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x4D\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tjal func_80176F60\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016C624, .-func_8016C624\n"
);

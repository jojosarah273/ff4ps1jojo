#include "common.h"
__asm__(
  ".globl func_80108400\n"
  ".type func_80108400, @function\n"
  "func_80108400:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xB2\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80108400, .-func_80108400\n"
);

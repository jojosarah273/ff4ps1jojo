#include "common.h"
__asm__(
  ".globl func_80167DD4\n"
  ".type func_80167DD4, @function\n"
  "func_80167DD4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80167B48\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5410\n\tnop\n\tjal func_800F8768\n\tori $a0, $zero, 0xF398\n\tjal func_800F6364\n\tnop\n\tjal func_80167B48\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8768\n\tori $a0, $zero, 0xF398\n\tjal func_800F6364\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80167DD4, .-func_80167DD4\n"
);

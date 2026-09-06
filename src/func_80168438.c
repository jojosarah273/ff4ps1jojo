#include "common.h"
__asm__(
  ".globl func_80168438\n"
  ".type func_80168438, @function\n"
  "func_80168438:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1000\n\taddiu $v1, $zero, 0x2\n\taddiu $a0, $zero, 0x5A\n\tsb $v1, 0xE00($v0)\n\taddiu $v1, $zero, 0x80\n\tsb $a0, 0xE01($v0)\n\tjal func_80169128\n\tsb $v1, 0xE02($v0)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80168438, .-func_80168438\n"
);

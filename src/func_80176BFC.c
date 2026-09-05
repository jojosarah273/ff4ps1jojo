#include "common.h"
__asm__(
  ".globl func_80176BFC\n"
  ".type func_80176BFC, @function\n"
  "func_80176BFC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE2\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x11\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80176C5C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BB2\n\tjal func_800F5CCC\n\tnop\n\tjal func_80176C6C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BB2\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x8\n\tjal func_80176C6C\n\tnop\n\t.L80176C5C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80176BFC, .-func_80176BFC\n"
);

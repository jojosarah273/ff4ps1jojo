#include "common.h"
__asm__(
  ".globl func_80139694\n"
  ".type func_80139694, @function\n"
  "func_80139694:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BB2\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1BB0\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1BB1\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139694, .-func_80139694\n"
);

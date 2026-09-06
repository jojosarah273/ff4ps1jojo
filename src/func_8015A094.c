#include "common.h"
__asm__(
  ".globl func_8015A094\n"
  ".type func_8015A094, @function\n"
  "func_8015A094:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x12\n\tjal func_800F7864\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x9\n\tjal func_800F5140\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAA\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F78E0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A094, .-func_8015A094\n"
);

#include "common.h"
__asm__(
  ".globl func_800F9C98\n"
  ".type func_800F9C98, @function\n"
  "func_800F9C98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $v1, $zero, 0x2100\n\tlui $a0, %hi(D_800D0000)\n\taddu $v0, $v1, $a0\n\t.L800F9CA4:\n\tsb $zero, %lo(D_800D0000)($v0)\n\taddiu $v1, $v1, 0x1\n\tandi $v1, $v1, 0xFFFF\n\tsltiu $v0, $v1, 0x2200\n\tbnez $v0, .L800F9CA4\n\taddu $v0, $v1, $a0\n\taddiu $v1, $zero, 0x4200\n\tlui $a0, %hi(D_800D0000)\n\taddu $v0, $v1, $a0\n\t.L800F9CC8:\n\tsb $zero, %lo(D_800D0000)($v0)\n\taddiu $v1, $v1, 0x1\n\tandi $v1, $v1, 0xFFFF\n\tsltiu $v0, $v1, 0x4400\n\tbnez $v0, .L800F9CC8\n\taddu $v0, $v1, $a0\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9C98, .-func_800F9C98\n"
);

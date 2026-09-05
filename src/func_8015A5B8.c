#include "common.h"
__asm__(
  ".globl func_8015A5B8\n"
  ".type func_8015A5B8, @function\n"
  "func_8015A5B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddiu $a0, $zero, 0x3558\n\taddu $s0, $v0, $zero\n\tsb $zero, 0xA9($s0)\n\tjal func_800F3B04\n\tsb $zero, 0xAA($s0)\n\tlbu $v1, 0x0($v0)\n\tnop\n\tbeqz $v1, .L8015A5F4\n\taddiu $v0, $zero, 0x1\n\tsb $v0, 0xA9($s0)\n\t.L8015A5F4:\n\tjal func_8015ABEC\n\tnop\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A5B8, .-func_8015A5B8\n"
);

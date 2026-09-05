#include "common.h"
__asm__(
  ".globl func_800FE6E4\n"
  ".type func_800FE6E4, @function\n"
  "func_800FE6E4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tlbu $a1, 0x6E($v0)\n\tlui $at, %hi(D_8019EE28)\n\tsw $a1, %lo(D_8019EE28)($at)\n\tlbu $v1, 0x6F($v0)\n\tnop\n\tsll $v1, $v1, 8\n\tor $a1, $a1, $v1\n\tlui $at, %hi(D_8019EE28)\n\tsw $a1, %lo(D_8019EE28)($at)\n\tlui $at, %hi(D_8019EE5C)\n\tsw $a1, %lo(D_8019EE5C)($at)\n\tlbu $a0, 0x70($v0)\n\tnop\n\tsll $a0, $a0, 16\n\tor $a0, $a1, $a0\n\tlui $at, %hi(D_8019EE5C)\n\tsw $a0, %lo(D_8019EE5C)($at)\n\tlbu $v1, 0x71($v0)\n\taddiu $v0, $zero, 0xF7\n\tsll $v1, $v1, 24\n\tor $a0, $a0, $v1\n\tlui $at, %hi(D_8019EE5C)\n\tsw $a0, %lo(D_8019EE5C)($at)\n\tbne $a1, $v0, .L800FE768\n\taddiu $v0, $zero, 0x100\n\tlui $at, %hi(D_8019EE28)\n\tsw $v0, %lo(D_8019EE28)($at)\n\tlui $at, %hi(D_8019EE5C)\n\tsw $v0, %lo(D_8019EE5C)($at)\n\t.L800FE768:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE6E4, .-func_800FE6E4\n"
);

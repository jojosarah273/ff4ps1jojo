#include "common.h"
__asm__(
  ".globl func_801957B4\n"
  ".type func_801957B4, @function\n"
  "func_801957B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbnez $a0, .L801957C4\n\taddiu $sp, $sp, -0x10\n\tj .L8019582C\n\taddu $v0, $0, $0\n\t.L801957C4:\n\tlbu $a1, 0x0($a0)\n\tnop\n\tsrl $a1, $a1, 3\n\tsw $a1, 0x0($sp)\n\tlh $a2, 0x4($a0)\n\tnop\n\tnegu $a2, $a2\n\tandi $a2, $a2, 0xFF\n\tsra $a2, $a2, 3\n\tsw $a2, 0x8($sp)\n\tlbu $v0, 0x2($a0)\n\tsll $a1, $a1, 10\n\tsrl $v0, $v0, 3\n\tsw $v0, 0x4($sp)\n\tsll $v0, $v0, 15\n\tlh $v1, 0x6($a0)\n\tlui $a0, (0xE2000000 >> 16)\n\tor $a1, $a1, $a0\n\tor $v0, $v0, $a1\n\tnegu $v1, $v1\n\tandi $v1, $v1, 0xFF\n\tsra $v1, $v1, 3\n\tsll $a0, $v1, 5\n\tor $v0, $v0, $a0\n\tor $v0, $v0, $a2\n\tsw $v1, 0xC($sp)\n\t.L8019582C:\n\tjr $ra\n\taddiu $sp, $sp, 0x10\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801957B4, .-func_801957B4\n"
);

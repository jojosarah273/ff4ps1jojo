#include "common.h"
__asm__(
  ".globl func_801773FC\n"
  ".type func_801773FC, @function\n"
  "func_801773FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tbgez $a0, .L80177408\n\taddu $v0, $a0, $0\n\taddiu $v0, $a0, 0x3\n\t.L80177408:\n\tsra $a0, $v0, 2\n\tlui $t0, (0x800D4524 >> 16)\n\tori $t0, $t0, (0x800D4524 & 0xFFFF)\n\taddiu $t1, $0, 0xF\n\t.L80177418:\n\tlbu $v0, 0x0($t0)\n\tlbu $a1, -0x1($t0)\n\tsll $v0, $v0, 8\n\tor $a1, $a1, $v0\n\tandi $a2, $a1, 0x1F\n\tmult $a2, $a0\n\tsrl $v0, $a1, 5\n\tandi $a3, $v0, 0x1F\n\tsrl $v1, $a1, 10\n\tmflo $a2\n\tbgez $a2, .L8017744C\n\tandi $v1, $v1, 0x1F\n\taddiu $a2, $a2, 0x1F\n\t.L8017744C:\n\tmult $a3, $a0\n\tmflo $a1\n\tbgez $a1, .L80177460\n\tsra $a2, $a2, 5\n\taddiu $a1, $a1, 0x1F\n\t.L80177460:\n\tmult $v1, $a0\n\tmflo $v0\n\tbgez $v0, .L80177474\n\tsra $a3, $a1, 5\n\taddiu $v0, $v0, 0x1F\n\t.L80177474:\n\tsra $v1, $v0, 5\n\tandi $a1, $a2, 0xFFFF\n\tsll $v0, $a3, 5\n\tor $v0, $a1, $v0\n\tandi $a1, $v0, 0xFFFF\n\tsll $v1, $v1, 10\n\tor $v1, $a1, $v1\n\tandi $a1, $v1, 0xFFFF\n\tsrl $v0, $a1, 8\n\tsb $a1, -0x1($t0)\n\tsb $v0, 0x0($t0)\n\taddiu $t1, $t1, -0x1\n\tbgez $t1, .L80177418\n\taddiu $t0, $t0, 0x2\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801773FC, .-func_801773FC\n"
);

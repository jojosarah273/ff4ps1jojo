#include "common.h"
__asm__(
  ".globl func_801973B8\n"
  ".type func_801973B8, @function\n"
  "func_801973B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $t0, $a0, $0\n\tlui $v1, (0xE1000200 >> 16)\n\tlw $t1, 0x10($sp)\n\taddiu $v0, $0, 0x2\n\tbeqz $a2, .L801973D4\n\tsb $v0, 0x3($t0)\n\tori $v1, $v1, (0xE1000200 & 0xFFFF)\n\t.L801973D4:\n\tbeqz $a1, .L801973E0\n\tandi $v0, $a3, 0x9FF\n\tori $v0, $v0, 0x400\n\t.L801973E0:\n\tor $v0, $v1, $v0\n\tbeqz $t1, .L80197440\n\tsw $v0, 0x4($t0)\n\tlui $v1, (0xE2000000 >> 16)\n\tlbu $a0, 0x2($t1)\n\tlbu $v0, 0x0($t1)\n\tsrl $a0, $a0, 3\n\tsll $a0, $a0, 15\n\tsrl $v0, $v0, 3\n\tsll $v0, $v0, 10\n\tor $v0, $v0, $v1\n\tor $a0, $a0, $v0\n\tlh $v1, 0x6($t1)\n\tlh $v0, 0x4($t1)\n\tnegu $v1, $v1\n\tsll $v1, $v1, 2\n\tandi $v1, $v1, 0x3E0\n\tor $a0, $a0, $v1\n\tnegu $v0, $v0\n\tandi $v0, $v0, 0xFF\n\tsra $v0, $v0, 3\n\tor $a0, $a0, $v0\n\tj .L80197444\n\tsw $a0, 0x8($t0)\n\t.L80197440:\n\tsw $0, 0x8($t0)\n\t.L80197444:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801973B8, .-func_801973B8\n"
);

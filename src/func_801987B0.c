#include "common.h"
__asm__(
  ".globl func_801987B0\n"
  ".type func_801987B0, @function\n"
  "func_801987B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a2, $a0, $0\n\tbeq $a2, $a1, .L801987D8\n\tlui $v1, (0x7FFFFFFF >> 16)\n\tori $v1, $v1, (0x7FFFFFFF & 0xFFFF)\n\tand $v0, $a2, $v1\n\tbnez $v0, .L801987E0\n\tlui $v0, (0x80000000 >> 16)\n\tand $v0, $a1, $v1\n\tbnez $v0, .L801987E0\n\tlui $v0, (0x80000000 >> 16)\n\t.L801987D8:\n\tj .L8019884C\n\taddu $v0, $0, $0\n\t.L801987E0:\n\tand $a3, $a2, $v0\n\tand $v0, $a1, $v0\n\tbne $a3, $v0, .L8019884C\n\tsltiu $v0, $a3, 0x1\n\tsra $v0, $a2, 23\n\tandi $a0, $v0, 0xFF\n\tsra $v0, $a1, 23\n\tandi $v1, $v0, 0xFF\n\tslt $v0, $a0, $v1\n\tbnez $v0, .L8019884C\n\tsltu $v0,$0,$a3\n\tbne $a0, $v1, .L80198844\n\tlui $v0, (0x80000000 >> 16)\n\tlui $v0, (0x7FFFFF >> 16)\n\tori $v0, $v0, (0x7FFFFF & 0xFFFF)\n\tand $v1, $a2, $v0\n\tlui $a0, (0x800000 >> 16)\n\tor $v1, $v1, $a0\n\tand $v0, $a1, $v0\n\tor $v0, $v0, $a0\n\tslt $v0, $v0, $v1\n\tbnez $v0, .L80198844\n\tlui $v0, (0x80000000 >> 16)\n\tj .L8019884C\n\tsltu $v0,$0,$a3\n\t.L80198844:\n\tand $v0, $a2, $v0\n\tsltiu $v0, $v0, 0x1\n\t.L8019884C:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801987B0, .-func_801987B0\n"
);

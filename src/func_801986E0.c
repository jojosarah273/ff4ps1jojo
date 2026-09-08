#include "common.h"
__asm__(
  ".globl func_801986E0\n"
  ".type func_801986E0, @function\n"
  "func_801986E0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a2, $0, $0\n\tbnez $a0, .L801986F4\n\taddiu $v1, $0, 0x9D\n\tj .L801987A0\n\taddu $v0, $0, $0\n\t.L801986F4:\n\tlui $v0, (0x80000000 >> 16)\n\tbne $a0, $v0, .L80198708\n\tnop\n\tj .L801987A0\n\tlui $v0, (0xCF000000 >> 16)\n\t.L80198708:\n\tbgez $a0, .L80198718\n\tlui $v0, (0xFFFFFF >> 16)\n\tlui $a2, (0x80000000 >> 16)\n\tnegu $a0, $a0\n\t.L80198718:\n\tori $v0, $v0, (0xFFFFFF & 0xFFFF)\n\tslt $v0, $v0, $a0\n\tbnez $v0, .L80198744\n\tlui $v0, (0x3FFFFFFF >> 16)\n\tlui $a1, (0xFFFFFF >> 16)\n\tori $a1, $a1, (0xFFFFFF & 0xFFFF)\n\t.L80198730:\n\tsll $a0, $a0, 4\n\tslt $v0, $a1, $a0\n\tbeqz $v0, .L80198730\n\taddiu $v1, $v1, -0x4\n\tlui $v0, (0x3FFFFFFF >> 16)\n\t.L80198744:\n\tori $v0, $v0, (0x3FFFFFFF & 0xFFFF)\n\tslt $v0, $v0, $a0\n\tbnez $v0, .L8019876C\n\tnop\n\tlui $a1, (0x3FFFFFFF >> 16)\n\tori $a1, $a1, (0x3FFFFFFF & 0xFFFF)\n\t.L8019875C:\n\tsll $a0, $a0, 1\n\tslt $v0, $a1, $a0\n\tbeqz $v0, .L8019875C\n\taddiu $v1, $v1, -0x1\n\t.L8019876C:\n\taddiu $a0, $a0, 0x40\n\tbgez $a0, .L80198784\n\tnop\n\taddiu $v1, $v1, 0x1\n\tj .L80198788\n\tsrl $a0, $a0, 8\n\t.L80198784:\n\tsrl $a0, $a0, 7\n\t.L80198788:\n\tsll $v0, $v1, 23\n\tor $v1, $a2, $v0\n\tlui $v0, (0xFF7FFFFF >> 16)\n\tori $v0, $v0, (0xFF7FFFFF & 0xFFFF)\n\tand $v0, $a0, $v0\n\tor $v0, $v1, $v0\n\t.L801987A0:\n\tjr $ra\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801986E0, .-func_801986E0\n"
);

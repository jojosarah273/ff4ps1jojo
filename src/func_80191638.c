#include "common.h"
__asm__(
  ".globl func_80191638\n"
  ".type func_80191638, @function\n"
  "func_80191638:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, (0x1B4E81B5 >> 16)\n\tori $v1, $v1, (0x1B4E81B5 & 0xFFFF)\n\taddiu $a0, $a0, 0x96\n\tmult $a0, $v1\n\taddu $v0, $a1, $0\n\tlui $a1, (0x88888889 >> 16)\n\tori $a1, $a1, (0x88888889 & 0xFFFF)\n\tmfhi $v1\n\tsra $a3, $v1, 3\n\tsra $v1, $a0, 31\n\tsubu $a3, $a3, $v1\n\tmult $a3, $a1\n\tlui $t1, (0x66666667 >> 16)\n\tori $t1, $t1, (0x66666667 & 0xFFFF)\n\tsll $a1, $a3, 2\n\taddu $a1, $a1, $a3\n\tsll $v1, $a1, 4\n\tmfhi $a2\n\tsubu $v1, $v1, $a1\n\tsubu $a0, $a0, $v1\n\tmult $a0, $t1\n\tsra $v1, $a3, 31\n\taddu $t0, $a2, $a3\n\tsra $t0, $t0, 5\n\tsubu $t0, $t0, $v1\n\tsll $v1, $t0, 4\n\tsubu $v1, $v1, $t0\n\tmfhi $a1\n\tsll $v1, $v1, 2\n\tsubu $a3, $a3, $v1\n\tmult $a3, $t1\n\tsra $v1, $a0, 31\n\tsra $a1, $a1, 2\n\tsubu $a1, $a1, $v1\n\tsll $a2, $a1, 4\n\tsll $v1, $a1, 2\n\taddu $v1, $v1, $a1\n\tsll $v1, $v1, 1\n\tsubu $a0, $a0, $v1\n\tmfhi $t3\n\taddu $a2, $a2, $a0\n\tsra $v1, $a3, 31\n\tmult $t0, $t1\n\tsb $a2, 0x2($v0)\n\tsra $a0, $t3, 2\n\tsubu $a0, $a0, $v1\n\tsll $a1, $a0, 4\n\tsll $v1, $a0, 2\n\taddu $v1, $v1, $a0\n\tsll $v1, $v1, 1\n\tsubu $a3, $a3, $v1\n\taddu $a1, $a1, $a3\n\tsra $v1, $t0, 31\n\tsb $a1, 0x1($v0)\n\tmfhi $t1\n\tsra $a0, $t1, 2\n\tsubu $a0, $a0, $v1\n\tsll $a1, $a0, 4\n\tsll $v1, $a0, 2\n\taddu $v1, $v1, $a0\n\tsll $v1, $v1, 1\n\tsubu $t0, $t0, $v1\n\taddu $a1, $a1, $t0\n\tjr $ra\n\tsb $a1, 0x0($v0)\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191638, .-func_80191638\n"
);

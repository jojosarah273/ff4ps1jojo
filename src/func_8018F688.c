#include "common.h"
__asm__(
  ".globl func_8018F688\n"
  ".type func_8018F688, @function\n"
  "func_8018F688:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlbu $v1, 0x0($a0)\n\tlbu $a2, 0x1($a0)\n\tsrl $a1, $v1, 4\n\tsll $v0, $a1, 2\n\taddu $v0, $v0, $a1\n\tsll $v0, $v0, 1\n\tandi $v1, $v1, 0xF\n\taddu $v0, $v0, $v1\n\tsll $a1, $v0, 4\n\tsubu $a1, $a1, $v0\n\tsll $a1, $a1, 2\n\tsrl $v1, $a2, 4\n\tsll $v0, $v1, 2\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 1\n\tandi $a2, $a2, 0xF\n\taddu $v0, $v0, $a2\n\taddu $a1, $a1, $v0\n\tsll $v1, $a1, 2\n\taddu $v1, $v1, $a1\n\tsll $v0, $v1, 4\n\tlbu $a1, 0x2($a0)\n\tsubu $v0, $v0, $v1\n\tsrl $a0, $a1, 4\n\tsll $v1, $a0, 2\n\taddu $v1, $v1, $a0\n\tsll $v1, $v1, 1\n\tandi $a1, $a1, 0xF\n\taddu $v1, $v1, $a1\n\taddu $v0, $v0, $v1\n\tjr $ra\n\taddiu $v0, $v0, -0x96\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F688, .-func_8018F688\n"
);

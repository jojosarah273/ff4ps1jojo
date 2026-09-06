#include "common.h"
__asm__(
  ".globl func_80189A90\n"
  ".type func_80189A90, @function\n"
  "func_80189A90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsll $a0, $a0, 16\n\tsra $a0, $a0, 16\n\tlui $v1, %hi(D_801F66E8)\n\taddiu $a1, $v1, %lo(D_801F66E8)\n\tsll $v0, $a0, 2\n\taddu $v0, $v0, $a0\n\tsll $v1, $v0, 2\n\taddu $a0, $v1, $a1\n\tsw $ra, 0x10($sp)\n\tlw $v0, 0x0($a0)\n\tnop\n\tbeqz $v0, .L80189AD8\n\taddu $v0, $a1, $v1\n\tsw $zero, 0x0($a0)\n\tlw $a0, 0x4($v0)\n\tjal func_8018B4C8\n\tnop\n\t.L80189AD8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189A90, .-func_80189A90\n"
);

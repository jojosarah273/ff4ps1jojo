#include "common.h"
__asm__(
  ".globl func_8017F9A8\n"
  ".type func_8017F9A8, @function\n"
  "func_8017F9A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v0, 0x1F80\n\tori $v0, $v0, 0x37C\n\tandi $a1, $a1, 0xFFFF\n\tandi $a2, $a2, 0xFFFF\n\tsll $a3, $a3, 16\n\tsra $a3, $a3, 16\n\tsw $ra, 0x10($sp)\n\taddu $t0, $v0, $zero\n\tsw $sp, 0x0($t0)\n\taddiu $t0, $t0, -0x4\n\taddu $sp, $t0, $zero\n\tjal func_8017F954\n\tnop\n\taddiu $sp, $sp, 0x4\n\tlw $sp, 0x0($sp)\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017F9A8, .-func_8017F9A8\n"
);

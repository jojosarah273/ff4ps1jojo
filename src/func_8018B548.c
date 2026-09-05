#include "common.h"
__asm__(
  ".globl func_8018B548\n"
  ".type func_8018B548, @function\n"
  "func_8018B548:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddiu $a2, $zero, 0xCA\n\tjal func_8018B578\n\taddiu $a3, $zero, 0xCB\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018B548, .-func_8018B548\n"
);

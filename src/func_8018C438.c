#include "common.h"
__asm__(
  ".globl func_8018C438\n"
  ".type func_8018C438, @function\n"
  "func_8018C438:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddiu $a2, $zero, 0xCC\n\tjal func_8018B578\n\taddiu $a3, $zero, 0xCD\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018C438, .-func_8018C438\n"
);

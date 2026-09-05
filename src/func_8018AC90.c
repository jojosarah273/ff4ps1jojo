#include "common.h"
__asm__(
  ".globl func_8018AC90\n"
  ".type func_8018AC90, @function\n"
  "func_8018AC90:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x8\n\taddiu $v0, $zero, 0xD\n\tsw $v0, 0x4($sp)\n\tj .L8018ACD0\n\tsw $zero, 0x0($sp)\n\t.L8018ACA4:\n\tlw $v1, 0x4($sp)\n\tnop\n\tsll $v0, $v1, 1\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $v1\n\tsw $v0, 0x4($sp)\n\tlw $v0, 0x0($sp)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsw $v0, 0x0($sp)\n\t.L8018ACD0:\n\tlw $v0, 0x0($sp)\n\tnop\n\tslti $v0, $v0, 0x3C\n\tbnez $v0, .L8018ACA4\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x8\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AC90, .-func_8018AC90\n"
);

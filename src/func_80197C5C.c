#include "common.h"
__asm__(
  ".globl func_80197C5C\n"
  ".type func_80197C5C, @function\n"
  "func_80197C5C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019DCB8)\n\tlw $v0, %lo(D_8019DCB8)($v0)\n\taddiu $sp, $sp, -0x10\n\tsh $zero, 0xA($v0)\n\taddiu $v0, $zero, 0xA\n\tsw $v0, 0x0($sp)\n\tlw $v0, 0x0($sp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsw $v0, 0x0($sp)\n\tlw $v1, 0x0($sp)\n\taddiu $v0, $zero, -0x1\n\tbeq $v1, $v0, .L80197CB8\n\taddu $v0, $zero, $zero\n\taddiu $v1, $zero, -0x1\n\t.L80197C98:\n\tlw $v0, 0x0($sp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsw $v0, 0x0($sp)\n\tlw $v0, 0x0($sp)\n\tnop\n\tbne $v0, $v1, .L80197C98\n\taddu $v0, $zero, $zero\n\t.L80197CB8:\n\taddiu $sp, $sp, 0x10\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197C5C, .-func_80197C5C\n"
);

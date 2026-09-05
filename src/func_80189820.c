#include "common.h"
__asm__(
  ".globl func_80189820\n"
  ".type func_80189820, @function\n"
  "func_80189820:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801F66E8)\n\taddiu $a1, $v0, %lo(D_801F66E8)\n\taddu $v1, $zero, $zero\n\t.L8018982C:\n\tlw $v0, 0x0($a1)\n\tnop\n\tbnez $v0, .L8018986C\n\tnop\n\tsw $a0, 0x0($a1)\n\tlhu $v0, 0x8($a0)\n\tsw $zero, 0xC($a1)\n\tsll $v0, $v0, 4\n\taddiu $v0, $v0, 0x10\n\taddu $v0, $a0, $v0\n\tsw $v0, 0x8($a1)\n\tsll $v0, $v1, 16\n\tlbu $v1, 0xB($a0)\n\tsra $v0, $v0, 16\n\tjr $ra\n\tsb $v1, 0x10($a1)\n\t.L8018986C:\n\taddiu $v1, $v1, 0x1\n\tslti $v0, $v1, 0x8\n\tbnez $v0, .L8018982C\n\taddiu $a1, $a1, 0x14\n\tjr $ra\n\taddiu $v0, $zero, -0x1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189820, .-func_80189820\n"
);

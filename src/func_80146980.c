#include "common.h"
__asm__(
  ".globl func_80146980\n"
  ".type func_80146980, @function\n"
  "func_80146980:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\tori $a0, $zero, 0x8000\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\tlbu $a0, 0x47($s0)\n\taddu $a1, $v0, $zero\n\taddu $v1, $a0, $a1\n\tlbu $v0, 0x70AF($v1)\n\tnop\n\tbnez $v0, .L80146A1C\n\tnop\n\tlbu $v0, 0x746D($v1)\n\tnop\n\tbnez $v0, .L80146A2C\n\tsll $a0, $a0, 2\n\taddu $a0, $a0, $a1\n\tlbu $v0, 0x7015($a0)\n\tnop\n\tandi $v0, $v0, 0xF7\n\tsb $v0, 0xE($s0)\n\tlbu $v1, 0x7016($a0)\n\tnop\n\tandi $v1, $v1, 0xB8\n\tor $v1, $v1, $v0\n\tsb $v1, 0xE($s0)\n\tlbu $v0, 0x7018($a0)\n\tnop\n\tandi $v0, $v0, 0x1\n\tor $v1, $v1, $v0\n\tbeqz $v1, .L80146A2C\n\tnop\n\tjal func_800F5410\n\tnop\n\tj .L80146A34\n\tnop\n\t.L80146A1C:\n\tlbu $v0, 0x64($s0)\n\tnop\n\taddiu $v0, $v0, 0x1\n\tsb $v0, 0x64($s0)\n\t.L80146A2C:\n\tjal func_800F5480\n\tnop\n\t.L80146A34:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80146980, .-func_80146980\n"
);

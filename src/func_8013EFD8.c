#include "common.h"
__asm__(
  ".globl func_8013EFD8\n"
  ".type func_8013EFD8, @function\n"
  "func_8013EFD8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\taddiu $a0, $zero, 0x2000\n\tsw $ra, 0x28($sp)\n\tsw $s5, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s2, 0x18($sp)\n\tsw $s1, 0x14($sp)\n\tjal func_800F3B04\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3C3C\n\taddu $s0, $v0, $zero\n\tlbu $v1, 0x4CC0($s0)\n\tnop\n\tbeqz $v1, .L8013F100\n\taddu $s2, $v0, $zero\n\taddiu $s5, $zero, 0x40\n\t.L8013F020:\n\tjal func_800F3A70\n\taddu $a0, $zero, $zero\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\taddu $s3, $v0, $zero\n\taddu $s1, $zero, $zero\n\taddu $v0, $s3, $s1\n\t.L8013F03C:\n\tlbu $v1, 0x1($v0)\n\tlbu $s0, 0x0($v0)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tsll $v1, $v1, 8\n\tor $s0, $s0, $v1\n\tjal func_800F922C\n\tsh $s0, 0x0($v0)\n\taddiu $v0, $s1, 0x2\n\tandi $s1, $v0, 0xFFFF\n\tbne $s1, $s5, .L8013F03C\n\taddu $v0, $s3, $s1\n\taddu $s1, $zero, $zero\n\taddiu $s4, $zero, 0x40\n\t.L8013F074:\n\tjal func_800F9410\n\tnop\n\taddu $a1, $s3, $s1\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\taddiu $v1, $s1, 0x2\n\tlhu $a0, 0x0($v0)\n\tandi $s1, $v1, 0xFFFF\n\txori $s0, $a0, 0x4000\n\tsrl $v0, $s0, 8\n\tsb $s0, 0x0($a1)\n\tbne $s1, $s4, .L8013F074\n\tsb $v0, 0x1($a1)\n\tlbu $v0, 0x1($s2)\n\tlbu $s0, 0x0($s2)\n\tsll $v0, $v0, 8\n\tjal func_800F5410\n\tor $s0, $s0, $v0\n\taddiu $v0, $s0, 0x40\n\tandi $s0, $v0, 0xFFFF\n\tsrl $v1, $s0, 8\n\tsb $s0, 0x0($s2)\n\tlbu $s0, 0x2($s2)\n\tlbu $v0, 0x3($s2)\n\tsb $v1, 0x1($s2)\n\tsll $v0, $v0, 8\n\tor $s0, $s0, $v0\n\taddiu $v1, $s0, -0x1\n\tandi $s0, $v1, 0xFFFF\n\tsrl $v0, $s0, 8\n\tsb $s0, 0x2($s2)\n\tbnez $s0, .L8013F020\n\tsb $v0, 0x3($s2)\n\tjal func_800F971C\n\tnop\n\t.L8013F100:\n\tlw $ra, 0x28($sp)\n\tlw $s5, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013EFD8, .-func_8013EFD8\n"
);

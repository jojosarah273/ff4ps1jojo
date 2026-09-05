#include "common.h"
__asm__(
  ".globl func_80196F48\n"
  ".type func_80196F48, @function\n"
  "func_80196F48:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x30\n\tsw $s3, 0x24($sp)\n\tlw $s3, 0x40($sp)\n\tlw $v1, 0x44($sp)\n\tlw $v0, 0x48($sp)\n\taddu $t0, $a0, $zero\n\tsw $s0, 0x18($sp)\n\taddu $s0, $a1, $zero\n\tsw $s2, 0x20($sp)\n\taddu $s2, $a2, $zero\n\tsw $s1, 0x1C($sp)\n\taddu $s1, $a3, $zero\n\tsw $ra, 0x28($sp)\n\tsh $s1, 0x10($sp)\n\tsh $v0, 0x16($sp)\n\taddiu $v0, $zero, 0x1\n\tbeq $s0, $v0, .L80196FD8\n\tsh $s3, 0x12($sp)\n\tslti $v0, $s0, 0x2\n\tbeqz $v0, .L80196FAC\n\tnop\n\tbeqz $s0, .L80196FC0\n\taddiu $a0, $sp, 0x10\n\tj .L80196FF4\n\tnop\n\t.L80196FAC:\n\taddiu $v0, $zero, 0x2\n\tbeq $s0, $v0, .L80196FEC\n\taddiu $a0, $sp, 0x10\n\tj .L80196FF4\n\tnop\n\t.L80196FC0:\n\tbgez $v1, .L80196FCC\n\taddu $v0, $v1, $zero\n\taddiu $v0, $v1, 0x3\n\t.L80196FCC:\n\tsra $v0, $v0, 2\n\tj .L80196FF0\n\tsh $v0, 0x14($sp)\n\t.L80196FD8:\n\tsrl $v0, $v1, 31\n\taddu $v0, $v1, $v0\n\tsra $v0, $v0, 1\n\tj .L80196FF0\n\tsh $v0, 0x14($sp)\n\t.L80196FEC:\n\tsh $v1, 0x14($sp)\n\t.L80196FF0:\n\taddiu $a0, $sp, 0x10\n\t.L80196FF4:\n\tjal func_80194640\n\taddu $a1, $t0, $zero\n\taddu $a0, $s0, $zero\n\taddu $a1, $s2, $zero\n\taddu $a2, $s1, $zero\n\tjal func_801971A8\n\taddu $a3, $s3, $zero\n\tandi $v0, $v0, 0xFFFF\n\tlw $ra, 0x28($sp)\n\tlw $s3, 0x24($sp)\n\tlw $s2, 0x20($sp)\n\tlw $s1, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x30\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80196F48, .-func_80196F48\n"
);

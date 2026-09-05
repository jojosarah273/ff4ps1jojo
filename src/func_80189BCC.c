#include "common.h"
__asm__(
  ".globl func_80189BCC\n"
  ".type func_80189BCC, @function\n"
  "func_80189BCC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x50\n\tsw $s3, 0x44($sp)\n\taddu $s3, $a0, $zero\n\tsw $s0, 0x38($sp)\n\taddu $s0, $a1, $zero\n\tsw $s1, 0x3C($sp)\n\taddu $s1, $a2, $zero\n\tsw $s2, 0x40($sp)\n\taddu $s2, $a3, $zero\n\tsw $ra, 0x48($sp)\n\tjal func_8018CB88\n\taddiu $a0, $sp, 0x10\n\tlh $v0, 0x20($sp)\n\tnop\n\tbgez $v0, .L80189C10\n\tnop\n\taddiu $v0, $v0, 0x7F\n\t.L80189C10:\n\tlh $v1, 0x22($sp)\n\tsra $v0, $v0, 7\n\tbgez $v1, .L80189C24\n\tsh $v0, 0x0($s0)\n\taddiu $v1, $v1, 0x7F\n\t.L80189C24:\n\tlw $v0, 0x24($sp)\n\tlw $a0, 0x28($sp)\n\tlw $ra, 0x48($sp)\n\tsra $v1, $v1, 7\n\tsh $v1, 0x0($s1)\n\tlw $s1, 0x3C($sp)\n\tlw $s0, 0x38($sp)\n\tsw $v0, 0x0($s2)\n\tsw $a0, 0x0($s3)\n\tlw $s3, 0x44($sp)\n\tlw $s2, 0x40($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x50\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189BCC, .-func_80189BCC\n"
);

#include "common.h"
__asm__(
  ".globl func_801970A8\n"
  ".type func_801970A8, @function\n"
  "func_801970A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s2, 0x18($sp)\n\tlw $s2, 0x38($sp)\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a1, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a2, $zero\n\tsw $s0, 0x10($sp)\n\tsw $ra, 0x24($sp)\n\tjal func_80196F2C\n\taddu $s0, $a3, $zero\n\taddiu $v1, $zero, 0x1\n\tsh $s3, 0x0($s1)\n\tsh $s4, 0x2($s1)\n\tsh $s0, 0x4($s1)\n\tsh $zero, 0xC($s1)\n\tsh $zero, 0xE($s1)\n\tsh $zero, 0x10($s1)\n\tsh $zero, 0x12($s1)\n\tsb $zero, 0x19($s1)\n\tsb $zero, 0x1A($s1)\n\tsb $zero, 0x1B($s1)\n\tsb $v1, 0x16($s1)\n\tbeqz $v0, .L8019711C\n\tsh $s2, 0x6($s1)\n\tj .L80197120\n\tslti $v0, $s2, 0x121\n\t.L8019711C:\n\tslti $v0, $s2, 0x101\n\t.L80197120:\n\tsb $v0, 0x17($s1)\n\taddu $v0, $s1, $zero\n\taddiu $v1, $zero, 0xA\n\tsh $s3, 0x8($v0)\n\tsh $s4, 0xA($v0)\n\tsh $v1, 0x14($v0)\n\tsb $zero, 0x18($v0)\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801970A8, .-func_801970A8\n"
);

#include "common.h"
__asm__(
  ".globl func_8018FCC4\n"
  ".type func_8018FCC4, @function\n"
  "func_8018FCC4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s3, 0x1C($sp)\n\taddu $s3, $a0, $zero\n\tsw $s4, 0x20($sp)\n\taddu $s4, $a1, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $zero, $zero\n\tsw $s2, 0x18($sp)\n\tlui $s2, %hi(D_801F711C)\n\taddiu $s2, $s2, %lo(D_801F711C)\n\tsw $s1, 0x14($sp)\n\taddu $s1, $zero, $zero\n\tsw $ra, 0x24($sp)\n\t.L8018FCF8:\n\tlui $v0, %hi(D_801F7114)\n\taddu $v0, $v0, $s1\n\tlw $v0, %lo(D_801F7114)($v0)\n\tnop\n\tbeqz $v0, .L8018FD44\n\tnop\n\tbne $v0, $s3, .L8018FD30\n\taddu $a0, $s4, $zero\n\tjal func_8018F078\n\taddu $a1, $s2, $zero\n\tbnez $v0, .L8018FD34\n\taddiu $s2, $s2, 0x2C\n\tj .L8018FD48\n\taddiu $v0, $s0, 0x1\n\t.L8018FD30:\n\taddiu $s2, $s2, 0x2C\n\t.L8018FD34:\n\taddiu $s0, $s0, 0x1\n\tslti $v0, $s0, 0x80\n\tbnez $v0, .L8018FCF8\n\taddiu $s1, $s1, 0x2C\n\t.L8018FD44:\n\taddiu $v0, $zero, -0x1\n\t.L8018FD48:\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018FCC4, .-func_8018FCC4\n"
);

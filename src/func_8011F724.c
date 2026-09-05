#include "common.h"
__asm__(
  ".globl func_8011F724\n"
  ".type func_8011F724, @function\n"
  "func_8011F724:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F926C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x2\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a1, %hi(D_8019ED44)\n\tlw $a1, %lo(D_8019ED44)($a1)\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v0, 0x0($a1)\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x3\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011F724, .-func_8011F724\n"
);

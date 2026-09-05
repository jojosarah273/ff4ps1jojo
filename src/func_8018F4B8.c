#include "common.h"
__asm__(
  ".globl func_8018F4B8\n"
  ".type func_8018F4B8, @function\n"
  "func_8018F4B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801F6B00)\n\tsw $ra, %lo(D_801F6B00)($at)\n\tjal func_801976E8\n\tnop\n\taddiu $t1, $zero, 0x56\n\taddiu $t2, $zero, 0xB0\n\tjalr $t2\n\tnop\n\tlw $v0, 0x18($v0)\n\tlui $t2, %hi(D_8018F528)\n\taddiu $t2, $t2, %lo(D_8018F528)\n\tlui $t1, %hi(D_8018F534)\n\taddiu $t1, $t1, %lo(D_8018F534)\n\t.L8018F4EC:\n\tlw $v1, 0x0($t2)\n\tnop\n\tsw $v1, 0x70($v0)\n\taddiu $t2, $t2, 0x4\n\tbne $t2, $t1, .L8018F4EC\n\taddiu $v0, $v0, 0x4\n\tjal func_80197608\n\tnop\n\tjal func_801976F8\n\tnop\n\tlui $ra, %hi(D_801F6B00)\n\tlw $ra, %lo(D_801F6B00)($ra)\n\tnop\n\tjr $ra\n\tnop\n\tnop\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F4B8, .-func_8018F4B8\n"
);

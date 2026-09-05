#include "common.h"
__asm__(
  ".globl func_8018F374\n"
  ".type func_8018F374, @function\n"
  "func_8018F374:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $at, %hi(D_801F6AF0)\n\tsw $ra, %lo(D_801F6AF0)($at)\n\tjal func_801976E8\n\tnop\n\taddiu $t1, $zero, 0x56\n\taddiu $t2, $zero, 0xB0\n\tjalr $t2\n\tnop\n\tlw $v0, 0x18($v0)\n\tnop\n\tlw $v1, 0x70($v0)\n\tnop\n\tandi $t1, $v1, 0xFFFF\n\tsll $t1, $t1, 16\n\tlw $v1, 0x74($v0)\n\tnop\n\tandi $t2, $v1, 0xFFFF\n\taddu $v1, $t1, $t2\n\taddiu $v0, $v1, 0x28\n\tlui $t2, %hi(func_8018F34C)\n\taddiu $t2, $t2, %lo(func_8018F34C)\n\tlui $t1, %hi(func_8018F34C + 0x14)\n\taddiu $t1, $t1, %lo(func_8018F34C + 0x14)\n\t.L8018F3D0:\n\tlw $v1, 0x0($t2)\n\tnop\n\tsw $v1, 0x0($v0)\n\taddiu $t2, $t2, 0x4\n\tbne $t2, $t1, .L8018F3D0\n\taddiu $v0, $v0, 0x4\n\tlui $at, (0x10000 >> 16)\n\tjal func_80197608\n\tsw $v0, -0x2004($at)\n\tlui $ra, %hi(D_801F6AF0)\n\tlw $ra, %lo(D_801F6AF0)($ra)\n\tnop\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018F374, .-func_8018F374\n"
);

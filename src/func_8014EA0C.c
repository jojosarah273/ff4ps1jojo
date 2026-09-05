#include "common.h"
__asm__(
  ".globl func_8014EA0C\n"
  ".type func_8014EA0C, @function\n"
  "func_8014EA0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F6564\n\tori $a0, $zero, 0xF284\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\t.L8014EA34:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4FAC\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L8014EAB4\n\tnop\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\tsh $v0, 0x0($v1)\n\tjal func_800F8960\n\tori $a0, $zero, 0xEFC7\n\t.L8014EAB4:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014EA34\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014EA0C, .-func_8014EA0C\n"
);

#include "common.h"
__asm__(
  ".globl func_8012FF9C\n"
  ".type func_8012FF9C, @function\n"
  "func_8012FF9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B83\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 3\n\tjal func_800F5140\n\tsb $v0, 0x0($v1)\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x56\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x46\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B84\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x10\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tlui $a0, %hi(D_8019ED5C)\n\tlw $a0, %lo(D_8019ED5C)($a0)\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsb $v0, 0x0($a0)\n\tlui $v0, %hi(D_80199328)\n\tlui $a1, %hi(D_8019ED5C)\n\tlw $a1, %lo(D_8019ED5C)($a1)\n\taddiu $v0, $v0, %lo(D_80199328)\n\tlbu $v1, 0x0($a1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x10\n\tjal func_800F9644\n\tsb $v0, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012FF9C, .-func_8012FF9C\n"
);

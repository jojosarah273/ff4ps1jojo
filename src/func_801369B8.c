#include "common.h"
__asm__(
  ".globl func_801369B8\n"
  ".type func_801369B8, @function\n"
  "func_801369B8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x57\n\tjal func_8012D204\n\tnop\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80136A40\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xE5\n\tjal func_80134AF8\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80136A40\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x57\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 2\n\tjal func_801224D0\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8768\n\tori $a0, $zero, 0xFE15\n\t.L80136A40:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801369B8, .-func_801369B8\n"
);

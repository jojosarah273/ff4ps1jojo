#include "common.h"
__asm__(
  ".globl func_80143DB4\n"
  ".type func_80143DB4, @function\n"
  "func_80143DB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F5410\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F3B04\n\taddu $a0, $v1, $a0\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5410\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F3B04\n\taddu $a0, $v1, $a0\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B3\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80143DB4, .-func_80143DB4\n"
);

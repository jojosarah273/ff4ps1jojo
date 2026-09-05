#include "common.h"
__asm__(
  ".globl func_801217EC\n"
  ".type func_801217EC, @function\n"
  "func_801217EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8012181C\n\tnop\n\tjal func_80121E6C\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x64\n\tj .L8012182C\n\tnop\n\t.L8012181C:\n\tjal func_80121F64\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x64\n\t.L8012182C:\n\tjal func_80121C0C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x65\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x63\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF7\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xF8\n\taddiu $v0, $v0, 0x2\n\tjal func_800F654C\n\tsh $v0, 0x0($v1)\n\t.L80121894:\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x1D\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5DA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80121894\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF9\n\tjal func_800F8768\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801217EC, .-func_801217EC\n"
);

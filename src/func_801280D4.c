#include "common.h"
__asm__(
  ".globl func_801280D4\n"
  ".type func_801280D4, @function\n"
  "func_801280D4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC1\n\tjal func_8012807C\n\tnop\n\tjal func_801241B8\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F971C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A3C\n\tjal func_800F5140\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a1, %hi(D_80199C00)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\taddiu $a1, $a1, %lo(D_80199C00)\n\tlhu $v0, 0x0($v1)\n\tlui $a2, %hi(D_8019ED40)\n\tlw $a2, %lo(D_8019ED40)($a2)\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x0($v0)\n\tnop\n\tsb $v1, 0x0($a2)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tlui $a2, %hi(D_8019ED40)\n\tlw $a2, %lo(D_8019ED40)($a2)\n\taddu $v0, $v0, $a1\n\tlbu $v1, 0x1($v0)\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8274\n\tsb $v1, 0x1($a2)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5A\n\t.L801281AC:\n\tjal func_80125130\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x18\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x5A\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801281AC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801280D4, .-func_801280D4\n"
);

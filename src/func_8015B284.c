#include "common.h"
__asm__(
  ".globl func_8015B284\n"
  ".type func_8015B284, @function\n"
  "func_8015B284:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x353D\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x6D\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015B2EC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xDE\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8015B3C4\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015B3C4\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8015B3CC\n\tnop\n\t.L8015B2EC:\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F8D6C\n\tsh $v1, 0x0($a1)\n\tjal func_800F71DC\n\tori $a0, $zero, 0x9100\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x82\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_801526F8\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x28A2\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5140\n\tnop\n\tlui $a0, (0xFA550 >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0xFA550 & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAB\n\tlui $a0, (0xFA551 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xFA551 & 0xFFFF)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F43A0\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F41E8\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8015B3CC\n\tnop\n\t.L8015B3C4:\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x353D\n\t.L8015B3CC:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015B284, .-func_8015B284\n"
);

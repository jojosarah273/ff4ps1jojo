#include "common.h"
__asm__(
  ".globl func_801652FC\n"
  ".type func_801652FC, @function\n"
  "func_801652FC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB5\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xB6\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xA6\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xB5\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0xB5\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F6630\n\tsh $v1, 0x0($a1)\n\tjal func_80152BC4\n\tnop\n\tjal func_80152224\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xB1\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAF\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xB5\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAF\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xB3\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80165414\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xB3\n\t.L80165414:\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801652FC, .-func_801652FC\n"
);

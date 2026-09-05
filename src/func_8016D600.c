#include "common.h"
__asm__(
  ".globl func_8016D600\n"
  ".type func_8016D600, @function\n"
  "func_8016D600:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x1\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8016D690\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xA\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8016D648\n\tnop\n\tjal func_8016D730\n\tnop\n\tj .L8016D720\n\tnop\n\t.L8016D648:\n\tjal func_8016D768\n\tnop\n\tjal func_800F6EA8\n\taddiu $a0, $zero, 0x36\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\t.L8016D660:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_8016D730\n\tnop\n\tjal func_800F5DA0\n\taddu $a0, $zero, $zero\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016D660\n\tnop\n\tj .L8016D720\n\tnop\n\t.L8016D690:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x7D1D\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F922C\n\tnop\n\tjal func_800F516C\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x39\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x39\n\tjal func_800F9410\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x39\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\t.L8016D720:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016D600, .-func_8016D600\n"
);

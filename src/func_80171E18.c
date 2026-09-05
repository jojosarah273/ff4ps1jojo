#include "common.h"
__asm__(
  ".globl func_80171E18\n"
  ".type func_80171E18, @function\n"
  "func_80171E18:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x2\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 2\n\tsb $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\taddiu $a0, $zero, 0xC\n\tjal func_800F6630\n\tsh $v0, 0x0($v1)\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x4\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80171EC0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF8\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4F1\n\tj .L80171EE8\n\tnop\n\t.L80171EC0:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4F0\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x5\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4F1\n\t.L80171EE8:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 4\n\tsb $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\tsb $zero, 0x0($a1)\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tjal func_800F5140\n\tsb $v0, 0x0($a0)\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4F2\n\tlui $a0, (0x15B4F5 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x15B4F5 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x4F3\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80171E18, .-func_80171E18\n"
);

#include "common.h"
__asm__(
  ".globl func_8012833C\n"
  ".type func_8012833C, @function\n"
  "func_8012833C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x51\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x46\n\tsll $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x45\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x45\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0x7007FE >> 16)\n\tjal func_800F6CF4\n\tori $a0, $a0, (0x7007FE & 0xFFFF)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x1BE4\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801283E0\n\tnop\n\t.L801283C8:\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\tj .L80128470\n\tnop\n\t.L801283E0:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x51\n\tjal func_800F61E8\n\tnop\n\tjal func_801387D8\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a1, %hi(D_8019ED44)\n\tlw $a1, %lo(D_8019ED44)($a1)\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x45\n\tjal func_800F7270\n\tsh $v0, 0x0($a1)\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tlui $a0, (0x7007FC >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x7007FC & 0xFFFF)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F5520\n\taddu $a0, $v0, $a0\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801283C8\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5480\n\tnop\n\t.L80128470:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012833C, .-func_8012833C\n"
);

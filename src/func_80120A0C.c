#include "common.h"
__asm__(
  ".globl func_80120A0C\n"
  ".type func_80120A0C, @function\n"
  "func_80120A0C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3F\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbeqz $v0, .L80120B5C\n\tnop\n\tjal func_800F5CCC\n\tnop\n\tjal func_801224D0\n\tnop\n\tlui $v0, %hi(D_80199304)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\taddiu $v0, $v0, %lo(D_80199304)\n\tlhu $v1, 0x0($a0)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tjal func_800F5140\n\tsb $v0, 0x0($a0)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_801224D0\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\t.L80120AFC:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1500\n\tjal func_800F6364\n\tnop\n\tjal func_801245B4\n\tnop\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F3D48\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x40\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x45\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5DA0\n\tsh $v0, 0x0($v1)\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80120AFC\n\tnop\n\t.L80120B5C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80120A0C, .-func_80120A0C\n"
);

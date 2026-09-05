#include "common.h"
__asm__(
  ".globl func_801192F8\n"
  ".type func_801192F8, @function\n"
  "func_801192F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L80119320:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801193B4\n\taddiu $a0, $zero, 0x1703\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x40\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F6558\n\tsh $v1, 0x0($a1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6364\n\tnop\n\tj .L80119320\n\tnop\n\t.L801193B4:\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xCC\n\tjal func_800FE778\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801192F8, .-func_801192F8\n"
);

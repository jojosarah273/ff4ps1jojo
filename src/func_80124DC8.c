#include "common.h"
__asm__(
  ".globl func_80124DC8\n"
  ".type func_80124DC8, @function\n"
  "func_80124DC8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F9200\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5140\n\tnop\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x46\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_8012371C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124DC8, .-func_80124DC8\n"
);

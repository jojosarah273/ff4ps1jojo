#include "common.h"
__asm__(
  ".globl func_8016FB78\n"
  ".type func_8016FB78, @function\n"
  "func_8016FB78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8016FBA0\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x1F\n\t.L8016FBA0:\n\tjal func_800F9200\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x29\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F939C\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1F\n\t.L8016FC1C:\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016FC1C\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsh $v0, 0x0($a0)\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x40\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9660\n\tsh $v1, 0x0($a1)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1F\n\t.L8016FCA8:\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8016FCA8\n\tnop\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8016FB78, .-func_8016FB78\n"
);

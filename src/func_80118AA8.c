#include "common.h"
__asm__(
  ".globl func_80118AA8\n"
  ".type func_80118AA8, @function\n"
  "func_80118AA8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6364\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x9D5\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x18\n\tsll $v0, $v0, 3\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F516C\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddu $a0, $zero, $zero\n\tjal func_800F6558\n\tsh $v1, 0x0($a1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80118B30:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1560\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80118B58\n\tnop\n\tjal func_800F63BC\n\tnop\n\tj .L80118B30\n\tnop\n\t.L80118B58:\n\tjal func_80117594\n\tnop\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1560\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80118AA8, .-func_80118AA8\n"
);

#include "common.h"
__asm__(
  ".globl func_80118EF8\n"
  ".type func_80118EF8, @function\n"
  "func_80118EF8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80117594\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\t.L80118F18:\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80118FF0\n\taddiu $a0, $zero, 0x60\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5A90\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80118F18\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80118F78:\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1033\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80118FD0\n\tnop\n\tjal func_80117DF8\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80118F78\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tj .L80119010\n\tnop\n\t.L80118FD0:\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1033\n\tjal func_800F90EC\n\taddiu $a0, $zero, 0x1034\n\tjal func_8011EA5C\n\tnop\n\tj .L80119010\n\tnop\n\t.L80118FF0:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1440\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x1441\n\tjal func_8011EA5C\n\tnop\n\t.L80119010:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80118EF8, .-func_80118EF8\n"
);

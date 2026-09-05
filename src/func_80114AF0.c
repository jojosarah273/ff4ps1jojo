#include "common.h"
__asm__(
  ".globl func_80114AF0\n"
  ".type func_80114AF0, @function\n"
  "func_80114AF0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x70\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x78\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2E\n\t.L80114B18:\n\tjal func_800FE778\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80114B48\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\t.L80114B48:\n\tjal func_80114C98\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x78\n\tjal func_800F8EBC\n\taddiu $a0, $zero, 0xE\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x150\n\tjal func_80115A34\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F5958\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80114B18\n\tnop\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x80\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80114AF0, .-func_80114AF0\n"
);

#include "common.h"
__asm__(
  ".globl func_80127718\n"
  ".type func_80127718, @function\n"
  "func_80127718:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F71DC\n\tori $a0, $zero, 0xA710\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1500\n\tjal func_800F6558\n\taddiu $a0, $zero, 0x53\n\tjal func_800F3D64\n\taddiu $a0, $zero, 0xF00\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9448\n\tnop\n\tjal func_800F926C\n\tnop\n\tjal func_800F9298\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F3D48\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x600\n\tjal func_800F9330\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_8011EA3C\n\tnop\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1007\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1009\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1040\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1080\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x10C0\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1100\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80127718, .-func_80127718\n"
);

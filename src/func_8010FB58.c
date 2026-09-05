#include "common.h"
__asm__(
  ".globl func_8010FB58\n"
  ".type func_8010FB58, @function\n"
  "func_8010FB58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xEF\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0xB0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF1\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF3\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFE0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF5\n\tjal func_8010FCA8\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1C0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L8010FBB8:\n\tjal func_800FE778\n\tnop\n\tjal func_800FE870\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x140\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8010FC28\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010FC60\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xF3\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0xF3\n\tj .L8010FC60\n\tnop\n\t.L8010FC28:\n\tjal func_80115D2C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x1B8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8010FC60\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x23\n\tjal func_800FD804\n\tnop\n\t.L8010FC60:\n\tjal func_80110474\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8010FBB8\n\tnop\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010FB58, .-func_8010FB58\n"
);

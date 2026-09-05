#include "common.h"
__asm__(
  ".globl func_8012E5A8\n"
  ".type func_8012E5A8, @function\n"
  "func_8012E5A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8012E264\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x8\n\t.L8012E5C0:\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xD7\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xD7\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0xD7\n\tjal func_8012E7CC\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012E5C0\n\tnop\n\tjal func_8012E33C\n\tnop\n\t.L8012E620:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1B9D\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xD7\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1B9F\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0xD7\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_8012E7CC\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_800F5D24\n\taddiu $a0, $zero, 0x1B9C\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8012E620\n\tnop\n\tjal func_8012E700\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xD9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_801255C0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xDA\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_801255C0\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_80126830\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012E5A8, .-func_8012E5A8\n"
);

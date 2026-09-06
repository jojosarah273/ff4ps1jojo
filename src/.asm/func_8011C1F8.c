#include "common.h"
__asm__(
  ".globl func_8011C1F8\n"
  ".type func_8011C1F8, @function\n"
  "func_8011C1F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8011C218:\n\tjal func_800F6D70\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x7F4800 >> 16)\n\tjal func_800F885C\n\tori $a0, $a0, (0x7F4800 & 0xFFFF)\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x200\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8011C218\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011C1F8, .-func_8011C1F8\n"
);

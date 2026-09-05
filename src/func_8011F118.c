#include "common.h"
__asm__(
  ".globl func_8011F118\n"
  ".type func_8011F118, @function\n"
  "func_8011F118:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2D\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x30\n\t.L8011F178:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x31\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011F178\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x30\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x30\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F8960\n\taddu $a0, $zero, $zero\n\tjal func_800F960C\n\tnop\n\tjal func_80122334\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8011F118, .-func_8011F118\n"
);

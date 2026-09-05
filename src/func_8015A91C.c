#include "common.h"
__asm__(
  ".globl func_8015A91C\n"
  ".type func_8015A91C, @function\n"
  "func_8015A91C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x397B\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F5410\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAD\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAE\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAA\n\tjal func_8015ABEC\n\tnop\n\tjal func_8015A56C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015A91C, .-func_8015A91C\n"
);

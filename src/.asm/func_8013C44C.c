#include "common.h"
__asm__(
  ".globl func_8013C44C\n"
  ".type func_8013C44C, @function\n"
  "func_8013C44C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013C47C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x48\n\tj .L8013C484\n\tnop\n\t.L8013C47C:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xB8\n\t.L8013C484:\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x46\n\tjal func_8011F6D4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013C44C, .-func_8013C44C\n"
);

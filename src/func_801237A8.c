#include "common.h"
__asm__(
  ".globl func_801237A8\n"
  ".type func_801237A8, @function\n"
  "func_801237A8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x16A4\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x73\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x16A5\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x74\n\tjal func_80123958\n\tnop\n\tjal func_80123958\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x73\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x3E7\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80123828\n\tnop\n\tjal func_800F7500\n\tori $a0, $zero, 0xD602\n\tjal func_80123908\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5B\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x56C\n\tj .L80123868\n\tnop\n\t.L80123828:\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x29\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1D\n\tjal func_8011F360\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80123860\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\t.L80123860:\n\tjal func_80123878\n\tnop\n\t.L80123868:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801237A8, .-func_801237A8\n"
);

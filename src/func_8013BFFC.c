#include "common.h"
__asm__(
  ".globl func_8013BFFC\n"
  ".type func_8013BFFC, @function\n"
  "func_8013BFFC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1A83\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1A83\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013C074\n\tnop\n\t.L8013C024:\n\tjal func_8013C2FC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x60\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013C064\n\tnop\n\tjal func_8013CA70\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013C024\n\tnop\n\tj .L8013C084\n\tnop\n\t.L8013C064:\n\tjal func_8013BD04\n\tnop\n\tj .L8013C084\n\tnop\n\t.L8013C074:\n\tjal func_8013C50C\n\tnop\n\tj .L8013C024\n\tnop\n\t.L8013C084:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013BFFC, .-func_8013BFFC\n"
);

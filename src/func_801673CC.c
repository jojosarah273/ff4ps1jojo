#include "common.h"
__asm__(
  ".globl func_801673CC\n"
  ".type func_801673CC, @function\n"
  "func_801673CC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80167424\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0xE\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F63F8\n\tnop\n\tjal func_800F5410\n\tnop\n\tj .L8016751C\n\tnop\n\t.L80167424:\n\tjal func_800F6EA8\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801674AC\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L801674DC\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F9200\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF330\n\tjal func_800F63F8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5480\n\tnop\n\tj .L8016751C\n\tnop\n\t.L801674AC:\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F6364\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F6EA8\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\t.L801674DC:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x10\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F6364\n\tnop\n\tjal func_800F6130\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F5410\n\tnop\n\t.L8016751C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801673CC, .-func_801673CC\n"
);

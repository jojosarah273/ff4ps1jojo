#include "common.h"
__asm__(
  ".globl func_80114194\n"
  ".type func_80114194, @function\n"
  "func_80114194:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFE\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1707\n\tjal func_801146F0\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x80\n\tjal func_80116398\n\tnop\n\t.L801141D4:\n\tjal func_800FE778\n\tnop\n\tjal func_80114680\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xD5\n\tjal func_801144B4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xF\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801141D4\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1E0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\t.L8011423C:\n\tjal func_800FE778\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_801144B4\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5E48\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x89\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8011423C\n\tnop\n\t.L80114284:\n\tjal func_800FE778\n\tnop\n\tjal func_80114618\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_801144B4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80114284\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0xAC\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1704\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80114194, .-func_80114194\n"
);

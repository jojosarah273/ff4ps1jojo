#include "common.h"
__asm__(
  ".globl func_8010F08C\n"
  ".type func_8010F08C, @function\n"
  "func_8010F08C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2713\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x170C\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC3\n\tjal func_801035B0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA2\n\tjal func_80102494\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1727\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2713\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1725\n\tjal func_8011EA5C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010F08C, .-func_8010F08C\n"
);

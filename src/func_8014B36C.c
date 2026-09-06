#include "common.h"
__asm__(
  ".globl func_8014B36C\n"
  ".type func_8014B36C, @function\n"
  "func_8014B36C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80141FC4\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF2A0\n\tjal func_800F8FB8\n\taddu $a0, $zero, $zero\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F8188\n\tori $a0, $zero, 0xF2D0\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6564\n\tori $a0, $zero, 0xF397\n\tjal func_8014DA2C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF320\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF2D0\n\tjal func_8014B98C\n\tnop\n\tjal func_800953F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014B36C, .-func_8014B36C\n"
);

#include "common.h"
__asm__(
  ".globl func_801766B0\n"
  ".type func_801766B0, @function\n"
  "func_801766B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420B\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4301\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4304\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x47\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x45\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800F9868\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801766B0, .-func_801766B0\n"
);

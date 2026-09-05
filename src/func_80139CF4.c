#include "common.h"
__asm__(
  ".globl func_80139CF4\n"
  ".type func_80139CF4, @function\n"
  "func_80139CF4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3F\n\tjal func_801266F0\n\tnop\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFFFC\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x8D\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x8A\n\tjal func_8016EA7C\n\tnop\n\tjal func_80126610\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x13\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4040\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFE89\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x121\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x122\n\tjal func_8011EE34\n\tnop\n\tjal func_801241B8\n\tnop\n\tjal func_8011F6A4\n\tnop\n\tjal func_8011F864\n\tnop\n\tlui $a0, %hi(D_801D7D68)\n\taddiu $a0, $a0, %lo(D_801D7D68)\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\tjal func_80139E34\n\tnop\n\tjal func_80126610\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F81E8\n\taddiu $a0, $zero, 0x212C\n\tjal func_801240A8\n\tnop\n\tjal func_801240D0\n\tnop\n\tjal func_80126418\n\tnop\n\tjal func_801241B8\n\tnop\n\tjal func_80122A24\n\tnop\n\tjal func_8011F6A4\n\tnop\n\tjal func_80126480\n\tnop\n\tjal func_80126590\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80139CF4, .-func_80139CF4\n"
);

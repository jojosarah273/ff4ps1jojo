#include "common.h"
__asm__(
  ".globl func_801386C8\n"
  ".type func_801386C8, @function\n"
  "func_801386C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801266A0\n\tnop\n\tjal func_8016EA7C\n\tnop\n\tjal func_80125A64\n\tnop\n\tlui $a0, %hi(D_801D7D68)\n\taddiu $a0, $a0, %lo(D_801D7D68)\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\tjal func_80123A70\n\tnop\n\tjal func_80126330\n\tnop\n\tjal func_8011F6A4\n\tnop\n\tjal func_80126590\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801386C8, .-func_801386C8\n"
);

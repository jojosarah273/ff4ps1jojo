#include "common.h"
__asm__(
  ".globl func_800FB160\n"
  ".type func_800FB160, @function\n"
  "func_800FB160:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800FA460\n\tnop\n\tjal func_800FB2E8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x6FA\n\tjal func_800FDD28\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x14\n\tjal func_800F71DC\n\tori $a0, $zero, 0x8980\n\tjal func_800FE978\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x14\n\tjal func_800F7500\n\tori $a0, $zero, 0x8200\n\tjal func_8011C1F8\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x148B80 >> 16)\n\t.L800FB1D4:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x148B80 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xEDB\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x100\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FB1D4\n\tlui $a0, (0x148B80 >> 16)\n\tjal func_800FFADC\n\tnop\n\tjal func_8011D218\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FB160, .-func_800FB160\n"
);

#include "common.h"
__asm__(
  ".globl func_8013954C\n"
  ".type func_8013954C, @function\n"
  "func_8013954C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80139554:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5DD4\n\taddiu $a0, $zero, 0x99\n\tjal func_800F5DD4\n\taddiu $a0, $zero, 0x99\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9200\n\tnop\n\tjal func_801395E4\n\tnop\n\tjal func_8011F684\n\tnop\n\tjal func_801264E8\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F5CCC\n\tnop\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80139554\n\tnop\n\tjal func_8011F884\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8D6C\n\taddu $a0, $zero, $zero\n\tjal func_801391D4\n\taddiu $a0, $zero, 0x1\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013954C, .-func_8013954C\n"
);

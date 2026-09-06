#include "common.h"
__asm__(
  ".globl func_8012B050\n"
  ".type func_8012B050, @function\n"
  "func_8012B050:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B1A\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1B23\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B25\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B22\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B24\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1B19\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012B050, .-func_8012B050\n"
);

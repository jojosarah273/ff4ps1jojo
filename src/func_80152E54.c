#include "common.h"
__asm__(
  ".globl func_80152E54\n"
  ".type func_80152E54, @function\n"
  "func_80152E54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5480\n\tnop\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x395E\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x3960\n\tjal func_800F7FCC\n\taddu $a0, $v0, $zero\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x3962\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80152E54, .-func_80152E54\n"
);

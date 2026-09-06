#include "common.h"
__asm__(
  ".globl func_80121EBC\n"
  ".type func_80121EBC, @function\n"
  "func_80121EBC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x65\n\tjal func_800F5480\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x63\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F61E8\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F971C\n\tnop\n\tjal func_80121F14\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80121EBC, .-func_80121EBC\n"
);

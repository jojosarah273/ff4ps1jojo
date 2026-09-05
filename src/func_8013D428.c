#include "common.h"
__asm__(
  ".globl func_8013D428\n"
  ".type func_8013D428, @function\n"
  "func_8013D428:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\t.L8013D440:\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x340\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x344\n\tjal func_800F6DE8\n\taddiu $a0, $zero, 0x342\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x2\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x346\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tjal func_800F5A90\n\tori $a0, $zero, 0xFFFC\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8013D440\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013D428, .-func_8013D428\n"
);

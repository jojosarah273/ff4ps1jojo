#include "common.h"
__asm__(
  ".globl func_80160B8C\n"
  ".type func_80160B8C, @function\n"
  "func_80160B8C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38FE\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x2\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80160C1C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2721\n\tjal func_800F4280\n\taddiu $a0, $zero, 0x28A2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160BEC\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\tj .L80160C1C\n\tnop\n\t.L80160BEC:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x2720\n\tjal func_800F4280\n\taddiu $a0, $zero, 0x28A2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80160C1C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x38FE\n\t.L80160C1C:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80160B8C, .-func_80160B8C\n"
);

#include "common.h"
__asm__(
  ".globl func_800FCA08\n"
  ".type func_800FCA08, @function\n"
  "func_800FCA08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFDD\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xE\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FCAA8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800FCC84\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x430\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5800\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4304\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\taddiu $v0, $zero, 0x1\n\tsh $v0, %gp_rel(D_8019ED78)($gp)\n\t.L800FCAA8:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FCA08, .-func_800FCA08\n"
);

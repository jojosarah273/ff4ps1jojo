#include "common.h"
__asm__(
  ".globl func_80120BDC\n"
  ".type func_80120BDC, @function\n"
  "func_80120BDC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80120BE4:\n\tjal func_8011F320\n\tnop\n\tjal func_8011EE34\n\tnop\n\tlh $v0, %gp_rel(D_8019ED9C)($gp)\n\tnop\n\tbeqz $v0, .L80120C2C\n\tnop\n\tjal func_8013B764\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x45\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tjal func_8013B7B8\n\tnop\n\t.L80120C2C:\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x40\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1D\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F5410\n\tnop\n\tjal func_800F4064\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80120BE4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80120BDC, .-func_80120BDC\n"
);

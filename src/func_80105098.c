#include "common.h"
__asm__(
  ".globl func_80105098\n"
  ".type func_80105098, @function\n"
  "func_80105098:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F5140\n\tnop\n\tjal func_800F96E0\n\tnop\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x6A1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80105100\n\tnop\n\tjal func_800F6D70\n\taddiu $a0, $zero, 0x6A1\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4370\n\taddiu $a0, $zero, 0xD2\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80105198\n\tnop\n\t.L80105100:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xAB\n\tjal func_800F96E0\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F5410\n\tnop\n\tlw $a0, %gp_rel(D_8019ED58)($gp)\n\tlui $v0, %hi(D_80198AC4)\n\tlhu $v1, 0x0($a0)\n\taddiu $v0, $v0, %lo(D_80198AC4)\n\taddu $v1, $v1, $v0\n\tlbu $a0, 0x0($v1)\n\tjal func_800F4008\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F5410\n\tnop\n\tlw $a0, %gp_rel(D_8019ED58)($gp)\n\tlui $v0, %hi(D_80198ACC)\n\tlhu $v1, 0x0($a0)\n\taddiu $v0, $v0, %lo(D_80198ACC)\n\taddu $v1, $v1, $v0\n\tlbu $a0, 0x0($v1)\n\tjal func_800F4008\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xAE\n\tjal func_8010D4EC\n\tnop\n\t.L80105198:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80105098, .-func_80105098\n"
);

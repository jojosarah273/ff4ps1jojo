#include "common.h"
__asm__(
  ".globl func_800FE9F8\n"
  ".type func_800FE9F8, @function\n"
  "func_800FE9F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FEAF0\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5140\n\tnop\n\tjal func_800F9690\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6F\n\tjal func_800F5410\n\tnop\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tlui $a0, (0x14FB1F >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x14FB1F & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F38\n\taddu $a0, $v0, $a0\n\tjal func_800F96E0\n\tnop\n\tjal func_800F8E50\n\taddiu $a0, $zero, 0x4209\n\tlui $a1, %hi(D_8019FFE8)\n\taddiu $a1, $a1, %lo(D_8019FFE8)\n\tlhu $v1, 0x34($a1)\n\tlw $a0, %gp_rel(D_8019ED58)($gp)\n\tsh $v1, 0x3E($a1)\n\tlhu $v0, 0x0($a0)\n\tnop\n\tsubu $v0, $v0, $v1\n\tsh $v0, 0x42($a1)\n\tlhu $v1, 0x0($a0)\n\tlhu $v0, 0x6($a1)\n\taddiu $a0, $zero, 0xB1\n\tsubu $v1, $v1, $v0\n\taddiu $v1, $v1, 0x10\n\tjal func_800F6630\n\tsh $v1, 0xA($a1)\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FEAD8\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF\n\tj .L800FEAE0\n\tnop\n\t.L800FEAD8:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x80\n\t.L800FEAE0:\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2100\n\tj .L800FEB00\n\tnop\n\t.L800FEAF0:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x81\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\t.L800FEB00:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FE9F8, .-func_800FE9F8\n"
);

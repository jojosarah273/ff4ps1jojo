#include "common.h"
__asm__(
  ".globl func_80129C54\n"
  ".type func_80129C54, @function\n"
  "func_80129C54:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B49\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80129C94\n\tnop\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x152\n\tj .L80129C9C\n\tnop\n\t.L80129C94:\n\tjal func_800F7500\n\taddiu $a0, $zero, 0xE0\n\t.L80129C9C:\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1B0A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\t.L80129CB4:\n\tjal func_800F6B68\n\taddu $a0, $zero, $zero\n\tjal func_800F6364\n\tnop\n\tjal func_801245B4\n\tnop\n\tjal func_800F8960\n\tori $a0, $zero, 0xC600\n\tjal func_800F3D48\n\tnop\n\tjal func_800F8960\n\tori $a0, $zero, 0xC640\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5DA0\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5B8C\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80129CB4\n\tnop\n\tjal func_800F960C\n\tnop\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80129C54, .-func_80129C54\n"
);

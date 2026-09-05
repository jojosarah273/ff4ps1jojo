#include "common.h"
__asm__(
  ".globl func_800FF978\n"
  ".type func_800FF978, @function\n"
  "func_800FF978:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4200\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F71DC\n\tori $a0, $zero, 0xC680\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1B\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x49\n\tjal func_80170458\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4C\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1D00\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F71DC\n\tori $a0, $zero, 0x8000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4A\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x49\n\tjal func_80170458\n\tnop\n\tjal func_800F7500\n\taddu $a0, $zero, $zero\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L800FFA20:\n\tlui $a0, (0xD8040 >> 16)\n\t.L800FFA24:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xD8040 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xE5B\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFA20\n\tnop\n\t.L800FFA6C:\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0xE5B\n\tjal func_800F63BC\n\tnop\n\tlw $v0, %gp_rel(D_8019ED60)($gp)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\tlbu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0xF\n\tjal func_800F4248\n\tsb $v1, 0x0($a1)\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L800FFA6C\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x80\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L800FFA24\n\tlui $a0, (0xD8040 >> 16)\n\tjal func_80174348\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FF978, .-func_800FF978\n"
);

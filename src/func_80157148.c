#include "common.h"
__asm__(
  ".globl func_80157148\n"
  ".type func_80157148, @function\n"
  "func_80157148:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_8015240C\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0xE3\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x80\n\tlui $a0, (0xEA380 >> 16)\n\t.L8015718C:\n\tjal func_800F6C68\n\tori $a0, $a0, (0xEA380 & 0xFFFF)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x289C\n\tjal func_800F6364\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x83\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015718C\n\tlui $a0, (0xEA380 >> 16)\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80157148, .-func_80157148\n"
);

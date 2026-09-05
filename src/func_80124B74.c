#include "common.h"
__asm__(
  ".globl func_80124B74\n"
  ".type func_80124B74, @function\n"
  "func_80124B74:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x73\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x75\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x41\n\t.L80124B9C:\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x163\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x7\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80124B9C\n\tnop\n\tjal func_800F7594\n\taddiu $a0, $zero, 0x41\n\t.L80124BCC:\n\tjal func_80124C64\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1D\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x163\n\tori $v0, $v0, 0x80\n\tjal func_800F8960\n\tsb $v0, 0x0($v1)\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x73\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x74\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x75\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F7918\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80124C54\n\tnop\n\tjal func_800F5A90\n\taddiu $a0, $zero, 0x7\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80124BCC\n\tnop\n\t.L80124C54:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80124B74, .-func_80124B74\n"
);

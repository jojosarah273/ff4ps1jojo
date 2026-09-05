#include "common.h"
__asm__(
  ".globl func_8012C8A4\n"
  ".type func_8012C8A4, @function\n"
  "func_8012C8A4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1B3B\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xD5\n\tjal func_800F5140\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x3\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6764\n\taddiu $a0, $zero, 0x60\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x45\n\tlui $a0, (0x1EFEC3 >> 16)\n\tjal func_800F4B1C\n\tori $a0, $a0, (0x1EFEC3 & 0xFFFF)\n\tjal func_800F8378\n\taddiu $a0, $zero, 0x60\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8012C948\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_801221EC\n\tnop\n\tj .L8012C970\n\tnop\n\t.L8012C948:\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_801991AE)\n\tlhu $a0, %lo(D_801991AE)($v1)\n\tjal func_800F7500\n\tnop\n\tjal func_8012C2F8\n\tnop\n\tjal func_8012C980\n\tnop\n\t.L8012C970:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8012C8A4, .-func_8012C8A4\n"
);

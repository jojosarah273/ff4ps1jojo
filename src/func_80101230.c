#include "common.h"
__asm__(
  ".globl func_80101230\n"
  ".type func_80101230, @function\n"
  "func_80101230:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x172C\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x3\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801012BC\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1702\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x172E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1705\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 6\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x172F\n\tj .L801012EC\n\tnop\n\t.L801012BC:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1700\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0xFB\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x172E\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x172F\n\t.L801012EC:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1707\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x1730\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xC0\n\taddiu $v0, $v0, 0x3\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80101330\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L80101330:\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x172C\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80101230, .-func_80101230\n"
);

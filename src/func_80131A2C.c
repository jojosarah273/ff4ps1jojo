#include "common.h"
__asm__(
  ".globl func_80131A2C\n"
  ".type func_80131A2C, @function\n"
  "func_80131A2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1BBC\n\tjal func_801224D0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1B8B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80131B20\n\tnop\n\tjal func_800F7270\n\taddiu $a0, $zero, 0x43\n\tlui $a0, (0x14FF9D >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x14FF9D & 0xFFFF)\n\tjal func_80124EAC\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x3\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xC0\n\tjal func_800F4120\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80131B20\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BBC\n\tjal func_80132178\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x7\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $a0, 0x0($v0)\n\tjal func_800F3B04\n\taddiu $a0, $a0, 0x9\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80131B10\n\tnop\n\tjal func_800F6BE0\n\taddiu $a0, $zero, 0x9\n\t.L80131B10:\n\tjal func_800F87DC\n\taddiu $a0, $zero, 0x7\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\t.L80131B20:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131A2C, .-func_80131A2C\n"
);

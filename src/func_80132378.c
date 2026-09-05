#include "common.h"
__asm__(
  ".globl func_80132378\n"
  ".type func_80132378, @function\n"
  "func_80132378:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L80132388:\n\tjal func_800F9200\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1B8B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801323F0\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_80132178\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x4\n\tori $v0, $v0, 0x40\n\tjal func_800F8768\n\tsb $v0, 0x0($v1)\n\t.L801323F0:\n\tjal func_800F93DC\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80132388\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132378, .-func_80132378\n"
);

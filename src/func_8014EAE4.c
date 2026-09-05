#include "common.h"
__asm__(
  ".globl func_8014EAE4\n"
  ".type func_8014EAE4, @function\n"
  "func_8014EAE4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF261\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014EB44\n\tnop\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\tlbu $v0, 0x0($v1)\n\tjal func_800F5410\n\tsb $v0, 0x0($a0)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x10\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L8014EB44:\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tnop\n\tsltiu $v1, $a0, 0x1F\n\tbeqz $v1, .L8014EC08\n\tlui $v0, %hi(jtbl_800F2CB0)\n\taddiu $v0, $v0, %lo(jtbl_800F2CB0)\n\tsll $v1, $a0, 2\n\taddu $v1, $v1, $v0\n\tlw $a0, 0x0($v1)\n\tnop\n\tjr $a0\n\tnop\n\tjal func_8014ED40\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014EC98\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014EC68\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014EC18\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014ED10\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014ECC8\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014EDD0\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014ED88\n\tnop\n\tj .L8014EC08\n\tnop\n\tjal func_8014ED40\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014EAE4, .-func_8014EAE4\n"
);

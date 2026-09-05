#include "common.h"
__asm__(
  ".globl func_8010D894\n"
  ".type func_8010D894, @function\n"
  "func_8010D894:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F9200\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x7\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F93DC\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x3D\n\tsrl $v0, $v0, 3\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0xFE5\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x80\n\tbnez $v0, .L8010D914\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8010D934\n\tnop\n\t.L8010D914:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3D\n\t.L8010D934:\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x3E\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x3D\n\tjal func_800F7270\n\tsh $v1, 0x0($a1)\n\tjal func_800F6C68\n\taddiu $a0, $zero, 0x12E0\n\t.L8010D96C:\n\tjal func_800F5A90\n\taddu $a0, $zero, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L8010D99C\n\tnop\n\tjal func_800F7864\n\tnop\n\tjal func_800F5EA0\n\tnop\n\tj .L8010D96C\n\tnop\n\t.L8010D99C:\n\tjal func_800F7864\n\tnop\n\tjal func_800F76E8\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F4008\n\taddu $a0, $zero, $zero\n\tjal func_800F960C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8010D894, .-func_8010D894\n"
);

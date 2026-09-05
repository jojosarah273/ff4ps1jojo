#include "common.h"
__asm__(
  ".globl func_8013D040\n"
  ".type func_8013D040, @function\n"
  "func_8013D040:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x342\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x341\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x6CC0\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013D098\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x340\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4\n\tj .L8013D0F4\n\tnop\n\t.L8013D098:\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tnor $v0, $zero, $v0\n\tjal func_800F5480\n\tsb $v0, 0x0($v1)\n\tjal func_800F8058\n\taddiu $a0, $zero, 0x10\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x340\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\txori $v0, $v0, 0x40\n\tsb $v0, 0x0($v1)\n\t.L8013D0F4:\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x343\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013D040, .-func_8013D040\n"
);

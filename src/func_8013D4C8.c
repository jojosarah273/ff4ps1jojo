#include "common.h"
__asm__(
  ".globl func_8013D4C8\n"
  ".type func_8013D4C8, @function\n"
  "func_8013D4C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x342\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x341\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x6CC0\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013D520\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x340\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x3F\n\tj .L8013D550\n\tnop\n\t.L8013D520:\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x340\n\tnor $v0, $zero, $v0\n\tjal func_800F8960\n\tsb $v0, 0x0($v1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\t.L8013D550:\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF484\n\tjal func_800F5ECC\n\taddu $a0, $v0, $zero\n\tjal func_800F8960\n\taddiu $a0, $zero, 0x343\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tjal func_800F63BC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013D4C8, .-func_8013D4C8\n"
);

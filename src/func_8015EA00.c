#include "common.h"
__asm__(
  ".globl func_8015EA00\n"
  ".type func_8015EA00, @function\n"
  "func_8015EA00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_80061860\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F5410\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0xA4\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x270B\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x270D\n\tjal func_800F5520\n\taddu $a0, $v0, $zero\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L8015EA60\n\tnop\n\tjal func_800F658C\n\taddiu $a0, $zero, 0x270D\n\t.L8015EA60:\n\tjal func_800F81B0\n\taddiu $a0, $zero, 0x270B\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xA5\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xA5\n\tori $v0, $v0, 0xC0\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015EA00, .-func_8015EA00\n"
);

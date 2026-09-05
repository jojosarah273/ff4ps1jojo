#include "common.h"
__asm__(
  ".globl func_800FBE44\n"
  ".type func_800FBE44, @function\n"
  "func_800FBE44:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x1C($sp)\n\tjal func_800F71DC\n\tsw $s0, 0x18($sp)\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x47\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x2800\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F71DC\n\tori $a0, $zero, 0xC000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x3D\n\tjal func_801766B0\n\tlui $s0, %hi(D_801CFD68)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x47\n\tjal func_801766B0\n\taddiu $s0, $s0, %lo(D_801CFD68)\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddu $a3, $zero, $zero\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x200\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, 0x11\n\taddu $a0, $s0, $zero\n\taddiu $a1, $zero, 0x300\n\taddu $a2, $zero, $zero\n\tjal func_8017F8F8\n\taddiu $a3, $zero, -0x1\n\taddiu $a0, $sp, 0x10\n\taddiu $a1, $zero, 0x21E\n\taddiu $a2, $zero, 0x30\n\taddiu $v0, $zero, 0xDF\n\taddiu $v1, $zero, 0x340\n\tlui $at, %hi(D_8019EE30)\n\tsh $v0, %lo(D_8019EE30)($at)\n\tlui $at, %hi(D_8019EE2E)\n\tsh $v0, %lo(D_8019EE2E)($at)\n\tlui $at, %hi(D_8019EE2C)\n\tsh $v0, %lo(D_8019EE2C)($at)\n\taddiu $v0, $zero, 0xF0\n\tsh $v1, 0x10($sp)\n\taddiu $v1, $zero, 0x2\n\tsh $v0, 0x12($sp)\n\taddiu $v0, $zero, 0x8\n\tsh $v1, 0x14($sp)\n\tjal func_80194700\n\tsh $v0, 0x16($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x1C($sp)\n\tlw $s0, 0x18($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FBE44, .-func_800FBE44\n"
);

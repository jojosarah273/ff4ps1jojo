#include "common.h"
__asm__(
  ".globl func_80103FE8\n"
  ".type func_80103FE8, @function\n"
  "func_80103FE8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x4000\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x47\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3C\n\tjal func_800F71DC\n\tori $a0, $zero, 0xFEE0\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x3D\n\tjal func_801766B0\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\tlui $a0, (0x1EFFE0 >> 16)\n\t.L80104044:\n\tjal func_800F6C68\n\tori $a0, $a0, (0x1EFFE0 & 0xFFFF)\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xCDB\n\tjal func_800F8768\n\taddiu $a0, $zero, 0xDDB\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80104044\n\tlui $a0, (0x1EFFE0 >> 16)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80103FE8, .-func_80103FE8\n"
);

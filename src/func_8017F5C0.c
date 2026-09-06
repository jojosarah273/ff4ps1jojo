#include "common.h"
__asm__(
  ".globl func_8017F5C0\n"
  ".type func_8017F5C0, @function\n"
  "func_8017F5C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $v0, %hi(D_800D2105)\n\tlbu $v0, %lo(D_800D2105)($v0)\n\tnop\n\tandi $v0, $v0, 0x7\n\tbeqz $v0, .L8017F60C\n\tlui $v0, 0x1F80\n\tori $v0, $v0, 0x37C\n\taddu $t0, $v0, $zero\n\tsw $sp, 0x0($t0)\n\taddiu $t0, $t0, -0x4\n\taddu $sp, $t0, $zero\n\tjal func_8017EAC8\n\tnop\n\taddiu $sp, $sp, 0x4\n\tlw $sp, 0x0($sp)\n\tj .L8017F630\n\tnop\n\t.L8017F60C:\n\tori $v0, $v0, 0x37C\n\taddu $t0, $v0, $zero\n\tsw $sp, 0x0($t0)\n\taddiu $t0, $t0, -0x4\n\taddu $sp, $t0, $zero\n\tjal func_8017F148\n\tnop\n\taddiu $sp, $sp, 0x4\n\tlw $sp, 0x0($sp)\n\t.L8017F630:\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8017F5C0, .-func_8017F5C0\n"
);

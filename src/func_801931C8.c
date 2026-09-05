#include "common.h"
__asm__(
  ".globl func_801931C8\n"
  ".type func_801931C8, @function\n"
  "func_801931C8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(D_8019CF14)\n\taddiu $a0, $a0, %lo(D_8019CF14)\n\tlui $v1, %hi(D_8019CF38)\n\tlw $v1, %lo(D_8019CF38)($v1)\n\taddiu $v0, $zero, 0x100\n\tsw $ra, 0x10($sp)\n\tsw $v0, 0x0($v1)\n\tlui $at, %hi(D_8019CF34)\n\tsw $zero, %lo(D_8019CF34)($at)\n\tjal func_801932B8\n\taddiu $a1, $zero, 0x8\n\tlui $a1, %hi(func_80193220)\n\taddiu $a1, $a1, %lo(func_80193220)\n\tjal func_80192B28\n\taddu $a0, $zero, $zero\n\tlui $v0, %hi(func_8019328C)\n\taddiu $v0, $v0, %lo(func_8019328C)\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801931C8, .-func_801931C8\n"
);

#include "common.h"
__asm__(
  ".globl func_801932E8\n"
  ".type func_801932E8, @function\n"
  "func_801932E8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $a0, %hi(D_8019CF48)\n\taddiu $a0, $a0, %lo(D_8019CF48)\n\tsw $ra, 0x10($sp)\n\tjal func_80193560\n\taddiu $a1, $zero, 0x8\n\taddiu $a0, $zero, 0x3\n\tlui $v0, %hi(D_8019CF44)\n\tlw $v0, %lo(D_8019CF44)($v0)\n\tlui $a1, %hi(func_80193334)\n\taddiu $a1, $a1, %lo(func_80193334)\n\tjal func_80192B28\n\tsw $zero, 0x0($v0)\n\tlui $v0, %hi(func_801934B4)\n\taddiu $v0, $v0, %lo(func_801934B4)\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801932E8, .-func_801932E8\n"
);

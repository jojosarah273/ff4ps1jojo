#include "common.h"
__asm__(
  ".globl func_8019119C\n"
  ".type func_8019119C, @function\n"
  "func_8019119C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tlui $at, %hi(D_8019B9F0)\n\tsw $zero, %lo(D_8019B9F0)($at)\n\tlui $at, %hi(D_8019B9EC)\n\tsw $zero, %lo(D_8019B9EC)($at)\n\tlui $at, %hi(D_8019B9FC)\n\tsw $zero, %lo(D_8019B9FC)($at)\n\tlui $at, %hi(D_8019B9F8)\n\tjal func_80192AF8\n\tsw $zero, %lo(D_8019B9F8)($at)\n\tlui $a1, %hi(func_8019153C)\n\taddiu $a1, $a1, %lo(func_8019153C)\n\tjal func_80192B28\n\taddiu $a0, $zero, 0x2\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8019119C, .-func_8019119C\n"
);

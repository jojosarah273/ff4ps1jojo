#include "common.h"
__asm__(
  ".globl func_80141DC0\n"
  ".type func_80141DC0, @function\n"
  "func_80141DC0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x4E\n\t.L80141DD0:\n\tjal func_80140558\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x4\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\taddiu $a0, $zero, 0x202\n\tlbu $v1, 0x0($v0)\n\tlui $a1, %hi(D_8019ED50)\n\tlw $a1, %lo(D_8019ED50)($a1)\n\tsrl $v1, $v1, 2\n\tsb $v1, 0x0($v0)\n\tjal func_800F7728\n\tsw $v1, 0x0($a1)\n\tbnez $v0, .L80141E28\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x34\n\tj .L80141E30\n\tnop\n\t.L80141E28:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x38\n\t.L80141E30:\n\tjal func_800F8188\n\tori $a0, $zero, 0xF330\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x10\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80141DD0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x38\n\tjal func_800F8188\n\tori $a0, $zero, 0xF330\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80141DC0, .-func_80141DC0\n"
);

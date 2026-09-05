#include "common.h"
__asm__(
  ".globl func_8014D080\n"
  ".type func_8014D080, @function\n"
  "func_8014D080:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_801495D4\n\tnop\n\tjal func_80074B98\n\tnop\n\tjal func_800F71DC\n\taddu $a0, $zero, $zero\n\t.L8014D0A0:\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF281\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4FAC\n\taddiu $a0, $zero, 0x101\n\tbnez $v0, .L8014D104\n\tori $a0, $zero, 0xF109\n\tlui $v0, %hi(D_8019ED5C)\n\tlw $v0, %lo(D_8019ED5C)($v0)\n\tlui $a1, %hi(D_8019ED40)\n\tlw $a1, %lo(D_8019ED40)($a1)\n\tlbu $v1, 0x0($v0)\n\tjal func_800F8188\n\tsb $v1, 0x0($a1)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F8188\n\tori $a0, $zero, 0xF10A\n\tjal func_800F9330\n\tnop\n\tjal func_80073EB0\n\tnop\n\tjal func_800F95A0\n\tnop\n\t.L8014D104:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8014D0A0\n\tnop\n\tjal func_800744A0\n\tnop\n\tjal func_800999A0\n\tnop\n\tjal func_801495F4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014D080, .-func_8014D080\n"
);

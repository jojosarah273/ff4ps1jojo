#include "common.h"
__asm__(
  ".globl func_80174F64\n"
  ".type func_80174F64, @function\n"
  "func_80174F64:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1704\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x6\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80174FF4\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7A\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0xE\n\tsrl $v0, $v0, 2\n\tjal func_800F4248\n\tsb $v0, 0x0($v1)\n\tlui $a0, (0x15C3DA >> 16)\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\tlhu $v1, 0x0($v0)\n\tori $a0, $a0, (0x15C3DA & 0xFFFF)\n\tjal func_800F6C68\n\tsh $v1, 0x0($a1)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xEC7\n\tlui $a0, (0x15C3DB >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0x15C3DB & 0xFFFF)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0xEC8\n\t.L80174FF4:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80174F64, .-func_80174F64\n"
);

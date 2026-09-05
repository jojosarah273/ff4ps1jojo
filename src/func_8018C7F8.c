#include "common.h"
__asm__(
  ".globl func_8018C7F8\n"
  ".type func_8018C7F8, @function\n"
  "func_8018C7F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tlui $v0, (0x7EFF0 >> 16)\n\tori $v0, $v0, (0x7EFF0 & 0xFFFF)\n\tsltu $v0,$v0,$s0\n\tbeqz $v0, .L8018C820\n\tsw $ra, 0x14($sp)\n\tlui $s0, (0x7EFF0 >> 16)\n\tori $s0, $s0, (0x7EFF0 & 0xFFFF)\n\t.L8018C820:\n\tjal func_8018A9DC\n\taddu $a1, $s0, $zero\n\tlui $v0, %hi(D_8019B14C)\n\tlw $v0, %lo(D_8019B14C)($v0)\n\tnop\n\tbnez $v0, .L8018C844\n\taddu $v0, $s0, $zero\n\tlui $at, %hi(D_8019B148)\n\tsw $zero, %lo(D_8019B148)($at)\n\t.L8018C844:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018C7F8, .-func_8018C7F8\n"
);

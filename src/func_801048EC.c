#include "common.h"
__asm__(
  ".globl func_801048EC\n"
  ".type func_801048EC, @function\n"
  "func_801048EC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tlbu $v1, 0x3($v0)\n\tnop\n\tandi $v1, $v1, 0x80\n\tbeqz $v1, .L80104924\n\tnop\n\tlbu $v0, %gp_rel(D_8019ED30)($gp)\n\tnop\n\tbnez $v0, .L80104924\n\taddiu $v0, $zero, 0x1\n\tsb $v0, %gp_rel(D_8019ED30)($gp)\n\t.L80104924:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801048EC, .-func_801048EC\n"
);

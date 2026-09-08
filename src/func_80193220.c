#include "common.h"
__asm__(
  ".globl func_80193220\n"
  ".type func_80193220, @function\n"
  "func_80193220:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, D_8019CF34\n\tlw $v0, D_8019CF34($v0)\n\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $0, $0\n\tsw $s0, 0x10($sp)\n\tlui $s0, D_8019CF14\n\taddiu $s0, $s0, D_8019CF14\n\tsw $ra, 0x18($sp)\n\taddiu $v0, $v0, 0x1\n\tlui $at, D_8019CF34\n\tsw $v0, D_8019CF34($at)\n\t.L80193250:\n\tlw $v0, 0x0($s0)\n\tnop\n\tbeqz $v0, .L80193268\n\tnop\n\tjalr $v0\n\tnop\n\t.L80193268:\n\taddiu $s1, $s1, 0x1\n\tslti $v0, $s1, 0x8\n\tbnez $v0, .L80193250\n\taddiu $s0, $s0, 0x4\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80193220, .-func_80193220\n"
);

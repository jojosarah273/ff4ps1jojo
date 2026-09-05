#include "common.h"
__asm__(
  ".globl func_80187B00\n"
  ".type func_80187B00, @function\n"
  "func_80187B00:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tsw $zero, %gp_rel(D_8019EF28)($gp)\n\tsw $zero, %gp_rel(D_8019EF24)($gp)\n\tjal func_80188240\n\tnop\n\tbeqz $v0, .L80187B28\n\tnop\n\tjal func_80187B50\n\taddiu $a0, $zero, 0x1\n\t.L80187B28:\n\tlh $v0, %gp_rel(D_8019EF0A)($gp)\n\tnop\n\tbeqz $v0, .L80187B40\n\tnop\n\tjal func_80187AEC\n\tnop\n\t.L80187B40:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187B00, .-func_80187B00\n"
);

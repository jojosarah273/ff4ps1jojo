#include "common.h"
__asm__(
  ".globl func_8013B764\n"
  ".type func_8013B764, @function\n"
  "func_8013B764:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801CFD68)\n\taddiu $v0, $v0, %lo(D_801CFD68)\n\tori $v1, $zero, 0x8000\n\taddu $v0, $v0, $v1\n\taddiu $a1, $zero, 0x20FF\n\taddiu $v1, $zero, 0x204E\n\taddiu $a0, $zero, 0x2070\n\tsh $v1, 0x50D8($v0)\n\taddiu $v1, $zero, 0x2067\n\tsh $a0, 0x50DA($v0)\n\taddiu $a0, $zero, 0x206F\n\tsh $v1, 0x50DC($v0)\n\taddiu $v1, $zero, 0x2064\n\tsh $a1, 0x5096($v0)\n\tsh $a1, 0x509A($v0)\n\tsh $a1, 0x50D6($v0)\n\tsh $a0, 0x50DE($v0)\n\tsh $v1, 0x50E0($v0)\n\tsh $a1, 0x50E2($v0)\n\tjr $ra\n\tsh $a1, 0x50E4($v0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013B764, .-func_8013B764\n"
);

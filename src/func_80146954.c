#include "common.h"
__asm__(
  ".globl func_80146954\n"
  ".type func_80146954, @function\n"
  "func_80146954:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3B04\n\tori $a0, $zero, 0x8000\n\tlbu $v1, 0x6FC3($v0)\n\tlw $ra, 0x10($sp)\n\tsb $zero, 0x6FC2($v0)\n\tori $v1, $v1, 0x1\n\tsb $v1, 0x6FC3($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80146954, .-func_80146954\n"
);

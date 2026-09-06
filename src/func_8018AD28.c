#include "common.h"
__asm__(
  ".globl func_8018AD28\n"
  ".type func_8018AD28, @function\n"
  "func_8018AD28:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_8018A058\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x10($sp)\n\taddiu $sp, $sp, 0x18\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018AD28, .-func_8018AD28\n"
);

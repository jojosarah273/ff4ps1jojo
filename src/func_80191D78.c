#include "common.h"
__asm__(
  ".globl func_80191D78\n"
  ".type func_80191D78, @function\n"
  "func_80191D78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\tlui $s0, %hi(D_8019BDBC)\n\taddiu $s0, $s0, %lo(D_8019BDBC)\n\tsw $ra, 0x14($sp)\n\tlw $a0, 0x0($s0)\n\tjal func_80191838\n\taddiu $s0, $s0, -0x28\n\tsw $zero, 0x24($s0)\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191D78, .-func_80191D78\n"
);

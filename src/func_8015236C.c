#include "common.h"
__asm__(
  ".globl func_8015236C\n"
  ".type func_8015236C, @function\n"
  "func_8015236C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $ra, 0x20($sp)\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x2000\n\tsw $zero, 0x10($sp)\n\tsw $zero, 0x14($sp)\n\tlbu $v1, 0x193D($v0)\n\tnop\n\tsw $v1, 0x10($sp)\n\tlbu $a0, 0x193E($v0)\n\tlw $v1, 0x14($sp)\n\taddiu $a1, $zero, -0x100\n\tsb $a0, 0x11($sp)\n\tlbu $a0, 0x193F($v0)\n\tand $v1, $v1, $a1\n\tor $v1, $v1, $a0\n\tsw $v1, 0x14($sp)\n\tlbu $a0, 0x1940($v0)\n\tlw $v1, 0x10($sp)\n\tsb $a0, 0x15($sp)\n\tlw $a0, 0x14($sp)\n\tnop\n\tmult $v1, $a0\n\tlw $ra, 0x20($sp)\n\tmflo $v1\n\tsw $v1, 0x18($sp)\n\tlbu $a0, 0x18($sp)\n\taddiu $a1, $sp, 0x18\n\tsb $a0, 0x1941($v0)\n\tlbu $v1, 0x1($a1)\n\tnop\n\tsb $v1, 0x1942($v0)\n\tlbu $a0, 0x2($a1)\n\tnop\n\tsb $a0, 0x1943($v0)\n\tlbu $v1, 0x3($a1)\n\tnop\n\tsb $v1, 0x1944($v0)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8015236C, .-func_8015236C\n"
);

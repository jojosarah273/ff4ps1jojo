#include "common.h"
__asm__(
  ".globl func_80131F98\n"
  ".type func_80131F98, @function\n"
  "func_80131F98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x48\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x49\n\tnor $v0, $zero, $v0\n\tjal func_800F824C\n\tsb $v0, 0x0($v1)\n\tjal func_800F8EBC\n\taddiu $a0, $zero, 0x4B\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\t.L80131FD8:\n\tjal func_80132010\n\tnop\n\tjal func_800F61E8\n\tnop\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80131FD8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80131F98, .-func_80131F98\n"
);

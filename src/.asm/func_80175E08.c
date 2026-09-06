#include "common.h"
__asm__(
  ".globl func_80175E08\n"
  ".type func_80175E08, @function\n"
  "func_80175E08:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80175E10:\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1703\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1703\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x5\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80175E48\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1703\n\t.L80175E48:\n\tjal func_80175E88\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1000\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80175E10\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xCC\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80175E08, .-func_80175E08\n"
);

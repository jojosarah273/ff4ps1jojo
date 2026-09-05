#include "common.h"
__asm__(
  ".globl func_801046F4\n"
  ".type func_801046F4, @function\n"
  "func_801046F4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x3\n\tsw $ra, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x1705\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x79\n\tlui $s0, %hi(D_80198AB4)\n\t.L80104724:\n\tjal func_800FE870\n\tnop\n\tjal func_800FF024\n\tnop\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsrl $v0, $v0, 2\n\tjal func_800F9690\n\tsb $v0, 0x0($v1)\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\taddiu $a0, $s0, %lo(D_80198AB4)\n\tlhu $v1, 0x0($v0)\n\tlw $a1, %gp_rel(D_8019ED40)($gp)\n\taddu $v1, $v1, $a0\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x6F8\n\tjal func_800F8188\n\tsb $v0, 0x0($a1)\n\tjal func_800FE7D8\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x79\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x20\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801047D4\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x6D0\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1701\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x171B\n\tjal func_800F7210\n\taddiu $a0, $zero, 0x1706\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1719\n\t.L801047D4:\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80104724\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801046F4, .-func_801046F4\n"
);

#include "common.h"
__asm__(
  ".globl func_800FDBBC\n"
  ".type func_800FDBBC, @function\n"
  "func_800FDBBC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddiu $a0, $zero, 0x80\n\tsw $ra, 0x14($sp)\n\tjal func_800F654C\n\tsw $s0, 0x10($sp)\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7C\n\tjal func_800F7864\n\tlui $s0, %hi(D_80198AA4)\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F9690\n\taddiu $s0, $s0, %lo(D_80198AA4)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x0($v0)\n\tjal func_800F9690\n\tsb $v1, 0x0($a0)\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tjal func_800FDA9C\n\tori $a0, $a0, 0x2000\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x7C\n\tjal func_800F7864\n\tnop\n\tjal func_800F4248\n\taddiu $a0, $zero, 0xF\n\tjal func_800F9690\n\tnop\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED40)($gp)\n\taddu $v0, $v0, $s0\n\tlbu $v1, 0x0($v0)\n\tjal func_800F5410\n\tsb $v1, 0x0($a0)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x40\n\tjal func_800F9690\n\tnop\n\tlw $v0, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tjal func_800FDA9C\n\tori $a0, $a0, 0x2000\n\tjal func_8018226C\n\taddiu $a0, $zero, 0x2000\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2115\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1E80\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x2116\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x420B\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x4300\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x19\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4301\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x5900\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4302\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4304\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x100\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x4305\n\tjal func_800FCCBC\n\tnop\n\tjal func_801820F4\n\tnop\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FDBBC, .-func_800FDBBC\n"
);

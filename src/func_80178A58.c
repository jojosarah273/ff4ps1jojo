#include "common.h"
__asm__(
  ".globl func_80178A58\n"
  ".type func_80178A58, @function\n"
  "func_80178A58:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x50\n\taddiu $a0, $sp, 0x10\n\tlui $a1, (0x80020000 >> 16)\n\tlui $v0, %hi(D_800F2DF8)\n\tsw $ra, 0x48($sp)\n\tsw $s3, 0x44($sp)\n\tsw $s2, 0x40($sp)\n\tsw $s1, 0x3C($sp)\n\tsw $s0, 0x38($sp)\n\taddiu $t0, $v0, %lo(D_800F2DF8)\n\tlwl $v1, 0x3($t0)\n\tlwr $v1, 0x0($t0)\n\tlwl $a2, 0x7($t0)\n\tlwr $a2, 0x4($t0)\n\tlb $a3, 0x8($t0)\n\tswl $v1, 0x13($sp)\n\tswr $v1, 0x10($sp)\n\tswl $a2, 0x17($sp)\n\tswr $a2, 0x14($sp)\n\tsb $a3, 0x18($sp)\n\tlb $v1, 0x9($t0)\n\tlb $a2, 0xA($t0)\n\tsb $v1, 0x19($sp)\n\tsb $a2, 0x1A($sp)\n\tlui $v1, %hi(D_800F2E04)\n\taddiu $t0, $v1, %lo(D_800F2E04)\n\tlwl $v0, 0x3($t0)\n\tlwr $v0, 0x0($t0)\n\tlwl $a2, 0x7($t0)\n\tlwr $a2, 0x4($t0)\n\tlb $a3, 0x8($t0)\n\tswl $v0, 0x23($sp)\n\tswr $v0, 0x20($sp)\n\tswl $a2, 0x27($sp)\n\tswr $a2, 0x24($sp)\n\tsb $a3, 0x28($sp)\n\tjal func_80178988\n\taddiu $s3, $sp, 0x20\n\taddiu $s1, $sp, 0x30\n\taddu $a0, $s1, $zero\n\tlui $a1, (0x80020000 >> 16)\n\taddiu $s0, $zero, 0x100\n\taddiu $v0, $zero, 0x180\n\taddiu $s2, $zero, 0x80\n\tsh $s0, 0x30($sp)\n\tsh $v0, 0x32($sp)\n\tsh $s0, 0x34($sp)\n\tjal func_80194640\n\tsh $s2, 0x36($sp)\n\taddu $a0, $s1, $zero\n\tlui $a1, (0x80030000 >> 16)\n\taddiu $v0, $zero, 0x300\n\tsh $v0, 0x30($sp)\n\tsh $s0, 0x32($sp)\n\tsh $s0, 0x34($sp)\n\tjal func_80194640\n\tsh $s0, 0x36($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\taddu $a0, $s3, $zero\n\tjal func_80178988\n\tlui $a1, (0x80020000 >> 16)\n\taddu $a0, $s1, $zero\n\tlui $a1, (0x80020000 >> 16)\n\tsh $s0, 0x30($sp)\n\tsh $s0, 0x32($sp)\n\tsh $s0, 0x34($sp)\n\tjal func_80194640\n\tsh $s2, 0x36($sp)\n\taddu $a0, $s1, $zero\n\tlui $a1, (0x80030000 >> 16)\n\taddiu $v0, $zero, 0x200\n\taddiu $v1, $zero, 0xC0\n\tsh $v0, 0x30($sp)\n\taddiu $v0, $zero, 0x40\n\tsh $v1, 0x32($sp)\n\tjal func_80194640\n\tsh $v0, 0x36($sp)\n\tjal func_80194394\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x48($sp)\n\tlw $s3, 0x44($sp)\n\tlw $s2, 0x40($sp)\n\tlw $s1, 0x3C($sp)\n\tlw $s0, 0x38($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x50\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80178A58, .-func_80178A58\n"
);

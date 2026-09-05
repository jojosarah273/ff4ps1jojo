#include "common.h"
__asm__(
  ".globl func_801886B4\n"
  ".type func_801886B4, @function\n"
  "func_801886B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x68\n\tsw $s0, 0x50($sp)\n\taddiu $s0, $sp, 0x10\n\taddu $a0, $s0, $zero\n\tsw $s3, 0x5C($sp)\n\tlui $s3, %hi(D_801F6678)\n\tsw $s1, 0x54($sp)\n\taddiu $s1, $s3, %lo(D_801F6678)\n\tsw $s2, 0x58($sp)\n\taddiu $s2, $zero, 0x1\n\tsw $ra, 0x60($sp)\n\tlbu $v0, 0x18($s1)\n\taddiu $v1, $zero, 0x3\n\tsllv $v0, $s2, $v0\n\tsw $v0, 0x10($sp)\n\tsw $v1, 0x4($s0)\n\tsh $zero, 0x8($s0)\n\tjal func_8018E4E8\n\tsh $zero, 0xA($s0)\n\tlhu $v0, 0x14($s1)\n\tnop\n\tbeqz $v0, .L80188724\n\tnop\n\tlbu $v0, 0x19($s1)\n\taddu $a0, $s0, $zero\n\tsllv $v0, $s2, $v0\n\tjal func_8018E4E8\n\tsw $v0, 0x10($sp)\n\t.L80188724:\n\taddu $a0, $zero, $zero\n\tsw $zero, %lo(D_801F6678)($s3)\n\tlbu $s0, 0x18($s1)\n\tlhu $v0, 0x14($s1)\n\tlbu $v1, 0x19($s1)\n\tsllv $s0, $s2, $s0\n\tsllv $v0, $v0, $v1\n\tjal func_80188FD0\n\tor $s0, $s0, $v0\n\taddu $a0, $zero, $zero\n\tjal func_8018C608\n\taddu $a1, $s0, $zero\n\tjal func_8018DDEC\n\tnop\n\tlw $a0, 0x4($s1)\n\tjal func_8018B4C8\n\tnop\n\tlw $a0, %gp_rel(D_8019EF80)($gp)\n\tjal func_80191858\n\tnop\n\tjal func_8018DFA0\n\taddu $a0, $zero, $zero\n\tjal func_8018DFC4\n\taddu $a0, $zero, $zero\n\tjal func_8018DFE8\n\taddu $a0, $zero, $zero\n\tlw $ra, 0x60($sp)\n\tlw $s3, 0x5C($sp)\n\tlw $s2, 0x58($sp)\n\tlw $s1, 0x54($sp)\n\tlw $s0, 0x50($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x68\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801886B4, .-func_801886B4\n"
);

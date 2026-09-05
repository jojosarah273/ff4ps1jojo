#include "common.h"
__asm__(
  ".globl func_80189D38\n"
  ".type func_80189D38, @function\n"
  "func_80189D38:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x78\n\tlui $t0, (0x600E3 >> 16)\n\tori $t0, $t0, (0x600E3 & 0xFFFF)\n\tsll $a1, $a1, 16\n\tsra $a1, $a1, 16\n\tsll $a2, $a2, 16\n\tsw $s4, 0x68($sp)\n\tlui $s4, %hi(D_801F66E8)\n\taddiu $s4, $s4, %lo(D_801F66E8)\n\tsw $s2, 0x60($sp)\n\tsll $s2, $a1, 2\n\taddu $s2, $s2, $a1\n\tsll $s2, $s2, 2\n\taddu $t1, $s2, $s4\n\tsra $a2, $a2, 12\n\taddiu $a2, $a2, 0x10\n\taddu $v1, $s4, $s2\n\tsw $ra, 0x70($sp)\n\tsw $s5, 0x6C($sp)\n\tsw $s3, 0x64($sp)\n\tsw $s1, 0x5C($sp)\n\tsw $s0, 0x58($sp)\n\tlw $a1, 0x8($v1)\n\taddiu $v1, $zero, 0x1\n\tsllv $v1, $v1, $a0\n\taddiu $a0, $sp, 0x20\n\tsll $s0, $a3, 24\n\tlw $s3, 0x0($t1)\n\tlh $s1, 0x88($sp)\n\taddu $s3, $s3, $a2\n\tlbu $v0, 0x1($s3)\n\tlh $a2, 0x90($sp)\n\tsll $v0, $v0, 1\n\taddu $v0, $v0, $a1\n\tlhu $s5, 0x0($v0)\n\tlh $a1, 0x8C($sp)\n\tsra $s0, $s0, 16\n\tsw $v1, 0x18($sp)\n\tsw $t0, 0x1C($sp)\n\tsw $s3, 0x10($sp)\n\tlbu $a3, 0x10($t1)\n\tjal func_80189E44\n\tsll $s5, $s5, 3\n\taddu $s0, $s0, $s1\n\taddu $s4, $s4, $s2\n\tsh $s0, 0x2E($sp)\n\tlw $v0, 0x4($s4)\n\tlhu $v1, 0x4($s3)\n\taddu $v0, $v0, $s5\n\tsh $v1, 0x30($sp)\n\tsw $v0, 0x34($sp)\n\tlhu $v1, 0x8($s3)\n\tnop\n\tsh $v1, 0x52($sp)\n\tlhu $v0, 0xA($s3)\n\taddiu $a0, $sp, 0x18\n\tjal func_8018C7C8\n\tsh $v0, 0x54($sp)\n\tlw $ra, 0x70($sp)\n\tlw $s5, 0x6C($sp)\n\tlw $s4, 0x68($sp)\n\tlw $s3, 0x64($sp)\n\tlw $s2, 0x60($sp)\n\tlw $s1, 0x5C($sp)\n\tlw $s0, 0x58($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x78\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189D38, .-func_80189D38\n"
);

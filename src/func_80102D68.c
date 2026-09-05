#include "common.h"
__asm__(
  ".globl func_80102D68\n"
  ".type func_80102D68, @function\n"
  "func_80102D68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\tsw $ra, 0x14($sp)\n\tjal func_800F3C3C\n\tsw $s0, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tjal func_800F3B04\n\taddu $s0, $v0, $zero\n\taddu $a1, $v0, $zero\n\tlbu $v1, 0x1700($a1)\n\taddiu $v0, $zero, 0x3\n\tbeq $v1, $v0, .L80102DA8\n\tnop\n\tlbu $v0, 0x1B($s0)\n\tj .L80102E08\n\tandi $v1, $v0, 0x3F\n\t.L80102DA8:\n\tlbu $v1, 0x1A($s0)\n\tnop\n\tandi $v0, $v1, 0x80\n\tbnez $v0, .L80102DE0\n\tsltiu $v0, $v1, 0x20\n\tbeqz $v0, .L80102DE0\n\tnop\n\tlbu $v1, 0x1B($s0)\n\tnop\n\tandi $v0, $v1, 0x80\n\tbnez $v0, .L80102DE0\n\tsltiu $v0, $v1, 0x20\n\tbnez $v0, .L80102E0C\n\tlui $a0, (0x800E8000 >> 16)\n\t.L80102DE0:\n\tlbu $v0, 0xFDF($a1)\n\tnop\n\tandi $v0, $v0, 0x80\n\tbnez $v0, .L80102DFC\n\taddiu $v0, $zero, 0x7\n\tj .L80102E00\n\tsb $v0, 0x1E($s0)\n\t.L80102DFC:\n\tsb $zero, 0x1E($s0)\n\t.L80102E00:\n\tj .L80102E68\n\tsb $zero, 0x1F($s0)\n\t.L80102E08:\n\tlui $a0, (0x800E8000 >> 16)\n\t.L80102E0C:\n\tori $a0, $a0, (0x800E8000 & 0xFFFF)\n\tsb $v1, 0x3E($s0)\n\tandi $v1, $v1, 0xFF\n\tlbu $v0, 0x1A($s0)\n\tsll $v1, $v1, 8\n\tsb $v0, 0x3D($s0)\n\tandi $v0, $v0, 0xFF\n\tor $v0, $v0, $v1\n\taddu $v0, $v0, $a0\n\tlbu $v1, 0x71($v0)\n\tnop\n\tsll $v0, $v1, 1\n\tsb $v1, 0x6($s0)\n\tsrl $v1, $v0, 8\n\tsb $v0, 0x18($s0)\n\taddu $v0, $v0, $a1\n\tsb $v1, 0x19($s0)\n\tlbu $v1, 0xEDB($v0)\n\tnop\n\tsb $v1, 0x1E($s0)\n\tlbu $a0, 0xEDC($v0)\n\tnop\n\tsb $a0, 0x1F($s0)\n\t.L80102E68:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80102D68, .-func_80102D68\n"
);

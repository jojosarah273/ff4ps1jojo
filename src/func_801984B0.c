#include "common.h"
__asm__(
  ".globl func_801984B0\n"
  ".type func_801984B0, @function\n"
  "func_801984B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a2, $a0, $zero\n\tsra $v1, $a2, 23\n\tandi $v1, $v1, 0xFF\n\tsra $v0, $a1, 23\n\tandi $v0, $v0, 0xFF\n\tsubu $t0, $v1, $v0\n\taddiu $a3, $t0, 0x7E\n\tlui $a0, (0x7FFFFFFF >> 16)\n\tori $a0, $a0, (0x7FFFFFFF & 0xFFFF)\n\tlui $v0, (0x80000000 >> 16)\n\tand $v1, $a2, $v0\n\tand $v0, $a1, $v0\n\tsw $s0, 0x10($sp)\n\txor $s0, $v1, $v0\n\tand $v0, $a1, $a0\n\tbnez $v0, .L8019850C\n\tsw $ra, 0x14($sp)\n\tlui $v0, (0x4F000000 >> 16)\n\tbeqz $s0, .L801985E4\n\tnop\n\tj .L801985E4\n\tlui $v0, (0x4F800000 >> 16)\n\t.L8019850C:\n\tand $v0, $a2, $a0\n\tbnez $v0, .L80198520\n\tlui $v0, (0x7FFFFF >> 16)\n\tj .L801985E4\n\taddu $v0, $s0, $zero\n\t.L80198520:\n\tori $v0, $v0, (0x7FFFFF & 0xFFFF)\n\tand $v1, $a2, $v0\n\tlui $a0, (0x800000 >> 16)\n\tor $a2, $v1, $a0\n\tand $v0, $a1, $v0\n\tor $a1, $v0, $a0\n\tslt $v0, $a2, $a1\n\tbeqz $v0, .L8019854C\n\tlui $v1, %hi(D_1000001)\n\tsll $a2, $a2, 1\n\taddiu $a3, $t0, 0x7D\n\t.L8019854C:\n\taddu $a0, $zero, $zero\n\t.L80198550:\n\tslt $v0, $a2, $a1\n\tbnez $v0, .L80198564\n\tnop\n\tor $a0, $a0, $v1\n\tsubu $a2, $a2, $a1\n\t.L80198564:\n\tsra $v1, $v1, 1\n\tbnez $v1, .L80198550\n\tsll $a2, $a2, 1\n\tbltz $a3, .L80198588\n\tnegu $v1, $a3\n\taddiu $a0, $a0, %lo(D_1000001)\n\taddiu $a3, $a3, 0x1\n\tj .L801985A0\n\tsra $a0, $a0, 1\n\t.L80198588:\n\taddiu $v0, $zero, 0x1\n\tsllv $v0, $v0, $v1\n\taddu $a0, $a0, $v0\n\taddiu $v1, $v1, 0x1\n\tsrav $a0, $a0, $v1\n\taddu $a3, $zero, $zero\n\t.L801985A0:\n\tlui $v0, (0xFF7FFFFF >> 16)\n\tori $v0, $v0, (0xFF7FFFFF & 0xFFFF)\n\tand $a0, $a0, $v0\n\tslti $v0, $a3, 0xFF\n\tbnez $v0, .L801985D8\n\tsll $v0, $a3, 23\n\taddiu $a0, $zero, 0x22\n\tjal func_80198990\n\taddiu $a1, $zero, 0xE\n\tbeqz $s0, .L801985D0\n\tlui $a0, (0x7F800000 >> 16)\n\tlui $a0, (0xFF800000 >> 16)\n\t.L801985D0:\n\tj .L801985E0\n\taddu $a2, $a0, $zero\n\t.L801985D8:\n\tor $v0, $s0, $v0\n\tor $a2, $v0, $a0\n\t.L801985E0:\n\taddu $v0, $a2, $zero\n\t.L801985E4:\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n\tnop\n\tnop\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801984B0, .-func_801984B0\n"
);

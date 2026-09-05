#include "common.h"
__asm__(
  ".globl func_80192F34\n"
  ".type func_80192F34, @function\n"
  "func_80192F34:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x28\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\tlui $a1, %hi(D_8019BE70)\n\taddiu $a1, $a1, %lo(D_8019BE70)\n\tsll $v0, $s1, 2\n\taddu $a0, $v0, $a1\n\tsw $ra, 0x24($sp)\n\tsw $s4, 0x20($sp)\n\tsw $s3, 0x1C($sp)\n\tsw $s0, 0x10($sp)\n\tlw $s4, 0x0($a0)\n\tnop\n\tbeq $s2, $s4, .L8019305C\n\taddu $v0, $s4, $zero\n\tlhu $v0, -0x4($a1)\n\tnop\n\tbeqz $v0, .L80193058\n\taddiu $a2, $a1, -0x4\n\tlui $v0, %hi(D_8019CEFC)\n\tlw $v0, %lo(D_8019CEFC)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tsh $zero, 0x0($v0)\n\tbeqz $s2, .L80192FC4\n\tandi $s3, $v1, 0xFFFF\n\taddiu $v1, $zero, 0x1\n\tsllv $v1, $v1, $s1\n\tsw $s2, 0x0($a0)\n\tlhu $v0, 0x30($a2)\n\tor $s3, $s3, $v1\n\tor $v0, $v0, $v1\n\tj .L80192FE4\n\tsh $v0, 0x30($a2)\n\t.L80192FC4:\n\taddiu $v0, $zero, 0x1\n\tsllv $v0, $v0, $s1\n\tnor $v0, $zero, $v0\n\tsw $zero, 0x0($a0)\n\tlhu $v1, 0x2C($a1)\n\tand $s3, $s3, $v0\n\tand $v1, $v1, $v0\n\tsh $v1, 0x2C($a1)\n\t.L80192FE4:\n\tbnez $s1, .L80193008\n\taddiu $v0, $zero, 0x4\n\tsltiu $s0, $s2, 0x1\n\tjal func_80197798\n\taddu $a0, $s0, $zero\n\taddiu $a0, $zero, 0x3\n\tjal func_801977B8\n\taddu $a1, $s0, $zero\n\taddiu $v0, $zero, 0x4\n\t.L80193008:\n\tbne $s1, $v0, .L80193020\n\taddiu $v0, $zero, 0x5\n\taddu $a0, $zero, $zero\n\tjal func_801977B8\n\tsltiu $a1, $s2, 0x1\n\taddiu $v0, $zero, 0x5\n\t.L80193020:\n\tbne $s1, $v0, .L80193038\n\taddiu $v0, $zero, 0x6\n\taddiu $a0, $zero, 0x1\n\tjal func_801977B8\n\tsltiu $a1, $s2, 0x1\n\taddiu $v0, $zero, 0x6\n\t.L80193038:\n\tbne $s1, $v0, .L80193048\n\taddiu $a0, $zero, 0x2\n\tjal func_801977B8\n\tsltiu $a1, $s2, 0x1\n\t.L80193048:\n\tlui $v0, %hi(D_8019CEFC)\n\tlw $v0, %lo(D_8019CEFC)($v0)\n\tnop\n\tsh $s3, 0x0($v0)\n\t.L80193058:\n\taddu $v0, $s4, $zero\n\t.L8019305C:\n\tlw $ra, 0x24($sp)\n\tlw $s4, 0x20($sp)\n\tlw $s3, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x28\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192F34, .-func_80192F34\n"
);

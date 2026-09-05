#include "common.h"
__asm__(
  ".globl func_80185380\n"
  ".type func_80185380, @function\n"
  "func_80185380:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\taddiu $t1, $zero, 0x100\n\tlui $t0, (0x10000 >> 16)\n\tlui $a2, %hi(D_801E0DC8)\n\taddiu $v0, $a2, %lo(D_801E0DC8)\n\taddiu $a3, $v0, 0xB3C\n\tlui $t2, (0x10000 >> 16)\n\tsw $ra, 0x18($sp)\n\tsw $s0, 0x10($sp)\n\t.L801853AC:\n\tlbu $v0, 0x1($a1)\n\tlbu $a0, 0x0($a1)\n\tsll $v0, $v0, 8\n\tandi $v0, $v0, 0x100\n\tor $a0, $a0, $v0\n\tandi $v1, $a0, 0x100\n\tbeqz $v1, .L801853E4\n\tnegu $v0, $a0\n\tandi $a0, $a0, 0xFF\n\tnegu $v0, $a0\n\tsubu $v1, $t1, $a0\n\tsh $v0, 0x0($a3)\n\tj .L801853F0\n\tsh $v1, -0xB04($a3)\n\t.L801853E4:\n\tsubu $v1, $t1, $a0\n\tsh $v0, -0xB04($a3)\n\tsh $v1, 0x0($a3)\n\t.L801853F0:\n\taddu $v0, $t0, $zero\n\taddu $t0, $t0, $t2\n\taddiu $a3, $a3, 0x14\n\tsra $v0, $v0, 16\n\tslti $v0, $v0, 0x8C\n\tbnez $v0, .L801853AC\n\taddiu $a1, $a1, 0x4\n\taddu $a0, $s1, $zero\n\taddiu $s0, $a2, %lo(D_801E0DC8)\n\taddu $a1, $s0, $zero\n\tlhu $v0, 0xB14($s0)\n\tlhu $v1, 0x1618($s0)\n\taddiu $a2, $s0, 0x1444\n\tsh $v0, 0xB28($s0)\n\tjal func_80197248\n\tsh $v1, 0x162C($s0)\n\tlui $v0, (0xFFFF00 >> 16)\n\tori $v0, $v0, (0xFFFF00 & 0xFFFF)\n\tlui $v1, %hi(D_800D4700)\n\tlw $v1, %lo(D_800D4700)($v1)\n\tlui $a0, (0x600000 >> 16)\n\tand $v1, $v1, $v0\n\tbne $v1, $a0, .L8018547C\n\taddu $a0, $s1, $zero\n\tlui $v1, %hi(D_800D4709)\n\tlbu $v1, %lo(D_800D4709)($v1)\n\taddiu $v0, $zero, 0xDA\n\tbne $v1, $v0, .L80185480\n\tlui $a1, %hi(D_801E0DE0)\n\taddiu $a0, $s1, 0x24\n\taddiu $a1, $s0, 0x18\n\tjal func_80197248\n\taddiu $a2, $s0, 0x1624\n\tj .L8018548C\n\tnop\n\t.L8018547C:\n\tlui $a1, %hi(D_801E0DE0)\n\t.L80185480:\n\taddiu $a1, $a1, %lo(D_801E0DE0)\n\tjal func_80197248\n\taddiu $a2, $a1, 0x160C\n\t.L8018548C:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80185380, .-func_80185380\n"
);

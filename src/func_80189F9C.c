#include "common.h"
__asm__(
  ".globl func_80189F9C\n"
  ".type func_80189F9C, @function\n"
  "func_80189F9C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019ED30)\n\taddiu $v0, $v0, %lo(D_8019ED30)\n\tlui $v1, %hi(D_801FEC18)\n\taddiu $v1, $v1, %lo(D_801FEC18)\n\t.L80189FAC:\n\tsw $zero, 0x0($v0)\n\taddiu $v0, $v0, 0x4\n\tsltu $at,$v0,$v1\n\tbnez $at, .L80189FAC\n\tnop\n\taddiu $v0, $zero, 0x4\n\tnop\n\tnop\n\tnop\n\tnop\n\tlui $a0, %hi(D_8018A048)\n\taddiu $a0, $a0, %lo(D_8018A048)\n\taddu $a0, $a0, $v0\n\tlw $v0, 0x0($a0)\n\tlui $t0, %hi(D_80000004)\n\tor $sp, $v0, $t0\n\tlui $a0, %hi(D_801FEC18)\n\taddiu $a0, $a0, %lo(D_801FEC18)\n\tsll $a0, $a0, 3\n\tsrl $a0, $a0, 3\n\tlui $v1, %hi(D_8019ECE4)\n\tlw $v1, %lo(D_8019ECE4)($v1)\n\tnop\n\tsubu $a1, $v0, $v1\n\tsubu $a1, $a1, $a0\n\tor $a0, $a0, $t0\n\tlui $at, %hi(D_8019EFA0)\n\tsw $ra, %lo(D_8019EFA0)($at)\n\tlui $gp, %hi(_gp)\n\taddiu $gp, $gp, %lo(_gp)\n\taddu $fp, $sp, $zero\n\tjal func_801975E8\n\taddi $a0, $a0, %lo(D_80000004) /* handwritten instruction */\n\tlui $ra, %hi(D_8019EFA0)\n\tlw $ra, %lo(D_8019EFA0)($ra)\n\tnop\n\tjal func_801774B4\n\tnop\n\t.word 0x0000004D\n\t.word 0x00200000 # sll $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00200000 # sll $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00200000 # sll $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>\n\t.word 0x00200000 # sll $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189F9C, .-func_80189F9C\n"
);

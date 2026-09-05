#include "common.h"
__asm__(
  ".globl func_80188250\n"
  ".type func_80188250, @function\n"
  "func_80188250:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a2, $a0, $zero\n\tsw $ra, 0x10($sp)\n\tlw $v1, 0x0($a2)\n\taddiu $v0, $zero, 0x2\n\tbne $v1, $v0, .L80188350\n\taddiu $a3, $zero, 0x1\n\tlbu $v0, 0x18($a2)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\taddiu $a0, $zero, 0x6\n\tsw $a3, 0x0($a2)\n\tsll $v0, $v0, 4\n\taddu $v1, $v1, $v0\n\tsb $a0, 0x8($v1)\n\tlhu $v0, 0x14($a2)\n\tnop\n\tbeqz $v0, .L801882B0\n\taddiu $v0, $zero, 0x4\n\tlbu $v0, 0x19($a2)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v1, $v1, $v0\n\tsb $a0, 0x8($v1)\n\taddiu $v0, $zero, 0x4\n\t.L801882B0:\n\tsw $zero, %gp_rel(D_8019EF64)($gp)\n\tsw $v0, %gp_rel(D_8019EF60)($gp)\n\tlbu $v1, 0x18($a2)\n\tlw $v0, %gp_rel(D_8019EF5C)($gp)\n\tlw $a0, 0x8($a2)\n\tsll $v1, $v1, 4\n\taddiu $a1, $v0, 0x14\n\taddu $v1, $a1, $v1\n\tsw $a0, 0x0($v1)\n\tlhu $v0, 0x14($a2)\n\tnop\n\tbeqz $v0, .L80188308\n\tnop\n\tlbu $v0, 0x19($a2)\n\tlbu $v1, 0x18($a2)\n\tsll $v0, $v0, 4\n\tsll $v1, $v1, 4\n\taddu $v1, $a1, $v1\n\tlw $a0, 0x0($v1)\n\taddu $v0, $a1, $v0\n\taddiu $a0, $a0, 0x2000\n\tsw $a0, 0x0($v0)\n\t.L80188308:\n\tlw $v0, %gp_rel(D_8019EF64)($gp)\n\tlw $v1, 0xC($a2)\n\taddiu $v0, $v0, 0x1\n\tdivu $zero,$v0,$v1\n\tmfhi $a0\n\tbnez $v1, .L80188328\n\tnop\n\t.word 0x000001CD\n\t.L80188328:\n\tsw $a0, %gp_rel(D_8019EF64)($gp)\n\taddiu $a0, $zero, 0x4\n\tlbu $v0, 0x18($a2)\n\tlhu $a1, 0x14($a2)\n\tlbu $v1, 0x19($a2)\n\tsllv $v0, $a3, $v0\n\tsllv $a1, $a1, $v1\n\tjal func_8018DC58\n\tor $a1, $v0, $a1\n\tsh $v0, %gp_rel(D_8019EF84)($gp)\n\t.L80188350:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188250, .-func_80188250\n"
);

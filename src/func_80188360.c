#include "common.h"
__asm__(
  ".globl func_80188360\n"
  ".type func_80188360, @function\n"
  "func_80188360:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\taddu $t0, $a0, $zero\n\tlui $v0, %hi(D_801F6678)\n\taddiu $v1, $zero, 0x4\n\tbne $a1, $v1, .L80188438\n\taddiu $a3, $v0, %lo(D_801F6678)\n\taddiu $v1, $zero, 0x2000\n\tlhu $v0, 0x14($a3)\n\tlw $a1, %gp_rel(D_8019EF64)($gp)\n\tsllv $v1, $v1, $v0\n\tmult $a1, $v1\n\tlw $v0, %gp_rel(D_8019EF60)($gp)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\taddiu $v0, $v0, 0x4\n\taddiu $a2, $v1, 0x14\n\tsw $v0, %gp_rel(D_8019EF60)($gp)\n\tlbu $a0, 0x18($a3)\n\tlw $v0, 0x8($a3)\n\tsll $a0, $a0, 4\n\taddu $a0, $a2, $a0\n\tmflo $a1\n\taddu $v0, $v0, $a1\n\tsw $v0, 0x0($a0)\n\tlhu $v1, 0x14($a3)\n\tnop\n\tbeqz $v1, .L801883F4\n\tnop\n\tlbu $v0, 0x19($a3)\n\tlbu $v1, 0x18($a3)\n\tsll $v0, $v0, 4\n\tsll $v1, $v1, 4\n\taddu $v1, $a2, $v1\n\tlw $a0, 0x0($v1)\n\taddu $v0, $a2, $v0\n\taddiu $a0, $a0, 0x2000\n\tsw $a0, 0x0($v0)\n\t.L801883F4:\n\tlw $v0, %gp_rel(D_8019EF64)($gp)\n\tlw $v1, 0xC($a3)\n\taddiu $v0, $v0, 0x1\n\tdivu $zero,$v0,$v1\n\tmfhi $a0\n\tbnez $v1, .L80188414\n\tnop\n\t.word 0x000001CD\n\t.L80188414:\n\tsw $a0, %gp_rel(D_8019EF64)($gp)\n\taddiu $a0, $zero, 0x5\n\tlw $v0, %gp_rel(D_8019EF74)($gp)\n\tnop\n\taddiu $v0, $v0, -0x1\n\tsw $v0, %gp_rel(D_8019EF74)($gp)\n\tjal func_8018DC58\n\taddu $a1, $t0, $zero\n\tsh $v0, %gp_rel(D_8019EF84)($gp)\n\t.L80188438:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188360, .-func_80188360\n"
);

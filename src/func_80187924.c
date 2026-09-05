#include "common.h"
__asm__(
  ".globl func_80187924\n"
  ".type func_80187924, @function\n"
  "func_80187924:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\taddiu $a0, $zero, 0xE\n\tsw $s2, 0x18($sp)\n\taddu $s2, $a1, $zero\n\tsw $s0, 0x10($sp)\n\taddiu $s0, $gp, %gp_rel(D_8019EF1C)\n\taddu $a1, $s0, $zero\n\taddiu $v0, $zero, 0x48\n\tsw $ra, 0x1C($sp)\n\tsb $v0, %gp_rel(D_8019EF1C)($gp)\n\tjal func_80191AE8\n\taddu $a2, $zero, $zero\n\taddiu $a0, $zero, 0xD\n\taddiu $a2, $gp, %gp_rel(D_8019EEC0)\n\taddiu $v0, $zero, 0x1\n\tsb $v0, %gp_rel(D_8019EF1C)($gp)\n\tsb $s2, %gp_rel(D_8019EF1D)($gp)\n\tjal func_80191878\n\taddu $a1, $s0, $zero\n\taddiu $a0, $zero, 0x15\n\tsll $v0, $s1, 1\n\taddu $v0, $v0, $s1\n\tsll $v0, $v0, 3\n\tlui $a1, %hi(D_801F6230)\n\taddiu $a1, $a1, %lo(D_801F6230)\n\taddu $a1, $v0, $a1\n\tjal func_80191878\n\taddu $a2, $zero, $zero\n\tlui $v1, %hi(D_8019AFFC)\n\taddiu $v1, $v1, %lo(D_8019AFFC)\n\tlh $v0, %gp_rel(D_8019EEE0)($gp)\n\tlhu $a0, %gp_rel(D_8019EECC)($gp)\n\tlw $ra, 0x1C($sp)\n\tlw $s2, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $a0\n\tsll $v0, $v0, 2\n\taddu $v0, $v0, $v1\n\tlhu $a0, 0x0($v0)\n\taddiu $v1, $zero, 0x1\n\tsh $v1, %gp_rel(D_8019EF0A)($gp)\n\tsh $a0, %gp_rel(D_8019EECE)($gp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187924, .-func_80187924\n"
);

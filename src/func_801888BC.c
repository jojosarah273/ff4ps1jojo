#include "common.h"
__asm__(
  ".globl func_801888BC\n"
  ".type func_801888BC, @function\n"
  "func_801888BC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\taddu $a0, $zero, $zero\n\taddu $a1, $zero, $zero\n\tlui $a2, %hi(D_801F6678)\n\tsw $zero, %lo(D_801F6678)($a2)\n\taddiu $a2, $a2, %lo(D_801F6678)\n\taddiu $a3, $zero, 0x2\n\tsw $ra, 0x10($sp)\n\tlbu $v0, 0x19($a2)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v1, $v1, $v0\n\tsb $a3, 0x8($v1)\n\tlbu $v0, 0x18($a2)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v1, $v1, $v0\n\tjal func_801886B4\n\tsb $a3, 0x8($v1)\n\tjal func_801917B8\n\tnop\n\tjal func_80191748\n\taddu $a0, $zero, $zero\n\tjal func_80189750\n\tnop\n\taddiu $a0, $zero, 0x40\n\tlui $a1, %hi(D_801F6260)\n\tjal func_801896C0\n\taddiu $a1, $a1, %lo(D_801F6260)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801888BC, .-func_801888BC\n"
);

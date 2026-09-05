#include "common.h"
__asm__(
  ".globl func_801896C0\n"
  ".type func_801896C0, @function\n"
  "func_801896C0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a0, $zero\n\tsw $ra, 0x14($sp)\n\tsw $a1, %gp_rel(D_8019ED28)($gp)\n\tjal func_80191838\n\taddu $a0, $zero, $zero\n\tsw $v0, %gp_rel(D_8019EF50)($gp)\n\tjal func_801928A8\n\taddu $a0, $zero, $zero\n\tlui $a0, %hi(func_8018960C)\n\tsw $v0, %gp_rel(D_8019EF58)($gp)\n\tjal func_80191858\n\taddiu $a0, $a0, %lo(func_8018960C)\n\tsw $v0, %gp_rel(D_8019EF54)($gp)\n\tblez $s0, .L8018971C\n\taddiu $a0, $zero, -0x1\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\taddu $v0, $s0, $zero\n\t.L8018970C:\n\tsh $a0, 0x0($v1)\n\taddiu $v0, $v0, -0x1\n\tbnez $v0, .L8018970C\n\taddiu $v1, $v1, 0x10\n\t.L8018971C:\n\taddu $v0, $s0, $zero\n\taddiu $v1, $s0, -0x1\n\tsw $v1, %gp_rel(D_8019EF40)($gp)\n\taddiu $v1, $zero, 0x3\n\tlw $ra, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tlui $a0, %hi(D_801F6678)\n\tsw $zero, %gp_rel(D_8019EF88)($gp)\n\tsw $zero, %gp_rel(D_8019EF8C)($gp)\n\tsb $v1, %gp_rel(D_8019EF44)($gp)\n\tsw $zero, %lo(D_801F6678)($a0)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801896C0, .-func_801896C0\n"
);

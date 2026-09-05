#include "common.h"
__asm__(
  ".globl func_80188940\n"
  ".type func_80188940, @function\n"
  "func_80188940:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v0, %gp_rel(D_8019ED28)($gp)\n\taddiu $sp, $sp, -0x20\n\tsw $s1, 0x14($sp)\n\taddu $s1, $a0, $zero\n\tsw $s0, 0x10($sp)\n\taddu $s0, $a1, $zero\n\tbeqz $v0, .L80188968\n\tsw $ra, 0x18($sp)\n\tj .L801889F8\n\taddiu $v0, $zero, -0x1\n\t.L80188968:\n\tjal func_8018F538\n\tnop\n\tjal func_801917D8\n\taddu $a0, $zero, $zero\n\tsw $s0, %gp_rel(D_8019ED28)($gp)\n\tjal func_80191838\n\taddu $a0, $zero, $zero\n\tsw $v0, %gp_rel(D_8019EF50)($gp)\n\tjal func_801928A8\n\taddu $a0, $zero, $zero\n\tlui $a0, %hi(func_8018960C)\n\tsw $v0, %gp_rel(D_8019EF58)($gp)\n\tjal func_80191858\n\taddiu $a0, $a0, %lo(func_8018960C)\n\tsw $v0, %gp_rel(D_8019EF54)($gp)\n\tblez $s1, .L801889C8\n\taddiu $a1, $s1, -0x1\n\taddiu $a0, $zero, -0x1\n\tlw $v1, %gp_rel(D_8019ED28)($gp)\n\taddu $v0, $s1, $zero\n\t.L801889B8:\n\tsh $a0, 0x0($v1)\n\taddiu $v0, $v0, -0x1\n\tbnez $v0, .L801889B8\n\taddiu $v1, $v1, 0x10\n\t.L801889C8:\n\taddiu $a0, $zero, 0xE\n\taddiu $v0, $zero, 0x3\n\tsw $a1, %gp_rel(D_8019EF40)($gp)\n\taddiu $a1, $gp, %gp_rel(D_8019EF44)\n\tsw $zero, %gp_rel(D_8019EF88)($gp)\n\tsw $zero, %gp_rel(D_8019EF8C)($gp)\n\tsb $v0, %gp_rel(D_8019EF44)($gp)\n\tjal func_80191878\n\taddu $a2, $zero, $zero\n\taddu $v0, $s1, $zero\n\tlui $v1, %hi(D_801F6678)\n\tsw $zero, %lo(D_801F6678)($v1)\n\t.L801889F8:\n\tlw $ra, 0x18($sp)\n\tlw $s1, 0x14($sp)\n\tlw $s0, 0x10($sp)\n\tjr $ra\n\taddiu $sp, $sp, 0x20\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80188940, .-func_80188940\n"
);

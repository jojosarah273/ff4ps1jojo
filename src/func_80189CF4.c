#include "common.h"
__asm__(
  ".globl func_80189CF4\n"
  ".type func_80189CF4, @function\n"
  "func_80189CF4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlh $v0, %gp_rel(D_8019EF98)($gp)\n\taddiu $sp, $sp, -0x18\n\tbeqz $v0, .L80189D28\n\tsw $ra, 0x10($sp)\n\taddu $a0, $zero, $zero\n\tlui $a1, (0xFFFFFF >> 16)\n\tjal func_8018C438\n\tori $a1, $a1, (0xFFFFFF & 0xFFFF)\n\tjal func_8018B838\n\taddu $a0, $zero, $zero\n\tjal func_8018C3E8\n\taddu $a0, $zero, $zero\n\tsh $zero, %gp_rel(D_8019EF98)($gp)\n\t.L80189D28:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189CF4, .-func_80189CF4\n"
);

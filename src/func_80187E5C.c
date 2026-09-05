#include "common.h"
__asm__(
  ".globl func_80187E5C\n"
  ".type func_80187E5C, @function\n"
  "func_80187E5C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_801F6678)\n\taddiu $t0, $v1, %lo(D_801F6678)\n\tlhu $t1, 0x10($sp)\n\tlhu $t2, 0x14($sp)\n\tlbu $t3, 0x18($sp)\n\tlbu $t4, 0x1C($sp)\n\tlbu $t5, 0x20($sp)\n\tlw $v0, %lo(D_801F6678)($v1)\n\tlbu $v1, 0x24($sp)\n\tbeqz $v0, .L80187E90\n\taddu $v0, $zero, $zero\n\tjr $ra\n\taddiu $v0, $zero, -0x1\n\t.L80187E90:\n\tsb $v1, 0x1A($t0)\n\tlw $v1, 0x28($sp)\n\tsw $a0, 0x4($t0)\n\tsw $a1, 0x8($t0)\n\tsw $a2, 0xC($t0)\n\tsw $a3, 0x10($t0)\n\tsh $t1, 0x14($t0)\n\tsh $t2, 0x16($t0)\n\tsb $t3, 0x19($t0)\n\tsb $t4, 0x18($t0)\n\tsb $t5, 0x1B($t0)\n\tjr $ra\n\tsw $v1, 0x1C($t0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80187E5C, .-func_80187E5C\n"
);

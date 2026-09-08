#include "common.h"
__asm__(
  ".globl func_801881AC\n"
  ".type func_801881AC, @function\n"
  "func_801881AC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $a0, D_801F6678\n\tlw $v1, D_801F6678($a0)\n\taddiu $v0, $0, 0x1\n\tbne $v1, $v0, .L80188238\n\taddiu $a1, $a0, D_801F6678\n\taddiu $v1, $0, 0x3\n\taddiu $a3, $0, 0x2\n\taddiu $a2, $0, 0x800\n\tsw $v1, D_801F6678($a0)\n\tlbu $v0, 0x18($a1)\n\tlw $v1, %gp_rel(D_8019EF5C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v1, $v1, $v0\n\tsb $a3, 0x8($v1)\n\tlbu $v0, 0x18($a1)\n\tlw $a0, %gp_rel(D_8019EF5C)($gp)\n\tsll $v0, $v0, 4\n\taddu $v0, $a0, $v0\n\tsw $a2, 0xC($v0)\n\tlhu $v1, 0x14($a1)\n\tnop\n\tbeqz $v1, .L80188230\n\tnop\n\tlbu $v0, 0x19($a1)\n\tnop\n\tsll $v0, $v0, 4\n\taddu $v0, $a0, $v0\n\tsb $a3, 0x8($v0)\n\tlbu $v1, 0x19($a1)\n\tlw $v0, %gp_rel(D_8019EF5C)($gp)\n\tsll $v1, $v1, 4\n\taddu $v0, $v0, $v1\n\tsw $a2, 0xC($v0)\n\t.L80188230:\n\tjr $ra\n\taddu $v0, $0, $0\n\t.L80188238:\n\tjr $ra\n\taddiu $v0, $0, -0x1\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801881AC, .-func_801881AC\n"
);

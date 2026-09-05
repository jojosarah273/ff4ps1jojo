#include "common.h"
__asm__(
  ".globl func_80150364\n"
  ".type func_80150364, @function\n"
  "func_80150364:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\taddu $a3, $v0, $zero\n\tlbu $v0, 0xB($a3)\n\tlbu $a0, 0xA($a3)\n\tsll $v0, $v0, 8\n\tor $a0, $a0, $v0\n\tbeqz $a0, .L801503F0\n\tnop\n\taddiu $a2, $zero, 0x1\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $t1, (0x10000 >> 16)\n\tlhu $a0, 0x0($v0)\n\taddu $t0, $v0, $zero\n\tsll $v1, $a0, 8\n\tsrl $v0, $a0, 8\n\tandi $v1, $v1, 0xFF00\n\tor $a1, $v1, $v0\n\taddu $a0, $a1, $zero\n\tsllv $v0, $a1, $a2\n\t.L801503C0:\n\tand $v0, $v0, $t1\n\taddu $v0, $v0, $a0\n\tsra $v0, $v0, 1\n\tandi $a0, $v0, 0xFFFF\n\taddiu $v1, $a2, 0x1\n\tandi $a2, $v1, 0xFFFF\n\tsltiu $v0, $a2, 0x11\n\tbnez $v0, .L801503C0\n\tsllv $v0, $a1, $a2\n\tsh $a0, 0x0($t0)\n\tsb $zero, 0xC($a3)\n\tsb $zero, 0xD($a3)\n\t.L801503F0:\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80150364, .-func_80150364\n"
);

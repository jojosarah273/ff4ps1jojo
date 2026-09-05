#include "common.h"
__asm__(
  ".globl func_8018EBB8\n"
  ".type func_8018EBB8, @function\n"
  "func_8018EBB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tandi $v0, $a2, 0xFFFF\n\tsltiu $v0, $v0, 0x4000\n\tbnez $v0, .L8018EBCC\n\taddu $t3, $zero, $zero\n\taddiu $a2, $zero, 0x3FFF\n\t.L8018EBCC:\n\taddu $a3, $zero, $zero\n\tandi $v1, $a2, 0xFFFF\n\tsrav $v0, $v1, $a3\n\t.L8018EBD8:\n\tandi $v0, $v0, 0x1\n\tbeqz $v0, .L8018EBE8\n\tnop\n\taddu $t3, $a3, $zero\n\t.L8018EBE8:\n\taddiu $a3, $a3, 0x1\n\tslti $v0, $a3, 0xE\n\tbnez $v0, .L8018EBD8\n\tsrav $v0, $v1, $a3\n\tandi $v1, $a2, 0xFFFF\n\taddiu $v0, $zero, 0xF\n\tsubu $v0, $v0, $t3\n\tsllv $a2, $v1, $v0\n\taddiu $a3, $zero, 0xB\n\tandi $v1, $a2, 0xFFFF\n\tlui $t0, %hi(D_8019B5CA)\n\taddiu $t0, $t0, %lo(D_8019B5CA)\n\t.L8018EC18:\n\tlhu $v0, 0x0($t0)\n\tnop\n\tsltu $v0,$v1,$v0\n\tbnez $v0, .L8018EC34\n\tnop\n\tj .L8018EC40\n\taddu $t2, $a3, $zero\n\t.L8018EC34:\n\taddiu $a3, $a3, -0x1\n\tbgez $a3, .L8018EC18\n\taddiu $t0, $t0, -0x2\n\t.L8018EC40:\n\tandi $v1, $a2, 0xFFFF\n\tandi $v0, $t2, 0xFFFF\n\tsll $v0, $v0, 1\n\tlui $at, %hi(D_8019B5B4)\n\taddu $at, $at, $v0\n\tlhu $v0, %lo(D_8019B5B4)($at)\n\tsll $v1, $v1, 15\n\tdivu $zero,$v1,$v0\n\tbnez $v0, .L8018EC6C\n\tnop\n\tbreak 7\n\t.L8018EC6C:\n\tmflo $v1\n\taddiu $a3, $zero, 0x7F\n\tlui $a2, %hi(D_8019B6CA)\n\taddiu $a2, $a2, %lo(D_8019B6CA)\n\tandi $v1, $v1, 0xFFFF\n\t.L8018EC80:\n\tlhu $v0, 0x0($a2)\n\tnop\n\tsltu $v0,$v1,$v0\n\tbnez $v0, .L8018EC9C\n\tnop\n\tj .L8018ECA8\n\taddu $t1, $a3, $zero\n\t.L8018EC9C:\n\taddiu $a3, $a3, -0x1\n\tbgez $a3, .L8018EC80\n\taddiu $a2, $a2, -0x2\n\t.L8018ECA8:\n\taddiu $v0, $t1, 0x1\n\taddu $t1, $a1, $v0\n\taddiu $v1, $t3, -0xC\n\tsll $v0, $v1, 1\n\taddu $v0, $v0, $v1\n\tsll $v0, $v0, 2\n\taddu $v0, $a0, $v0\n\taddu $v0, $t2, $v0\n\tandi $a0, $t1, 0xFFFF\n\tsrl $v1, $a0, 7\n\taddu $t2, $v0, $v1\n\tandi $v0, $t2, 0xFFFF\n\tsll $v0, $v0, 8\n\tandi $a0, $a0, 0x7E\n\tjr $ra\n\tor $v0, $v0, $a0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018EBB8, .-func_8018EBB8\n"
);

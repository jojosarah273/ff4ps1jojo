#include "common.h"
__asm__(
  ".globl func_8018ABAC\n"
  ".type func_8018ABAC, @function\n"
  "func_8018ABAC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_8019B114)\n\tlw $v0, %lo(D_8019B114)($v0)\n\tsll $a0, $a0, 1\n\taddu $a0, $a0, $v0\n\taddiu $v0, $zero, -0x1\n\tlhu $a0, 0x0($a0)\n\tbeq $a1, $v0, .L8018ABDC\n\tnop\n\tlui $v0, %hi(D_8019B13C)\n\tlw $v0, %lo(D_8019B13C)($v0)\n\tj .L8018ABE0\n\tsllv $v0, $a0, $v0\n\t.L8018ABDC:\n\taddu $v0, $a0, $zero\n\t.L8018ABE0:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018ABAC, .-func_8018ABAC\n"
);

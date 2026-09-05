#include "common.h"
__asm__(
  ".globl func_8018DDEC\n"
  ".type func_8018DDEC, @function\n"
  "func_8018DDEC:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, %hi(D_8019B584)\n\tlw $v1, %lo(D_8019B584)($v1)\n\taddiu $v0, $zero, 0x10\n\tbne $v1, $v0, .L8018DF08\n\taddiu $v0, $zero, -0x3\n\taddu $a0, $zero, $zero\n\taddiu $a1, $zero, 0x6\n\tlui $v1, %hi(D_801F67D8)\n\taddiu $v1, $v1, %lo(D_801F67D8)\n\taddiu $v0, $zero, 0x18\n\tlui $at, %hi(D_8019B584)\n\tsw $zero, %lo(D_8019B584)($at)\n\tlui $at, %hi(D_801F67A4)\n\tsw $zero, %lo(D_801F67A4)($at)\n\tlui $at, %hi(D_801F67A8)\n\tsw $zero, %lo(D_801F67A8)($at)\n\tlui $at, %hi(D_801F67AC)\n\tsw $zero, %lo(D_801F67AC)($at)\n\tlui $at, %hi(D_801F67B0)\n\tsw $zero, %lo(D_801F67B0)($at)\n\tlui $at, %hi(D_801F67B4)\n\tsw $zero, %lo(D_801F67B4)($at)\n\tlui $at, %hi(D_8019B588)\n\tsw $zero, %lo(D_8019B588)($at)\n\tlui $at, %hi(D_8019B58C)\n\tsw $zero, %lo(D_8019B58C)($at)\n\tlui $at, %hi(D_8019B590)\n\tsw $zero, %lo(D_8019B590)($at)\n\tlui $at, %hi(D_8019B594)\n\tsw $zero, %lo(D_8019B594)($at)\n\tlui $at, %hi(D_8019B598)\n\tsw $zero, %lo(D_8019B598)($at)\n\tlui $at, %hi(D_8019B59C)\n\tsw $zero, %lo(D_8019B59C)($at)\n\tlui $at, %hi(D_8019B5A0)\n\tsw $zero, %lo(D_8019B5A0)($at)\n\tlui $at, %hi(D_8019B5A4)\n\tsw $zero, %lo(D_8019B5A4)($at)\n\tlui $at, %hi(D_8019B5A8)\n\tsw $zero, %lo(D_8019B5A8)($at)\n\tlui $at, %hi(D_801F67B8)\n\tsw $v0, %lo(D_801F67B8)($at)\n\tlui $at, %hi(D_801F67BC)\n\tsw $v0, %lo(D_801F67BC)($at)\n\tlui $at, %hi(D_801F67C0)\n\tsw $v0, %lo(D_801F67C0)($at)\n\tlui $at, %hi(D_801F67C4)\n\tsw $v0, %lo(D_801F67C4)($at)\n\tlui $at, %hi(D_801F67C8)\n\tsw $v0, %lo(D_801F67C8)($at)\n\t.L8018DEB4:\n\tsb $a1, 0x0($v1)\n\tsw $zero, 0x4($v1)\n\tsw $zero, 0x8($v1)\n\tsw $zero, 0xC($v1)\n\taddiu $a0, $a0, 0x1\n\tslti $v0, $a0, 0x18\n\tbnez $v0, .L8018DEB4\n\taddiu $v1, $v1, 0x10\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_801F67D0)\n\tsw $zero, %lo(D_801F67D0)($at)\n\tlui $at, %hi(D_801F67D4)\n\tsw $zero, %lo(D_801F67D4)($at)\n\tlui $at, %hi(D_801F6958)\n\tsw $zero, %lo(D_801F6958)($at)\n\tlui $at, %hi(D_801F695C)\n\tsw $zero, %lo(D_801F695C)($at)\n\tlui $at, %hi(D_801F6960)\n\tsw $zero, %lo(D_801F6960)($at)\n\tlui $at, %hi(D_801F6964)\n\tsw $zero, %lo(D_801F6964)($at)\n\t.L8018DF08:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8018DDEC, .-func_8018DDEC\n"
);

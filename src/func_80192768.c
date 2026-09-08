#include "common.h"
__asm__(
  ".globl func_80192768\n"
  ".type func_80192768, @function\n"
  "func_80192768:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, D_8019BDD4\n\tlw $v0, D_8019BDD4($v0)\n\tlui $a2, (0x21020843 >> 16)\n\tsb $0, 0x0($v0)\n\tlui $v1, D_8019BDD8\n\tlw $v1, D_8019BDD8($v1)\n\taddiu $v0, $0, 0x80\n\tsb $v0, 0x0($v1)\n\tlui $v0, D_8019BDE0\n\tlw $v0, D_8019BDE0($v0)\n\tori $a2, $a2, (0x21020843 & 0xFFFF)\n\tsw $a2, 0x0($v0)\n\tlui $v1, D_8019BDDC\n\tlw $v1, D_8019BDDC($v1)\n\taddiu $v0, $0, 0x1325\n\tsw $v0, 0x0($v1)\n\tlui $v1, D_8019BDE4\n\tlw $v1, D_8019BDE4($v1)\n\tnop\n\tlw $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x8000\n\tsw $v0, 0x0($v1)\n\tlui $v0, D_8019BDEC\n\tlw $v0, D_8019BDEC($v0)\n\tnop\n\tsw $a0, 0x0($v0)\n\tlui $v0, (0x10000 >> 16)\n\tlui $v1, D_8019BDF0\n\tlw $v1, D_8019BDF0($v1)\n\tor $a1, $a1, $v0\n\tsw $a1, 0x0($v1)\n\tlui $v1, D_8019BDD4\n\tlw $v1, D_8019BDD4($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbnez $v0, .L8019281C\n\taddiu $sp, $sp, -0x8\n\t.L80192808:\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbeqz $v0, .L80192808\n\tnop\n\t.L8019281C:\n\tlui $v1, (0x11400100 >> 16)\n\tlui $v0, D_8019BDE8\n\tlw $v0, D_8019BDE8($v0)\n\tori $v1, $v1, (0x11400100 & 0xFFFF)\n\tsw $v1, 0x0($v0)\n\tlui $v0, D_8019BDE8\n\tlw $v0, D_8019BDE8($v0)\n\tnop\n\tlw $v0, 0x0($v0)\n\tnop\n\tsw $v0, 0x0($sp)\n\taddu $v0, $0, $0\n\tjr $ra\n\taddiu $sp, $sp, 0x8\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80192768, .-func_80192768\n"
);

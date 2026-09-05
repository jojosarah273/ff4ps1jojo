#include "common.h"
__asm__(
  ".globl func_80143ED4\n"
  ".type func_80143ED4, @function\n"
  "func_80143ED4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED58)\n\tlw $a0, %lo(D_8019ED58)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\t.L80143F1C:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEC66\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80143FD8\n\tnop\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEC26\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80143FD8\n\tnop\n\tjal func_80143D64\n\tnop\n\tjal func_800F5410\n\tnop\n\tlui $v0, %hi(D_8019ED54)\n\tlw $v0, %lo(D_8019ED54)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tori $a0, $zero, 0xEBE6\n\tjal func_800F3B04\n\taddu $a0, $v1, $a0\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_80143D14\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x48\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F5574\n\taddiu $a0, $zero, 0xE0\n\tjal func_800F53C0\n\tnop\n\tbeqz $v0, .L80143FF0\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8768\n\tori $a0, $zero, 0xEC26\n\t.L80143FD8:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xF0\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\t.L80143FF0:\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1813\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x2\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x8C\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF484\n\tjal func_8013D4C8\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x40\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80143F1C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80143ED4, .-func_80143ED4\n"
);

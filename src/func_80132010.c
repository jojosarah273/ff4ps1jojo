#include "common.h"
__asm__(
  ".globl func_80132010\n"
  ".type func_80132010, @function\n"
  "func_80132010:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_801224D0\n\tnop\n\tjal func_800F6B68\n\taddiu $a0, $zero, 0x1B8B\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L801320D0\n\tnop\n\tjal func_801321B4\n\tnop\n\tjal func_800F8D6C\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F8FB8\n\taddiu $a0, $zero, 0x50\n\tjal func_800F66D8\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F9200\n\tnop\n\tjal func_800F4370\n\taddiu $a0, $zero, 0x49\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F93DC\n\tnop\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x48\n\tnor $v0, $zero, $v0\n\tjal func_800F4370\n\tsb $v0, 0x0($v1)\n\tjal func_800F3A70\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F3B04\n\taddu $a0, $v0, $zero\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F78C4\n\taddu $a0, $v0, $a0\n\tjal func_800F82EC\n\taddiu $a0, $zero, 0x4E\n\t.L801320D0:\n\tjal func_800F93DC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80132010, .-func_80132010\n"
);

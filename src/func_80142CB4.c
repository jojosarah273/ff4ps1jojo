#include "common.h"
__asm__(
  ".globl func_80142CB4\n"
  ".type func_80142CB4, @function\n"
  "func_80142CB4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\t.L80142CBC:\n\tjal func_80142E34\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L80142CE8:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x8\n\tjal func_80143E44\n\tnop\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1B3\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80142D30\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF3AC\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1B3\n\t.L80142D30:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80142D68\n\tnop\n\tjal func_800F5480\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF3AC\n\tjal func_800F7F48\n\taddu $a0, $v0, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xF1F3\n\t.L80142D68:\n\tjal func_800F6364\n\tnop\n\tjal func_800F5958\n\taddiu $a0, $zero, 0x8\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80142CE8\n\tnop\n\tjal func_800F6564\n\tori $a0, $zero, 0xF1F3\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF3AD\n\tjal func_800F54D4\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L80142CBC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80142CB4, .-func_80142CB4\n"
);

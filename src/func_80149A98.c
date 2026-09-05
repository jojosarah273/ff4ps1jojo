#include "common.h"
__asm__(
  ".globl func_80149A98\n"
  ".type func_80149A98, @function\n"
  "func_80149A98:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x28\n\tjal func_800F93DC\n\tnop\n\tjal func_80148FC0\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x4\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x2B\n\tjal func_800F4F28\n\taddu $a0, $v0, $zero\n\tjal func_800F4F4C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F7A40\n\taddu $a0, $v0, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x5\n\tjal func_800F4248\n\taddiu $a0, $zero, 0x1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F7500\n\taddiu $a0, $zero, 0x18\n\tjal func_800F8EBC\n\taddu $a0, $zero, $zero\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 2\n\tsh $v0, 0x0($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tlhu $v0, 0x0($a0)\n\taddiu $a0, $zero, 0x4\n\tjal func_800F6658\n\tsh $v0, 0x0($v1)\n\t.L80149B6C:\n\tjal func_800F89D4\n\taddiu $a0, $zero, 0x7612\n\tlui $v1, %hi(D_8019ED58)\n\tlw $v1, %lo(D_8019ED58)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddu $a0, $zero, $zero\n\taddiu $v0, $v0, 0x4\n\tjal func_800F5DD4\n\tsh $v0, 0x0($v1)\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L80149B6C\n\tnop\n\tjal func_800F971C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x2\n\tjal func_800F5410\n\tnop\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x18\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80149A98, .-func_80149A98\n"
);

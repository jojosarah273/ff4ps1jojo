#include "common.h"
__asm__(
  ".globl func_8013A950\n"
  ".type func_8013A950, @function\n"
  "func_8013A950:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BA9\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x43\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x43\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x45\n\tsll $v0, $v0, 5\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BA8\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x45\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1BAA\n\tlui $v1, %hi(D_8019ED40)\n\tlw $v1, %lo(D_8019ED40)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x46\n\tsll $v0, $v0, 2\n\tjal func_800F3C3C\n\tsb $v0, 0x0($v1)\n\tjal func_800F78C4\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x46\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013A950, .-func_8013A950\n"
);

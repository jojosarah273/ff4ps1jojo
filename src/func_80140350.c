#include "common.h"
__asm__(
  ".globl func_80140350\n"
  ".type func_80140350, @function\n"
  "func_80140350:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F939C\n\tnop\n\tjal func_800F8EBC\n\taddu $a0, $zero, $zero\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x2A\n\tsll $v0, $v0, 4\n\tjal func_800F8274\n\tsh $v0, 0x0($v1)\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tlui $a0, %hi(D_8019ED44)\n\tlw $a0, %lo(D_8019ED44)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 5\n\tjal func_800F5410\n\tsh $v0, 0x0($v1)\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a1, %hi(D_8019ED58)\n\tlw $a1, %lo(D_8019ED58)($a1)\n\tlhu $v1, 0x0($v0)\n\taddiu $a0, $zero, 0x2A\n\tjal func_800F6658\n\tsh $v1, 0x0($a1)\n\tjal func_800F5410\n\tnop\n\tjal func_800F3C3C\n\taddu $a0, $zero, $zero\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tjal func_800F971C\n\tsh $v0, 0x0($a0)\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tlui $a0, (0xECB00 >> 16)\n\tjal func_800F6C68\n\tori $a0, $a0, (0xECB00 & 0xFFFF)\n\tjal func_800F8960\n\tori $a0, $zero, 0xED50\n\tjal func_800F8960\n\tori $a0, $zero, 0xED60\n\tjal func_800F960C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140350, .-func_80140350\n"
);

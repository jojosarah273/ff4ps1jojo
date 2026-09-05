#include "common.h"
__asm__(
  ".globl func_801526F8\n"
  ".type func_801526F8, @function\n"
  "func_801526F8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE1\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xDF\n\tjal func_800F6630\n\taddiu $a0, $zero, 0xE1\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xE5\n\tjal func_8015240C\n\tnop\n\tjal func_800F7594\n\taddiu $a0, $zero, 0xE3\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L8015275C:\n\tjal func_800F67FC\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8768\n\taddiu $a0, $zero, 0x289C\n\tjal func_800F63BC\n\tnop\n\tjal func_800F6364\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0xE5\n\tjal func_800F56AC\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L8015275C\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801526F8, .-func_801526F8\n"
);

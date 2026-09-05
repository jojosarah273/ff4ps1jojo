#include "common.h"
__asm__(
  ".globl func_80140598\n"
  ".type func_80140598, @function\n"
  "func_80140598:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F5480\n\tnop\n\tjal func_800F8058\n\taddiu $a0, $zero, 0xA9\n\tjal func_800F5140\n\tnop\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED5C)\n\tlw $v1, %lo(D_8019ED5C)($v1)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\taddiu $a0, $v0, -0x4\n\tsltiu $v1, $a0, 0x29\n\tbeqz $v1, .L801406EC\n\tlui $v0, %hi(jtbl_800F290C)\n\taddiu $v0, $v0, %lo(jtbl_800F290C)\n\tsll $v1, $a0, 2\n\taddu $v1, $v1, $v0\n\tlw $a0, 0x0($v1)\n\tnop\n\tjr $a0\n\tnop\n\tjal func_80140A5C\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140A0C\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_8014071C\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140C8C\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140BA0\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140EE0\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140F08\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140FE0\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80141020\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80141068\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_801410B0\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_80140E78\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_8014076C\n\tnop\n\tj .L801406EC\n\tnop\n\tjal func_801406FC\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80140598, .-func_80140598\n"
);

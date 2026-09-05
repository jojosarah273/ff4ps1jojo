#include "common.h"
__asm__(
  ".globl func_80149924\n"
  ".type func_80149924, @function\n"
  "func_80149924:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F6564\n\tori $a0, $zero, 0xF483\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L801499A4\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F8188\n\tori $a0, $zero, 0xF485\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x38E6\n\tlui $v1, %hi(D_8019ED44)\n\tlw $v1, %lo(D_8019ED44)($v1)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v0, 0x0($v1)\n\tnop\n\tsh $v0, 0x0($a0)\n\tlui $v0, %hi(D_8019A0E4)\n\tlui $a1, %hi(D_8019ED54)\n\tlw $a1, %lo(D_8019ED54)($a1)\n\taddiu $v0, $v0, %lo(D_8019A0E4)\n\tlhu $v1, 0x0($a1)\n\tlui $a0, %hi(D_8019ED40)\n\tlw $a0, %lo(D_8019ED40)($a0)\n\taddu $v1, $v1, $v0\n\tlbu $v0, 0x0($v1)\n\tjal func_8014D568\n\tsb $v0, 0x0($a0)\n\t.L801499A4:\n\tjal func_800F8F74\n\tori $a0, $zero, 0xF483\n\tjal func_8007259C\n\tnop\n\tjal func_800F971C\n\tnop\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tlui $a0, %hi(D_8019ED54)\n\tlw $a0, %lo(D_8019ED54)($a0)\n\tlhu $v1, 0x0($v0)\n\tnop\n\tsh $v1, 0x0($a0)\n\t.L801499D8:\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEE30\n\tjal func_800F824C\n\taddu $a0, $zero, $zero\n\tjal func_800F6B68\n\tori $a0, $zero, 0xEE31\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1\n\tjal func_80094D14\n\tnop\n\tjal func_800F6630\n\taddu $a0, $zero, $zero\n\tjal func_800F8768\n\tori $a0, $zero, 0xEE30\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x1\n\tjal func_800F8768\n\tori $a0, $zero, 0xEE31\n\tlui $v1, %hi(D_8019ED54)\n\tlw $v1, %lo(D_8019ED54)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x20\n\taddiu $v0, $v0, 0x2\n\tjal func_800F5958\n\tsh $v0, 0x0($v1)\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801499D8\n\tnop\n\tjal func_80168148\n\tnop\n\tjal func_800F62BC\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x4E\n\tjal func_800F5574\n\taddiu $a0, $zero, 0x30\n\tjal func_800F53D4\n\tnop\n\tbeqz $v0, .L801499A4\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80149924, .-func_80149924\n"
);

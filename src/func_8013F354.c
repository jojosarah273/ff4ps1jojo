#include "common.h"
__asm__(
  ".globl func_8013F354\n"
  ".type func_8013F354, @function\n"
  "func_8013F354:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9330\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F922C\n\tnop\n\tjal func_800F8FD8\n\taddiu $a0, $zero, 0x20\n\tjal func_800F8FD8\n\taddiu $a0, $zero, 0x22\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F64EC\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013F474\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F64EC\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8013F474\n\tnop\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x10\n\t.L8013F3BC:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1C\n\tjal func_800F7B40\n\taddu $a0, $v0, $zero\n\tjal func_800F7B7C\n\tnop\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x22\n\tjal func_800F7B40\n\taddu $a0, $v0, $zero\n\tjal func_800F5480\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x22\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F7FCC\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x22\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L8013F444\n\tnop\n\tjal func_800F6658\n\taddiu $a0, $zero, 0x22\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x1E\n\tjal func_800F3F94\n\taddu $a0, $v0, $zero\n\tjal func_800F8274\n\taddiu $a0, $zero, 0x22\n\tjal func_800F5410\n\tnop\n\t.L8013F444:\n\tjal func_800F3C3C\n\taddiu $a0, $zero, 0x20\n\tjal func_800F7B40\n\taddu $a0, $v0, $zero\n\tjal func_800F7B7C\n\tnop\n\tjal func_800F5E48\n\tnop\n\tjal func_800F5C64\n\taddiu $a0, $zero, 0x202\n\tbnez $v0, .L8013F3BC\n\tnop\n\t.L8013F474:\n\tjal func_800F9410\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F95A0\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013F354, .-func_8013F354\n"
);

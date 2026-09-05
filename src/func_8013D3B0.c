#include "common.h"
__asm__(
  ".globl func_8013D3B0\n"
  ".type func_8013D3B0, @function\n"
  "func_8013D3B0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F9200\n\tnop\n\tjal func_800F939C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x10\n\tjal func_80143E44\n\tnop\n\tjal func_80143D14\n\tnop\n\tjal func_800F5410\n\tnop\n\tjal func_800F3B04\n\tori $a0, $zero, 0xF119\n\tjal func_800F3F38\n\taddu $a0, $v0, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F960C\n\tnop\n\tjal func_800F93DC\n\tnop\n\tjal func_8013D4C8\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8013D3B0, .-func_8013D3B0\n"
);

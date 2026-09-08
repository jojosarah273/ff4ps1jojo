#include "common.h"
__asm__(
  ".globl func_800F3B04\n"
  ".type func_800F3B04, @function\n"
  "func_800F3B04:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v1, 0x1F80\n\tlbu $v1, 0x3D2($v1)\n\taddiu $v0, $0, 0x7E\n\tbeq $v1, $v0, .L800F3B50\n\tslti $v0, $v1, 0x7F\n\tbeqz $v0, .L800F3B30\n\taddiu $v0, $0, 0x70\n\tbeq $v1, $v0, .L800F3B44\n\taddiu $v0, $0, 0x7FFF\n\tj .L800F3B74\n\tslt $v0, $v0, $a0\n\t.L800F3B30:\n\taddiu $v0, $0, 0x7F\n\tbeq $v1, $v0, .L800F3B68\n\taddiu $v0, $0, 0x7FFF\n\tj .L800F3B74\n\tslt $v0, $v0, $a0\n\t.L800F3B44:\n\tlui $v1, 0x800D\n\tj .L800F3B94\n\tori $v1, $v1, 0x2200\n\t.L800F3B50:\n\tlui $v1, 0x800D\n\tslti $v0, $a0, 0x2000\n\tbeqz $v0, .L800F3B94\n\tori $v1, $v1, 0x2400\n\tj .L800F3B94\n\tlui $v1, 0x800D\n\t.L800F3B68:\n\tlui $v1, 0x800E\n\tj .L800F3B94\n\tori $v1, $v1, 0x2400\n\t.L800F3B74:\n\tbeqz $v0, .L800F3B94\n\tlui $v1, 0x800D\n\tlui $v1, 0x7FFC\n\tlui $v0, 0x1F80\n\tlw $v0, 0x3C0($v0)\n\tori $v1, $v1, 0x8000\n\tsra $v0, $v0, 1\n\taddu $v1, $v0, $v1\n\t.L800F3B94:\n\tjr $ra\n\taddu $v0, $v1, $a0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F3B04, .-func_800F3B04\n"
);

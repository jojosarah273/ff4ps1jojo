#include "common.h"
__asm__(
  ".globl func_80197168\n"
  ".type func_80197168, @function\n"
  "func_80197168:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $v1, 0x10($sp)\n\taddu $v0, $a0, $zero\n\tsh $a1, 0x0($v0)\n\tsh $a2, 0x2($v0)\n\tsh $a3, 0x4($v0)\n\tsh $zero, 0x8($v0)\n\tsh $zero, 0xA($v0)\n\tsh $zero, 0xC($v0)\n\tsh $zero, 0xE($v0)\n\tsb $zero, 0x11($v0)\n\tsb $zero, 0x10($v0)\n\tsb $zero, 0x13($v0)\n\tsb $zero, 0x12($v0)\n\tjr $ra\n\tsh $v1, 0x6($v0)\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80197168, .-func_80197168\n"
);

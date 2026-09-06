#include "common.h"
__asm__(
  ".globl func_80179248\n"
  ".type func_80179248, @function\n"
  "func_80179248:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $t1, 0x14($sp)\n\tlw $v0, 0x10($sp)\n\taddu $t0, $a3, $zero\n\tsw $a0, 0x0($t1)\n\tsw $v0, 0x4($t1)\n\tsw $a2, 0x8($t1)\n\tlhu $v0, 0x0($t0)\n\tnop\n\tsh $v0, 0xC($t1)\n\tlhu $v1, 0x2($t0)\n\tnop\n\tsh $v1, 0xE($t1)\n\tlhu $v0, 0x4($t0)\n\tnop\n\tsh $v0, 0x10($t1)\n\tlhu $v1, 0x6($t0)\n\taddu $t0, $a1, $zero\n\tsh $v1, 0x12($t1)\n\tlhu $v0, 0x0($t0)\n\tnop\n\tsh $v0, 0x14($t1)\n\tlhu $v1, 0x2($t0)\n\tnop\n\tsh $v1, 0x16($t1)\n\tlhu $v0, 0x4($t0)\n\tnop\n\tsh $v0, 0x18($t1)\n\tlhu $v1, 0x6($t0)\n\tsw $a0, 0x0($sp)\n\tsw $a1, 0x4($sp)\n\tsw $a2, 0x8($sp)\n\tsw $a3, 0xC($sp)\n\tjr $ra\n\tsh $v1, 0x1A($t1)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80179248, .-func_80179248\n"
);

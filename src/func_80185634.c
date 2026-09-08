#include "common.h"
__asm__(
  ".globl func_80185634\n"
  ".type func_80185634, @function\n"
  "func_80185634:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tsll $a2, $a2, 16\n\tslti $v0, $a1, 0xE0\n\tbeqz $v0, .L80185674\n\tsra $a2, $a2, 16\n\tsll $v1, $a1, 2\n\tj .L8018565C\n\taddu $v1, $v1, $a0\n\t.L80185650:\n\tslti $v0, $a1, 0xE0\n\tbeqz $v0, .L80185674\n\taddiu $v1, $v1, 0x4\n\t.L8018565C:\n\tlh $v0, 0x2($v1)\n\tnop\n\taddu $v0, $v0, $a1\n\tbeq $v0, $a2, .L80185650\n\taddiu $a1, $a1, 0x1\n\taddiu $a1, $a1, -0x1\n\t.L80185674:\n\tjr $ra\n\taddu $v0, $a1, $0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80185634, .-func_80185634\n"
);

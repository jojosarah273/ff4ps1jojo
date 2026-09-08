#include "common.h"
__asm__(
  ".globl func_80189E44\n"
  ".type func_80189E44, @function\n"
  "func_80189E44:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlw $t0, 0x10($sp)\n\tnop\n\tlbu $v0, 0x2($t0)\n\tandi $a3, $a3, 0xFF\n\taddiu $v0, $v0, 0x1\n\tmult $v0, $a3\n\tsll $a1, $a1, 16\n\tlbu $v1, 0x3($t0)\n\tsll $a2, $a2, 16\n\taddiu $a3, $v1, 0x1\n\tmflo $v0\n\tsll $v0, $v0, 16\n\tsra $t1, $v0, 16\n\taddu $t0, $t1, $0\n\tlui $v0, (0x10000 >> 16)\n\taddu $a2, $a2, $v0\n\tsra $a2, $a2, 16\n\taddu $t2, $a2, $0\n\taddu $a1, $a1, $v0\n\tsra $v1, $a1, 16\n\taddiu $v0, $0, 0x41\n\tbne $a3, $v0, .L80189ED4\n\taddu $a1, $v1, $0\n\tmult $t1, $v1\n\tmflo $v0\n\tnop\n\tnop\n\tmult $t1, $a2\n\tsra $v0, $v0, 7\n\taddiu $v0, $v0, -0x1\n\tsh $v0, 0x0($a0)\n\tmflo $v1\n\tsra $v1, $v1, 7\n\taddiu $v1, $v1, -0x1\n\tjr $ra\n\tsh $v1, 0x2($a0)\n\t.L80189ED4:\n\tslti $v0, $a3, 0x41\n\tbeqz $v0, .L80189F24\n\taddiu $v0, $0, 0x81\n\tmult $t1, $a3\n\tmflo $v0\n\tnop\n\tnop\n\tmult $t1, $v1\n\tmflo $v1\n\tnop\n\tnop\n\tmult $v0, $a2\n\tsra $v1, $v1, 7\n\taddiu $v1, $v1, -0x1\n\tsh $v1, 0x0($a0)\n\tmflo $v0\n\tsra $v0, $v0, 13\n\taddiu $v0, $v0, -0x1\n\tjr $ra\n\tsh $v0, 0x2($a0)\n\t.L80189F24:\n\tsubu $v0, $v0, $a3\n\tmult $t0, $v0\n\tmflo $v0\n\tnop\n\tnop\n\tmult $t0, $t2\n\tmflo $v1\n\tnop\n\tnop\n\tmult $v0, $a1\n\tsra $v1, $v1, 7\n\taddiu $v1, $v1, -0x1\n\tsh $v1, 0x2($a0)\n\tmflo $v0\n\tsra $v0, $v0, 13\n\taddiu $v0, $v0, -0x1\n\tjr $ra\n\tsh $v0, 0x0($a0)\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80189E44, .-func_80189E44\n"
);

#include "common.h"
__asm__(
  ".globl func_80127F2C\n"
  ".type func_80127F2C, @function\n"
  "func_80127F2C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, %hi(D_801CFD68)\n\taddiu $t0, $v0, %lo(D_801CFD68)\n\taddu $a0, $zero, $zero\n\taddu $t1, $v0, $zero\n\taddiu $a2, $zero, 0x20FF\n\tori $a3, $zero, 0xF06E\n\taddiu $a1, $a0, 0x1\n\t.L80127F48:\n\taddiu $v1, $zero, 0x6\n\tsll $v0, $a0, 6\n\taddu $v0, $v0, $a3\n\taddu $v0, $t0, $v0\n\taddiu $v0, $v0, 0xC\n\t.L80127F5C:\n\tsh $a2, 0x0($v0)\n\taddiu $v1, $v1, -0x1\n\tbgez $v1, .L80127F5C\n\taddiu $v0, $v0, -0x2\n\taddu $a0, $a1, $zero\n\tslti $v0, $a0, 0x4\n\tbnez $v0, .L80127F48\n\taddiu $a1, $a0, 0x1\n\tlh $v1, %gp_rel(D_8019EDC2)($gp)\n\taddiu $v0, $zero, 0x7\n\tbne $v1, $v0, .L80128010\n\taddiu $v0, $zero, 0x8\n\taddiu $v0, $t1, %lo(D_801CFD68)\n\tori $v1, $zero, 0x8000\n\taddu $v0, $v0, $v1\n\taddiu $a0, $zero, 0x2054\n\taddiu $a1, $zero, 0x205C\n\taddiu $v1, $zero, 0x2071\n\taddiu $a2, $zero, 0x2060\n\taddiu $a3, $zero, 0x20FF\n\tsh $v1, 0x70AC($v0)\n\taddiu $v1, $zero, 0x206E\n\tsh $a0, 0x70A8($v0)\n\taddiu $a0, $zero, 0x204E\n\tsh $v1, 0x70B4($v0)\n\taddiu $v1, $zero, 0x2068\n\tsh $a0, 0x7128($v0)\n\taddiu $a0, $zero, 0x206A\n\tsh $v1, 0x712C($v0)\n\taddiu $v1, $zero, 0x205F\n\tsh $v1, 0x7132($v0)\n\taddiu $v1, $zero, 0x206F\n\tsh $v1, 0x7136($v0)\n\taddiu $v1, $zero, 0x207A\n\tsh $a1, 0x70AA($v0)\n\tsh $a2, 0x70AE($v0)\n\tsh $a3, 0x70B0($v0)\n\tsh $a1, 0x70B2($v0)\n\tsh $a2, 0x712A($v0)\n\tsh $a0, 0x712E($v0)\n\tsh $a3, 0x7130($v0)\n\tsh $a1, 0x7134($v0)\n\tsh $a1, 0x7138($v0)\n\tjr $ra\n\tsh $v1, 0x713A($v0)\n\t.L80128010:\n\tbne $v1, $v0, .L80128074\n\taddiu $v0, $t1, %lo(D_801CFD68)\n\tori $v1, $zero, 0x8000\n\taddu $v0, $v0, $v1\n\taddiu $a0, $zero, 0x2054\n\taddiu $v1, $zero, 0x205C\n\tsh $a0, 0x70AE($v0)\n\taddiu $a0, $zero, 0x2071\n\taddiu $a1, $zero, 0x2060\n\tsh $v1, 0x70B0($v0)\n\taddiu $v1, $zero, 0x20FF\n\tsh $a0, 0x70B2($v0)\n\taddiu $a0, $zero, 0x2063\n\tsh $v1, 0x70B6($v0)\n\tsh $v1, 0x70B8($v0)\n\tsh $v1, 0x707A($v0)\n\tsh $v1, 0x70BA($v0)\n\taddiu $v1, $zero, 0x206D\n\tsh $v1, 0x7132($v0)\n\taddiu $v1, $zero, 0x207A\n\tsh $a1, 0x70B4($v0)\n\tsh $a0, 0x712E($v0)\n\tsh $a1, 0x7130($v0)\n\tsh $a1, 0x7134($v0)\n\tsh $v1, 0x7136($v0)\n\t.L80128074:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80127F2C, .-func_80127F2C\n"
);

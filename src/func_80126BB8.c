#include "common.h"
__asm__(
  ".globl func_80126BB8\n"
  ".type func_80126BB8, @function\n"
  "func_80126BB8:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F926C\n\tnop\n\tjal func_800F9298\n\tnop\n\taddiu $v0, $zero, 0x1\n\tlui $at, %hi(D_8019EE54)\n\tsh $v0, %lo(D_8019EE54)($at)\n\tjal func_80178BB4\n\tnop\n\t.L80126BE4:\n\tjal func_8016EA9C\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7E\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1B9A\n\tjal func_800F71DC\n\taddiu $a0, $zero, 0x1BE4\n\tjal func_800F3B04\n\taddiu $a0, $zero, 0x1A5F\n\tjal func_800F56AC\n\taddu $a0, $v0, $zero\n\tjal func_800F53D4\n\tnop\n\tbnez $v0, .L80126C54\n\tnop\n\tjal func_800F8D00\n\taddiu $a0, $zero, 0x1A5F\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1A3C\n\tjal func_80128264\n\tnop\n\tjal func_8011F864\n\tnop\n\t.L80126C54:\n\tjal func_80128480\n\tnop\n\tjal func_80128B3C\n\tnop\n\tsh $zero, %gp_rel(D_8019EDA6)($gp)\n\tjal func_801793F8\n\taddiu $a0, $zero, 0x2\n\tlh $v1, %gp_rel(D_8019EDC2)($gp)\n\taddiu $v0, $zero, 0x2\n\tbne $v1, $v0, .L80126C88\n\tnop\n\tjal func_800F8F74\n\taddiu $a0, $zero, 0x1A3C\n\t.L80126C88:\n\tlui $v1, %hi(D_8019EE4E)\n\tlh $v1, %lo(D_8019EE4E)($v1)\n\taddiu $v0, $zero, -0x1\n\tbne $v1, $v0, .L80126CA4\n\tnop\n\tjal func_800FF0AC\n\tnop\n\t.L80126CA4:\n\tjal func_80128480\n\tnop\n\tjal func_80128B3C\n\tnop\n\tjal func_800F53C0\n\tnop\n\tbnez $v0, .L80126D00\n\tnop\n\tsh $zero, %gp_rel(D_8019EDC4)($gp)\n\tjal func_80126E08\n\tnop\n\tlh $v1, %gp_rel(D_8019EDC4)($gp)\n\taddiu $v0, $zero, 0x1\n\tbne $v1, $v0, .L80126CF8\n\tnop\n\tjal func_80126610\n\tnop\n\tjal func_80178BB4\n\tnop\n\tj .L80126BE4\n\tnop\n\t.L80126CF8:\n\tjal func_80126D48\n\tnop\n\t.L80126D00:\n\tjal func_80122114\n\tnop\n\tlui $at, %hi(D_8019EE54)\n\tsh $zero, %lo(D_8019EE54)($at)\n\tjal func_800F971C\n\tnop\n\tjal func_800F3D48\n\tnop\n\tjal func_800F65C8\n\taddiu $a0, $zero, 0x17FB\n\tjal func_800F94B8\n\tnop\n\tjal func_800F9448\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80126BB8, .-func_80126BB8\n"
);

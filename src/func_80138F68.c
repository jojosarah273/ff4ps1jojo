#include "common.h"
__asm__(
  ".globl func_80138F68\n"
  ".type func_80138F68, @function\n"
  "func_80138F68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_8019ED68)\n\tlw $a0, %lo(D_8019ED68)($a0)\n\tlui $a2, %hi(D_800D0000)\n\tsw $ra, 0x10($sp)\n\tlhu $v0, 0x0($v1)\n\tlbu $a1, 0x0($a0)\n\taddu $v0, $v0, $a2\n\tsb $a1, %lo(D_800D0000)($v0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tnop\n\tlhu $v0, 0x0($v1)\n\taddiu $a0, $zero, 0x20\n\taddiu $v0, $v0, -0x1\n\tjal func_800F9644\n\tsh $v0, 0x0($v1)\n\tjal func_800F922C\n\tnop\n\tjal func_800F9660\n\taddiu $a0, $zero, 0x20\n\tjal func_800F926C\n\tnop\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F9200\n\tnop\n\tjal func_800F9448\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x1E0\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L80139024\n\tlui $v0, %hi(D_8019FFE8)\n\taddiu $a0, $zero, 0x1E0\n\taddiu $v0, $v0, %lo(D_8019FFE8)\n\tlhu $v1, 0x23A($v0)\n\taddiu $a1, $zero, 0x5A\n\tsh $a1, 0x236($v0)\n\taddiu $v1, $v1, -0x5A\n\tjal func_800F8F74\n\tsh $v1, 0x23A($v0)\n\tj .L80139078\n\tnop\n\t.L80139024:\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x212C\n\tjal func_800F6240\n\taddiu $a0, $zero, 0x1E0\n\taddiu $a0, $zero, 0x19A\n\tlui $v1, %hi(D_801A0222)\n\taddiu $v0, $zero, 0xCB\n\tjal func_800F6564\n\tsh $v0, %lo(D_801A0222)($v1)\n\tjal func_800F3D48\n\tnop\n\tjal func_800F6564\n\taddiu $a0, $zero, 0x199\n\tlui $v0, %hi(D_8019ED44)\n\tlw $v0, %lo(D_8019ED44)($v0)\n\tnop\n\tlhu $v1, 0x0($v0)\n\tlui $at, %hi(D_8019EE6E)\n\tsh $v1, %lo(D_8019EE6E)($at)\n\t.L80139078:\n\tjal func_800F9448\n\tnop\n\tjal func_800F9644\n\taddiu $a0, $zero, 0x20\n\tjal func_800F9410\n\tnop\n\tlui $a0, %hi(D_8019ED4C)\n\tlw $a0, %lo(D_8019ED4C)($a0)\n\tnop\n\tlhu $v0, 0x0($a0)\n\tlw $ra, 0x10($sp)\n\taddiu $v0, $v0, 0x1\n\tsh $v0, 0x0($a0)\n\tlui $v1, %hi(D_8019ED4C)\n\tlw $v1, %lo(D_8019ED4C)($v1)\n\tlui $a0, %hi(D_800D0000)\n\tlhu $v0, 0x0($v1)\n\tlui $a1, %hi(D_8019ED68)\n\tlw $a1, %lo(D_8019ED68)($a1)\n\taddu $v0, $v0, $a0\n\tlbu $v1, %lo(D_800D0000)($v0)\n\tnop\n\tsb $v1, 0x0($a1)\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80138F68, .-func_80138F68\n"
);

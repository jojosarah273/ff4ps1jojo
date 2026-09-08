#include "common.h"
__asm__(
  ".globl func_80191C78\n"
  ".type func_80191C78, @function\n"
  "func_80191C78:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\tlui $v0, D_8019BD74\n\tlw $v0, D_8019BD74($v0)\n\tlui $a2, (0x20943 >> 16)\n\tsb $0, 0x0($v0)\n\tlui $v1, D_8019BD78\n\tlw $v1, D_8019BD78($v1)\n\taddiu $v0, $0, 0x80\n\tsb $v0, 0x0($v1)\n\tlui $v0, D_8019BD80\n\tlw $v0, D_8019BD80($v0)\n\tori $a2, $a2, (0x20943 & 0xFFFF)\n\tsw $a2, 0x0($v0)\n\tlui $v1, D_8019BD7C\n\tlw $v1, D_8019BD7C($v1)\n\taddiu $v0, $0, 0x1323\n\tsw $v0, 0x0($v1)\n\tlui $v1, D_8019BD84\n\tlw $v1, D_8019BD84($v1)\n\tnop\n\tlw $v0, 0x0($v1)\n\tnop\n\tori $v0, $v0, 0x8000\n\tsw $v0, 0x0($v1)\n\tlui $v0, D_8019BD8C\n\tlw $v0, D_8019BD8C($v0)\n\tnop\n\tsw $a0, 0x0($v0)\n\tlui $v0, (0x10000 >> 16)\n\tlui $v1, D_8019BD90\n\tlw $v1, D_8019BD90($v1)\n\tor $a1, $a1, $v0\n\tsw $a1, 0x0($v1)\n\tlui $v1, D_8019BD74\n\tlw $v1, D_8019BD74($v1)\n\tnop\n\t.L80191D04:\n\tlbu $v0, 0x0($v1)\n\tnop\n\tandi $v0, $v0, 0x40\n\tbeqz $v0, .L80191D04\n\tlui $v0, (0x11000000 >> 16)\n\tlui $v1, D_8019BD88\n\tlw $v1, D_8019BD88($v1)\n\tnop\n\tsw $v0, 0x0($v1)\n\tlui $a0, D_8019BD88\n\tlw $a0, D_8019BD88($a0)\n\tnop\n\tlw $v0, 0x0($a0)\n\tlui $v1, (0x1000000 >> 16)\n\tand $v0, $v0, $v1\n\tbeqz $v0, .L80191D60\n\taddu $v1, $a0, $0\n\tlui $a0, (0x1000000 >> 16)\n\t.L80191D4C:\n\tlw $v0, 0x0($v1)\n\tnop\n\tand $v0, $v0, $a0\n\tbnez $v0, .L80191D4C\n\tnop\n\t.L80191D60:\n\tlui $v1, D_8019BD7C\n\tlw $v1, D_8019BD7C($v1)\n\taddiu $v0, $0, 0x1325\n\tsw $v0, 0x0($v1)\n\tjr $ra\n\taddu $v0, $0, $0\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80191C78, .-func_80191C78\n"
);

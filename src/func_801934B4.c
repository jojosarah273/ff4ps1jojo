#include "common.h"
__asm__(
  ".globl func_801934B4\n"
  ".type func_801934B4, @function\n"
  "func_801934B4:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddu $a2, $a0, $0\n\tlui $v1, D_8019CF48\n\taddiu $v1, $v1, D_8019CF48\n\tsll $v0, $a2, 2\n\taddu $v1, $v0, $v1\n\tlw $a3, 0x0($v1)\n\taddu $a0, $a1, $0\n\tbeq $a0, $a3, .L80193558\n\taddu $v0, $a3, $0\n\tbeqz $a0, .L8019351C\n\tlui $v0, (0xFFFFFF >> 16)\n\tlui $a1, D_8019CF44\n\tlw $a1, D_8019CF44($a1)\n\tori $v0, $v0, (0xFFFFFF & 0xFFFF)\n\tsw $a0, 0x0($v1)\n\tlw $a0, 0x0($a1)\n\taddiu $v1, $a2, 0x10\n\tand $a0, $a0, $v0\n\taddiu $v0, $0, 0x1\n\tsllv $v0, $v0, $v1\n\tlui $v1, (0x800000 >> 16)\n\tor $v0, $v0, $v1\n\tor $a0, $a0, $v0\n\tsw $a0, 0x0($a1)\n\tj .L80193558\n\taddu $v0, $a3, $0\n\t.L8019351C:\n\tlui $a1, D_8019CF44\n\tlw $a1, D_8019CF44($a1)\n\tori $v0, $v0, (0xFFFFFF & 0xFFFF)\n\tsw $0, 0x0($v1)\n\tlw $v1, 0x0($a1)\n\taddiu $a0, $a2, 0x10\n\tand $v1, $v1, $v0\n\tlui $v0, (0x800000 >> 16)\n\tor $v1, $v1, $v0\n\taddiu $v0, $0, 0x1\n\tsllv $v0, $v0, $a0\n\tnor $v0, $0, $v0\n\tand $v1, $v1, $v0\n\tsw $v1, 0x0($a1)\n\taddu $v0, $a3, $0\n\t.L80193558:\n\tjr $ra\n\tnop\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_801934B4, .-func_801934B4\n"
);

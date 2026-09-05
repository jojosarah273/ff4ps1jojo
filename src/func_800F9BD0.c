#include "common.h"
__asm__(
  ".globl func_800F9BD0\n"
  ".type func_800F9BD0, @function\n"
  "func_800F9BD0:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlui $t3, (0x1F8003C0 >> 16)\n\tori $t3, $t3, (0x1F8003C0 & 0xFFFF)\n\tlui $t2, (0x1F8003C4 >> 16)\n\tori $t2, $t2, (0x1F8003C4 & 0xFFFF)\n\tlui $a0, (0x1F8003C8 >> 16)\n\tori $a0, $a0, (0x1F8003C8 & 0xFFFF)\n\tlui $a1, (0x1F8003CA >> 16)\n\tori $a1, $a1, (0x1F8003CA & 0xFFFF)\n\tlui $a2, (0x1F8003CC >> 16)\n\tori $a2, $a2, (0x1F8003CC & 0xFFFF)\n\tlui $t1, (0x1F8003CE >> 16)\n\tori $t1, $t1, (0x1F8003CE & 0xFFFF)\n\tlui $t0, (0x1F8003D0 >> 16)\n\tori $t0, $t0, (0x1F8003D0 & 0xFFFF)\n\tlui $a3, (0x1F8003D2 >> 16)\n\tori $a3, $a3, (0x1F8003D2 & 0xFFFF)\n\tlui $v1, (0x1F8003D3 >> 16)\n\tori $v1, $v1, (0x1F8003D3 & 0xFFFF)\n\tlui $v0, (0x1F8003D4 >> 16)\n\tori $v0, $v0, (0x1F8003D4 & 0xFFFF)\n\tsw $ra, 0x10($sp)\n\tsw $t3, %gp_rel(D_8019ED6C)($gp)\n\tsw $t2, %gp_rel(D_8019ED50)($gp)\n\tsw $a0, %gp_rel(D_8019ED40)($gp)\n\tsw $a0, %gp_rel(D_8019ED44)($gp)\n\tsw $a1, %gp_rel(D_8019ED5C)($gp)\n\tsw $a1, %gp_rel(D_8019ED54)($gp)\n\tsw $a2, %gp_rel(D_8019ED60)($gp)\n\tsw $a2, %gp_rel(D_8019ED58)($gp)\n\tsw $t1, %gp_rel(D_8019ED4C)($gp)\n\tsw $t0, %gp_rel(D_8019ED48)($gp)\n\tsw $a3, %gp_rel(D_8019ED70)($gp)\n\tsw $v1, %gp_rel(D_8019ED68)($gp)\n\tsw $v0, %gp_rel(D_8019ED64)($gp)\n\tjal func_800F9C98\n\tnop\n\tlw $v1, %gp_rel(D_8019ED68)($gp)\n\taddiu $v0, $zero, 0x4\n\tsb $v0, 0x0($v1)\n\tlw $a0, %gp_rel(D_8019ED4C)($gp)\n\taddiu $v0, $zero, 0x1FF\n\tjal func_800F9CE8\n\tsh $v0, 0x0($a0)\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800F9BD0, .-func_800F9BD0\n"
);

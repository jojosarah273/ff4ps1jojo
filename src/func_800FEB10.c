#include "common.h"
__asm__(
  ".globl func_800FEB10\n"
  ".type func_800FEB10, @function\n"
  "func_800FEB10:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tlw $v1, %gp_rel(D_8019ED74)($gp)\n\tlbu $v0, %gp_rel(D_8019ED31)($gp)\n\taddiu $a0, $zero, 0x79\n\tsw $ra, 0x10($sp)\n\tsb $zero, %gp_rel(D_8019ED30)($gp)\n\tjal func_800F6630\n\tsb $v0, 0x0($v1)\n\tjal func_800F5140\n\tnop\n\tjal func_800F9690\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6F\n\tjal func_800F5480\n\tnop\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tlui $a0, (0x14FB1F >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x14FB1F & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F7F48\n\taddu $a0, $v0, $a0\n\tjal func_800F96E0\n\tnop\n\tjal func_800F8E50\n\taddiu $a0, $zero, 0x4209\n\tlw $v1, %gp_rel(D_8019ED58)($gp)\n\taddiu $a0, $zero, 0x80\n\tlhu $a1, 0x0($v1)\n\tlui $v0, %hi(D_8019FFEE)\n\tjal func_800F654C\n\tsh $a1, %lo(D_8019FFEE)($v0)\n\tjal func_800F5480\n\tnop\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tlui $a0, (0x14FB1E >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x14FB1E & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F7F48\n\taddu $a0, $v0, $a0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2126\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7F\n\tjal func_800F5410\n\tnop\n\tlw $v0, %gp_rel(D_8019ED54)($gp)\n\tlui $a0, (0x14FB1E >> 16)\n\tlhu $a1, 0x0($v0)\n\tjal func_800F3B9C\n\tori $a0, $a0, (0x14FB1E & 0xFFFF)\n\tlw $v1, %gp_rel(D_8019ED54)($gp)\n\tnop\n\tlhu $a0, 0x0($v1)\n\tjal func_800F3F38\n\taddu $a0, $v0, $a0\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x2127\n\tjal func_800F6630\n\taddiu $a0, $zero, 0x79\n\tjal func_800F7864\n\tnop\n\tlw $v1, %gp_rel(D_8019ED40)($gp)\n\tnop\n\tlbu $v0, 0x0($v1)\n\tnop\n\tsll $v0, $v0, 4\n\tjal func_800F5410\n\tsb $v0, 0x0($v1)\n\tjal func_800F4008\n\taddiu $a0, $zero, 0x3\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x677\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA1\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x4200\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_800FEB10, .-func_800FEB10\n"
);

#include "common.h"
__asm__(
  ".globl func_80176D40\n"
  ".type func_80176D40, @function\n"
  "func_80176D40:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x1\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x3\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x5\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x6\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x62\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x7\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x6A\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x8\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x72\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x9\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x7A\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x22\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xB\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x22\n\tjal func_800F824C\n\taddiu $a0, $zero, 0xC\n\tjal func_800F654C\n\taddu $a0, $zero, $zero\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x420B\n\tjal func_800F8188\n\taddiu $a0, $zero, 0x420C\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x80\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x15\n\tjal func_800F971C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x16\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x17\n\tjal func_800F654C\n\taddiu $a0, $zero, 0x1F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2C\n\tjal func_800F971C\n\tnop\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2D\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2E\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x2F\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x30\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x31\n\tjal func_800F824C\n\taddiu $a0, $zero, 0x33\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xE0\n\tlui $v0, %hi(D_8019ED40)\n\tlw $v0, %lo(D_8019ED40)($v0)\n\tnop\n\tlbu $a0, 0x0($v0)\n\tjal func_8017EA90\n\tnop\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_80176D40, .-func_80176D40\n"
);

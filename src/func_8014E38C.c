#include "common.h"
__asm__(
  ".globl func_8014E38C\n"
  ".type func_8014E38C, @function\n"
  "func_8014E38C:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F971C\n\tnop\n\tjal func_800F8188\n\tori $a0, $zero, 0xF42E\n\tjal func_800F8188\n\tori $a0, $zero, 0xEFC7\n\tjal func_800F8188\n\tori $a0, $zero, 0xEFD7\n\tjal func_800F8188\n\tori $a0, $zero, 0xEFE7\n\tjal func_800F8188\n\tori $a0, $zero, 0xEFF7\n\tjal func_800F8188\n\tori $a0, $zero, 0xF007\n\tjal func_800F8188\n\tori $a0, $zero, 0xF281\n\tjal func_800F8188\n\tori $a0, $zero, 0xF283\n\tjal func_800F8188\n\tori $a0, $zero, 0xF451\n\tjal func_800F6564\n\tori $a0, $zero, 0xF44E\n\tjal func_800F6434\n\taddiu $a0, $zero, 0x2\n\tbnez $v0, .L8014E404\n\tnop\n\tjal func_800F8F74\n\tori $a0, $zero, 0xEF87\n\t.L8014E404:\n\tjal func_800F6564\n\tori $a0, $zero, 0xF279\n\tjal func_800F8188\n\tori $a0, $zero, 0xF466\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014E38C, .-func_8014E38C\n"
);

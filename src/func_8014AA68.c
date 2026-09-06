#include "common.h"
__asm__(
  ".globl func_8014AA68\n"
  ".type func_8014AA68, @function\n"
  "func_8014AA68:\n"
  "\t.set\tnoreorder\n"
  "\t.set noreorder\n"
  "\taddiu $sp, $sp, -0x18\n\tsw $ra, 0x10($sp)\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xA\n\tjal func_800F8188\n\tori $a0, $zero, 0xF47F\n\tjal func_8013D720\n\tnop\n\tjal func_800F654C\n\taddiu $a0, $zero, 0xFF\n\tjal func_800F8188\n\tori $a0, $zero, 0xF47F\n\tlw $ra, 0x10($sp)\n\tnop\n\tjr $ra\n\taddiu $sp, $sp, 0x18\n"
  "\t.set reorder\n"
  "\t.set\treorder\n"
  ".size func_8014AA68, .-func_8014AA68\n"
);

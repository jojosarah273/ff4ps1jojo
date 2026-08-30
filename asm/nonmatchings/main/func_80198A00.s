/* Handwritten function */
nonmatching func_80198A00, 0x54

glabel func_80198A00
    /* A6E00 80198A00 00010201 */  .word      0x01020100                    # sll        $zero, $v0, 4 # 01000000 <InstrIdType: CPU_SPECIAL>
    /* A6E04 80198A04 03030300 */  sra        $zero, $v1, 12
  alabel D_80198A08
    /* A6E08 80198A08 40CCE021 */  addi       $zero, $t7, -0x33C0 /* handwritten instruction */
    /* A6E0C 80198A0C 48CCE121 */  addi       $at, $t7, -0x33B8 /* handwritten instruction */
    /* A6E10 80198A10 50CCE221 */  addi       $v0, $t7, -0x33B0 /* handwritten instruction */
    /* A6E14 80198A14 58CCE321 */  addi       $v1, $t7, -0x33A8 /* handwritten instruction */
    /* A6E18 80198A18 60CCE421 */  addi       $a0, $t7, -0x33A0 /* handwritten instruction */
    /* A6E1C 80198A1C 68CCE521 */  addi       $a1, $t7, -0x3398 /* handwritten instruction */
    /* A6E20 80198A20 70CCE621 */  addi       $a2, $t7, -0x3390 /* handwritten instruction */
    /* A6E24 80198A24 78CCE721 */  addi       $a3, $t7, -0x3388 /* handwritten instruction */
    /* A6E28 80198A28 80CCE821 */  addi       $t0, $t7, -0x3380 /* handwritten instruction */
    /* A6E2C 80198A2C 88CCE921 */  addi       $t1, $t7, -0x3378 /* handwritten instruction */
    /* A6E30 80198A30 90CCEA21 */  addi       $t2, $t7, -0x3370 /* handwritten instruction */
    /* A6E34 80198A34 98CCEB21 */  addi       $t3, $t7, -0x3368 /* handwritten instruction */
    /* A6E38 80198A38 A0CCEC21 */  addi       $t4, $t7, -0x3360 /* handwritten instruction */
    /* A6E3C 80198A3C A8CCED21 */  addi       $t5, $t7, -0x3358 /* handwritten instruction */
    /* A6E40 80198A40 B0CCEE21 */  addi       $t6, $t7, -0x3350 /* handwritten instruction */
    /* A6E44 80198A44 B8CCEF21 */  addi       $t7, $t7, -0x3348 /* handwritten instruction */
    /* A6E48 80198A48 C0CCF021 */  addi       $s0, $t7, -0x3340 /* handwritten instruction */
    /* A6E4C 80198A4C C1CCF121 */  addi       $s1, $t7, -0x333F /* handwritten instruction */
    /* A6E50 80198A50 C2CCF221 */  addi       $s2, $t7, -0x333E /* handwritten instruction */
endlabel func_80198A00

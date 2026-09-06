/* Handwritten function */
nonmatching func_80189F9C, 0xBC

glabel func_80189F9C
    /* 9839C 80189F9C 1A80023C */  lui        $v0, %hi(D_8019ED30)
    /* 983A0 80189FA0 30ED4224 */  addiu      $v0, $v0, %lo(D_8019ED30)
    /* 983A4 80189FA4 2080033C */  lui        $v1, %hi(D_801FEC18)
    /* 983A8 80189FA8 18EC6324 */  addiu      $v1, $v1, %lo(D_801FEC18)
  .L80189FAC:
    /* 983AC 80189FAC 000040AC */  sw         $zero, 0x0($v0)
    /* 983B0 80189FB0 04004224 */  addiu      $v0, $v0, 0x4
    /* 983B4 80189FB4 2B084300 */  sltu       $at, $v0, $v1
    /* 983B8 80189FB8 FCFF2014 */  bnez       $at, .L80189FAC
    /* 983BC 80189FBC 00000000 */   nop
    /* 983C0 80189FC0 04000224 */  addiu      $v0, $zero, 0x4
    /* 983C4 80189FC4 00000000 */  nop
    /* 983C8 80189FC8 00000000 */  nop
    /* 983CC 80189FCC 00000000 */  nop
    /* 983D0 80189FD0 00000000 */  nop
    /* 983D4 80189FD4 1980043C */  lui        $a0, %hi(D_8018A048)
    /* 983D8 80189FD8 48A08424 */  addiu      $a0, $a0, %lo(D_8018A048)
    /* 983DC 80189FDC 21208200 */  addu       $a0, $a0, $v0
    /* 983E0 80189FE0 0000828C */  lw         $v0, 0x0($a0)
    /* 983E4 80189FE4 0080083C */  lui        $t0, %hi(D_80000004)
    /* 983E8 80189FE8 25E84800 */  or         $sp, $v0, $t0
    /* 983EC 80189FEC 2080043C */  lui        $a0, %hi(D_801FEC18)
    /* 983F0 80189FF0 18EC8424 */  addiu      $a0, $a0, %lo(D_801FEC18)
    /* 983F4 80189FF4 C0200400 */  sll        $a0, $a0, 3
    /* 983F8 80189FF8 C2200400 */  srl        $a0, $a0, 3
    /* 983FC 80189FFC 1A80033C */  lui        $v1, %hi(D_8019ECE4)
    /* 98400 8018A000 E4EC638C */  lw         $v1, %lo(D_8019ECE4)($v1)
    /* 98404 8018A004 00000000 */  nop
    /* 98408 8018A008 23284300 */  subu       $a1, $v0, $v1
    /* 9840C 8018A00C 2328A400 */  subu       $a1, $a1, $a0
    /* 98410 8018A010 25208800 */  or         $a0, $a0, $t0
    /* 98414 8018A014 1A80013C */  lui        $at, %hi(D_8019EFA0)
    /* 98418 8018A018 A0EF3FAC */  sw         $ra, %lo(D_8019EFA0)($at)
    /* 9841C 8018A01C 1A801C3C */  lui        $gp, %hi(_gp)
    /* 98420 8018A020 FCEC9C27 */  addiu      $gp, $gp, %lo(_gp)
    /* 98424 8018A024 21F0A003 */  addu       $fp, $sp, $zero
    /* 98428 8018A028 7A5D060C */  jal        func_801975E8
    /* 9842C 8018A02C 04008420 */   addi      $a0, $a0, %lo(D_80000004) /* handwritten instruction */
    /* 98430 8018A030 1A801F3C */  lui        $ra, %hi(D_8019EFA0)
    /* 98434 8018A034 A0EFFF8F */  lw         $ra, %lo(D_8019EFA0)($ra)
    /* 98438 8018A038 00000000 */  nop
    /* 9843C 8018A03C 2DDD050C */  jal        func_801774B4
    /* 98440 8018A040 00000000 */   nop
    /* 98444 8018A044 4D000000 */  break      0, 1
  alabel D_8018A048
    /* 98448 8018A048 00002000 */  .word      0x00200000                    # sll        $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    /* 9844C 8018A04C 00002000 */  .word      0x00200000                    # sll        $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    /* 98450 8018A050 00002000 */  .word      0x00200000                    # sll        $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    /* 98454 8018A054 00002000 */  .word      0x00200000                    # sll        $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
endlabel func_80189F9C

nonmatching func_8018D82C, 0x288

glabel func_8018D82C
    /* 9BC2C 8018D82C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 9BC30 8018D830 1F80043C */  lui        $a0, %hi(D_801F67BC)
    /* 9BC34 8018D834 BC67848C */  lw         $a0, %lo(D_801F67BC)($a0)
    /* 9BC38 8018D838 1A80033C */  lui        $v1, %hi(D_8019B58C)
    /* 9BC3C 8018D83C 8CB5638C */  lw         $v1, %lo(D_8019B58C)($v1)
    /* 9BC40 8018D840 01000224 */  addiu      $v0, $zero, 0x1
    /* 9BC44 8018D844 1000BFAF */  sw         $ra, 0x10($sp)
    /* 9BC48 8018D848 04108200 */  sllv       $v0, $v0, $a0
    /* 9BC4C 8018D84C 27100200 */  nor        $v0, $zero, $v0
    /* 9BC50 8018D850 24186200 */  and        $v1, $v1, $v0
    /* 9BC54 8018D854 00210400 */  sll        $a0, $a0, 4
    /* 9BC58 8018D858 1F80023C */  lui        $v0, %hi(D_801F67D8)
    /* 9BC5C 8018D85C D8674224 */  addiu      $v0, $v0, %lo(D_801F67D8)
    /* 9BC60 8018D860 21388200 */  addu       $a3, $a0, $v0
    /* 9BC64 8018D864 1A80013C */  lui        $at, %hi(D_8019B58C)
    /* 9BC68 8018D868 8CB523AC */  sw         $v1, %lo(D_8019B58C)($at)
    /* 9BC6C 8018D86C 0000E380 */  lb         $v1, 0x0($a3)
    /* 9BC70 8018D870 02000224 */  addiu      $v0, $zero, 0x2
    /* 9BC74 8018D874 17006214 */  bne        $v1, $v0, .L8018D8D4
    /* 9BC78 8018D878 01000624 */   addiu     $a2, $zero, 0x1
    /* 9BC7C 8018D87C 1F80023C */  lui        $v0, %hi(D_801F6968)
    /* 9BC80 8018D880 68694224 */  addiu      $v0, $v0, %lo(D_801F6968)
    /* 9BC84 8018D884 21288200 */  addu       $a1, $a0, $v0
    /* 9BC88 8018D888 21180000 */  addu       $v1, $zero, $zero
    /* 9BC8C 8018D88C 1F80023C */  lui        $v0, %hi(D_801F67DC)
    /* 9BC90 8018D890 21104400 */  addu       $v0, $v0, $a0
    /* 9BC94 8018D894 DC67428C */  lw         $v0, %lo(D_801F67DC)($v0)
    /* 9BC98 8018D898 1F80013C */  lui        $at, %hi(D_801F67E4)
    /* 9BC9C 8018D89C 21082400 */  addu       $at, $at, $a0
    /* 9BCA0 8018D8A0 E467248C */  lw         $a0, %lo(D_801F67E4)($at)
    /* 9BCA4 8018D8A4 F0FF4224 */  addiu      $v0, $v0, -0x10
    /* 9BCA8 8018D8A8 21208200 */  addu       $a0, $a0, $v0
  .L8018D8AC:
    /* 9BCAC 8018D8AC 0000A290 */  lbu        $v0, 0x0($a1)
    /* 9BCB0 8018D8B0 0100A524 */  addiu      $a1, $a1, 0x1
    /* 9BCB4 8018D8B4 01006324 */  addiu      $v1, $v1, 0x1
    /* 9BCB8 8018D8B8 000082A0 */  sb         $v0, 0x0($a0)
    /* 9BCBC 8018D8BC 10006228 */  slti       $v0, $v1, 0x10
    /* 9BCC0 8018D8C0 FAFF4014 */  bnez       $v0, .L8018D8AC
    /* 9BCC4 8018D8C4 01008424 */   addiu     $a0, $a0, 0x1
    /* 9BCC8 8018D8C8 06000224 */  addiu      $v0, $zero, 0x6
    /* 9BCCC 8018D8CC 0000E2A0 */  sb         $v0, 0x0($a3)
    /* 9BCD0 8018D8D0 01000624 */  addiu      $a2, $zero, 0x1
  .L8018D8D4:
    /* 9BCD4 8018D8D4 1F80043C */  lui        $a0, %hi(D_801F67BC)
    /* 9BCD8 8018D8D8 BC67848C */  lw         $a0, %lo(D_801F67BC)($a0)
    /* 9BCDC 8018D8DC 0800E58C */  lw         $a1, 0x8($a3)
    /* 9BCE0 8018D8E0 C0200400 */  sll        $a0, $a0, 3
    /* 9BCE4 8018D8E4 B12A060C */  jal        func_8018AAC4
    /* 9BCE8 8018D8E8 07008434 */   ori       $a0, $a0, 0x7
    /* 9BCEC 8018D8EC 1A80033C */  lui        $v1, %hi(D_8019B58C)
    /* 9BCF0 8018D8F0 8CB5638C */  lw         $v1, %lo(D_8019B58C)($v1)
    /* 9BCF4 8018D8F4 00000000 */  nop
    /* 9BCF8 8018D8F8 53006014 */  bnez       $v1, .L8018DA48
    /* 9BCFC 8018D8FC 00000000 */   nop
    /* 9BD00 8018D900 1F80023C */  lui        $v0, %hi(D_801F695C)
    /* 9BD04 8018D904 5C69428C */  lw         $v0, %lo(D_801F695C)($v0)
    /* 9BD08 8018D908 00000000 */  nop
    /* 9BD0C 8018D90C 12004014 */  bnez       $v0, .L8018D958
    /* 9BD10 8018D910 00000000 */   nop
    /* 9BD14 8018D914 1F80023C */  lui        $v0, %hi(D_801F67A8)
    /* 9BD18 8018D918 A867428C */  lw         $v0, %lo(D_801F67A8)($v0)
    /* 9BD1C 8018D91C 00000000 */  nop
    /* 9BD20 8018D920 0D004010 */  beqz       $v0, .L8018D958
    /* 9BD24 8018D924 00000000 */   nop
    /* 9BD28 8018D928 1A80043C */  lui        $a0, %hi(D_8019B598)
    /* 9BD2C 8018D92C 98B5848C */  lw         $a0, %lo(D_8019B598)($a0)
    /* 9BD30 8018D930 00000000 */  nop
    /* 9BD34 8018D934 08008010 */  beqz       $a0, .L8018D958
    /* 9BD38 8018D938 00000000 */   nop
    /* 9BD3C 8018D93C 1F80023C */  lui        $v0, %hi(D_801F67A8)
    /* 9BD40 8018D940 A867428C */  lw         $v0, %lo(D_801F67A8)($v0)
    /* 9BD44 8018D944 00000000 */  nop
    /* 9BD48 8018D948 09F84000 */  jalr       $v0
    /* 9BD4C 8018D94C 06000524 */   addiu     $a1, $zero, 0x6
    /* 9BD50 8018D950 1A80013C */  lui        $at, %hi(D_8019B598)
    /* 9BD54 8018D954 98B520AC */  sw         $zero, %lo(D_8019B598)($at)
  .L8018D958:
    /* 9BD58 8018D958 1F80023C */  lui        $v0, %hi(D_801F67A4)
    /* 9BD5C 8018D95C A467428C */  lw         $v0, %lo(D_801F67A4)($v0)
    /* 9BD60 8018D960 00000000 */  nop
    /* 9BD64 8018D964 0B004010 */  beqz       $v0, .L8018D994
    /* 9BD68 8018D968 00000000 */   nop
    /* 9BD6C 8018D96C 1A80043C */  lui        $a0, %hi(D_8019B588)
    /* 9BD70 8018D970 88B5848C */  lw         $a0, %lo(D_8019B588)($a0)
    /* 9BD74 8018D974 00000000 */  nop
    /* 9BD78 8018D978 06008010 */  beqz       $a0, .L8018D994
    /* 9BD7C 8018D97C 00000000 */   nop
    /* 9BD80 8018D980 1F80023C */  lui        $v0, %hi(D_801F67A4)
    /* 9BD84 8018D984 A467428C */  lw         $v0, %lo(D_801F67A4)($v0)
    /* 9BD88 8018D988 00000000 */  nop
    /* 9BD8C 8018D98C 09F84000 */  jalr       $v0
    /* 9BD90 8018D990 06000524 */   addiu     $a1, $zero, 0x6
  .L8018D994:
    /* 9BD94 8018D994 1F80033C */  lui        $v1, %hi(D_801F67B8)
    /* 9BD98 8018D998 B867638C */  lw         $v1, %lo(D_801F67B8)($v1)
    /* 9BD9C 8018D99C 1F80043C */  lui        $a0, %hi(D_801F67C8)
    /* 9BDA0 8018D9A0 C867848C */  lw         $a0, %lo(D_801F67C8)($a0)
    /* 9BDA4 8018D9A4 18006228 */  slti       $v0, $v1, 0x18
    /* 9BDA8 8018D9A8 03004010 */  beqz       $v0, .L8018D9B8
    /* 9BDAC 8018D9AC 00110400 */   sll       $v0, $a0, 4
    /* 9BDB0 8018D9B0 21206000 */  addu       $a0, $v1, $zero
    /* 9BDB4 8018D9B4 00110400 */  sll        $v0, $a0, 4
  .L8018D9B8:
    /* 9BDB8 8018D9B8 1F80043C */  lui        $a0, %hi(D_801F67E0)
    /* 9BDBC 8018D9BC 21208200 */  addu       $a0, $a0, $v0
    /* 9BDC0 8018D9C0 E067848C */  lw         $a0, %lo(D_801F67E0)($a0)
    /* 9BDC4 8018D9C4 1F80023C */  lui        $v0, %hi(D_801F695C)
    /* 9BDC8 8018D9C8 5C69428C */  lw         $v0, %lo(D_801F695C)($v0)
    /* 9BDCC 8018D9CC 01000324 */  addiu      $v1, $zero, 0x1
    /* 9BDD0 8018D9D0 01004238 */  xori       $v0, $v0, 0x1
    /* 9BDD4 8018D9D4 2B100200 */  sltu       $v0, $zero, $v0
    /* 9BDD8 8018D9D8 1F80013C */  lui        $at, %hi(D_801F67A0)
    /* 9BDDC 8018D9DC A06724AC */  sw         $a0, %lo(D_801F67A0)($at)
    /* 9BDE0 8018D9E0 1F80013C */  lui        $at, %hi(D_801F695C)
    /* 9BDE4 8018D9E4 07004310 */  beq        $v0, $v1, .L8018DA04
    /* 9BDE8 8018D9E8 5C6922AC */   sw        $v0, %lo(D_801F695C)($at)
    /* 9BDEC 8018D9EC 1F80023C */  lui        $v0, %hi(D_801F6958)
    /* 9BDF0 8018D9F0 5869428C */  lw         $v0, %lo(D_801F6958)($v0)
    /* 9BDF4 8018D9F4 00000000 */  nop
    /* 9BDF8 8018D9F8 21108200 */  addu       $v0, $a0, $v0
    /* 9BDFC 8018D9FC 1F80013C */  lui        $at, %hi(D_801F67A0)
    /* 9BE00 8018DA00 A06722AC */  sw         $v0, %lo(D_801F67A0)($at)
  .L8018DA04:
    /* 9BE04 8018DA04 1F80043C */  lui        $a0, %hi(D_801F67A0)
    /* 9BE08 8018DA08 A067848C */  lw         $a0, %lo(D_801F67A0)($a0)
    /* 9BE0C 8018DA0C 0239060C */  jal        func_8018E408
    /* 9BE10 8018DA10 00000000 */   nop
    /* 9BE14 8018DA14 B238060C */  jal        func_8018E2C8
    /* 9BE18 8018DA18 01000424 */   addiu     $a0, $zero, 0x1
    /* 9BE1C 8018DA1C 1F80023C */  lui        $v0, %hi(D_801F67B8)
    /* 9BE20 8018DA20 B867428C */  lw         $v0, %lo(D_801F67B8)($v0)
    /* 9BE24 8018DA24 40000324 */  addiu      $v1, $zero, 0x40
    /* 9BE28 8018DA28 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9BE2C 8018DA2C 84B523AC */  sw         $v1, %lo(D_8019B584)($at)
    /* 9BE30 8018DA30 18004228 */  slti       $v0, $v0, 0x18
    /* 9BE34 8018DA34 1B004010 */  beqz       $v0, .L8018DAA4
    /* 9BE38 8018DA38 32000224 */   addiu     $v0, $zero, 0x32
    /* 9BE3C 8018DA3C 1A80013C */  lui        $at, %hi(D_8019B584)
    /* 9BE40 8018DA40 A9360608 */  j          .L8018DAA4
    /* 9BE44 8018DA44 84B522AC */   sw        $v0, %lo(D_8019B584)($at)
  .L8018DA48:
    /* 9BE48 8018DA48 1F80023C */  lui        $v0, %hi(D_801F67BC)
    /* 9BE4C 8018DA4C BC67428C */  lw         $v0, %lo(D_801F67BC)($v0)
    /* 9BE50 8018DA50 00000000 */  nop
    /* 9BE54 8018DA54 01004424 */  addiu      $a0, $v0, 0x1
    /* 9BE58 8018DA58 18008228 */  slti       $v0, $a0, 0x18
    /* 9BE5C 8018DA5C 09004010 */  beqz       $v0, .L8018DA84
    /* 9BE60 8018DA60 01000524 */   addiu     $a1, $zero, 0x1
    /* 9BE64 8018DA64 04108500 */  sllv       $v0, $a1, $a0
  .L8018DA68:
    /* 9BE68 8018DA68 24106200 */  and        $v0, $v1, $v0
    /* 9BE6C 8018DA6C 05004014 */  bnez       $v0, .L8018DA84
    /* 9BE70 8018DA70 00000000 */   nop
    /* 9BE74 8018DA74 01008424 */  addiu      $a0, $a0, 0x1
    /* 9BE78 8018DA78 18008228 */  slti       $v0, $a0, 0x18
    /* 9BE7C 8018DA7C FAFF4014 */  bnez       $v0, .L8018DA68
    /* 9BE80 8018DA80 04108500 */   sllv      $v0, $a1, $a0
  .L8018DA84:
    /* 9BE84 8018DA84 1F80013C */  lui        $at, %hi(D_801F67BC)
    /* 9BE88 8018DA88 6B34060C */  jal        func_8018D1AC
    /* 9BE8C 8018DA8C BC6724AC */   sw        $a0, %lo(D_801F67BC)($at)
    /* 9BE90 8018DA90 0C00458C */  lw         $a1, 0xC($v0)
    /* 9BE94 8018DA94 1F80063C */  lui        $a2, %hi(D_801F6958)
    /* 9BE98 8018DA98 5869C68C */  lw         $a2, %lo(D_801F6958)($a2)
    /* 9BE9C 8018DA9C D729060C */  jal        func_8018A75C
    /* 9BEA0 8018DAA0 03000424 */   addiu     $a0, $zero, 0x3
  .L8018DAA4:
    /* 9BEA4 8018DAA4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 9BEA8 8018DAA8 1800BD27 */  addiu      $sp, $sp, 0x18
    /* 9BEAC 8018DAAC 0800E003 */  jr         $ra
    /* 9BEB0 8018DAB0 00000000 */   nop
endlabel func_8018D82C

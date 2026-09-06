nonmatching func_8015D9A8, 0x2FC

glabel func_8015D9A8
    /* 6BDA8 8015D9A8 E0FFBD27 */  addiu      $sp, $sp, -0x20
    /* 6BDAC 8015D9AC 21200000 */  addu       $a0, $zero, $zero
    /* 6BDB0 8015D9B0 1C00BFAF */  sw         $ra, 0x1C($sp)
    /* 6BDB4 8015D9B4 1800B2AF */  sw         $s2, 0x18($sp)
    /* 6BDB8 8015D9B8 1400B1AF */  sw         $s1, 0x14($sp)
    /* 6BDBC 8015D9BC 0FCF030C */  jal        func_800F3C3C
    /* 6BDC0 8015D9C0 1000B0AF */   sw        $s0, 0x10($sp)
    /* 6BDC4 8015D9C4 21200000 */  addu       $a0, $zero, $zero
    /* 6BDC8 8015D9C8 C1CE030C */  jal        func_800F3B04
    /* 6BDCC 8015D9CC 21884000 */   addu      $s1, $v0, $zero
    /* 6BDD0 8015D9D0 C1CE030C */  jal        func_800F3B04
    /* 6BDD4 8015D9D4 00200424 */   addiu     $a0, $zero, 0x2000
    /* 6BDD8 8015D9D8 21904000 */  addu       $s2, $v0, $zero
    /* 6BDDC 8015D9DC 57154292 */  lbu        $v0, 0x1557($s2)
    /* 6BDE0 8015D9E0 00000000 */  nop
    /* 6BDE4 8015D9E4 01004224 */  addiu      $v0, $v0, 0x1
    /* 6BDE8 8015D9E8 571542A2 */  sb         $v0, 0x1557($s2)
    /* 6BDEC 8015D9EC FF004330 */  andi       $v1, $v0, 0xFF
    /* 6BDF0 8015D9F0 01000224 */  addiu      $v0, $zero, 0x1
    /* 6BDF4 8015D9F4 55006214 */  bne        $v1, $v0, .L8015DB4C
    /* 6BDF8 8015D9F8 00000000 */   nop
    /* 6BDFC 8015D9FC 8D68010C */  jal        func_8005A234
    /* 6BE00 8015DA00 571540A2 */   sb        $zero, 0x1557($s2)
    /* 6BE04 8015DA04 8A0020A2 */  sb         $zero, 0x8A($s1)
  .L8015DA08:
    /* 6BE08 8015DA08 8A003092 */  lbu        $s0, 0x8A($s1)
    /* 6BE0C 8015DA0C 00000000 */  nop
    /* 6BE10 8015DA10 21101202 */  addu       $v0, $s0, $s2
    /* 6BE14 8015DA14 40154390 */  lbu        $v1, 0x1540($v0)
    /* 6BE18 8015DA18 00000000 */  nop
    /* 6BE1C 8015DA1C 29006014 */  bnez       $v1, .L8015DAC4
    /* 6BE20 8015DA20 00000000 */   nop
    /* 6BE24 8015DA24 8A002492 */  lbu        $a0, 0x8A($s1)
    /* 6BE28 8015DA28 00000000 */  nop
    /* 6BE2C 8015DA2C 40800400 */  sll        $s0, $a0, 1
    /* 6BE30 8015DA30 21101202 */  addu       $v0, $s0, $s2
    /* 6BE34 8015DA34 EB094390 */  lbu        $v1, 0x9EB($v0)
    /* 6BE38 8015DA38 00000000 */  nop
    /* 6BE3C 8015DA3C 20006330 */  andi       $v1, $v1, 0x20
    /* 6BE40 8015DA40 20006010 */  beqz       $v1, .L8015DAC4
    /* 6BE44 8015DA44 00000000 */   nop
    /* 6BE48 8015DA48 1A80023C */  lui        $v0, %hi(D_8019ED40)
    /* 6BE4C 8015DA4C 40ED428C */  lw         $v0, %lo(D_8019ED40)($v0)
    /* 6BE50 8015DA50 374B050C */  jal        func_80152CDC
    /* 6BE54 8015DA54 000044A0 */   sb        $a0, 0x0($v0)
    /* 6BE58 8015DA58 A7002292 */  lbu        $v0, 0xA7($s1)
    /* 6BE5C 8015DA5C A6003092 */  lbu        $s0, 0xA6($s1)
    /* 6BE60 8015DA60 00120200 */  sll        $v0, $v0, 8
    /* 6BE64 8015DA64 25800202 */  or         $s0, $s0, $v0
    /* 6BE68 8015DA68 21201202 */  addu       $a0, $s0, $s2
    /* 6BE6C 8015DA6C 03008290 */  lbu        $v0, 0x3($a0)
    /* 6BE70 8015DA70 00000000 */  nop
    /* 6BE74 8015DA74 C0004330 */  andi       $v1, $v0, 0xC0
    /* 6BE78 8015DA78 12006014 */  bnez       $v1, .L8015DAC4
    /* 6BE7C 8015DA7C 00000000 */   nop
    /* 6BE80 8015DA80 05008290 */  lbu        $v0, 0x5($a0)
    /* 6BE84 8015DA84 00000000 */  nop
    /* 6BE88 8015DA88 42004330 */  andi       $v1, $v0, 0x42
    /* 6BE8C 8015DA8C 0D006014 */  bnez       $v1, .L8015DAC4
    /* 6BE90 8015DA90 00000000 */   nop
    /* 6BE94 8015DA94 06008390 */  lbu        $v1, 0x6($a0)
    /* 6BE98 8015DA98 00000000 */  nop
    /* 6BE9C 8015DA9C 80006230 */  andi       $v0, $v1, 0x80
    /* 6BEA0 8015DAA0 08004014 */  bnez       $v0, .L8015DAC4
    /* 6BEA4 8015DAA4 00000000 */   nop
    /* 6BEA8 8015DAA8 8A002292 */  lbu        $v0, 0x8A($s1)
    /* 6BEAC 8015DAAC 00000000 */  nop
    /* 6BEB0 8015DAB0 40800200 */  sll        $s0, $v0, 1
    /* 6BEB4 8015DAB4 21181202 */  addu       $v1, $s0, $s2
    /* 6BEB8 8015DAB8 02000224 */  addiu      $v0, $zero, 0x2
    /* 6BEBC 8015DABC D41462A0 */  sb         $v0, 0x14D4($v1)
    /* 6BEC0 8015DAC0 D51460A0 */  sb         $zero, 0x14D5($v1)
  .L8015DAC4:
    /* 6BEC4 8015DAC4 8A002292 */  lbu        $v0, 0x8A($s1)
    /* 6BEC8 8015DAC8 00000000 */  nop
    /* 6BECC 8015DACC 01004224 */  addiu      $v0, $v0, 0x1
    /* 6BED0 8015DAD0 8A0022A2 */  sb         $v0, 0x8A($s1)
    /* 6BED4 8015DAD4 FF004330 */  andi       $v1, $v0, 0xFF
    /* 6BED8 8015DAD8 0D000224 */  addiu      $v0, $zero, 0xD
    /* 6BEDC 8015DADC CAFF6214 */  bne        $v1, $v0, .L8015DA08
    /* 6BEE0 8015DAE0 00000000 */   nop
    /* 6BEE4 8015DAE4 2387010C */  jal        func_80061C8C
    /* 6BEE8 8015DAE8 071940A2 */   sb        $zero, 0x1907($s2)
    /* 6BEEC 8015DAEC 07194392 */  lbu        $v1, 0x1907($s2)
    /* 6BEF0 8015DAF0 FF000224 */  addiu      $v0, $zero, 0xFF
    /* 6BEF4 8015DAF4 15006010 */  beqz       $v1, .L8015DB4C
    /* 6BEF8 8015DAF8 C21342A2 */   sb        $v0, 0x13C2($s2)
    /* 6BEFC 8015DAFC 05000424 */  addiu      $a0, $zero, 0x5
    /* 6BF00 8015DB00 F8000224 */  addiu      $v0, $zero, 0xF8
    /* 6BF04 8015DB04 03000324 */  addiu      $v1, $zero, 0x3
    /* 6BF08 8015DB08 C21342A2 */  sb         $v0, 0x13C2($s2)
    /* 6BF0C 8015DB0C 38000224 */  addiu      $v0, $zero, 0x38
    /* 6BF10 8015DB10 C31343A2 */  sb         $v1, 0x13C3($s2)
    /* 6BF14 8015DB14 53D9030C */  jal        func_800F654C
    /* 6BF18 8015DB18 CA1442A2 */   sb        $v0, 0x14CA($s2)
    /* 6BF1C 8015DB1C 0E43050C */  jal        func_80150C38
    /* 6BF20 8015DB20 00000000 */   nop
    /* 6BF24 8015DB24 BD66010C */  jal        func_80059AF4
    /* 6BF28 8015DB28 00000000 */   nop
    /* 6BF2C 8015DB2C 53D9030C */  jal        func_800F654C
    /* 6BF30 8015DB30 10000424 */   addiu     $a0, $zero, 0x10
    /* 6BF34 8015DB34 0E43050C */  jal        func_80150C38
    /* 6BF38 8015DB38 00000000 */   nop
    /* 6BF3C 8015DB3C 53D9030C */  jal        func_800F654C
    /* 6BF40 8015DB40 02000424 */   addiu     $a0, $zero, 0x2
    /* 6BF44 8015DB44 0E43050C */  jal        func_80150C38
    /* 6BF48 8015DB48 00000000 */   nop
  .L8015DB4C:
    /* 6BF4C 8015DB4C 8D68010C */  jal        func_8005A234
    /* 6BF50 8015DB50 00000000 */   nop
    /* 6BF54 8015DB54 1CBA050C */  jal        func_8016E870
    /* 6BF58 8015DB58 00000000 */   nop
    /* 6BF5C 8015DB5C 7C154392 */  lbu        $v1, 0x157C($s2)
    /* 6BF60 8015DB60 FF000224 */  addiu      $v0, $zero, 0xFF
    /* 6BF64 8015DB64 41006210 */  beq        $v1, $v0, .L8015DC6C
    /* 6BF68 8015DB68 01006224 */   addiu     $v0, $v1, 0x1
    /* 6BF6C 8015DB6C 7C1542A2 */  sb         $v0, 0x157C($s2)
    /* 6BF70 8015DB70 FF004230 */  andi       $v0, $v0, 0xFF
    /* 6BF74 8015DB74 05000324 */  addiu      $v1, $zero, 0x5
    /* 6BF78 8015DB78 3C004314 */  bne        $v0, $v1, .L8015DC6C
    /* 6BF7C 8015DB7C 00000000 */   nop
    /* 6BF80 8015DB80 8D68010C */  jal        func_8005A234
    /* 6BF84 8015DB84 7C1540A2 */   sb        $zero, 0x157C($s2)
    /* 6BF88 8015DB88 1A80023C */  lui        $v0, %hi(D_8019ED48)
    /* 6BF8C 8015DB8C 48ED428C */  lw         $v0, %lo(D_8019ED48)($v0)
    /* 6BF90 8015DB90 00000000 */  nop
    /* 6BF94 8015DB94 00005194 */  lhu        $s1, 0x0($v0)
    /* 6BF98 8015DB98 00000000 */  nop
    /* 6BF9C 8015DB9C 21802002 */  addu       $s0, $s1, $zero
  .L8015DBA0:
    /* 6BFA0 8015DBA0 40154392 */  lbu        $v1, 0x1540($s2)
    /* 6BFA4 8015DBA4 00000000 */  nop
    /* 6BFA8 8015DBA8 20006014 */  bnez       $v1, .L8015DC2C
    /* 6BFAC 8015DBAC 21101202 */   addu      $v0, $s0, $s2
    /* 6BFB0 8015DBB0 03004390 */  lbu        $v1, 0x3($v0)
    /* 6BFB4 8015DBB4 00000000 */  nop
    /* 6BFB8 8015DBB8 C0006330 */  andi       $v1, $v1, 0xC0
    /* 6BFBC 8015DBBC 1B006014 */  bnez       $v1, .L8015DC2C
    /* 6BFC0 8015DBC0 00000000 */   nop
    /* 6BFC4 8015DBC4 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 6BFC8 8015DBC8 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 6BFCC 8015DBCC 00000000 */  nop
    /* 6BFD0 8015DBD0 000050A4 */  sh         $s0, 0x0($v0)
    /* 6BFD4 8015DBD4 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 6BFD8 8015DBD8 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 6BFDC 8015DBDC CCE4030C */  jal        func_800F9330
    /* 6BFE0 8015DBE0 000071A4 */   sh        $s1, 0x0($v1)
    /* 6BFE4 8015DBE4 E7E4030C */  jal        func_800F939C
    /* 6BFE8 8015DBE8 00000000 */   nop
    /* 6BFEC 8015DBEC 40101100 */  sll        $v0, $s1, 1
    /* 6BFF0 8015DBF0 FFFF5030 */  andi       $s0, $v0, 0xFFFF
    /* 6BFF4 8015DBF4 21181202 */  addu       $v1, $s0, $s2
    /* 6BFF8 8015DBF8 7D154492 */  lbu        $a0, 0x157D($s2)
    /* 6BFFC 8015DBFC 80000224 */  addiu      $v0, $zero, 0x80
    /* 6C000 8015DC00 D51462A0 */  sb         $v0, 0x14D5($v1)
    /* 6C004 8015DC04 83E5030C */  jal        func_800F960C
    /* 6C008 8015DC08 D41464A0 */   sb        $a0, 0x14D4($v1)
    /* 6C00C 8015DC0C 68E5030C */  jal        func_800F95A0
    /* 6C010 8015DC10 00000000 */   nop
    /* 6C014 8015DC14 1A80023C */  lui        $v0, %hi(D_8019ED54)
    /* 6C018 8015DC18 54ED428C */  lw         $v0, %lo(D_8019ED54)($v0)
    /* 6C01C 8015DC1C 1A80033C */  lui        $v1, %hi(D_8019ED58)
    /* 6C020 8015DC20 58ED638C */  lw         $v1, %lo(D_8019ED58)($v1)
    /* 6C024 8015DC24 00005094 */  lhu        $s0, 0x0($v0)
    /* 6C028 8015DC28 00007194 */  lhu        $s1, 0x0($v1)
  .L8015DC2C:
    /* 6C02C 8015DC2C 91E5030C */  jal        func_800F9644
    /* 6C030 8015DC30 20000424 */   addiu     $a0, $zero, 0x20
    /* 6C034 8015DC34 80000326 */  addiu      $v1, $s0, 0x80
    /* 6C038 8015DC38 C7E5030C */  jal        func_800F971C
    /* 6C03C 8015DC3C FFFF7030 */   andi      $s0, $v1, 0xFFFF
    /* 6C040 8015DC40 98E5030C */  jal        func_800F9660
    /* 6C044 8015DC44 20000424 */   addiu     $a0, $zero, 0x20
    /* 6C048 8015DC48 01002326 */  addiu      $v1, $s1, 0x1
    /* 6C04C 8015DC4C FFFF7130 */  andi       $s1, $v1, 0xFFFF
    /* 6C050 8015DC50 05000224 */  addiu      $v0, $zero, 0x5
    /* 6C054 8015DC54 D2FF2216 */  bne        $s1, $v0, .L8015DBA0
    /* 6C058 8015DC58 00000000 */   nop
    /* 6C05C 8015DC5C 2387010C */  jal        func_80061C8C
    /* 6C060 8015DC60 00000000 */   nop
    /* 6C064 8015DC64 BD66010C */  jal        func_80059AF4
    /* 6C068 8015DC68 00000000 */   nop
  .L8015DC6C:
    /* 6C06C 8015DC6C 53D9030C */  jal        func_800F654C
    /* 6C070 8015DC70 11000424 */   addiu     $a0, $zero, 0x11
    /* 6C074 8015DC74 0E43050C */  jal        func_80150C38
    /* 6C078 8015DC78 00000000 */   nop
    /* 6C07C 8015DC7C 53D9030C */  jal        func_800F654C
    /* 6C080 8015DC80 0C000424 */   addiu     $a0, $zero, 0xC
    /* 6C084 8015DC84 0E43050C */  jal        func_80150C38
    /* 6C088 8015DC88 00000000 */   nop
    /* 6C08C 8015DC8C 1C00BF8F */  lw         $ra, 0x1C($sp)
    /* 6C090 8015DC90 1800B28F */  lw         $s2, 0x18($sp)
    /* 6C094 8015DC94 1400B18F */  lw         $s1, 0x14($sp)
    /* 6C098 8015DC98 1000B08F */  lw         $s0, 0x10($sp)
    /* 6C09C 8015DC9C 0800E003 */  jr         $ra
    /* 6C0A0 8015DCA0 2000BD27 */   addiu     $sp, $sp, 0x20
endlabel func_8015D9A8

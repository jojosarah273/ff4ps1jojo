nonmatching func_8013D720, 0x4E4

glabel func_8013D720
    /* 4BB20 8013D720 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 4BB24 8013D724 1000BFAF */  sw         $ra, 0x10($sp)
    /* 4BB28 8013D728 4BF4040C */  jal        func_8013D12C
    /* 4BB2C 8013D72C 00000000 */   nop
    /* 4BB30 8013D730 7A23050C */  jal        func_80148DE8
    /* 4BB34 8013D734 00000000 */   nop
    /* 4BB38 8013D738 53D9030C */  jal        func_800F654C
    /* 4BB3C 8013D73C 10000424 */   addiu     $a0, $zero, 0x10
    /* 4BB40 8013D740 62E0030C */  jal        func_800F8188
    /* 4BB44 8013D744 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 4BB48 8013D748 62E0030C */  jal        func_800F8188
    /* 4BB4C 8013D74C F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 4BB50 8013D750 C7E5030C */  jal        func_800F971C
    /* 4BB54 8013D754 00000000 */   nop
    /* 4BB58 8013D758 62E0030C */  jal        func_800F8188
    /* 4BB5C 8013D75C 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BB60 8013D760 53D9030C */  jal        func_800F654C
    /* 4BB64 8013D764 30000424 */   addiu     $a0, $zero, 0x30
    /* 4BB68 8013D768 62E0030C */  jal        func_800F8188
    /* 4BB6C 8013D76C 99F30434 */   ori       $a0, $zero, 0xF399
    /* 4BB70 8013D770 DEFB040C */  jal        func_8013EF78
    /* 4BB74 8013D774 00000000 */   nop
    /* 4BB78 8013D778 1B02050C */  jal        func_8014086C
    /* 4BB7C 8013D77C 00000000 */   nop
  .L8013D780:
    /* 4BB80 8013D780 5601050C */  jal        func_80140558
    /* 4BB84 8013D784 00000000 */   nop
    /* 4BB88 8013D788 72F5040C */  jal        func_8013D5C8
    /* 4BB8C 8013D78C 00000000 */   nop
    /* 4BB90 8013D790 C7E5030C */  jal        func_800F971C
    /* 4BB94 8013D794 00000000 */   nop
    /* 4BB98 8013D798 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4BB9C 8013D79C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4BBA0 8013D7A0 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4BBA4 8013D7A4 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4BBA8 8013D7A8 00006294 */  lhu        $v0, 0x0($v1)
    /* 4BBAC 8013D7AC 450F050C */  jal        func_80143D14
    /* 4BBB0 8013D7B0 000082A4 */   sh        $v0, 0x0($a0)
    /* 4BBB4 8013D7B4 04D5030C */  jal        func_800F5410
    /* 4BBB8 8013D7B8 00000000 */   nop
    /* 4BBBC 8013D7BC C1CE030C */  jal        func_800F3B04
    /* 4BBC0 8013D7C0 99F30434 */   ori       $a0, $zero, 0xF399
    /* 4BBC4 8013D7C4 CECF030C */  jal        func_800F3F38
    /* 4BBC8 8013D7C8 21204000 */   addu      $a0, $v0, $zero
    /* 4BBCC 8013D7CC 93E0030C */  jal        func_800F824C
    /* 4BBD0 8013D7D0 02000424 */   addiu     $a0, $zero, 0x2
    /* 4BBD4 8013D7D4 59D9030C */  jal        func_800F6564
    /* 4BBD8 8013D7D8 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BBDC 8013D7DC 93E0030C */  jal        func_800F824C
    /* 4BBE0 8013D7E0 21200000 */   addu      $a0, $zero, $zero
    /* 4BBE4 8013D7E4 C7E5030C */  jal        func_800F971C
    /* 4BBE8 8013D7E8 00000000 */   nop
    /* 4BBEC 8013D7EC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4BBF0 8013D7F0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4BBF4 8013D7F4 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4BBF8 8013D7F8 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4BBFC 8013D7FC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4BC00 8013D800 20000424 */  addiu      $a0, $zero, 0x20
    /* 4BC04 8013D804 53D9030C */  jal        func_800F654C
    /* 4BC08 8013D808 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4BC0C 8013D80C 910F050C */  jal        func_80143E44
    /* 4BC10 8013D810 00000000 */   nop
    /* 4BC14 8013D814 40DD030C */  jal        func_800F7500
    /* 4BC18 8013D818 21200000 */   addu      $a0, $zero, $zero
    /* 4BC1C 8013D81C C7E5030C */  jal        func_800F971C
    /* 4BC20 8013D820 00000000 */   nop
    /* 4BC24 8013D824 66F5040C */  jal        func_8013D598
    /* 4BC28 8013D828 00000000 */   nop
    /* 4BC2C 8013D82C 49D7030C */  jal        func_800F5D24
    /* 4BC30 8013D830 99F30434 */   ori       $a0, $zero, 0xF399
    /* 4BC34 8013D834 49D7030C */  jal        func_800F5D24
    /* 4BC38 8013D838 99F30434 */   ori       $a0, $zero, 0xF399
    /* 4BC3C 8013D83C 59D9030C */  jal        func_800F6564
    /* 4BC40 8013D840 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BC44 8013D844 20D5030C */  jal        func_800F5480
    /* 4BC48 8013D848 00000000 */   nop
    /* 4BC4C 8013D84C 16E0030C */  jal        func_800F8058
    /* 4BC50 8013D850 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BC54 8013D854 62E0030C */  jal        func_800F8188
    /* 4BC58 8013D858 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BC5C 8013D85C 5DD5030C */  jal        func_800F5574
    /* 4BC60 8013D860 80000424 */   addiu     $a0, $zero, 0x80
    /* 4BC64 8013D864 F5D4030C */  jal        func_800F53D4
    /* 4BC68 8013D868 00000000 */   nop
    /* 4BC6C 8013D86C C4FF4010 */  beqz       $v0, .L8013D780
    /* 4BC70 8013D870 00000000 */   nop
    /* 4BC74 8013D874 53D9030C */  jal        func_800F654C
    /* 4BC78 8013D878 C0000424 */   addiu     $a0, $zero, 0xC0
    /* 4BC7C 8013D87C 62E0030C */  jal        func_800F8188
    /* 4BC80 8013D880 33F10434 */   ori       $a0, $zero, 0xF133
    /* 4BC84 8013D884 04D5030C */  jal        func_800F5410
    /* 4BC88 8013D888 00000000 */   nop
    /* 4BC8C 8013D88C 02D0030C */  jal        func_800F4008
    /* 4BC90 8013D890 40000424 */   addiu     $a0, $zero, 0x40
    /* 4BC94 8013D894 62E0030C */  jal        func_800F8188
    /* 4BC98 8013D898 73F10434 */   ori       $a0, $zero, 0xF173
    /* 4BC9C 8013D89C 53D9030C */  jal        func_800F654C
    /* 4BCA0 8013D8A0 20000424 */   addiu     $a0, $zero, 0x20
    /* 4BCA4 8013D8A4 62E0030C */  jal        func_800F8188
    /* 4BCA8 8013D8A8 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 4BCAC 8013D8AC 62E0030C */  jal        func_800F8188
    /* 4BCB0 8013D8B0 F3F10434 */   ori       $a0, $zero, 0xF1F3
    /* 4BCB4 8013D8B4 53D9030C */  jal        func_800F654C
    /* 4BCB8 8013D8B8 80000424 */   addiu     $a0, $zero, 0x80
    /* 4BCBC 8013D8BC 62E0030C */  jal        func_800F8188
    /* 4BCC0 8013D8C0 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BCC4 8013D8C4 53D9030C */  jal        func_800F654C
    /* 4BCC8 8013D8C8 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BCCC 8013D8CC 62E0030C */  jal        func_800F8188
    /* 4BCD0 8013D8D0 99F30434 */   ori       $a0, $zero, 0xF399
  .L8013D8D4:
    /* 4BCD4 8013D8D4 5601050C */  jal        func_80140558
    /* 4BCD8 8013D8D8 00000000 */   nop
    /* 4BCDC 8013D8DC 72F5040C */  jal        func_8013D5C8
    /* 4BCE0 8013D8E0 00000000 */   nop
    /* 4BCE4 8013D8E4 C7E5030C */  jal        func_800F971C
    /* 4BCE8 8013D8E8 00000000 */   nop
    /* 4BCEC 8013D8EC 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4BCF0 8013D8F0 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4BCF4 8013D8F4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4BCF8 8013D8F8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4BCFC 8013D8FC 00006294 */  lhu        $v0, 0x0($v1)
    /* 4BD00 8013D900 590F050C */  jal        func_80143D64
    /* 4BD04 8013D904 000082A4 */   sh        $v0, 0x0($a0)
    /* 4BD08 8013D908 04D5030C */  jal        func_800F5410
    /* 4BD0C 8013D90C 00000000 */   nop
    /* 4BD10 8013D910 C1CE030C */  jal        func_800F3B04
    /* 4BD14 8013D914 98F30434 */   ori       $a0, $zero, 0xF398
    /* 4BD18 8013D918 CECF030C */  jal        func_800F3F38
    /* 4BD1C 8013D91C 21204000 */   addu      $a0, $v0, $zero
    /* 4BD20 8013D920 93E0030C */  jal        func_800F824C
    /* 4BD24 8013D924 21200000 */   addu      $a0, $zero, $zero
    /* 4BD28 8013D928 450F050C */  jal        func_80143D14
    /* 4BD2C 8013D92C 00000000 */   nop
    /* 4BD30 8013D930 04D5030C */  jal        func_800F5410
    /* 4BD34 8013D934 00000000 */   nop
    /* 4BD38 8013D938 C1CE030C */  jal        func_800F3B04
    /* 4BD3C 8013D93C 99F30434 */   ori       $a0, $zero, 0xF399
    /* 4BD40 8013D940 CECF030C */  jal        func_800F3F38
    /* 4BD44 8013D944 21204000 */   addu      $a0, $v0, $zero
    /* 4BD48 8013D948 93E0030C */  jal        func_800F824C
    /* 4BD4C 8013D94C 02000424 */   addiu     $a0, $zero, 0x2
    /* 4BD50 8013D950 C7E5030C */  jal        func_800F971C
    /* 4BD54 8013D954 00000000 */   nop
    /* 4BD58 8013D958 1A80033C */  lui        $v1, %hi(D_8019ED44)
    /* 4BD5C 8013D95C 44ED638C */  lw         $v1, %lo(D_8019ED44)($v1)
    /* 4BD60 8013D960 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4BD64 8013D964 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4BD68 8013D968 00006294 */  lhu        $v0, 0x0($v1)
    /* 4BD6C 8013D96C 66F5040C */  jal        func_8013D598
    /* 4BD70 8013D970 000082A4 */   sh        $v0, 0x0($a0)
    /* 4BD74 8013D974 C7E5030C */  jal        func_800F971C
    /* 4BD78 8013D978 00000000 */   nop
    /* 4BD7C 8013D97C 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4BD80 8013D980 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4BD84 8013D984 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4BD88 8013D988 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4BD8C 8013D98C 00004394 */  lhu        $v1, 0x0($v0)
    /* 4BD90 8013D990 20000424 */  addiu      $a0, $zero, 0x20
    /* 4BD94 8013D994 53D9030C */  jal        func_800F654C
    /* 4BD98 8013D998 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4BD9C 8013D99C 910F050C */  jal        func_80143E44
    /* 4BDA0 8013D9A0 00000000 */   nop
    /* 4BDA4 8013D9A4 59D9030C */  jal        func_800F6564
    /* 4BDA8 8013D9A8 B3F10434 */   ori       $a0, $zero, 0xF1B3
    /* 4BDAC 8013D9AC 5DD5030C */  jal        func_800F5574
    /* 4BDB0 8013D9B0 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BDB4 8013D9B4 F0D4030C */  jal        func_800F53C0
    /* 4BDB8 8013D9B8 00000000 */   nop
    /* 4BDBC 8013D9BC 0E004010 */  beqz       $v0, .L8013D9F8
    /* 4BDC0 8013D9C0 00000000 */   nop
    /* 4BDC4 8013D9C4 C7E5030C */  jal        func_800F971C
    /* 4BDC8 8013D9C8 00000000 */   nop
    /* 4BDCC 8013D9CC 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4BDD0 8013D9D0 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4BDD4 8013D9D4 1A80043C */  lui        $a0, %hi(D_8019ED54)
    /* 4BDD8 8013D9D8 54ED848C */  lw         $a0, %lo(D_8019ED54)($a0)
    /* 4BDDC 8013D9DC 00004394 */  lhu        $v1, 0x0($v0)
    /* 4BDE0 8013D9E0 33D7030C */  jal        func_800F5CCC
    /* 4BDE4 8013D9E4 000083A4 */   sh        $v1, 0x0($a0)
    /* 4BDE8 8013D9E8 6D0F050C */  jal        func_80143DB4
    /* 4BDEC 8013D9EC 00000000 */   nop
    /* 4BDF0 8013D9F0 35F60408 */  j          .L8013D8D4
    /* 4BDF4 8013D9F4 00000000 */   nop
  .L8013D9F8:
    /* 4BDF8 8013D9F8 C7E5030C */  jal        func_800F971C
    /* 4BDFC 8013D9FC 00000000 */   nop
    /* 4BE00 8013DA00 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4BE04 8013DA04 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4BE08 8013DA08 1A80053C */  lui        $a1, %hi(D_8019ED54)
    /* 4BE0C 8013DA0C 54EDA58C */  lw         $a1, %lo(D_8019ED54)($a1)
    /* 4BE10 8013DA10 00004394 */  lhu        $v1, 0x0($v0)
    /* 4BE14 8013DA14 63F40434 */  ori        $a0, $zero, 0xF463
    /* 4BE18 8013DA18 59D9030C */  jal        func_800F6564
    /* 4BE1C 8013DA1C 0000A3A4 */   sh        $v1, 0x0($a1)
    /* 4BE20 8013DA20 93E0030C */  jal        func_800F824C
    /* 4BE24 8013DA24 04000424 */   addiu     $a0, $zero, 0x4
  .L8013DA28:
    /* 4BE28 8013DA28 0FCF030C */  jal        func_800F3C3C
    /* 4BE2C 8013DA2C 04000424 */   addiu     $a0, $zero, 0x4
    /* 4BE30 8013DA30 CAD3030C */  jal        func_800F4F28
    /* 4BE34 8013DA34 21204000 */   addu      $a0, $v0, $zero
    /* 4BE38 8013DA38 EBD3030C */  jal        func_800F4FAC
    /* 4BE3C 8013DA3C 01010424 */   addiu     $a0, $zero, 0x101
    /* 4BE40 8013DA40 19004014 */  bnez       $v0, .L8013DAA8
    /* 4BE44 8013DA44 00000000 */   nop
    /* 4BE48 8013DA48 59D9030C */  jal        func_800F6564
    /* 4BE4C 8013DA4C 62F40434 */   ori       $a0, $zero, 0xF462
    /* 4BE50 8013DA50 0DD9030C */  jal        func_800F6434
    /* 4BE54 8013DA54 80000424 */   addiu     $a0, $zero, 0x80
    /* 4BE58 8013DA58 09004014 */  bnez       $v0, .L8013DA80
    /* 4BE5C 8013DA5C 00000000 */   nop
    /* 4BE60 8013DA60 DADA030C */  jal        func_800F6B68
    /* 4BE64 8013DA64 53F00434 */   ori       $a0, $zero, 0xF053
    /* 4BE68 8013DA68 93E0030C */  jal        func_800F824C
    /* 4BE6C 8013DA6C 21200000 */   addu      $a0, $zero, $zero
    /* 4BE70 8013DA70 DADA030C */  jal        func_800F6B68
    /* 4BE74 8013DA74 54F00434 */   ori       $a0, $zero, 0xF054
    /* 4BE78 8013DA78 A6F60408 */  j          .L8013DA98
    /* 4BE7C 8013DA7C 00000000 */   nop
  .L8013DA80:
    /* 4BE80 8013DA80 DADA030C */  jal        func_800F6B68
    /* 4BE84 8013DA84 43F00434 */   ori       $a0, $zero, 0xF043
    /* 4BE88 8013DA88 93E0030C */  jal        func_800F824C
    /* 4BE8C 8013DA8C 21200000 */   addu      $a0, $zero, $zero
    /* 4BE90 8013DA90 DADA030C */  jal        func_800F6B68
    /* 4BE94 8013DA94 44F00434 */   ori       $a0, $zero, 0xF044
  .L8013DA98:
    /* 4BE98 8013DA98 93E0030C */  jal        func_800F824C
    /* 4BE9C 8013DA9C 01000424 */   addiu     $a0, $zero, 0x1
    /* 4BEA0 8013DAA0 B4F60408 */  j          .L8013DAD0
    /* 4BEA4 8013DAA4 00000000 */   nop
  .L8013DAA8:
    /* 4BEA8 8013DAA8 D9D8030C */  jal        func_800F6364
    /* 4BEAC 8013DAAC 00000000 */   nop
    /* 4BEB0 8013DAB0 D9D8030C */  jal        func_800F6364
    /* 4BEB4 8013DAB4 00000000 */   nop
    /* 4BEB8 8013DAB8 56D6030C */  jal        func_800F5958
    /* 4BEBC 8013DABC 10000424 */   addiu     $a0, $zero, 0x10
    /* 4BEC0 8013DAC0 F5D4030C */  jal        func_800F53D4
    /* 4BEC4 8013DAC4 00000000 */   nop
    /* 4BEC8 8013DAC8 D7FF4010 */  beqz       $v0, .L8013DA28
    /* 4BECC 8013DACC 00000000 */   nop
  .L8013DAD0:
    /* 4BED0 8013DAD0 53D9030C */  jal        func_800F654C
    /* 4BED4 8013DAD4 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BED8 8013DAD8 62E0030C */  jal        func_800F8188
    /* 4BEDC 8013DADC 12F10434 */   ori       $a0, $zero, 0xF112
    /* 4BEE0 8013DAE0 8CD9030C */  jal        func_800F6630
    /* 4BEE4 8013DAE4 21200000 */   addu      $a0, $zero, $zero
    /* 4BEE8 8013DAE8 5DD5030C */  jal        func_800F5574
    /* 4BEEC 8013DAEC 80000424 */   addiu     $a0, $zero, 0x80
    /* 4BEF0 8013DAF0 F0D4030C */  jal        func_800F53C0
    /* 4BEF4 8013DAF4 00000000 */   nop
    /* 4BEF8 8013DAF8 05004010 */  beqz       $v0, .L8013DB10
    /* 4BEFC 8013DAFC 00000000 */   nop
    /* 4BF00 8013DB00 53D9030C */  jal        func_800F654C
    /* 4BF04 8013DB04 58000424 */   addiu     $a0, $zero, 0x58
    /* 4BF08 8013DB08 C6F60408 */  j          .L8013DB18
    /* 4BF0C 8013DB0C 00000000 */   nop
  .L8013DB10:
    /* 4BF10 8013DB10 53D9030C */  jal        func_800F654C
    /* 4BF14 8013DB14 A8000424 */   addiu     $a0, $zero, 0xA8
  .L8013DB18:
    /* 4BF18 8013DB18 62E0030C */  jal        func_800F8188
    /* 4BF1C 8013DB1C 11F10434 */   ori       $a0, $zero, 0xF111
    /* 4BF20 8013DB20 9CDC030C */  jal        func_800F7270
    /* 4BF24 8013DB24 21200000 */   addu      $a0, $zero, $zero
    /* 4BF28 8013DB28 40E3030C */  jal        func_800F8D00
    /* 4BF2C 8013DB2C 13F10434 */   ori       $a0, $zero, 0xF113
    /* 4BF30 8013DB30 53D9030C */  jal        func_800F654C
    /* 4BF34 8013DB34 10000424 */   addiu     $a0, $zero, 0x10
    /* 4BF38 8013DB38 62E0030C */  jal        func_800F8188
    /* 4BF3C 8013DB3C 15F10434 */   ori       $a0, $zero, 0xF115
    /* 4BF40 8013DB40 2B24050C */  jal        func_801490AC
    /* 4BF44 8013DB44 00000000 */   nop
  .L8013DB48:
    /* 4BF48 8013DB48 5601050C */  jal        func_80140558
    /* 4BF4C 8013DB4C 00000000 */   nop
    /* 4BF50 8013DB50 A4F5040C */  jal        func_8013D690
    /* 4BF54 8013DB54 00000000 */   nop
    /* 4BF58 8013DB58 DD24050C */  jal        func_80149374
    /* 4BF5C 8013DB5C 00000000 */   nop
    /* 4BF60 8013DB60 F0D4030C */  jal        func_800F53C0
    /* 4BF64 8013DB64 00000000 */   nop
    /* 4BF68 8013DB68 20004014 */  bnez       $v0, .L8013DBEC
    /* 4BF6C 8013DB6C 00000000 */   nop
    /* 4BF70 8013DB70 EEE3030C */  jal        func_800F8FB8
    /* 4BF74 8013DB74 01000424 */   addiu     $a0, $zero, 0x1
    /* 4BF78 8013DB78 EEE3030C */  jal        func_800F8FB8
    /* 4BF7C 8013DB7C 03000424 */   addiu     $a0, $zero, 0x3
    /* 4BF80 8013DB80 59D9030C */  jal        func_800F6564
    /* 4BF84 8013DB84 18F10434 */   ori       $a0, $zero, 0xF118
    /* 4BF88 8013DB88 20D5030C */  jal        func_800F5480
    /* 4BF8C 8013DB8C 00000000 */   nop
    /* 4BF90 8013DB90 16E0030C */  jal        func_800F8058
    /* 4BF94 8013DB94 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BF98 8013DB98 93E0030C */  jal        func_800F824C
    /* 4BF9C 8013DB9C 21200000 */   addu      $a0, $zero, $zero
    /* 4BFA0 8013DBA0 59D9030C */  jal        func_800F6564
    /* 4BFA4 8013DBA4 19F10434 */   ori       $a0, $zero, 0xF119
    /* 4BFA8 8013DBA8 20D5030C */  jal        func_800F5480
    /* 4BFAC 8013DBAC 00000000 */   nop
    /* 4BFB0 8013DBB0 16E0030C */  jal        func_800F8058
    /* 4BFB4 8013DBB4 08000424 */   addiu     $a0, $zero, 0x8
    /* 4BFB8 8013DBB8 93E0030C */  jal        func_800F824C
    /* 4BFBC 8013DBBC 02000424 */   addiu     $a0, $zero, 0x2
    /* 4BFC0 8013DBC0 C7E5030C */  jal        func_800F971C
    /* 4BFC4 8013DBC4 00000000 */   nop
    /* 4BFC8 8013DBC8 1A80023C */  lui        $v0, %hi(D_8019ED44)
    /* 4BFCC 8013DBCC 44ED428C */  lw         $v0, %lo(D_8019ED44)($v0)
    /* 4BFD0 8013DBD0 1A80043C */  lui        $a0, %hi(D_8019ED58)
    /* 4BFD4 8013DBD4 58ED848C */  lw         $a0, %lo(D_8019ED58)($a0)
    /* 4BFD8 8013DBD8 00004394 */  lhu        $v1, 0x0($v0)
    /* 4BFDC 8013DBDC 66F5040C */  jal        func_8013D598
    /* 4BFE0 8013DBE0 000083A4 */   sh        $v1, 0x0($a0)
    /* 4BFE4 8013DBE4 D2F60408 */  j          .L8013DB48
    /* 4BFE8 8013DBE8 00000000 */   nop
  .L8013DBEC:
    /* 4BFEC 8013DBEC DDE3030C */  jal        func_800F8F74
    /* 4BFF0 8013DBF0 87EF0434 */   ori       $a0, $zero, 0xEF87
    /* 4BFF4 8013DBF4 1000BF8F */  lw         $ra, 0x10($sp)
    /* 4BFF8 8013DBF8 00000000 */  nop
    /* 4BFFC 8013DBFC 0800E003 */  jr         $ra
    /* 4C000 8013DC00 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8013D720

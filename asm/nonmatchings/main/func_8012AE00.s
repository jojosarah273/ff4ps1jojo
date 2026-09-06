nonmatching func_8012AE00, 0x250

glabel func_8012AE00
    /* 39200 8012AE00 E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 39204 8012AE04 1000BFAF */  sw         $ra, 0x10($sp)
    /* 39208 8012AE08 80E4030C */  jal        func_800F9200
    /* 3920C 8012AE0C 00000000 */   nop
    /* 39210 8012AE10 80E4030C */  jal        func_800F9200
    /* 39214 8012AE14 00000000 */   nop
    /* 39218 8012AE18 59D9030C */  jal        func_800F6564
    /* 3921C 8012AE1C 1F1B0424 */   addiu     $a0, $zero, 0x1B1F
    /* 39220 8012AE20 0DD9030C */  jal        func_800F6434
    /* 39224 8012AE24 02000424 */   addiu     $a0, $zero, 0x2
    /* 39228 8012AE28 0B004014 */  bnez       $v0, .L8012AE58
    /* 3922C 8012AE2C 00000000 */   nop
    /* 39230 8012AE30 F7E4030C */  jal        func_800F93DC
    /* 39234 8012AE34 00000000 */   nop
    /* 39238 8012AE38 07D1040C */  jal        func_8013441C
    /* 3923C 8012AE3C 00000000 */   nop
    /* 39240 8012AE40 F0D4030C */  jal        func_800F53C0
    /* 39244 8012AE44 00000000 */   nop
    /* 39248 8012AE48 49004010 */  beqz       $v0, .L8012AF70
    /* 3924C 8012AE4C 00000000 */   nop
    /* 39250 8012AE50 D8AB0408 */  j          .L8012AF60
    /* 39254 8012AE54 00000000 */   nop
  .L8012AE58:
    /* 39258 8012AE58 F7E4030C */  jal        func_800F93DC
    /* 3925C 8012AE5C 00000000 */   nop
    /* 39260 8012AE60 5DD5030C */  jal        func_800F5574
    /* 39264 8012AE64 E2000424 */   addiu     $a0, $zero, 0xE2
    /* 39268 8012AE68 F5D4030C */  jal        func_800F53D4
    /* 3926C 8012AE6C 00000000 */   nop
    /* 39270 8012AE70 07004014 */  bnez       $v0, .L8012AE90
    /* 39274 8012AE74 00000000 */   nop
    /* 39278 8012AE78 5DD5030C */  jal        func_800F5574
    /* 3927C 8012AE7C E3000424 */   addiu     $a0, $zero, 0xE3
    /* 39280 8012AE80 F5D4030C */  jal        func_800F53D4
    /* 39284 8012AE84 00000000 */   nop
    /* 39288 8012AE88 15004010 */  beqz       $v0, .L8012AEE0
    /* 3928C 8012AE8C 00000000 */   nop
  .L8012AE90:
    /* 39290 8012AE90 80E4030C */  jal        func_800F9200
    /* 39294 8012AE94 00000000 */   nop
    /* 39298 8012AE98 59D9030C */  jal        func_800F6564
    /* 3929C 8012AE9C C91B0424 */   addiu     $a0, $zero, 0x1BC9
    /* 392A0 8012AEA0 0DD9030C */  jal        func_800F6434
    /* 392A4 8012AEA4 02000424 */   addiu     $a0, $zero, 0x2
    /* 392A8 8012AEA8 0B004014 */  bnez       $v0, .L8012AED8
    /* 392AC 8012AEAC 00000000 */   nop
    /* 392B0 8012AEB0 F7E4030C */  jal        func_800F93DC
    /* 392B4 8012AEB4 00000000 */   nop
    /* 392B8 8012AEB8 59D9030C */  jal        func_800F6564
    /* 392BC 8012AEBC 021A0424 */   addiu     $a0, $zero, 0x1A02
    /* 392C0 8012AEC0 0DD9030C */  jal        func_800F6434
    /* 392C4 8012AEC4 02000424 */   addiu     $a0, $zero, 0x2
    /* 392C8 8012AEC8 3B004014 */  bnez       $v0, .L8012AFB8
    /* 392CC 8012AECC 00000000 */   nop
    /* 392D0 8012AED0 D8AB0408 */  j          .L8012AF60
    /* 392D4 8012AED4 00000000 */   nop
  .L8012AED8:
    /* 392D8 8012AED8 F7E4030C */  jal        func_800F93DC
    /* 392DC 8012AEDC 00000000 */   nop
  .L8012AEE0:
    /* 392E0 8012AEE0 5DD5030C */  jal        func_800F5574
    /* 392E4 8012AEE4 19000424 */   addiu     $a0, $zero, 0x19
    /* 392E8 8012AEE8 F5D4030C */  jal        func_800F53D4
    /* 392EC 8012AEEC 00000000 */   nop
    /* 392F0 8012AEF0 1F004014 */  bnez       $v0, .L8012AF70
    /* 392F4 8012AEF4 00000000 */   nop
    /* 392F8 8012AEF8 5DD5030C */  jal        func_800F5574
    /* 392FC 8012AEFC C8000424 */   addiu     $a0, $zero, 0xC8
    /* 39300 8012AF00 F5D4030C */  jal        func_800F53D4
    /* 39304 8012AF04 00000000 */   nop
    /* 39308 8012AF08 19004014 */  bnez       $v0, .L8012AF70
    /* 3930C 8012AF0C 00000000 */   nop
    /* 39310 8012AF10 C1CE030C */  jal        func_800F3B04
    /* 39314 8012AF14 1D1B0424 */   addiu     $a0, $zero, 0x1B1D
    /* 39318 8012AF18 35D5030C */  jal        func_800F54D4
    /* 3931C 8012AF1C 21204000 */   addu      $a0, $v0, $zero
    /* 39320 8012AF20 F0D4030C */  jal        func_800F53C0
    /* 39324 8012AF24 00000000 */   nop
    /* 39328 8012AF28 11004010 */  beqz       $v0, .L8012AF70
    /* 3932C 8012AF2C 00000000 */   nop
    /* 39330 8012AF30 C1CE030C */  jal        func_800F3B04
    /* 39334 8012AF34 1E1B0424 */   addiu     $a0, $zero, 0x1B1E
    /* 39338 8012AF38 35D5030C */  jal        func_800F54D4
    /* 3933C 8012AF3C 21204000 */   addu      $a0, $v0, $zero
    /* 39340 8012AF40 F5D4030C */  jal        func_800F53D4
    /* 39344 8012AF44 00000000 */   nop
    /* 39348 8012AF48 05004014 */  bnez       $v0, .L8012AF60
    /* 3934C 8012AF4C 00000000 */   nop
    /* 39350 8012AF50 F0D4030C */  jal        func_800F53C0
    /* 39354 8012AF54 00000000 */   nop
    /* 39358 8012AF58 05004014 */  bnez       $v0, .L8012AF70
    /* 3935C 8012AF5C 00000000 */   nop
  .L8012AF60:
    /* 39360 8012AF60 8CD9030C */  jal        func_800F6630
    /* 39364 8012AF64 34000424 */   addiu     $a0, $zero, 0x34
    /* 39368 8012AF68 F4AB0408 */  j          .L8012AFD0
    /* 3936C 8012AF6C 00000000 */   nop
  .L8012AF70:
    /* 39370 8012AF70 5DD5030C */  jal        func_800F5574
    /* 39374 8012AF74 19000424 */   addiu     $a0, $zero, 0x19
    /* 39378 8012AF78 F5D4030C */  jal        func_800F53D4
    /* 3937C 8012AF7C 00000000 */   nop
    /* 39380 8012AF80 19004014 */  bnez       $v0, .L8012AFE8
    /* 39384 8012AF84 00000000 */   nop
    /* 39388 8012AF88 5DD5030C */  jal        func_800F5574
    /* 3938C 8012AF8C C8000424 */   addiu     $a0, $zero, 0xC8
    /* 39390 8012AF90 F5D4030C */  jal        func_800F53D4
    /* 39394 8012AF94 00000000 */   nop
    /* 39398 8012AF98 13004014 */  bnez       $v0, .L8012AFE8
    /* 3939C 8012AF9C 00000000 */   nop
    /* 393A0 8012AFA0 5DD5030C */  jal        func_800F5574
    /* 393A4 8012AFA4 EC000424 */   addiu     $a0, $zero, 0xEC
    /* 393A8 8012AFA8 F0D4030C */  jal        func_800F53C0
    /* 393AC 8012AFAC 00000000 */   nop
    /* 393B0 8012AFB0 0D004014 */  bnez       $v0, .L8012AFE8
    /* 393B4 8012AFB4 00000000 */   nop
  .L8012AFB8:
    /* 393B8 8012AFB8 53D9030C */  jal        func_800F654C
    /* 393BC 8012AFBC 04000424 */   addiu     $a0, $zero, 0x4
    /* 393C0 8012AFC0 0FCF030C */  jal        func_800F3C3C
    /* 393C4 8012AFC4 34000424 */   addiu     $a0, $zero, 0x34
    /* 393C8 8012AFC8 31DE030C */  jal        func_800F78C4
    /* 393CC 8012AFCC 21204000 */   addu      $a0, $v0, $zero
  .L8012AFD0:
    /* 393D0 8012AFD0 93E0030C */  jal        func_800F824C
    /* 393D4 8012AFD4 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 393D8 8012AFD8 F7E4030C */  jal        func_800F93DC
    /* 393DC 8012AFDC 00000000 */   nop
    /* 393E0 8012AFE0 10AC0408 */  j          .L8012B040
    /* 393E4 8012AFE4 00000000 */   nop
  .L8012AFE8:
    /* 393E8 8012AFE8 5DD5030C */  jal        func_800F5574
    /* 393EC 8012AFEC FE000424 */   addiu     $a0, $zero, 0xFE
    /* 393F0 8012AFF0 F5D4030C */  jal        func_800F53D4
    /* 393F4 8012AFF4 00000000 */   nop
    /* 393F8 8012AFF8 EFFF4014 */  bnez       $v0, .L8012AFB8
    /* 393FC 8012AFFC 00000000 */   nop
    /* 39400 8012B000 59D9030C */  jal        func_800F6564
    /* 39404 8012B004 C61B0424 */   addiu     $a0, $zero, 0x1BC6
    /* 39408 8012B008 0DD9030C */  jal        func_800F6434
    /* 3940C 8012B00C 02000424 */   addiu     $a0, $zero, 0x2
    /* 39410 8012B010 E9FF4014 */  bnez       $v0, .L8012AFB8
    /* 39414 8012B014 00000000 */   nop
    /* 39418 8012B018 53D9030C */  jal        func_800F654C
    /* 3941C 8012B01C 08000424 */   addiu     $a0, $zero, 0x8
    /* 39420 8012B020 0FCF030C */  jal        func_800F3C3C
    /* 39424 8012B024 34000424 */   addiu     $a0, $zero, 0x34
    /* 39428 8012B028 31DE030C */  jal        func_800F78C4
    /* 3942C 8012B02C 21204000 */   addu      $a0, $v0, $zero
    /* 39430 8012B030 93E0030C */  jal        func_800F824C
    /* 39434 8012B034 DB000424 */   addiu     $a0, $zero, 0xDB
    /* 39438 8012B038 F7E4030C */  jal        func_800F93DC
    /* 3943C 8012B03C 00000000 */   nop
  .L8012B040:
    /* 39440 8012B040 1000BF8F */  lw         $ra, 0x10($sp)
    /* 39444 8012B044 00000000 */  nop
    /* 39448 8012B048 0800E003 */  jr         $ra
    /* 3944C 8012B04C 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8012AE00

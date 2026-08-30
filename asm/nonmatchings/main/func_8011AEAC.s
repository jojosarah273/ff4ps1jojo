nonmatching func_8011AEAC, 0x2AC

glabel func_8011AEAC
    /* 292AC 8011AEAC E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 292B0 8011AEB0 1000BFAF */  sw         $ra, 0x10($sp)
    /* 292B4 8011AEB4 EEE3030C */  jal        func_800F8FB8
    /* 292B8 8011AEB8 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 292BC 8011AEBC 50D4030C */  jal        func_800F5140
    /* 292C0 8011AEC0 00000000 */   nop
    /* 292C4 8011AEC4 D3D3030C */  jal        func_800F4F4C
    /* 292C8 8011AEC8 00000000 */   nop
    /* 292CC 8011AECC 0FCF030C */  jal        func_800F3C3C
    /* 292D0 8011AED0 3E000424 */   addiu     $a0, $zero, 0x3E
    /* 292D4 8011AED4 90DE030C */  jal        func_800F7A40
    /* 292D8 8011AED8 21204000 */   addu      $a0, $v0, $zero
    /* 292DC 8011AEDC 93E0030C */  jal        func_800F824C
    /* 292E0 8011AEE0 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 292E4 8011AEE4 9CDC030C */  jal        func_800F7270
    /* 292E8 8011AEE8 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 292EC 8011AEEC 1200043C */  lui        $a0, (0x12F262 >> 16)
    /* 292F0 8011AEF0 1ADB030C */  jal        func_800F6C68
    /* 292F4 8011AEF4 62F28434 */   ori       $a0, $a0, (0x12F262 & 0xFFFF)
    /* 292F8 8011AEF8 93E0030C */  jal        func_800F824C
    /* 292FC 8011AEFC 40000424 */   addiu     $a0, $zero, 0x40
    /* 29300 8011AF00 1200043C */  lui        $a0, (0x12F263 >> 16)
    /* 29304 8011AF04 1ADB030C */  jal        func_800F6C68
    /* 29308 8011AF08 63F28434 */   ori       $a0, $a0, (0x12F263 & 0xFFFF)
    /* 2930C 8011AF0C 93E0030C */  jal        func_800F824C
    /* 29310 8011AF10 41000424 */   addiu     $a0, $zero, 0x41
    /* 29314 8011AF14 9CDC030C */  jal        func_800F7270
    /* 29318 8011AF18 40000424 */   addiu     $a0, $zero, 0x40
    /* 2931C 8011AF1C 92D7030C */  jal        func_800F5E48
    /* 29320 8011AF20 00000000 */   nop
    /* 29324 8011AF24 1200043C */  lui        $a0, (0x12F460 >> 16)
  .L8011AF28:
    /* 29328 8011AF28 1ADB030C */  jal        func_800F6C68
    /* 2932C 8011AF2C 60F48434 */   ori       $a0, $a0, (0x12F460 & 0xFFFF)
    /* 29330 8011AF30 5DD5030C */  jal        func_800F5574
    /* 29334 8011AF34 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 29338 8011AF38 F5D4030C */  jal        func_800F53D4
    /* 2933C 8011AF3C 00000000 */   nop
    /* 29340 8011AF40 05004014 */  bnez       $v0, .L8011AF58
    /* 29344 8011AF44 00000000 */   nop
    /* 29348 8011AF48 92D7030C */  jal        func_800F5E48
    /* 2934C 8011AF4C 00000000 */   nop
    /* 29350 8011AF50 CA6B0408 */  j          .L8011AF28
    /* 29354 8011AF54 1200043C */   lui       $a0, (0x12F460 >> 16)
  .L8011AF58:
    /* 29358 8011AF58 D9D8030C */  jal        func_800F6364
    /* 2935C 8011AF5C 00000000 */   nop
    /* 29360 8011AF60 40E3030C */  jal        func_800F8D00
    /* 29364 8011AF64 6B0A0424 */   addiu     $a0, $zero, 0xA6B
    /* 29368 8011AF68 9CDC030C */  jal        func_800F7270
    /* 2936C 8011AF6C 3D000424 */   addiu     $a0, $zero, 0x3D
    /* 29370 8011AF70 1200043C */  lui        $a0, (0x12F260 >> 16)
    /* 29374 8011AF74 1ADB030C */  jal        func_800F6C68
    /* 29378 8011AF78 60F28434 */   ori       $a0, $a0, (0x12F260 & 0xFFFF)
    /* 2937C 8011AF7C 93E0030C */  jal        func_800F824C
    /* 29380 8011AF80 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 29384 8011AF84 1200043C */  lui        $a0, (0x12F261 >> 16)
    /* 29388 8011AF88 1ADB030C */  jal        func_800F6C68
    /* 2938C 8011AF8C 61F28434 */   ori       $a0, $a0, (0x12F261 & 0xFFFF)
    /* 29390 8011AF90 93E0030C */  jal        func_800F824C
    /* 29394 8011AF94 BF000424 */   addiu     $a0, $zero, 0xBF
  .L8011AF98:
    /* 29398 8011AF98 9CDC030C */  jal        func_800F7270
    /* 2939C 8011AF9C BE000424 */   addiu     $a0, $zero, 0xBE
    /* 293A0 8011AFA0 1200043C */  lui        $a0, (0x12F460 >> 16)
    /* 293A4 8011AFA4 1ADB030C */  jal        func_800F6C68
    /* 293A8 8011AFA8 60F48434 */   ori       $a0, $a0, (0x12F460 & 0xFFFF)
    /* 293AC 8011AFAC 5DD5030C */  jal        func_800F5574
    /* 293B0 8011AFB0 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 293B4 8011AFB4 F5D4030C */  jal        func_800F53D4
    /* 293B8 8011AFB8 00000000 */   nop
    /* 293BC 8011AFBC 45004014 */  bnez       $v0, .L8011B0D4
    /* 293C0 8011AFC0 00000000 */   nop
    /* 293C4 8011AFC4 5DD5030C */  jal        func_800F5574
    /* 293C8 8011AFC8 FE000424 */   addiu     $a0, $zero, 0xFE
    /* 293CC 8011AFCC F5D4030C */  jal        func_800F53D4
    /* 293D0 8011AFD0 00000000 */   nop
    /* 293D4 8011AFD4 14004010 */  beqz       $v0, .L8011B028
    /* 293D8 8011AFD8 00000000 */   nop
    /* 293DC 8011AFDC 9CDC030C */  jal        func_800F7270
    /* 293E0 8011AFE0 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 293E4 8011AFE4 D9D8030C */  jal        func_800F6364
    /* 293E8 8011AFE8 00000000 */   nop
    /* 293EC 8011AFEC 5BE3030C */  jal        func_800F8D6C
    /* 293F0 8011AFF0 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 293F4 8011AFF4 1200043C */  lui        $a0, (0x12F460 >> 16)
    /* 293F8 8011AFF8 1ADB030C */  jal        func_800F6C68
    /* 293FC 8011AFFC 60F48434 */   ori       $a0, $a0, (0x12F460 & 0xFFFF)
    /* 29400 8011B000 AD6D040C */  jal        func_8011B6B4
    /* 29404 8011B004 00000000 */   nop
    /* 29408 8011B008 5DD5030C */  jal        func_800F5574
    /* 2940C 8011B00C 21200000 */   addu      $a0, $zero, $zero
    /* 29410 8011B010 F5D4030C */  jal        func_800F53D4
    /* 29414 8011B014 00000000 */   nop
    /* 29418 8011B018 0B004014 */  bnez       $v0, .L8011B048
    /* 2941C 8011B01C 00000000 */   nop
    /* 29420 8011B020 2D6C0408 */  j          .L8011B0B4
    /* 29424 8011B024 00000000 */   nop
  .L8011B028:
    /* 29428 8011B028 AD6D040C */  jal        func_8011B6B4
    /* 2942C 8011B02C 00000000 */   nop
    /* 29430 8011B030 5DD5030C */  jal        func_800F5574
    /* 29434 8011B034 21200000 */   addu      $a0, $zero, $zero
    /* 29438 8011B038 F5D4030C */  jal        func_800F53D4
    /* 2943C 8011B03C 00000000 */   nop
    /* 29440 8011B040 1C004014 */  bnez       $v0, .L8011B0B4
    /* 29444 8011B044 00000000 */   nop
  .L8011B048:
    /* 29448 8011B048 9CDC030C */  jal        func_800F7270
    /* 2944C 8011B04C BE000424 */   addiu     $a0, $zero, 0xBE
  .L8011B050:
    /* 29450 8011B050 D9D8030C */  jal        func_800F6364
    /* 29454 8011B054 00000000 */   nop
    /* 29458 8011B058 1200043C */  lui        $a0, (0x12F460 >> 16)
    /* 2945C 8011B05C 1ADB030C */  jal        func_800F6C68
    /* 29460 8011B060 60F48434 */   ori       $a0, $a0, (0x12F460 & 0xFFFF)
    /* 29464 8011B064 5DD5030C */  jal        func_800F5574
    /* 29468 8011B068 FF000424 */   addiu     $a0, $zero, 0xFF
    /* 2946C 8011B06C F5D4030C */  jal        func_800F53D4
    /* 29470 8011B070 00000000 */   nop
    /* 29474 8011B074 F6FF4010 */  beqz       $v0, .L8011B050
    /* 29478 8011B078 00000000 */   nop
    /* 2947C 8011B07C D9D8030C */  jal        func_800F6364
    /* 29480 8011B080 00000000 */   nop
    /* 29484 8011B084 5BE3030C */  jal        func_800F8D6C
    /* 29488 8011B088 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 2948C 8011B08C 9CDC030C */  jal        func_800F7270
    /* 29490 8011B090 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 29494 8011B094 C1CE030C */  jal        func_800F3B04
    /* 29498 8011B098 6B0A0424 */   addiu     $a0, $zero, 0xA6B
    /* 2949C 8011B09C ABD5030C */  jal        func_800F56AC
    /* 294A0 8011B0A0 21204000 */   addu      $a0, $v0, $zero
    /* 294A4 8011B0A4 F5D4030C */  jal        func_800F53D4
    /* 294A8 8011B0A8 00000000 */   nop
    /* 294AC 8011B0AC 09004014 */  bnez       $v0, .L8011B0D4
    /* 294B0 8011B0B0 00000000 */   nop
  .L8011B0B4:
    /* 294B4 8011B0B4 9CDC030C */  jal        func_800F7270
    /* 294B8 8011B0B8 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 294BC 8011B0BC D9D8030C */  jal        func_800F6364
    /* 294C0 8011B0C0 00000000 */   nop
    /* 294C4 8011B0C4 5BE3030C */  jal        func_800F8D6C
    /* 294C8 8011B0C8 BE000424 */   addiu     $a0, $zero, 0xBE
    /* 294CC 8011B0CC E66B0408 */  j          .L8011AF98
    /* 294D0 8011B0D0 00000000 */   nop
  .L8011B0D4:
    /* 294D4 8011B0D4 53D9030C */  jal        func_800F654C
    /* 294D8 8011B0D8 01000424 */   addiu     $a0, $zero, 0x1
    /* 294DC 8011B0DC 93E0030C */  jal        func_800F824C
    /* 294E0 8011B0E0 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 294E4 8011B0E4 0D80033C */  lui        $v1, (0x800D0677 >> 16)
    /* 294E8 8011B0E8 77066334 */  ori        $v1, $v1, (0x800D0677 & 0xFFFF)
    /* 294EC 8011B0EC 00006290 */  lbu        $v0, 0x0($v1)
    /* 294F0 8011B0F0 AB000424 */  addiu      $a0, $zero, 0xAB
    /* 294F4 8011B0F4 0D80013C */  lui        $at, %hi(D_800D067B)
    /* 294F8 8011B0F8 7B0620A0 */  sb         $zero, %lo(D_800D067B)($at)
    /* 294FC 8011B0FC 0F004230 */  andi       $v0, $v0, 0xF
    /* 29500 8011B100 EEE3030C */  jal        func_800F8FB8
    /* 29504 8011B104 000062A0 */   sb        $v0, 0x0($v1)
    /* 29508 8011B108 9CDC030C */  jal        func_800F7270
    /* 2950C 8011B10C BE000424 */   addiu     $a0, $zero, 0xBE
    /* 29510 8011B110 1200043C */  lui        $a0, (0x12F461 >> 16)
    /* 29514 8011B114 1ADB030C */  jal        func_800F6C68
    /* 29518 8011B118 61F48434 */   ori       $a0, $a0, (0x12F461 & 0xFFFF)
    /* 2951C 8011B11C 0DD9030C */  jal        func_800F6434
    /* 29520 8011B120 02000424 */   addiu     $a0, $zero, 0x2
    /* 29524 8011B124 05004014 */  bnez       $v0, .L8011B13C
    /* 29528 8011B128 00000000 */   nop
    /* 2952C 8011B12C FA58040C */  jal        func_801163E8
    /* 29530 8011B130 00000000 */   nop
    /* 29534 8011B134 04004014 */  bnez       $v0, .L8011B148
    /* 29538 8011B138 01000224 */   addiu     $v0, $zero, 0x1
  .L8011B13C:
    /* 2953C 8011B13C EEE3030C */  jal        func_800F8FB8
    /* 29540 8011B140 B1000424 */   addiu     $a0, $zero, 0xB1
    /* 29544 8011B144 21100000 */  addu       $v0, $zero, $zero
  .L8011B148:
    /* 29548 8011B148 1000BF8F */  lw         $ra, 0x10($sp)
    /* 2954C 8011B14C 00000000 */  nop
    /* 29550 8011B150 0800E003 */  jr         $ra
    /* 29554 8011B154 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8011AEAC

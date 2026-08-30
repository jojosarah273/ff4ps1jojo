nonmatching func_8016F97C, 0x1FC

glabel func_8016F97C
    /* 7DD7C 8016F97C E8FFBD27 */  addiu      $sp, $sp, -0x18
    /* 7DD80 8016F980 0D80033C */  lui        $v1, (0x800D1A3A >> 16)
    /* 7DD84 8016F984 3A1A6334 */  ori        $v1, $v1, (0x800D1A3A & 0xFFFF)
    /* 7DD88 8016F988 1000BFAF */  sw         $ra, 0x10($sp)
    /* 7DD8C 8016F98C 00006290 */  lbu        $v0, 0x0($v1)
    /* 7DD90 8016F990 00000000 */  nop
    /* 7DD94 8016F994 0F004230 */  andi       $v0, $v0, 0xF
    /* 7DD98 8016F998 9BE4030C */  jal        func_800F926C
    /* 7DD9C 8016F99C 000062A0 */   sb        $v0, 0x0($v1)
    /* 7DDA0 8016F9A0 A6E4030C */  jal        func_800F9298
    /* 7DDA4 8016F9A4 00000000 */   nop
    /* 7DDA8 8016F9A8 77DC030C */  jal        func_800F71DC
    /* 7DDAC 8016F9AC 00010424 */   addiu     $a0, $zero, 0x100
    /* 7DDB0 8016F9B0 CCE4030C */  jal        func_800F9330
    /* 7DDB4 8016F9B4 00000000 */   nop
    /* 7DDB8 8016F9B8 2EE5030C */  jal        func_800F94B8
    /* 7DDBC 8016F9BC 00000000 */   nop
    /* 7DDC0 8016F9C0 91E5030C */  jal        func_800F9644
    /* 7DDC4 8016F9C4 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DDC8 8016F9C8 56D9030C */  jal        func_800F6558
    /* 7DDCC 8016F9CC 17000424 */   addiu     $a0, $zero, 0x17
    /* 7DDD0 8016F9D0 77DC030C */  jal        func_800F71DC
    /* 7DDD4 8016F9D4 86FE0434 */   ori       $a0, $zero, 0xFE86
    /* 7DDD8 8016F9D8 40DD030C */  jal        func_800F7500
    /* 7DDDC 8016F9DC 051A0424 */   addiu     $a0, $zero, 0x1A05
    /* 7DDE0 8016F9E0 59CF030C */  jal        func_800F3D64
    /* 7DDE4 8016F9E4 7E140424 */   addiu     $a0, $zero, 0x147E
    /* 7DDE8 8016F9E8 56D9030C */  jal        func_800F6558
    /* 7DDEC 8016F9EC 17000424 */   addiu     $a0, $zero, 0x17
    /* 7DDF0 8016F9F0 77DC030C */  jal        func_800F71DC
    /* 7DDF4 8016F9F4 86FE0434 */   ori       $a0, $zero, 0xFE86
    /* 7DDF8 8016F9F8 40DD030C */  jal        func_800F7500
    /* 7DDFC 8016F9FC 1D1A0424 */   addiu     $a0, $zero, 0x1A1D
    /* 7DE00 8016FA00 59CF030C */  jal        func_800F3D64
    /* 7DE04 8016FA04 7E140424 */   addiu     $a0, $zero, 0x147E
    /* 7DE08 8016FA08 98E5030C */  jal        func_800F9660
    /* 7DE0C 8016FA0C 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DE10 8016FA10 59D9030C */  jal        func_800F6564
    /* 7DE14 8016FA14 A9160424 */   addiu     $a0, $zero, 0x16A9
    /* 7DE18 8016FA18 62E0030C */  jal        func_800F8188
    /* 7DE1C 8016FA1C 641A0424 */   addiu     $a0, $zero, 0x1A64
    /* 7DE20 8016FA20 59D9030C */  jal        func_800F6564
    /* 7DE24 8016FA24 3A1A0424 */   addiu     $a0, $zero, 0x1A3A
    /* 7DE28 8016FA28 50D4030C */  jal        func_800F5140
    /* 7DE2C 8016FA2C 00000000 */   nop
    /* 7DE30 8016FA30 93E0030C */  jal        func_800F824C
    /* 7DE34 8016FA34 43000424 */   addiu     $a0, $zero, 0x43
    /* 7DE38 8016FA38 9CDC030C */  jal        func_800F7270
    /* 7DE3C 8016FA3C 43000424 */   addiu     $a0, $zero, 0x43
    /* 7DE40 8016FA40 91E5030C */  jal        func_800F9644
    /* 7DE44 8016FA44 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DE48 8016FA48 E5E3030C */  jal        func_800F8F94
    /* 7DE4C 8016FA4C 2D1A0424 */   addiu     $a0, $zero, 0x1A2D
    /* 7DE50 8016FA50 E5E3030C */  jal        func_800F8F94
    /* 7DE54 8016FA54 1D1A0424 */   addiu     $a0, $zero, 0x1A1D
    /* 7DE58 8016FA58 E5E3030C */  jal        func_800F8F94
    /* 7DE5C 8016FA5C 2F1A0424 */   addiu     $a0, $zero, 0x1A2F
    /* 7DE60 8016FA60 E5E3030C */  jal        func_800F8F94
    /* 7DE64 8016FA64 1F1A0424 */   addiu     $a0, $zero, 0x1A1F
    /* 7DE68 8016FA68 E5E3030C */  jal        func_800F8F94
    /* 7DE6C 8016FA6C 211A0424 */   addiu     $a0, $zero, 0x1A21
    /* 7DE70 8016FA70 1400043C */  lui        $a0, (0x14FE7E >> 16)
    /* 7DE74 8016FA74 3DDB030C */  jal        func_800F6CF4
    /* 7DE78 8016FA78 7EFE8434 */   ori       $a0, $a0, (0x14FE7E & 0xFFFF)
    /* 7DE7C 8016FA7C 6CE0030C */  jal        func_800F81B0
    /* 7DE80 8016FA80 311A0424 */   addiu     $a0, $zero, 0x1A31
    /* 7DE84 8016FA84 98E5030C */  jal        func_800F9660
    /* 7DE88 8016FA88 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DE8C 8016FA8C 59D9030C */  jal        func_800F6564
    /* 7DE90 8016FA90 3B1A0424 */   addiu     $a0, $zero, 0x1A3B
    /* 7DE94 8016FA94 50D4030C */  jal        func_800F5140
    /* 7DE98 8016FA98 00000000 */   nop
    /* 7DE9C 8016FA9C 93E0030C */  jal        func_800F824C
    /* 7DEA0 8016FAA0 43000424 */   addiu     $a0, $zero, 0x43
    /* 7DEA4 8016FAA4 91E5030C */  jal        func_800F9644
    /* 7DEA8 8016FAA8 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DEAC 8016FAAC 9CDC030C */  jal        func_800F7270
    /* 7DEB0 8016FAB0 43000424 */   addiu     $a0, $zero, 0x43
    /* 7DEB4 8016FAB4 1400043C */  lui        $a0, (0x14FE7E >> 16)
    /* 7DEB8 8016FAB8 3DDB030C */  jal        func_800F6CF4
    /* 7DEBC 8016FABC 7EFE8434 */   ori       $a0, $a0, (0x14FE7E & 0xFFFF)
    /* 7DEC0 8016FAC0 6CE0030C */  jal        func_800F81B0
    /* 7DEC4 8016FAC4 231A0424 */   addiu     $a0, $zero, 0x1A23
    /* 7DEC8 8016FAC8 98E5030C */  jal        func_800F9660
    /* 7DECC 8016FACC 20000424 */   addiu     $a0, $zero, 0x20
    /* 7DED0 8016FAD0 59D9030C */  jal        func_800F6564
    /* 7DED4 8016FAD4 371A0424 */   addiu     $a0, $zero, 0x1A37
    /* 7DED8 8016FAD8 77DC030C */  jal        func_800F71DC
    /* 7DEDC 8016FADC 80000424 */   addiu     $a0, $zero, 0x80
    /* 7DEE0 8016FAE0 B7C0050C */  jal        func_801702DC
    /* 7DEE4 8016FAE4 00000000 */   nop
    /* 7DEE8 8016FAE8 59D9030C */  jal        func_800F6564
    /* 7DEEC 8016FAEC 381A0424 */   addiu     $a0, $zero, 0x1A38
    /* 7DEF0 8016FAF0 77DC030C */  jal        func_800F71DC
    /* 7DEF4 8016FAF4 00800434 */   ori       $a0, $zero, 0x8000
    /* 7DEF8 8016FAF8 B7C0050C */  jal        func_801702DC
    /* 7DEFC 8016FAFC 00000000 */   nop
    /* 7DF00 8016FB00 59D9030C */  jal        func_800F6564
    /* 7DF04 8016FB04 391A0424 */   addiu     $a0, $zero, 0x1A39
    /* 7DF08 8016FB08 77DC030C */  jal        func_800F71DC
    /* 7DF0C 8016FB0C 40000424 */   addiu     $a0, $zero, 0x40
    /* 7DF10 8016FB10 B7C0050C */  jal        func_801702DC
    /* 7DF14 8016FB14 00000000 */   nop
    /* 7DF18 8016FB18 53D9030C */  jal        func_800F654C
    /* 7DF1C 8016FB1C FF000424 */   addiu     $a0, $zero, 0xFF
    /* 7DF20 8016FB20 93E0030C */  jal        func_800F824C
    /* 7DF24 8016FB24 04000424 */   addiu     $a0, $zero, 0x4
    /* 7DF28 8016FB28 93E0030C */  jal        func_800F824C
    /* 7DF2C 8016FB2C 05000424 */   addiu     $a0, $zero, 0x5
    /* 7DF30 8016FB30 8CD9030C */  jal        func_800F6630
    /* 7DF34 8016FB34 DD000424 */   addiu     $a0, $zero, 0xDD
    /* 7DF38 8016FB38 93E0030C */  jal        func_800F824C
    /* 7DF3C 8016FB3C 08000424 */   addiu     $a0, $zero, 0x8
    /* 7DF40 8016FB40 93E0030C */  jal        func_800F824C
    /* 7DF44 8016FB44 09000424 */   addiu     $a0, $zero, 0x9
    /* 7DF48 8016FB48 2EE5030C */  jal        func_800F94B8
    /* 7DF4C 8016FB4C 00000000 */   nop
    /* 7DF50 8016FB50 12E5030C */  jal        func_800F9448
    /* 7DF54 8016FB54 00000000 */   nop
    /* 7DF58 8016FB58 C7E5030C */  jal        func_800F971C
    /* 7DF5C 8016FB5C 00000000 */   nop
    /* 7DF60 8016FB60 52CF030C */  jal        func_800F3D48
    /* 7DF64 8016FB64 00000000 */   nop
    /* 7DF68 8016FB68 1000BF8F */  lw         $ra, 0x10($sp)
    /* 7DF6C 8016FB6C 00000000 */  nop
    /* 7DF70 8016FB70 0800E003 */  jr         $ra
    /* 7DF74 8016FB74 1800BD27 */   addiu     $sp, $sp, 0x18
endlabel func_8016F97C

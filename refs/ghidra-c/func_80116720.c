
undefined4 FUN_80116720(void)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_800f71dc(0);
  FUN_800f8d6c(0xb3);
  FUN_800f6b68(0x9d5);
  FUN_800f8188(0xa16);
  FUN_800f5574(0xd0);
  iVar2 = FUN_800f53c0();
  if (iVar2 == 0) {
    while( true ) {
      FUN_800f7270(0xb3);
      FUN_800f6b68(0x9d5);
      FUN_800f8188(0xa16);
      FUN_800f5574(0xff);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) break;
      FUN_800f5574(0xc0);
      iVar2 = FUN_800f53c0();
      if (iVar2 == 0) {
        FUN_80116da0();
      }
      else {
        FUN_801172dc();
      }
      FUN_800f7270(0xb3);
      FUN_800f6364();
      FUN_800f8d6c(0xb3);
    }
LAB_801167e4:
    do {
      while( true ) {
        FUN_800fe778();
        FUN_800f8fb8(0xd5);
        FUN_800fe870();
        FUN_80102c30();
        FUN_800f6564(0x1700);
        FUN_800f5574(3);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) break;
        FUN_80102770();
        FUN_800ff024();
        FUN_800f6630(0xac);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6630(0x7b);
        *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_8019927c)[*DAT_8019ed54];
        iVar2 = FUN_800f4120(0x202);
        if (iVar2 == 0) {
          FUN_800f8fb8(0xab);
LAB_80116a0c:
          FUN_800f654c(1);
          FUN_800f824c(0xd5);
          return 0;
        }
      }
      iVar2 = FUN_800f3c3c(0);
      *(byte *)(iVar2 + 3) = *(byte *)(iVar2 + 3) & 0x7f;
      FUN_80102770();
      FUN_8010c368();
      FUN_80170c14();
      FUN_8010b010();
      FUN_800f6630(0xab);
      iVar2 = FUN_800f6434(2);
      if (iVar2 == 0) {
        FUN_800f6630(0xac);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6630(0x7b);
        *DAT_8019ed40 = *DAT_8019ed40 & (&DAT_8019927c)[*DAT_8019ed54];
        iVar2 = FUN_800f4120(0x202);
        if (iVar2 != 0) goto LAB_801167e4;
        FUN_800f8fb8(0xab);
      }
      FUN_800f71dc(0);
      FUN_800f8d6c(0x3d);
      FUN_800f6564(0x8fe);
      iVar2 = FUN_800f6434(2);
      if (iVar2 != 0) goto LAB_80116a0c;
      *DAT_8019ed58 = *DAT_8019ed44;
      while( true ) {
        FUN_800f7270(0x3d);
        FUN_800f6b68(0x908);
        iVar2 = FUN_800f6434(0x202);
        if (iVar2 != 0) break;
        FUN_800f90ec(0x90c);
        FUN_800f6630(0x3d);
        FUN_800f5410();
        FUN_800f4008(0xf);
        FUN_800f824c(0x3d);
        FUN_800f5ea0();
        iVar2 = FUN_800f5c64(0x202);
        if (iVar2 == 0) goto LAB_80116a0c;
      }
    } while( true );
  }
  FUN_800f5480();
  FUN_800f8058(0xd0);
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar3 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar3);
  FUN_800f824c(0x3d);
  FUN_800f7270(0x3d);
  uVar1 = *DAT_8019ed5c;
  FUN_800f7270(0xb3);
  switch(uVar1) {
  case 0:
    FUN_80119bdc();
    break;
  default:
    goto switchD_80116aa4_caseD_1;
  case 2:
    FUN_80119c24();
    break;
  case 4:
    FUN_80119d48();
    break;
  case 6:
    FUN_80119de4();
    break;
  case 8:
    FUN_80117660();
    break;
  case 10:
    FUN_80119e7c();
    break;
  case 0xc:
    FUN_80119a98();
    break;
  case 0xe:
    FUN_80117e9c();
    break;
  case 0x10:
    FUN_80117754();
    break;
  case 0x12:
    FUN_80117628();
    break;
  case 0x14:
    FUN_80118a40();
    break;
  case 0x16:
    FUN_80119020();
    break;
  case 0x18:
    FUN_801193f8();
    break;
  case 0x1a:
    FUN_801192f8();
    break;
  case 0x1c:
    FUN_80118b80();
    break;
  case 0x1e:
    FUN_80118d20();
    break;
  case 0x20:
    FUN_80118ec0();
    break;
  case 0x22:
    FUN_80118ef8();
    break;
  case 0x24:
    FUN_80118aa8();
    break;
  case 0x26:
    FUN_801190a8();
    break;
  case 0x28:
    FUN_80119128();
    break;
  case 0x2a:
    FUN_801191b0();
    break;
  case 0x2c:
    FUN_80119210();
    break;
  case 0x2e:
    FUN_80117fa8();
    break;
  case 0x30:
    FUN_80118534();
    break;
  case 0x32:
    FUN_80119740();
    break;
  case 0x34:
    FUN_8011770c();
    break;
  case 0x36:
  case 0x58:
    FUN_800f9c90();
    break;
  case 0x38:
    iVar2 = FUN_8011777c();
    if (iVar2 != 0) {
      return 1;
    }
    goto switchD_80116aa4_caseD_1;
  case 0x3a:
    FUN_80117698();
    break;
  case 0x3c:
    FUN_8011acac();
    break;
  case 0x3e:
    FUN_8011ac64();
    break;
  case 0x40:
    FUN_8011ad14();
    break;
  case 0x42:
    FUN_8011ad5c();
    break;
  case 0x44:
    FUN_8011adec();
    break;
  case 0x46:
    FUN_8011ae1c();
    break;
  case 0x48:
    FUN_8011ae4c();
    break;
  case 0x4a:
    FUN_8011ae7c();
    break;
  case 0x4c:
    FUN_8011ada4();
    break;
  case 0x4e:
    FUN_801198f0();
    break;
  case 0x50:
    FUN_80119860();
    break;
  case 0x52:
    FUN_80118750();
    break;
  case 0x54:
    FUN_80117f10();
    break;
  case 0x56:
    FUN_80117f78();
    break;
  case 0x5a:
    FUN_8010da88();
    break;
  case 0x5c:
    FUN_8011a690();
switchD_80116aa4_caseD_1:
  }
  return 0;
}




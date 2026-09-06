
void FUN_80116da0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f824c(0xae);
  *DAT_8019ed40 = *DAT_8019ed40 >> 4;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f654c(0);
  while( true ) {
    FUN_800f5a90(0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) break;
    FUN_800f5ea0();
    FUN_800f5410();
    FUN_800f4008(0xf);
  }
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d00(0xa47);
  FUN_800f654c(0x40);
  FUN_800f8768(0x908);
  FUN_800f6630(0xae);
  FUN_800f4248(0xf);
  FUN_800f5574(4);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f61e8();
    FUN_800f8768(0x902);
    FUN_800f6630(0xcf);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x902);
      FUN_800f5ccc();
      FUN_800f8768(0x909);
    }
    FUN_800f6630(0xea);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f62bc(0xea);
    }
  }
  else {
    FUN_800f5574(8);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f5480();
      FUN_800f8058(4);
LAB_8011728c:
      FUN_800f8768(0x909);
      goto LAB_801172c4;
    }
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f90ec(0x902);
      FUN_800f6b68(0x906);
      FUN_800f824c(0x3e);
      FUN_800f8fb8(0x3d);
      uVar2 = FUN_800f3c3c(0x3e);
      FUN_800f76bc(uVar2);
      FUN_800f76e8();
      uVar2 = FUN_800f3c3c(0x3d);
      FUN_800f7cc8(uVar2);
      uVar2 = FUN_800f3c3c(0x3e);
      FUN_800f76bc(uVar2);
      FUN_800f76e8();
      uVar2 = FUN_800f3c3c(0x3d);
      FUN_800f7cc8(uVar2);
      uVar2 = FUN_800f3c3c(0x3e);
      FUN_800f76bc(uVar2);
      FUN_800f76e8();
      uVar2 = FUN_800f3c3c(0x3d);
      FUN_800f7cc8(uVar2);
      FUN_800f6630(0x3d);
      FUN_800f5410();
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x904);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0x3d);
      FUN_800f6630(0xae);
      *DAT_8019ed40 = *DAT_8019ed40 >> 4;
      FUN_800f5410();
      FUN_800f4008(0x80);
      FUN_800f824c(6);
      FUN_800f6b68(0x90b);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f90ec(0x90b);
        FUN_800f9330();
        FUN_800f7270(0x3d);
        FUN_800f6c68(0x7f4c00);
        uVar2 = FUN_800f3c3c(6);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f654c(0);
          FUN_800f885c(0x7f4c00);
        }
      }
      else {
        FUN_800f654c(1);
        FUN_800f8768(0x90b);
        FUN_800f9330();
        FUN_800f7270(0x3d);
        FUN_800f6630(6);
        FUN_800f885c(0x7f4c00);
      }
      FUN_800f95a0();
      goto LAB_801172c4;
    }
    FUN_800f5574(9);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(10);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5574(0xb);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) {
          FUN_800f5574(0xc);
          iVar1 = FUN_800f53d4();
          uVar2 = 5;
          if (iVar1 == 0) {
            FUN_800f5574(0xd);
            iVar1 = FUN_800f53d4();
            uVar2 = 4;
            if (iVar1 == 0) {
              FUN_800f5574(0xe);
              iVar1 = FUN_800f53d4();
              uVar2 = 7;
              if (iVar1 != 0) {
                uVar2 = 6;
              }
            }
          }
          FUN_800f654c(uVar2);
          goto LAB_8011728c;
        }
        FUN_800f90ec(0x8ff);
        FUN_800f654c(3);
        FUN_800f8768(0x90c);
        uVar2 = 0x80;
      }
      else {
        FUN_800f90ec(0x8ff);
        FUN_800f654c(2);
        FUN_800f8768(0x90c);
        uVar2 = 0x40;
      }
      FUN_800f654c(uVar2);
      FUN_800f8768(0x908);
      goto LAB_801172c4;
    }
    FUN_800f6b68(0x909);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6b68(0x909);
      FUN_800f4248(2);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(2);
        FUN_800f8768(0x902);
        FUN_800f5ccc();
        FUN_800f8768(0x909);
      }
      else {
        FUN_800f654c(4);
        FUN_800f8768(0x902);
        FUN_800f5ccc();
        FUN_800f8768(0x909);
      }
    }
    FUN_800f654c(1);
    FUN_800f8768(0x90c);
    FUN_800f654c(0x80);
    FUN_800f8768(0x908);
  }
  FUN_800f6b68(0x904);
  FUN_800f824c(0xc);
  FUN_800f6b68(0x906);
  FUN_800f824c(0xe);
  FUN_8010d2a0();
LAB_801172c4:
  FUN_800f90ec(0x8ff);
  return;
}




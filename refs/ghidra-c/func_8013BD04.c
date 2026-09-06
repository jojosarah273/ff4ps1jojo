
void FUN_8013bd04(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7594(0x41);
  FUN_800f654c(8);
  FUN_800f824c(0x48);
  do {
    FUN_800f6d70(0xff28);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x30);
      FUN_800f824c(0x45);
      FUN_800f7270(0x41);
      do {
        FUN_800f6d70(0xff28);
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1440);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f6d70(0xff29);
          FUN_800f5410();
          uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x1441);
          FUN_800f3f38(uVar2);
          FUN_800f5574(100);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) {
            FUN_800f8768(0x1441);
            FUN_800f654c(0);
            FUN_800f8960(0xff28);
            FUN_800f8960(0xff29);
            break;
          }
        }
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f5da0(0x45);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
    }
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5da0(0x48);
    iVar1 = FUN_800f5b8c(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(8);
      FUN_800f824c(0x45);
      FUN_800f7594(0x41);
      do {
        FUN_800f6d70(0xff28);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f654c(0);
          FUN_800f939c();
          FUN_80134948();
          FUN_800f960c();
          FUN_800f5574(0);
          iVar1 = FUN_800f53d4();
          if (iVar1 != 0) {
            FUN_800f9644(0x20);
            FUN_800f6de8(0xff28);
            FUN_800f87dc(0x1440);
            FUN_800f6658(0x41);
            FUN_800f89d4(0xff28);
            FUN_800f9660(0x20);
          }
        }
        FUN_800f63bc();
        FUN_800f63bc();
        FUN_800f5da0(0x45);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
      FUN_800f7500(8);
      FUN_800f7270(0x41);
      *DAT_8019ed40 = *DAT_8019ed5c;
      do {
        FUN_800f5410();
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xff29);
        FUN_800f3f38(uVar2);
        FUN_800f6364();
        FUN_800f6364();
        FUN_800f5ea0();
        iVar1 = FUN_800f5c64(0x202);
      } while (iVar1 != 0);
      FUN_8013c4b4();
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_8013bffc();
      }
      else {
        FUN_800f62bc(0x60);
        FUN_8013c44c();
        FUN_8011f684();
        FUN_801210ac();
        FUN_801263f0();
        FUN_8011ff40();
      }
      return;
    }
  } while( true );
}




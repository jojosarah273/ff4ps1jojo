
void FUN_8013e2f8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8188(0xf13d);
  FUN_8013d12c();
  FUN_80148de8();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0x16ffee);
    FUN_800f8768(0xf1b3);
    FUN_800f6c68(0x16fff2);
    FUN_800f8768(0xf1f3);
    FUN_800f654c(0xfc);
    FUN_80143e44();
    FUN_800f6364();
    FUN_800f5958(4);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  do {
    FUN_80140558();
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6564(0xf13d);
    FUN_800f824c(10);
    do {
      uVar2 = FUN_800f3c3c(10);
      FUN_800f4f28(uVar2);
      iVar1 = FUN_800f4fac(0x101);
      if (iVar1 == 0) {
        FUN_800f6564(0xf13e);
        iVar1 = FUN_800f6434(0x80);
        if (iVar1 == 0) {
          FUN_800f6b68(0xf053);
          FUN_800f5410();
          FUN_800f4008(0x10);
          FUN_800f824c(0);
          FUN_800f6b68(0xf054);
        }
        else {
          FUN_800f6b68(0xf043);
          FUN_800f5480();
          FUN_800f8058(0xc);
          FUN_800f824c(0);
          FUN_800f6b68(0xf044);
        }
        FUN_800f824c(2);
        FUN_800f9330();
        FUN_800f71dc(0);
        do {
          FUN_8013e200();
          FUN_800f6364();
          FUN_800f5958(4);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f95a0();
      }
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f5958(0x10);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      *DAT_8019ed40 = (&DAT_8019a0b8)[*DAT_8019ed54];
      FUN_80143e44();
      FUN_800f6364();
      FUN_800f5958(4);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6564(0xf133);
    FUN_800f5574(0x80);
    iVar1 = FUN_800f53c0();
  } while (iVar1 != 0);
  return;
}





void FUN_80144050(void)

{
  int iVar1;
  
  FUN_80145278();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0x1900);
    FUN_800f8768(0xf133);
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_800f8768(0xf173);
    FUN_800f90ec(0xf1b3);
    FUN_800f654c(8);
    FUN_800f8768(0xf1f3);
    FUN_800f654c(0x98);
    FUN_800f8768(0xebe6);
    FUN_800f90ec(0xec26);
    FUN_800f90ec(0xec66);
    FUN_800f6364();
    FUN_800f5958(0x40);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_8013d12c();
  FUN_80140894();
  FUN_8013ef78();
  do {
    FUN_80140558();
    FUN_80143ed4();
    FUN_800f6564(0xebe6);
    FUN_800f5480();
    FUN_800f8058(6);
    FUN_800f8188(0xebe6);
    FUN_800f654c(1);
    FUN_800f8188(0xec66);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f654c(0x10);
      FUN_80143e44();
      FUN_800f6364();
      FUN_800f5958(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6564(0xf1b3);
    FUN_800f5410();
    FUN_800f4008(2);
    FUN_800f8188(0xf1b3);
    FUN_800f71dc(0x3e);
    do {
      FUN_800f6b68(0xebe6);
      FUN_800f8768(0xebe7);
      FUN_800f6b68(0xec66);
      FUN_800f8768(0xec67);
      FUN_800f6b68(0xf1b3);
      FUN_800f8768(0xf1b4);
      FUN_800f6b68(0xf1f3);
      FUN_800f8768(0xf1f4);
      FUN_800f5e48();
      FUN_800f5958(0xffff);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    while( true ) {
      FUN_800f6b68(0xec26);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) break;
      FUN_800f6364();
      FUN_800f5958(0x40);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f8f74(0xef87);
        FUN_801452c8();
        return;
      }
    }
  } while( true );
}




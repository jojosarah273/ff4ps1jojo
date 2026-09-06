
void FUN_8015e464(void)

{
  int iVar1;
  
  FUN_800f7270(0xa6);
  FUN_800f654c(0x80);
  FUN_800f8768(0x2050);
  FUN_800f90ec(0x2051);
  FUN_800f90ec(0x2054);
  FUN_800f90ec(0x2053);
  FUN_800f6b68(0x2004);
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    do {
      do {
        do {
          do {
            FUN_800f71dc(0);
            FUN_800f654c(4);
            FUN_80152224();
            FUN_800f824c(0xa9);
            FUN_800f824c(0xdf);
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f6b68(0x3540);
            iVar1 = FUN_800f6434(0x202);
          } while (iVar1 != 0);
          FUN_800f654c(0x80);
          FUN_800f824c(0xab);
          FUN_8015240c();
          FUN_800f7270(0xe3);
          FUN_800f6b68(0x2003);
          FUN_800f4248(0xc0);
          iVar1 = FUN_800f4120(0x202);
        } while (iVar1 != 0);
        FUN_800f6b68(0x2005);
        FUN_800f4248(0x82);
        iVar1 = FUN_800f4120(0x202);
      } while (iVar1 != 0);
      FUN_800f6b68(0x2006);
      iVar1 = FUN_800f6434(0x80);
    } while (iVar1 != 0);
    FUN_800f6630(0xa9);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_80153098();
    FUN_800f7270(0xa6);
    FUN_800f8768(0x2054);
  }
  else {
    do {
      FUN_8015316c();
      FUN_800f824c(0xa9);
      FUN_800f5410();
      FUN_800f4008(5);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0x3540);
      iVar1 = FUN_800f6434(0x202);
    } while (iVar1 != 0);
    FUN_800f6630(0xa9);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_80153098();
    FUN_800f7270(0xa6);
    FUN_800f8768(0x2053);
  }
  return;
}




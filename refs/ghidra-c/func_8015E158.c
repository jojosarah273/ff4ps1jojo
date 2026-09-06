
void FUN_8015e158(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7210(0x3536);
  FUN_800f8d6c(0xa9);
  FUN_800f7500(0x30);
  while( true ) {
    FUN_800f6b68(0x2c7a);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 != 0) break;
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x202);
    if (iVar1 == 0) {
      FUN_800f62bc(0x90);
      return;
    }
  }
  do {
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f654c(0x2f);
    FUN_80152224();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d00(0x393d);
    FUN_800f71dc(4);
    FUN_800f8d00(0x393f);
    FUN_8015236c();
    FUN_800f5410();
    FUN_800f6630(0xa9);
    uVar2 = FUN_800f3b04(0x3941);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0xab);
    FUN_800f6630(0xaa);
    uVar2 = FUN_800f3b04(0x3942);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0xac);
    FUN_800f7270(0xab);
    FUN_800f6b68(0x2c7a);
    FUN_800f824c(0xad);
    iVar1 = FUN_800f6434(0x80);
  } while (iVar1 != 0);
  FUN_800f6b68(0x2c7b);
  FUN_800f7270(0xa6);
  FUN_800f8768(0x2052);
  FUN_800f654c(0x20);
  FUN_800f8768(0x2050);
  FUN_800f654c(2);
  FUN_800f8768(0x2051);
  FUN_800f6630(0xad);
  FUN_800f4248(0x40);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xad);
    FUN_800f4248(0x10);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_8015316c();
        FUN_800f824c(0xab);
        FUN_800f5410();
        FUN_800f4008(5);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6b68(0x3540);
        iVar1 = FUN_800f6434(0x202);
      } while (iVar1 != 0);
      FUN_800f6630(0xab);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f971c();
      FUN_80153098();
    }
    else {
      FUN_800f654c(0xff);
    }
    FUN_800f7270(0xa6);
    FUN_800f8768(0x2053);
    return;
  }
  FUN_800f6630(0xad);
  FUN_800f4248(0x10);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    do {
      FUN_8015319c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f6b68(0x3540);
      iVar1 = FUN_800f6434(0x202);
    } while (iVar1 != 0);
    FUN_800f971c();
    FUN_80153098();
  }
  else {
    FUN_800f654c(0xf8);
  }
  FUN_800f7270(0xa6);
  FUN_800f8768(0x2054);
  return;
}





void FUN_8015dfe0(void)

{
  int iVar1;
  
  FUN_800f7270(0xa6);
  FUN_800f90ec(0x2053);
  FUN_800f90ec(0x2054);
  FUN_801531cc();
  FUN_800f5574(0x46);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f7210(0x3534);
    FUN_800f7500(5);
    do {
      FUN_800f6b68(0x3303);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
LAB_8015e0a8:
        FUN_800f8fb8(0x90);
        FUN_8015e158();
        FUN_800f6630(0x90);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) {
          return;
        }
        break;
      }
      FUN_800f5574(3);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_8015e0a8;
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
  }
  FUN_800f7270(0xa6);
  FUN_800f654c(0x80);
  FUN_800f8768(0x2050);
  FUN_800f90ec(0x2051);
  do {
    FUN_8015319c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  FUN_800f971c();
  FUN_80153098();
  FUN_800f7270(0xa6);
  FUN_800f8768(0x2054);
  return;
}




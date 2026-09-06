
void FUN_801398f4(void)

{
  int iVar1;
  
  FUN_80139694();
  FUN_800f6b68(0x1340);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x30);
    FUN_800f824c(0x45);
    FUN_800f7594(0x41);
    do {
      FUN_800f6d70(0x1440);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        FUN_800f9644(0x20);
        FUN_800f6be0(0x1340);
        FUN_800f89d4(0x1440);
        FUN_800f9140(0x1340);
        FUN_800f9660(0x20);
        FUN_801399ec();
        FUN_801264c0();
        return;
      }
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f5da0(0x45);
      iVar1 = FUN_800f5b8c(0x202);
    } while (iVar1 != 0);
    FUN_80120e2c();
    FUN_800f7500(DAT_80199254);
    FUN_8011fba4();
    FUN_80126528();
  }
  return;
}




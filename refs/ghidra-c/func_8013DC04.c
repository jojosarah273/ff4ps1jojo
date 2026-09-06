
void FUN_8013dc04(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x38e2);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0xf466);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      FUN_8013d12c();
      FUN_800f8fb8(0x4e);
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      do {
        FUN_800f6d70(0xf099);
        FUN_800f8960(0xf09e);
        FUN_800f63bc();
        FUN_800f5a90(5);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      do {
        FUN_80140558();
        FUN_800f6564(0xf467);
        FUN_800f824c(0);
        FUN_800f971c();
        *DAT_8019ed58 = *DAT_8019ed44;
        do {
          uVar2 = FUN_800f3c3c(0);
          FUN_800f4f28(uVar2);
          iVar1 = FUN_800f4fac(0x101);
          if (iVar1 == 0) {
            FUN_800f654c(7);
            FUN_800f8960(0xf099);
            *DAT_8019ed40 = *DAT_8019ed60;
            *DAT_8019ed40 = *DAT_8019ed40 << 4;
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f6630(0x4e);
            FUN_800f4248(4);
            *DAT_8019ed40 = *DAT_8019ed40 ^ 4;
            FUN_800f8768(0xefc7);
          }
          FUN_800f63bc();
          FUN_800f5a90(5);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_800f62bc(0x4e);
        FUN_800f6630(0x4e);
        FUN_800f5574(0x10);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      do {
        FUN_800f6d70(0xf09e);
        FUN_800f8960(0xf099);
        FUN_800f63bc();
        FUN_800f5a90(5);
        iVar1 = FUN_800f53d4();
      } while (iVar1 == 0);
    }
  }
  return;
}




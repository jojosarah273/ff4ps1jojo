
void FUN_8015cc80(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0xaa);
  do {
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f4f28(uVar1);
    iVar2 = FUN_800f4fac(0x101);
    if (iVar2 == 0) {
      FUN_800f6d70(0x2003);
      FUN_800f4248(0xc0);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6630(0xaa);
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6630(0xad);
        FUN_80153074();
        FUN_800f824c(0xad);
      }
    }
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed58;
    FUN_800f5410();
    FUN_800f4064(0x80);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f62bc(0xaa);
    FUN_800f6630(0xaa);
    uVar1 = FUN_800f3c3c(0xab);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}




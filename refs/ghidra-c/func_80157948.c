
void FUN_80157948(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xcd);
  do {
    FUN_800f7270(0xcd);
    FUN_800f6b68(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f7270(0xcd);
      FUN_800f8d6c(0xdf);
      FUN_800f71dc(0x80);
      FUN_800f8d6c(0xe1);
      FUN_8015240c();
      FUN_800f7270(0xe3);
      FUN_800f6b68(0x2003);
      FUN_800f4248(1);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(6);
        FUN_800f824c(0xd6);
        FUN_800f6630(0xcd);
        FUN_8015a374();
        FUN_800f654c(9);
        FUN_80153374();
        FUN_800f654c(0x40);
        FUN_800f8768(0x2a06);
        FUN_800f6630(0xcd);
        FUN_800f5140();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f6b68(0x29eb);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x10;
        FUN_800f8768(0x29eb);
        FUN_800f6630(0xd4);
        FUN_800f8768(0x2b2a);
        FUN_800f6630(0xd5);
        FUN_800f8768(0x2b2b);
      }
    }
    FUN_800f62bc(0xcd);
    FUN_800f6630(0xcd);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




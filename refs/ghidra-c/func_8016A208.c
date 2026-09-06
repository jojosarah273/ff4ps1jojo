
void FUN_8016a208(void)

{
  int iVar1;
  
  FUN_800f71dc(0xfe00);
  FUN_800f8d6c(0x66);
  FUN_800f71dc(0x8000);
  FUN_800f8d6c(0x53);
  FUN_800f654c(0x7e);
  FUN_800f824c(0x55);
  FUN_800f71dc(0);
  do {
    FUN_800f9330();
    FUN_8016a4e4();
    FUN_800f71dc(0x2f03);
    FUN_800f8d6c(0);
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f8d6c(10);
    do {
      FUN_800f7594(10);
      FUN_800f654c(0x20);
      FUN_800f824c(8);
      do {
        FUN_800f66d8(0);
        FUN_800f8a8c(0x53);
        FUN_800f9644(0x20);
        FUN_800f62f0(0x53);
        *DAT_8019ed44 = *DAT_8019ed58;
        FUN_800f5410();
        FUN_800f4064(0x20);
        *DAT_8019ed58 = *DAT_8019ed44;
        FUN_800f971c();
        FUN_800f9660(0x20);
        FUN_800f6364();
        FUN_800f5da0(8);
        iVar1 = FUN_800f5b8c(0x202);
      } while (iVar1 != 0);
      FUN_800f62bc(10);
      FUN_800f6630(10);
      FUN_800f5574(0x20);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f95a0();
    FUN_800f6364();
    FUN_800f5958(0x20);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




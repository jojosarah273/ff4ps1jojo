
void FUN_80169f58(void)

{
  int iVar1;
  
  FUN_8016c4a0();
  FUN_800f71dc(0xcc00);
  FUN_800f8d6c(0);
  FUN_800f654c(0x15);
  FUN_800f824c(2);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(10);
  do {
    FUN_800f7594(10);
    FUN_800f654c(0x20);
    FUN_800f824c(8);
    do {
      FUN_800f67fc(0);
      FUN_800f8768(0x2703);
      FUN_800f9644(0x20);
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
  return;
}




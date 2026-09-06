
void FUN_8016e560(void)

{
  int iVar1;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6d70(0x3540);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x2003);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) {
        FUN_800f90ec(0x2007);
        FUN_800f90ec(0x2008);
      }
    }
    FUN_800f9644(0x20);
    *DAT_8019ed44 = *DAT_8019ed54;
    FUN_800f5410();
    FUN_800f4064(0x80);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f63bc();
    FUN_800f5a90(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




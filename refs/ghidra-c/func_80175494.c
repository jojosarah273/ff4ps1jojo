
void FUN_80175494(void)

{
  int iVar1;
  
  FUN_800f6564(0x1700);
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0x7a);
    FUN_800f4248(0x70);
    *DAT_8019ed40 = *DAT_8019ed40 >> 4;
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x15c4fd);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f7500(0);
    FUN_800f9644(0x20);
    do {
      FUN_800f6cf4(0x14fa16);
      FUN_800f89d4(0xcff);
      FUN_800f6364();
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f63bc();
      FUN_800f5a90(0x10);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6558(0);
    FUN_800f9660(0x20);
  }
  return;
}




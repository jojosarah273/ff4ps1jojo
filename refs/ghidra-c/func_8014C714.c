
void FUN_8014c714(void)

{
  int iVar1;
  
  FUN_800f6564(0xf487);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_800f8f74(0xf487);
    FUN_800f6564(0x1802);
    FUN_800f4248(0x1f);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0xdffed);
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_8007259c();
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f824c(2);
      FUN_8014c81c();
      FUN_800f5e48();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0xf3c4);
      FUN_800f8768(0xed70);
      FUN_800f6364();
      FUN_800f5958(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}




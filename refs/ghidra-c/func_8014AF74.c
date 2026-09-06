
void FUN_8014af74(void)

{
  int iVar1;
  
  FUN_800f6564(0x34c5);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_801420d4();
  }
  else {
    FUN_800f6564(0x3522);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_8014b9b4();
      FUN_800f6564(0x34c4);
      FUN_800f9200();
      *DAT_8019ed40 = *DAT_8019ed40 ^ 0x80;
      FUN_800f8188(0x34c4);
      FUN_800f6564(0x49);
      FUN_800f9200();
      FUN_8014b044();
      FUN_801420d4();
      FUN_800f93dc();
      FUN_800f8188(0x49);
      FUN_800f93dc();
      FUN_800f8188(0x34c4);
    }
  }
  return;
}




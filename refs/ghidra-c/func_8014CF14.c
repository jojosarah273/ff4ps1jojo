
void FUN_8014cf14(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f6564(0x1802);
  FUN_800f5574(0x10);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f93dc();
    FUN_800f71dc(0);
    do {
      FUN_800f8768(0x7992);
      FUN_800f8768(0x7a1e);
      FUN_800f8768(0x7aaa);
      FUN_800f8768(0x7b36);
      *DAT_8019ed54 = *DAT_8019ed54 + 4;
      FUN_800f5958(0x8c);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  else {
    FUN_800f93dc();
  }
  return;
}




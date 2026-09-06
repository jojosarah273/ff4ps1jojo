
void FUN_80132378(void)

{
  int iVar1;
  
  FUN_800f654c(0);
  do {
    FUN_800f9200();
    FUN_801224d0();
    FUN_800f6b68(0x1b8b);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f93dc();
      FUN_800f9200();
      FUN_80132178();
      FUN_800f6b68(4);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x40;
      FUN_800f8768(4);
    }
    FUN_800f93dc();
    FUN_800f61e8();
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




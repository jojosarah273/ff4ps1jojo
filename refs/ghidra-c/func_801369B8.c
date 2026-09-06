
void FUN_801369b8(void)

{
  int iVar1;
  
  FUN_800f9200();
  FUN_800f824c(0x57);
  FUN_8012d204();
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f8d6c(0xe5);
    FUN_80134af8();
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f6630(0x57);
      *DAT_8019ed40 = *DAT_8019ed40 << 2;
      FUN_801224d0();
      FUN_800f654c(8);
      FUN_800f8768(0xfe15);
    }
  }
  FUN_800f93dc();
  return;
}





void FUN_80131cd8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_801224d0();
  FUN_800f6b68(0x1b8b);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_801321b4();
    FUN_800f6b68(3);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 == 0) {
      FUN_800f4248(0x7f);
      FUN_800f8768(3);
      FUN_800f6b68(0x16);
      FUN_800f824c(0x43);
      FUN_800f9644(0x20);
      FUN_800f6658(0x43);
      *DAT_8019ed44 = *DAT_8019ed44 << 1;
      FUN_800f516c();
      FUN_800f5050();
      uVar2 = FUN_800f3c3c(0x43);
      FUN_800f3f94(uVar2);
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 9);
      FUN_800f5520(uVar2);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6be0(9);
      }
      FUN_800f87dc(7);
      FUN_800f9660(0x20);
      FUN_800f6240(0x1bbd);
    }
  }
  FUN_800f93dc();
  return;
}




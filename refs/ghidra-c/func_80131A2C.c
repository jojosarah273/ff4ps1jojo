
void FUN_80131a2c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_800f8188(0x1bbc);
  FUN_801224d0();
  FUN_800f6b68(0x1b8b);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f7270(0x43);
    FUN_800f6c68(0x14ff9d);
    FUN_80124eac();
    FUN_800f6b68(3);
    FUN_800f4248(0xc0);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x1bbc);
      FUN_80132178();
      FUN_800f9644(0x20);
      FUN_800f6be0(7);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x45);
      FUN_800f3f94(uVar2);
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 9);
      FUN_800f5520(uVar2);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6be0(9);
      }
      FUN_800f87dc(7);
      FUN_800f9660(0x20);
    }
  }
  FUN_800f93dc();
  return;
}




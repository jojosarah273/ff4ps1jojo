
void FUN_80132010(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f9200();
  FUN_801224d0();
  FUN_800f6b68(0x1b8b);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_801321b4();
    FUN_800f8d6c(0x4e);
    FUN_800f8fb8(0x50);
    FUN_800f66d8(0x4e);
    FUN_800f9200();
    FUN_800f4370(0x49);
    FUN_800f82ec(0x4e);
    FUN_800f93dc();
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f4370(0x48);
    uVar2 = FUN_800f3a70(0x4e);
    iVar1 = FUN_800f3b04(uVar2);
    FUN_800f78c4(iVar1 + (uint)*DAT_8019ed58);
    FUN_800f82ec(0x4e);
  }
  FUN_800f93dc();
  return;
}




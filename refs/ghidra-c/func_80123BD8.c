
void FUN_80123bd8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f9200();
  FUN_800f824c(0x37);
  FUN_800f9330();
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x29);
  FUN_800f3f94(uVar1);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  FUN_800f6630(0x45);
  do {
    FUN_800f8768(1);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f5da0(0x37);
    iVar2 = FUN_800f5b8c(0x202);
  } while (iVar2 != 0);
  FUN_800f95a0();
  FUN_801222c4();
  FUN_800f93dc();
  return;
}





void FUN_800fd718(void)

{
  int iVar1;
  
  FUN_800f6564(0x1704);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1704);
    FUN_800f9690();
    *DAT_8019ed40 = (&DAT_80198a8c)[*DAT_8019ed54];
    FUN_800f8188(0x1e01);
    FUN_800f654c(3);
  }
  else {
    FUN_800f6564(0x1700);
    FUN_800f5574(3);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f9690();
      *DAT_8019ed40 = (&DAT_80198a88)[*DAT_8019ed54];
    }
    else {
      FUN_800f6564(0xfe2);
    }
    FUN_800f8188(0x1e01);
    FUN_800f654c(1);
  }
  FUN_800f8188(0x1e00);
  FUN_80169128();
  return;
}





void FUN_80150b88(void)

{
  int iVar1;
  
  FUN_800f6564(0x353e);
  *DAT_8019ed40 = *DAT_8019ed40 ^ 1;
  FUN_800f8188(0x353e);
  iVar1 = FUN_800f5f20(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x353f);
    FUN_800f5574(2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0);
      FUN_800f8188(0x353f);
    }
    FUN_800f6564(0x353f);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) {
      FUN_800f654c(0xd);
      FUN_80150c38();
    }
    FUN_800f6240(0x353f);
  }
  return;
}




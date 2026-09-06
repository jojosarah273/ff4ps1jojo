
void FUN_8012c6b8(void)

{
  int iVar1;
  
  FUN_800f7500(3);
  FUN_800f66d8(0x60);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f7500(DAT_801991b0);
    FUN_8012c2f8();
  }
  FUN_800f654c(0);
  FUN_800f82ec(0x60);
  FUN_800f63bc();
  FUN_800f66d8(0x60);
  FUN_800f4248(0x7f);
  FUN_800f82ec(0x60);
  if (iVar1 != 0) {
    FUN_801221ec();
  }
  return;
}




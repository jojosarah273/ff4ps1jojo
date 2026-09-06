
void FUN_8013bffc(void)

{
  int iVar1;
  
  FUN_800f6564(0x1a83);
  FUN_800f8f74(0x1a83);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_8013c50c();
  }
  do {
    FUN_8013c2fc();
    FUN_800f6630(0x60);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) {
      FUN_8013bd04();
      return;
    }
    FUN_8013ca70();
    iVar1 = FUN_800f53c0();
  } while (iVar1 != 0);
  return;
}




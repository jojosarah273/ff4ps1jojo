
void FUN_80134a50(void)

{
  int iVar1;
  
  FUN_800f5574(0x54);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f5574(0x60);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f5480();
      return;
    }
  }
  FUN_800f5410();
  return;
}




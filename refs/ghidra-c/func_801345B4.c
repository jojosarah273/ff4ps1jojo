
void FUN_801345b4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8d6c(0x45);
  uVar1 = FUN_800f3c3c(0x45);
  FUN_800f54d4(uVar1);
  iVar2 = FUN_800f53c0();
  if (iVar2 != 0) {
    uVar1 = FUN_800f3c3c(0x46);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if ((iVar2 != 0) || (iVar2 = FUN_800f53c0(), iVar2 == 0)) {
      FUN_800f5480();
      return;
    }
  }
  FUN_800f5410();
  return;
}




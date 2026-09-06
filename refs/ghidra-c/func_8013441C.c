
void FUN_8013441c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8f74(0x1eb);
  FUN_800f5574(0xb0);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
LAB_8013445c:
    FUN_800f5410();
    return;
  }
  FUN_8013463c();
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) goto LAB_8013445c;
  FUN_80134af8();
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    return;
  }
  FUN_800f6564(0x1b37);
  FUN_800f5574(2);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    return;
  }
  FUN_800f6e30(0xe5);
  FUN_800f4248(0xc0);
  FUN_800f5574(0xc0);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5410();
    FUN_800f7c6c();
    FUN_800f7a68();
    FUN_800f7c6c();
    FUN_800f7a68();
    FUN_800f7c6c();
    FUN_801224d0();
    *DAT_8019ed40 = (&DAT_80199c24)[*DAT_8019ed54];
    uVar2 = FUN_800f3b04(0x1b37);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6564(0x1b39);
      FUN_800f71dc(0x5f4d);
      FUN_801345b4();
      iVar1 = FUN_800f53c0();
      uVar2 = 0x6c61;
      if (iVar1 != 0) {
        FUN_800f5480(0x6c61);
        return;
      }
      goto LAB_80134584;
    }
  }
  FUN_800f6564(0x1b39);
  uVar2 = 0x5f00;
LAB_80134584:
  FUN_800f71dc(uVar2);
  FUN_801345b4();
  return;
}




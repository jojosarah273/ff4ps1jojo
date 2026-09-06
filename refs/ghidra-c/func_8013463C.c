
void FUN_8013463c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8188(0x1b39);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f5480();
    return;
  }
  FUN_800f6564(0x1b37);
  FUN_801224d0();
  *DAT_8019ed40 = "35012"[*DAT_8019ed54];
  FUN_800f8188(0x1b3a);
  FUN_800f5574(0x30);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0x806d);
LAB_80134918:
    FUN_800f6564(0x1b39);
    FUN_801345b4();
    return;
  }
  FUN_800f5574(0x31);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0x9b81);
    goto LAB_80134918;
  }
  FUN_800f5574(0x32);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f71dc(0xaf9c);
    goto LAB_80134918;
  }
  FUN_800f6564(0x1b39);
  FUN_800f6564(0x1b37);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x33);
  }
  else {
    FUN_800f654c(0x35);
  }
  FUN_800f824c(0x43);
  FUN_800f7594(0x43);
  FUN_800f66d8(0xe5);
  FUN_800f8188(0x1b38);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f5480();
    return;
  }
  FUN_800f71dc(0x4c44);
  FUN_801345b4();
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f6564(0x1b39);
    FUN_800f71dc(0x4c44);
    FUN_801345b4();
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f6564(0x1b39);
      FUN_800f71dc(0x4300);
      FUN_801345b4();
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6e30(0xe5);
        FUN_800f4248(0xc0);
        FUN_800f5574(0xc0);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f6564(0x1b38);
          FUN_800f71dc(0x4300);
          FUN_801345b4();
          iVar1 = FUN_800f53c0();
          if (iVar1 != 0) {
            return;
          }
        }
        FUN_800f6564(0x1b38);
        uVar2 = 0x6c61;
LAB_801348d8:
        FUN_800f71dc(uVar2);
        FUN_801345b4();
        return;
      }
      FUN_800f71dc(0x6c61);
      FUN_801345b4();
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6564(0x1b38);
        uVar2 = 0x4300;
        goto LAB_801348d8;
      }
      FUN_800f71dc(0x534d);
      FUN_801345b4();
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6564(0x1b38);
        uVar2 = 0x5f54;
        goto LAB_801348d8;
      }
      FUN_800f71dc(0x5f54);
      FUN_801345b4();
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f6564(0x1b38);
        uVar2 = 0x534d;
        goto LAB_801348d8;
      }
      goto LAB_80134784;
    }
  }
  FUN_800f62bc(0xeb);
LAB_80134784:
  FUN_800f5410();
  return;
}




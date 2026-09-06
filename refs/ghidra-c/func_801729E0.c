
void FUN_801729e0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f5574(0x10);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f654c(0x10);
  }
  FUN_800f4248(0xfc);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f5574(0x10);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6630(0x7a);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_800f6630(200);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    return;
  }
  FUN_800f6630(0xa1);
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) {
      FUN_800f654c(0);
      goto LAB_80172ad0;
    }
  }
  FUN_800f654c(0xfe);
LAB_80172ad0:
  FUN_800f824c(6);
  FUN_800f654c(0x70);
  FUN_800f8188(0x4c0);
  FUN_800f654c(0x78);
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(6);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x4c1);
  FUN_800f6c68(0x15b8c9);
  FUN_800f8188(0x4c2);
  FUN_800f6c68(0x15b8ca);
  FUN_800f8188(0x4c3);
  FUN_800f654c(0x78);
  FUN_800f8188(0x4c4);
  FUN_800f654c(0x78);
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(6);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x4c5);
  FUN_800f6c68(0x15b8cb);
  FUN_800f8188(0x4c6);
  FUN_800f6c68(0x15b8cc);
  FUN_800f8188(0x4c7);
  return;
}




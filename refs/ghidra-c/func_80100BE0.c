
void FUN_80100be0(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0x711);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 != 0) {
    FUN_80100b30();
    FUN_800f7500(0);
    do {
      FUN_800f7270(0x3d);
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0xfe7);
      FUN_800f3f38(uVar2);
      FUN_800f8188(0x8fc);
      FUN_800f939c();
      FUN_80100978();
      FUN_800f960c();
      FUN_800f5574(0);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f7270(0x3d);
        FUN_800f6c68(0x158500);
        FUN_800f824c(0x18);
        FUN_800f6c68(0x158501);
        FUN_800f824c(0x19);
        FUN_800f7270(0x18);
        FUN_800f6c68(0x7f5c71);
        FUN_800f5574(0x78);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f654c(0x77);
          FUN_800f885c(0x7f5c71);
        }
      }
      FUN_800f7270(0x3d);
      *DAT_8019ed54 = *DAT_8019ed54 + 5;
      FUN_800f8d6c(0x3d);
      FUN_800f63bc();
      *DAT_8019ed40 = *DAT_8019ed60;
      uVar2 = FUN_800f3b04(0x711);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  return;
}





void FUN_8014aaa8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_8014c96c();
  FUN_800f6240(0xf2a0);
  FUN_800f6564(0x34c4);
  FUN_800f8188(0xf462);
  FUN_800f6564(0x34c5);
  uVar1 = FUN_800f3b04(0x3522);
  FUN_800f78c4(uVar1);
  FUN_800f8188(0xf463);
  FUN_8014aa68();
  FUN_8014b9b4();
  FUN_800f6564(0x3522);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    FUN_800f6564(0x34c4);
    *DAT_8019ed40 = *DAT_8019ed40 ^ 0x80;
    FUN_800f8188(0xf462);
    FUN_800f6564(0x3523);
    FUN_800f8188(0xf463);
    FUN_8014aa68();
    FUN_8014ba34();
  }
  return;
}




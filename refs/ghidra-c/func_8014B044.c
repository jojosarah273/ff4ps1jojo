
void FUN_8014b044(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f71dc(0);
  do {
    FUN_800f6c68(0x16fc7e);
    uVar1 = FUN_800f3b04(0x3523);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) goto LAB_8014b0a8;
    FUN_800f6364();
    FUN_800f5958(8);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f71dc(0);
LAB_8014b0a8:
  *DAT_8019ed40 = *DAT_8019ed5c;
  FUN_800f8188(0x49);
  return;
}




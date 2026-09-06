
void FUN_80167774(void)

{
  int iVar1;
  undefined4 uVar2;
  
  do {
    FUN_80070174();
    FUN_800f8fb8(0);
    FUN_800f71dc(0);
    do {
      FUN_800f6b68(0xf488);
      FUN_800f5574((&DAT_8019a144)[*DAT_8019ed54]);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xf488);
        FUN_800f5b2c(uVar2);
        FUN_800f62bc(0);
      }
      FUN_800f6364();
      FUN_800f5958(0x12);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6630(0);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  return;
}




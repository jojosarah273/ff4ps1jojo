
void FUN_801033e0(void)

{
  int iVar1;
  
  FUN_800f654c(5);
  FUN_800f8188(0x1704);
  FUN_800f654c(3);
  FUN_800f824c(0xac);
  FUN_800f8188(0x1705);
  FUN_800f6630(0xb1);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xe1);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x20);
      FUN_800f824c(0xad);
      FUN_800f654c(0x10);
      FUN_800f824c(0xb8);
      FUN_8017559c();
      FUN_800f654c(0xf);
      FUN_800f8188(0x6fd);
    }
    else {
      FUN_801030f8();
      FUN_800f654c(0x20);
      FUN_800f824c(0x79);
      FUN_800f654c(0xf);
      FUN_800f8188(0x6fd);
      FUN_801034e0();
    }
  }
  else {
    FUN_800fd718();
    FUN_800f8fb8(0x79);
    FUN_801034e0();
  }
  return;
}




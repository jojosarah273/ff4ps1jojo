
void FUN_8013d4c8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f8960(0x342);
  FUN_800f6630(2);
  FUN_800f8960(0x341);
  FUN_800f6564(0x6cc0);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0);
    FUN_800f8960(0x340);
    FUN_800f654c(0x3f);
  }
  else {
    FUN_800f6630(0);
    *DAT_8019ed40 = ~*DAT_8019ed40;
    FUN_800f8960(0x340);
    FUN_800f654c(0x7f);
  }
  uVar2 = FUN_800f3b04(0xf484);
  FUN_800f5ecc(uVar2);
  FUN_800f8960(0x343);
  FUN_800f63bc();
  FUN_800f63bc();
  FUN_800f63bc();
  FUN_800f63bc();
  return;
}




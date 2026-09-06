
void FUN_80142450(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6b68(0xf398);
    FUN_800f5410();
    uVar1 = FUN_800f3b04(0xf3a8);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x340);
    FUN_800f6b68(0xf3a0);
    FUN_800f5410();
    uVar1 = FUN_800f3b04(0xf3a9);
    FUN_800f3f38(uVar1);
    FUN_800f8960(0x341);
    FUN_800f6c68(0xdfe07);
    FUN_800f8960(0x342);
    FUN_800f6564(0x6cc0);
    iVar2 = FUN_800f6434(2);
    if (iVar2 == 0) {
      FUN_800f6b68(0xf398);
      FUN_800f5410();
      uVar1 = FUN_800f3b04(0xf3a8);
      FUN_800f3f38(uVar1);
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f5480();
      FUN_800f8058(0x10);
      FUN_800f8960(0x340);
      FUN_800f654c(0x7f);
    }
    else {
      FUN_800f6b68(0xf398);
      FUN_800f5410();
      uVar1 = FUN_800f3b04(0xf3a8);
      FUN_800f3f38(uVar1);
      FUN_800f8960(0x340);
      FUN_800f654c(0x3f);
    }
    FUN_800f8960(0x343);
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f5958(8);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}




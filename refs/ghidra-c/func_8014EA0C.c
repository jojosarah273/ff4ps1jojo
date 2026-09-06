
void FUN_8014ea0c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f71dc(0);
  FUN_800f824c(0);
  FUN_800f6564(0xf284);
  FUN_800f824c(2);
  do {
    uVar1 = FUN_800f3c3c(2);
    FUN_800f4f28(uVar1);
    iVar2 = FUN_800f4fac(0x101);
    if (iVar2 == 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      *DAT_8019ed40 = *DAT_8019ed40 << 4;
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f6630(0);
      FUN_800f8960(0xefc7);
    }
    FUN_800f6364();
    FUN_800f5958(5);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  return;
}




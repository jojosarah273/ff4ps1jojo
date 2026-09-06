
void FUN_8013e5d0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f9330();
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    uVar1 = FUN_800f3c3c(4);
    FUN_800f76bc(uVar1);
    iVar2 = FUN_800f7728(0x101);
    if (iVar2 == 0) {
      FUN_8013e588();
      FUN_800f4248(7);
      FUN_800f5410();
      iVar2 = FUN_800f3b9c(0x16fff6,*DAT_8019ed54);
      FUN_800f3f38(iVar2 + (uint)*DAT_8019ed54);
      FUN_800f824c(0);
      FUN_8013e588();
      FUN_800f4248(0x1f);
      iVar2 = FUN_800f3b9c(0x16fff7,*DAT_8019ed54);
      FUN_800f3f38(iVar2 + (uint)*DAT_8019ed54);
      FUN_800f824c(1);
      FUN_800f6630(0);
      FUN_800f5480();
      FUN_800f8058(8);
      FUN_800f8768(0xf459);
      FUN_800f6630(1);
      FUN_800f5480();
      FUN_800f8058(8);
      FUN_800f8768(0xf45a);
    }
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f5958(8);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f95a0();
  return;
}





void FUN_801005dc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f654c(1);
  FUN_800f824c(6);
  FUN_800f6564(0x8fb);
  FUN_800f5574(0x60);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5574(0x54);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      FUN_800f654c(10);
      FUN_800f824c(6);
    }
  }
  do {
    FUN_800f7500(0);
    do {
      FUN_800f6d70(0x1440);
      uVar2 = FUN_800f3b04(0x8fb);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6d70(0x1441);
        FUN_800f5574(99);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) goto LAB_80100814;
      }
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f5a90(0x60);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f7500(0);
    while( true ) {
      FUN_800f6d70(0x1440);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) break;
      *DAT_8019ed58 = *DAT_8019ed58 + 2;
      FUN_800f5a90(0x60);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x8fb);
        FUN_800f8188(0x1804);
        FUN_800f8f74(0x1805);
        FUN_800f8f74(0x1806);
        FUN_800f8f74(0x1807);
        FUN_800f8f74(0x1808);
        FUN_800f8f74(0x1809);
        FUN_800f8f74(0x180a);
        FUN_800f8f74(0x180b);
        FUN_800f654c(0);
        FUN_800fd914();
        FUN_8011eb5c();
        FUN_800fc548();
        FUN_800f71dc(0);
        do {
          FUN_800f90ec(0x1804);
          FUN_800f6364();
          FUN_800f5958(8);
          iVar1 = FUN_800f53d4();
        } while (iVar1 == 0);
        FUN_80176060();
        FUN_800f654c(1);
        FUN_800f824c(0xc5);
        FUN_800fad48();
        FUN_8010ca74();
        FUN_800f5448();
        FUN_800f654c(0x81);
        FUN_800f8188(0x4200);
        FUN_80170c14();
        FUN_8010b010();
        FUN_800f654c(0);
        FUN_800fd85c();
        return;
      }
    }
    FUN_800f6564(0x8fb);
    FUN_800f8960(0x1440);
LAB_80100814:
    FUN_800f6d70(0x1441);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(6);
    FUN_800f3f38(uVar2);
    FUN_800f5574(100);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f8960(0x1441);
      return;
    }
    FUN_800f5480();
    FUN_800f8058(99);
    FUN_800f824c(6);
    FUN_800f654c(99);
    FUN_800f8960(0x1441);
  } while( true );
}




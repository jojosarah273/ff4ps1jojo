
undefined4 FUN_800fc2ac(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f7210(0x1800);
  FUN_800f5958(0x1b7);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f5958(0x1b9);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f654c(0x10);
      FUN_800f8188(0x1802);
    }
  }
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1702);
      FUN_800f5574(0x5a);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
LAB_800fc36c:
        FUN_800f5574(0x67);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) {
          FUN_800f5574(0x7f);
          iVar1 = FUN_800f53c0();
          if (iVar1 == 0) goto LAB_800fc39c;
        }
      }
      else {
        FUN_800f5574(0x5d);
        iVar1 = FUN_800f53c0();
        if (iVar1 != 0) goto LAB_800fc36c;
LAB_800fc39c:
        FUN_800f6564(0x1801);
        *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
        FUN_800f8188(0x1801);
      }
    }
  }
  FUN_800fb3f8();
  FUN_800f92d8();
  FUN_800f54b8();
  FUN_8015084c();
  FUN_800fc548();
  FUN_800f9538();
  FUN_800f6564(0x1803);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_801762d0();
    DAT_800d2126 = 1;
    *DAT_8019ed4c = 0x2ff;
    FUN_80187b00();
    return 1;
  }
  FUN_800f6630(0xc6);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f8188(0x1804);
    FUN_800f8fb8(0xc6);
  }
  else {
    FUN_800f6564(0x1804);
    uVar2 = FUN_800f3b04(0x1805);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x1806);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x1807);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x1808);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x1809);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x180a);
    FUN_800f78c4(uVar2);
    uVar2 = FUN_800f3b04(0x180b);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f7918(2);
    if (iVar1 != 0) goto LAB_800fc4fc;
  }
  FUN_8011eb5c();
  FUN_800fc548();
LAB_800fc4fc:
  FUN_800f654c(0x80);
  FUN_800f8188(0x2100);
  FUN_800f6564(0x1700);
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_8010ca74();
  }
  return 0;
}




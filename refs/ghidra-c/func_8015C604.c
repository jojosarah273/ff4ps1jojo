
void FUN_8015c604(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xd0);
  FUN_800f8188(0x3975);
  FUN_80152cdc();
  FUN_800f6564(0x352b);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_8015a284();
    FUN_80155778();
    FUN_801583fc();
    FUN_800f8f74(0x352b);
  }
  FUN_800f6564(0x393a);
  uVar2 = FUN_800f3b04(0x393b);
  FUN_800f78c4(uVar2);
  iVar1 = FUN_800f7918(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xd0);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f971c();
    FUN_80153098();
    FUN_800f8188(0x393b);
  }
  FUN_800f7270(0xa6);
  FUN_800f90ec(0x2052);
  FUN_800f6564(0x3938);
  FUN_800f8768(0x2050);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f71dc(0x1c);
    FUN_800f8d6c(0xab);
    FUN_800f71dc(0x3302);
    FUN_800f8d6c(0xad);
    FUN_8015cd98();
    FUN_800f6564(0x388b);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xdc);
    }
    else {
      FUN_800f7500(1);
      FUN_800f66d8(0x80);
    }
    FUN_800f8188(0x397b);
    FUN_800f9200();
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(10);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_8015cf18();
      }
    }
    else {
      FUN_800f71dc(1);
      FUN_800f6630(0xd0);
      uVar2 = FUN_800f3b04(0x3539);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f5e48();
      }
      FUN_800f6b68(0x3539);
      FUN_800f8188(0x357b);
    }
    FUN_800f654c(0xc);
    FUN_800f824c(0xd6);
    FUN_800f93dc();
  }
  else {
    FUN_800f4248(0x40);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f8d6c(0xab);
      FUN_800f71dc(0x321a);
      FUN_800f8d6c(0xad);
      FUN_8015cd98();
      FUN_800f7270(0xa6);
      FUN_800f6b68(0x2050);
      FUN_800f4248(8);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(2);
        FUN_800f824c(0xd6);
        FUN_800f7500(1);
        FUN_800f66d8(0x80);
        FUN_800f8768(0x2052);
        FUN_800f63bc();
        FUN_800f66d8(0x80);
        FUN_800f5ccc();
        FUN_800f82ec(0x80);
        FUN_800f5b4c();
        FUN_8015cea0();
        FUN_800f654c(0x16);
      }
      else {
        FUN_800f6564(0x388b);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f6630(0xdc);
        }
        else {
          FUN_800f7500(1);
          FUN_800f66d8(0x80);
        }
        FUN_800f5574(0xb0);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8768(0x2052);
          FUN_800f654c(2);
          FUN_800f824c(0xd6);
        }
        else {
          FUN_800f8768(0x2052);
          FUN_800f8188(0x397b);
          FUN_800f654c(0xb);
          FUN_800f824c(0xd6);
          FUN_800f6564(0x388b);
          iVar1 = FUN_800f6434(0x202);
          if (iVar1 == 0) {
            FUN_800f6564(0x397b);
            FUN_800f5574(200);
            iVar1 = FUN_800f53d4();
            if (iVar1 == 0) {
              FUN_800f7500(2);
              FUN_800f66d8(0x80);
              FUN_800f5ccc();
              FUN_800f82ec(0x80);
              FUN_800f5b4c();
              FUN_8015cea0();
            }
          }
        }
        FUN_800f654c(1);
      }
    }
    else {
      FUN_800f6564(0x3938);
      FUN_800f4248(0x20);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f654c(3);
        FUN_800f824c(0xd6);
        FUN_800f71dc(0x120);
        FUN_800f8d6c(0xab);
        FUN_800f71dc(0x2c7a);
        FUN_800f8d6c(0xad);
        FUN_8015cd98();
        FUN_800f7270(0xa6);
        FUN_800f6564(0x388b);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f6630(0xdc);
        }
        else {
          FUN_800f7500(1);
          FUN_800f66d8(0x80);
        }
        FUN_800f8188(0x397b);
        FUN_800f8768(0x2052);
        FUN_800f654c(2);
      }
      else {
        FUN_800f654c(2);
        FUN_800f824c(0xd6);
        FUN_800f71dc(8);
        FUN_800f8d6c(0xab);
        FUN_800f71dc(0x32da);
        FUN_800f8d6c(0xad);
        FUN_8015cd98();
        FUN_800f7270(0xa6);
        FUN_800f7500(1);
        FUN_800f66d8(0x80);
        FUN_800f8768(0x2052);
        FUN_800f654c(1);
      }
    }
  }
  FUN_800f7270(0xa6);
  FUN_800f8768(0x2051);
  FUN_8015cb80();
  FUN_800f6564(0x393a);
  FUN_800f8768(0x2053);
  FUN_800f6564(0x393b);
  FUN_800f8768(0x2054);
  FUN_800f6630(0xd0);
  FUN_8015a374();
  FUN_800f654c(3);
  FUN_80153374();
  FUN_800f654c(8);
  FUN_800f8768(0x2a06);
  return;
}




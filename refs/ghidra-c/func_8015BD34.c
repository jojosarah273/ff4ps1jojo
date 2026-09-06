
void FUN_8015bd34(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xd7);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) {
    FUN_800f6630(0xd0);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_8015c54c();
      FUN_800f6630(0xd0);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f6564(0x388b);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_8015c220();
      }
      FUN_800f71dc(5);
      do {
        FUN_800f6a78(0xd7);
        FUN_800f8768(0x3937);
        FUN_800f5e48();
        iVar1 = FUN_800f5c64(0x8080);
      } while (iVar1 != 0);
      FUN_8015c604();
      FUN_800f654c(0xff);
      FUN_800f824c(0xd0);
      return;
    }
    FUN_800f6564(0x352d);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6564(0x3929);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f9200();
    FUN_800f971c();
    *DAT_8019ed54 = *DAT_8019ed44;
    do {
      FUN_800f6b68(0x392a);
      FUN_800f8768(0x3929);
      FUN_800f6364();
      FUN_800f5958(5);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f5d24(0x392f);
    FUN_800f93dc();
    FUN_800f8188(0x1822);
    FUN_800f824c(0xd0);
    FUN_8015d0b8();
    FUN_8015c54c();
    FUN_800f6630(0xd0);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_8015b078();
    FUN_8015b3f4();
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2005);
    FUN_800f4248(0xef);
    FUN_800f8768(0x2005);
    FUN_800f6564(0x357b);
    uVar2 = FUN_800f3c3c(0xd0);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
    FUN_800f6b68(0x2033);
    FUN_800f5574(0x4c);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6b68(0x2035);
      FUN_800f5574(0x4c);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x388b);
        iVar1 = FUN_800f6434(2);
        if (iVar1 == 0) {
          FUN_800f8fb8(0xd7);
          return;
        }
        FUN_800f971c();
        FUN_80150c38();
        return;
      }
    }
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2004);
    *DAT_8019ed40 = *DAT_8019ed40 | 4;
    FUN_800f8768(0x2004);
    FUN_800f6630(0xd0);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f90ec(0x3560);
    return;
  }
  FUN_800f6630(0xd0);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    return;
  }
  FUN_8015c54c();
  FUN_800f6630(0xd0);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2000);
    FUN_800f4248(0x1f);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6564(0x3582);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x38db);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(2);
        if (iVar1 == 0) {
          FUN_800f6b68(0x2006);
          iVar1 = FUN_800f6434(0x80);
          if (iVar1 == 0) {
            FUN_800f4248(1);
            iVar1 = FUN_800f4120(0x202);
            if (iVar1 != 0) goto LAB_8015beac;
          }
        }
      }
    }
    FUN_8015b3f4();
    FUN_800f6630(0xd0);
    FUN_80152908();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6b68(0x32db);
    FUN_800f5574(0x4c);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6b68(0x32df);
      FUN_800f5574(0x4c);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        return;
      }
    }
    FUN_8015c1b0();
  }
LAB_8015beac:
  FUN_800f654c(0xff);
  FUN_800f824c(0xd0);
  FUN_800f654c(1);
  FUN_80150c38();
  return;
}




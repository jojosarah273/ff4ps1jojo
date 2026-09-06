
void FUN_8015ac7c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6564(0xa8);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f71dc(4);
    FUN_800f8d6c(0xa9);
    do {
      FUN_800f7270(0xa9);
      FUN_800f6b68(0x3540);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6630(0xa9);
        FUN_80152cdc();
        FUN_800f7270(0xa6);
        FUN_800f6b68(0x2003);
        FUN_800f4248(0xc0);
        iVar1 = FUN_800f4120(0x202);
        if (iVar1 == 0) {
          FUN_800f6b68(0x2005);
          iVar1 = FUN_800f6434(0x8080);
          if (iVar1 != 0) {
            FUN_800f6564(0x29cd);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              FUN_800f654c(0x30);
              FUN_800f824c(0xa8);
              FUN_800f971c();
              *DAT_8019ed54 = *DAT_8019ed44;
              goto LAB_8015adbc;
            }
            FUN_800f6564(0x388b);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 != 0) {
              return;
            }
            FUN_800f6564(0x38d3);
            iVar1 = FUN_800f6434(0x202);
            if (iVar1 == 0) {
              FUN_800f6564(0x352d);
              iVar1 = FUN_800f6434(2);
              if (iVar1 != 0) {
                return;
              }
            }
            FUN_800f6564(0x38d6);
            FUN_800f5574(0xff);
            iVar1 = FUN_800f53d4();
            if (iVar1 != 0) {
              return;
            }
            FUN_800f6564(0x38d6);
            iVar1 = FUN_800f6434(2);
            if (iVar1 == 0) {
              FUN_800f6564(0x38f3);
              iVar1 = FUN_800f6434(0x202);
              if (iVar1 == 0) {
                FUN_800f5d24(0x38d6);
                return;
              }
            }
            FUN_800f6564(0x38e5);
            FUN_800f4248(1);
            iVar1 = FUN_800f4120(0x202);
            if (iVar1 != 0) goto LAB_8015b020;
            FUN_800f971c();
            *DAT_8019ed54 = *DAT_8019ed44;
            FUN_800f8d6c(0xa9);
            goto LAB_8015af48;
          }
        }
      }
      FUN_800f5da0(0xa9);
      FUN_800f6630(0xa9);
      iVar1 = FUN_800f6434(0x8080);
    } while (iVar1 != 0);
    FUN_800f6564(0x38e5);
    FUN_800f4248(2);
    iVar1 = FUN_800f4120(2);
    uVar2 = 8;
    if (iVar1 == 0) {
LAB_8015afe0:
      FUN_800f654c(uVar2);
    }
    else {
      FUN_800f654c(0x80);
    }
LAB_8015afe8:
    FUN_800f824c(0xa8);
  }
  return;
LAB_8015adbc:
  FUN_800f6c68(0x13fd00);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    return;
  }
  uVar2 = FUN_800f3b04(0x1800);
  FUN_800f54d4(uVar2);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6c68(0x13fd01);
    uVar2 = FUN_800f3b04(0x1801);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0xa8);
      FUN_800f4248(0xef);
      goto LAB_8015afe8;
    }
  }
  FUN_800f6364();
  FUN_800f6364();
  goto LAB_8015adbc;
LAB_8015af48:
  FUN_800f7270(0xa9);
  FUN_800f6b68(0x3540);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa9);
    FUN_80152cdc();
    FUN_800f7270(0xa6);
    FUN_800f6b68(0x2003);
    FUN_800f4248(0xc0);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6b68(0x2004);
      FUN_800f4248(0x30);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6b68(0x2005);
        FUN_800f4248(0xc2);
        iVar1 = FUN_800f4120(0x202);
        uVar2 = 0x40;
        if (iVar1 == 0) goto LAB_8015afe0;
      }
    }
  }
  FUN_800f62bc(0xa9);
  FUN_800f6630(0xa9);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
LAB_8015b020:
    FUN_800f8f74(0x352d);
    FUN_80153264();
    FUN_800f654c(0xff);
    FUN_800f8188(0x33c4);
    FUN_800f654c(0x22);
    FUN_800f8188(0x34ca);
    FUN_800f654c(5);
    FUN_80150c38();
    FUN_8005a234();
    return;
  }
  goto LAB_8015af48;
}




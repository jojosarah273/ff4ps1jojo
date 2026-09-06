
void FUN_801571dc(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f71dc(0x2000);
  FUN_800f8d6c(0x80);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8fb8(0xa9);
  do {
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    do {
      FUN_800f6b68(0x1000);
      FUN_800f82ec(0x80);
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f5a90(0x40);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f9330();
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f66d8(0x80);
    FUN_800f4248(0x1f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0xa9);
      *DAT_8019ed54 = *DAT_8019ed44;
      uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x3540);
      FUN_800f6048(uVar2);
      FUN_800f7500(3);
      FUN_800f971c();
      FUN_800f82ec(0x80);
      FUN_800f63bc();
      FUN_800f82ec(0x80);
      FUN_800f63bc();
      FUN_800f82ec(0x80);
      FUN_800f63bc();
      FUN_800f82ec(0x80);
    }
    else {
      FUN_800f7500(3);
      FUN_800f66d8(0x80);
      FUN_800f4248(0xc0);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6630(0xa9);
        FUN_800f5140();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f654c(0x40);
        FUN_800f8768(0x29eb);
        FUN_800f9644(0x20);
        FUN_800f7500(9);
        FUN_800f6764(0x80);
        FUN_80152c50();
        FUN_800f7500(7);
        uVar2 = FUN_800f3a70(0x80);
        iVar1 = FUN_800f3b04(uVar2);
        FUN_800f5520(iVar1 + (uint)*DAT_8019ed58);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f7500(5);
          FUN_800f6764(0x80);
          FUN_800f4264(0xfeff);
          FUN_800f8378(0x80);
        }
        else {
          FUN_800f7500(5);
          FUN_800f6764(0x80);
          *DAT_8019ed44 = *DAT_8019ed44 | 0x100;
          FUN_800f8378(0x80);
        }
        FUN_800f971c();
        FUN_800f9660(0x20);
        FUN_800f7500(0x3b);
        FUN_800f654c(0x10);
        FUN_800f82ec(0x80);
        FUN_800f6564(0x29a2);
        FUN_800f4248(0x20);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(1);
          FUN_800f82ec(0x80);
        }
        FUN_800f7500(0x2d);
        FUN_800f66d8(0x80);
        FUN_800f7500(0x41);
        FUN_800f82ec(0x80);
        FUN_800f7500(0x2e);
        FUN_800f66d8(0x80);
        FUN_800f7500(0x42);
        FUN_800f82ec(0x80);
        FUN_800f7500(4);
        FUN_800f66d8(0x80);
        FUN_800f4248(0x40);
        FUN_800f82ec(0x80);
        FUN_800f63bc();
        FUN_800f66d8(0x80);
        FUN_800f4248(0x82);
        FUN_800f82ec(0x80);
        FUN_800f63bc();
        FUN_800f66d8(0x80);
        FUN_800f4248(1);
        FUN_800f82ec(0x80);
        FUN_800f7500(2);
        FUN_800f66d8(0x80);
        uVar2 = FUN_800f3b04(0x3583);
        FUN_800f54d4(uVar2);
        iVar1 = FUN_800f53c0();
        if (iVar1 == 0) {
          FUN_800f8188(0x3583);
        }
      }
    }
    FUN_800f95a0();
    FUN_800f7500(7);
    FUN_800f66d8(0x80);
    FUN_800f7500(8);
    uVar2 = FUN_800f3a70(0x80);
    iVar1 = FUN_800f3b04(uVar2);
    FUN_800f78c4(iVar1 + (uint)*DAT_8019ed58);
    iVar1 = FUN_800f7918(0x202);
    if (iVar1 == 0) {
      FUN_800f7500(3);
      FUN_800f66d8(0x80);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
      FUN_800f82ec(0x80);
    }
    FUN_800f5410();
    FUN_800f6630(0x80);
    FUN_800f4008(0x80);
    FUN_800f824c(0x80);
    FUN_800f6630(0x81);
    FUN_800f4008(0);
    FUN_800f824c(0x81);
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f71dc(0x2000);
  FUN_800f8d6c(0x80);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8ebc(0xa9);
  do {
    FUN_800f66d8(0x80);
    FUN_800f4248(0x1f);
    FUN_800f5574(8);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f5574(9);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80157748;
      FUN_800f5574(0x13);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80157748;
      FUN_800f5574(0x15);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) goto LAB_80157748;
    }
    else {
LAB_80157748:
      FUN_800f6630(0xa9);
      FUN_800f8768(0x3539);
      FUN_800f6364();
    }
    FUN_800f9644(0x20);
    FUN_800f5410();
    FUN_800f6658(0x80);
    FUN_800f4064(0x80);
    FUN_800f8274(0x80);
    FUN_800f971c();
    FUN_800f9660(0x20);
    FUN_800f62bc(0xa9);
    FUN_800f6630(0xa9);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      return;
    }
  } while( true );
}




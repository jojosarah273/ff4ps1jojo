
void FUN_80170c14(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6630(0xd3);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    return;
  }
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1703);
  FUN_800f8fb8(0x4a);
  FUN_800f7864();
  FUN_800f76e8();
  uVar2 = FUN_800f3c3c(0x4a);
  FUN_800f7cc8(uVar2);
  FUN_800f7864();
  FUN_800f76e8();
  uVar2 = FUN_800f3c3c(0x4a);
  FUN_800f7cc8(uVar2);
  FUN_800f824c(0x4b);
  FUN_800f7270(0x4a);
  FUN_800f6b68(0x1001);
  FUN_800f4248(0x1f);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6b68(0xb2fa);
  FUN_800f5140();
  FUN_800f8188(0x710);
  FUN_800f6630(0xd8);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(8);
    FUN_800f8188(0x1705);
  }
  FUN_800f6564(0x1705);
  FUN_800f5574(8);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0x7b);
    FUN_800f5410();
    FUN_800f4008(0x10);
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_800f4248(3);
  }
  *DAT_8019ed40 = *DAT_8019ed40 << 4;
  FUN_800f824c(7);
  FUN_800f8fb8(6);
  FUN_800f6564(0x1705);
  FUN_800f5574(8);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(4);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f6630(0xab);
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) goto LAB_80170e9c;
    }
    FUN_800f6630(0x7b);
    if (DAT_8019ed30 != '\0') {
      *DAT_8019ed40 = *DAT_8019ed40 << 1;
    }
    FUN_800f4248(8);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(7);
    FUN_800f3f38(uVar2);
    FUN_800f824c(7);
    FUN_800f6630(0xab);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0x7b);
      FUN_800f4248(8);
      *DAT_8019ed40 = *DAT_8019ed40 >> 3;
      FUN_800f824c(6);
    }
  }
LAB_80170e9c:
  FUN_800f6630(7);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0);
  do {
    FUN_800f6d70(0xc0b4);
    FUN_800f8960(0x470);
    FUN_800f63bc();
    FUN_800f6d70(0xc0b4);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(6);
    FUN_800f7f48(uVar2);
    FUN_800f8960(0x470);
    FUN_800f63bc();
    FUN_800f6b68(0xc0c4);
    FUN_800f8960(0x470);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f6b68(0xc0c4);
    FUN_800f4248(0xf1);
    FUN_800f5410();
    uVar2 = FUN_800f3b04(0x710);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x470);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0);
  do {
    FUN_800f6d70(0xc0bc);
    FUN_800f8960(0x4f0);
    FUN_800f63bc();
    FUN_800f6d70(0xc0bc);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(6);
    FUN_800f7f48(uVar2);
    FUN_800f8960(0x4f0);
    FUN_800f63bc();
    FUN_800f6b68(0xc0c4);
    FUN_800f8960(0x4f0);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f6b68(0xc0c4);
    FUN_800f4248(0xf1);
    FUN_800f5410();
    uVar2 = FUN_800f3b04(0x710);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x4f0);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6630(0xa2);
  FUN_800f4248(8);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x473);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x20;
    FUN_800f8188(0x473);
    FUN_800f6564(0x477);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x20;
    FUN_800f8188(0x477);
    FUN_800f6564(0x4f3);
    FUN_800f4248(0xcf);
    FUN_800f8188(0x4f3);
    FUN_800f6564(0x4f7);
    FUN_800f4248(0xcf);
    FUN_800f8188(0x4f7);
  }
  FUN_800f6630(0xa2);
  FUN_800f4248(4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f6630(0xa1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0xa1);
      FUN_800f4248(3);
      FUN_800f4370(0xd2);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 != 0) goto LAB_8017117c;
    }
    FUN_800f654c(0xf8);
    FUN_800f8188(0x471);
    FUN_800f8188(0x475);
    FUN_800f8188(0x4f1);
    FUN_800f8188(0x4f5);
  }
LAB_8017117c:
  FUN_800f9448();
  return;
}




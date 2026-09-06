
void FUN_801583fc(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f6564(0x3975);
  FUN_80152cdc();
  FUN_800f5410();
  FUN_800f6630(0xa6);
  FUN_800f4008(0);
  FUN_800f824c(0x80);
  FUN_800f6630(0xa7);
  FUN_800f4008(0x20);
  FUN_800f824c(0x81);
  FUN_800f9644(0x20);
  FUN_800f5410();
  FUN_800f658c(0x3532);
  FUN_800f4064(0x2780);
  FUN_800f8274(0x82);
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f6564(0x352c);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f971c();
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f8ebc(0xa9);
    FUN_800f8ebc(0xab);
    do {
      FUN_800f66d8(0x82);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) {
        FUN_800f62bc(0xa9);
        break;
      }
      *DAT_8019ed40 = *DAT_8019ed60;
      FUN_800f5410();
      FUN_800f4008(0xb);
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f62bc(0xab);
      FUN_800f6630(0xab);
      FUN_800f5574(5);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6630(0xa9);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f7500(5);
      FUN_800f654c(0x80);
      FUN_800f82ec(0x80);
    }
  }
  FUN_800f7500(0x14);
  FUN_800f971c();
  do {
    FUN_800f82ec(0x80);
    FUN_800f63bc();
    FUN_800f5a90(0x19);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f8fb8(0xaf);
  FUN_800f7500(7);
  do {
    FUN_800f66d8(0x82);
    FUN_800f9200();
    FUN_800f4248(0xf8);
    FUN_800f824c(0xa9);
    FUN_800f93dc();
    FUN_800f4248(7);
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x13feac);
    FUN_800f824c(0xab);
    FUN_800f6364();
    FUN_800f6c68(0x13feac);
    FUN_800f824c(0xac);
    FUN_800f939c();
    FUN_800f7500(0x14);
    do {
      uVar2 = FUN_800f3c3c(0xa9);
      FUN_800f4f28(uVar2);
      iVar1 = FUN_800f4fac(0x101);
      if (iVar1 == 0) {
        FUN_800f5410();
        FUN_800f66d8(0x80);
        uVar2 = FUN_800f3c3c(0xab);
        FUN_800f3f38(uVar2);
      }
      else {
        FUN_800f5410();
        FUN_800f66d8(0x80);
        uVar2 = FUN_800f3c3c(0xac);
        FUN_800f3f38(uVar2);
      }
      FUN_800f82ec(0x80);
      FUN_800f63bc();
      FUN_800f5a90(0x19);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f960c();
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f62bc(0xaf);
    FUN_800f6630(0xaf);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0xf);
  FUN_800f8ebc(0xa9);
  FUN_800f7500(0x14);
  FUN_800f8ebc(0xab);
  do {
    FUN_800f7594(0xa9);
    FUN_800f5410();
    FUN_800f66d8(0x80);
    FUN_800f7594(0xab);
    uVar2 = FUN_800f3a70(0x80);
    iVar1 = FUN_800f3b04(uVar2);
    FUN_800f3f38(iVar1 + (uint)*DAT_8019ed58);
    FUN_800f5574(0xb6);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f5574(99);
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) {
        FUN_800f654c(99);
      }
    }
    else {
      FUN_800f654c(1);
    }
    FUN_800f82ec(0x80);
    FUN_800f62bc(0xa9);
    FUN_800f62bc(0xab);
    FUN_800f6630(0xa9);
    FUN_800f5574(0x14);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(2);
  FUN_800f66d8(0x80);
  FUN_800f8188(0x3965);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0x14);
  do {
    FUN_800f66d8(0x80);
    FUN_800f8768(0x3966);
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f5958(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f8f74(0x396b);
  FUN_800f8f74(0x396c);
  FUN_800f8f74(0x396d);
  FUN_800f8f74(0x396e);
  FUN_800f8f74(0x396f);
  FUN_800f8f74(0x3970);
  FUN_800f8f74(0x3971);
  FUN_800f8f74(0x3972);
  FUN_800f8f74(0x3973);
  FUN_800f8f74(0x3974);
  FUN_800f7500(0x25);
  FUN_800f66d8(0x82);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f7500(0x21);
    FUN_8015a0f4();
    FUN_800f6564(0x396d);
    FUN_800f8188(0x396e);
  }
  FUN_800f7500(0x30);
  FUN_800f66d8(0x82);
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_800f7500(0x2c);
    FUN_8015a0f4();
  }
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f7500(8);
  do {
    FUN_800f66d8(0x82);
    FUN_800f8674(0xad);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x396d);
  FUN_800f824c(0xb0);
  FUN_800f6564(0x396e);
  FUN_800f824c(0xb1);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f6a78(0xad);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 == 0) {
      uVar2 = FUN_800f3c3c(0xa9);
      FUN_800f78c4(uVar2);
      FUN_800f824c(0xa9);
    }
    else {
      uVar2 = FUN_800f3c3c(0xaa);
      FUN_800f78c4(uVar2);
      FUN_800f824c(0xaa);
    }
    FUN_800f6364();
    FUN_800f5958(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0x25);
  FUN_800f6630(0xa9);
  FUN_800f82ec(0x80);
  FUN_800f63bc();
  FUN_800f6630(0xaa);
  FUN_800f82ec(0x80);
  FUN_800f7500(5);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8fb8(0xa9);
  do {
    FUN_800f66d8(0x82);
    uVar2 = FUN_800f3c3c(0xa9);
    FUN_800f78c4(uVar2);
    FUN_800f824c(0xa9);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0x27);
  FUN_800f6630(0xa9);
  uVar2 = FUN_800f3b04(0x3974);
  FUN_800f78c4(uVar2);
  FUN_800f82ec(0x80);
  FUN_800f7500(0x28);
  FUN_800f6564(0x3965);
  FUN_80152b38();
  FUN_800f824c(0xdf);
  FUN_800f6564(0x396b);
  FUN_800f824c(0xe1);
  FUN_8015240c();
  FUN_800f6564(0x3967);
  FUN_80152bc4();
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(0xe3);
  FUN_800f3f38(uVar2);
  FUN_800f82ec(0x80);
  FUN_800f7500(2);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f5410();
    FUN_800f66d8(0x82);
    FUN_800f4248(0x7f);
    uVar2 = FUN_800f3c3c(0xaa);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0xaa);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0x29);
  FUN_800f5410();
  FUN_800f6630(0xaa);
  uVar2 = FUN_800f3b04(0x396c);
  FUN_800f3f38(uVar2);
  FUN_8015a30c();
  FUN_800f82ec(0x80);
  FUN_800f6564(0x3968);
  FUN_800f7864();
  FUN_800f824c(0xa9);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f63bc();
  do {
    FUN_800f5410();
    FUN_800f66d8(0x82);
    uVar2 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar2);
    FUN_800f824c(0xa9);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0x2a);
  FUN_800f5410();
  FUN_800f6630(0xa9);
  uVar2 = FUN_800f3b04(0x396f);
  FUN_800f3f38(uVar2);
  *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
  bVar3 = *DAT_8019ed68;
  if (*DAT_8019ed50 == '\0') {
    bVar3 = bVar3 | 2;
  }
  *DAT_8019ed68 = bVar3;
  FUN_8015a344();
  FUN_800f82ec(0x80);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f7500(9);
  do {
    FUN_800f66d8(0x82);
    uVar2 = FUN_800f3c3c(0xa9);
    FUN_800f78c4(uVar2);
    FUN_800f824c(0xa9);
    FUN_800f63bc();
    FUN_800f66d8(0x82);
    uVar2 = FUN_800f3c3c(0xaa);
    FUN_800f78c4(uVar2);
    FUN_800f824c(0xaa);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(10);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f7500(0x2b);
  FUN_800f6630(0xa9);
  uVar2 = FUN_800f3b04(0x3970);
  FUN_800f78c4(uVar2);
  FUN_800f82ec(0x80);
  FUN_800f63bc();
  FUN_800f6630(0xaa);
  uVar2 = FUN_800f3b04(0x3971);
  FUN_800f78c4(uVar2);
  FUN_800f82ec(0x80);
  FUN_800f7500(0x25);
  FUN_800f66d8(0x80);
  FUN_800f824c(0xa9);
  FUN_8015a094();
  FUN_800f7500(0x20);
  FUN_800f82ec(0x80);
  FUN_800f7500(0x26);
  FUN_800f66d8(0x80);
  FUN_800f824c(0xa9);
  FUN_8015a094();
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f7500(0x21);
    *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
    FUN_800f82ec(0x80);
  }
  FUN_8015902c();
  return;
}




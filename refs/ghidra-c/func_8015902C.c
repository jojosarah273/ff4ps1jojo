
void FUN_8015902c(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  FUN_800f7500(0x22);
  FUN_800f5410();
  FUN_800f6564(0x3969);
  uVar1 = FUN_800f3b04(0x396a);
  FUN_800f3f38(uVar1);
  FUN_800f824c(0xaa);
  FUN_80152aac();
  FUN_800f824c(0xa9);
  FUN_800f6564(0x3967);
  FUN_80152aac();
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0xa9);
  FUN_800f3f38(uVar1);
  FUN_800f82ec(0x80);
  FUN_800f6630(0xaa);
  FUN_80152bc4();
  FUN_800f824c(0xa9);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f5410();
    FUN_800f66d8(0x82);
    FUN_800f4248(0x7f);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
    FUN_800f824c(0xa9);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f7500(0x23);
  FUN_800f5410();
  FUN_800f6630(0xa9);
  uVar1 = FUN_800f3b04(0x3972);
  FUN_800f3f38(uVar1);
  FUN_8015a30c();
  FUN_800f82ec(0x80);
  FUN_800f7500(3);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  do {
    FUN_800f5410();
    FUN_800f66d8(0x82);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
    FUN_800f824c(0xa9);
    *DAT_8019ed40 = *DAT_8019ed60;
    FUN_800f5410();
    FUN_800f4008(0xb);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6364();
    FUN_800f5958(3);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f7500(0x24);
  FUN_800f5410();
  FUN_800f6630(0xa9);
  uVar1 = FUN_800f3b04(0x3973);
  FUN_800f3f38(uVar1);
  *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
  bVar3 = *DAT_8019ed68;
  if (*DAT_8019ed50 == '\0') {
    bVar3 = bVar3 | 2;
  }
  *DAT_8019ed68 = bVar3;
  FUN_8015a344();
  FUN_800f82ec(0x80);
  FUN_800f71dc(0x15);
  do {
    FUN_800f90ec(0x289c);
    FUN_800f5e48();
    iVar2 = FUN_800f5c64(0x8080);
  } while (iVar2 != 0);
  FUN_800f8f74(0x3977);
  FUN_800f7500(1);
  FUN_800f66d8(0x80);
  FUN_800f4248(0xf);
  FUN_800f5574(6);
  iVar2 = FUN_800f53d4();
  if (iVar2 != 0) {
    FUN_800f6240(0x3977);
  }
  FUN_800f7500(0x33);
  FUN_800f66d8(0x80);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    FUN_800f7500(0x25);
    FUN_800f66d8(0x82);
    iVar2 = FUN_800f6434(0x80);
    if (iVar2 == 0) {
      FUN_800f6564(0x3977);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
      FUN_800f8188(0x3977);
      FUN_800f7500(0x21);
      FUN_800f971c();
      *DAT_8019ed54 = *DAT_8019ed44;
      do {
        FUN_800f66d8(0x82);
        FUN_800f8768(0x289c);
        FUN_800f63bc();
        FUN_800f6364();
        FUN_800f5958(0xb);
        iVar2 = FUN_800f53d4();
      } while (iVar2 == 0);
    }
  }
  FUN_800f7500(0x35);
  FUN_800f66d8(0x80);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    FUN_800f7500(0x30);
    FUN_800f66d8(0x82);
    iVar2 = FUN_800f6434(0x80);
    if (iVar2 == 0) {
      FUN_800f6564(0x3977);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x40;
      FUN_800f8188(0x3977);
      FUN_800f7500(0x2c);
      FUN_800f71dc(0xb);
      do {
        FUN_800f66d8(0x82);
        FUN_800f8768(0x289c);
        FUN_800f63bc();
        FUN_800f6364();
        FUN_800f5958(0x16);
        iVar2 = FUN_800f53d4();
      } while (iVar2 == 0);
    }
  }
  FUN_800f6564(0x3977);
  FUN_800f4248(0xc0);
  iVar2 = FUN_800f4120(2);
  if (iVar2 == 0) {
    *DAT_8019ed40 = *DAT_8019ed40 ^ 0xc0;
    iVar2 = FUN_800f5f20(0x202);
    if (iVar2 == 0) {
      FUN_800f6564(0x28a2);
      FUN_800f4248(0xc0);
      FUN_800f40e8();
      goto LAB_80159528;
    }
    FUN_800f6564(0x3977);
    iVar2 = FUN_800f6434(0x80);
    if (iVar2 == 0) {
      FUN_800f71dc(0xb);
      FUN_800f971c();
      *DAT_8019ed58 = *DAT_8019ed44;
      do {
        FUN_800f6b68(0x289c);
        FUN_800f8960(0x289c);
        FUN_800f6364();
        FUN_800f63bc();
        FUN_800f5a90(0xb);
        iVar2 = FUN_800f53d4();
      } while (iVar2 == 0);
      *DAT_8019ed54 = *DAT_8019ed58;
      do {
        FUN_800f90ec(0x289c);
        FUN_800f6364();
        FUN_800f5958(0x16);
        iVar2 = FUN_800f53d4();
      } while (iVar2 == 0);
      FUN_800f6564(0x3977);
      FUN_800f4248(0x3f);
      *DAT_8019ed40 = *DAT_8019ed40 | 0x80;
      FUN_800f8188(0x3977);
    }
  }
  else {
LAB_80159528:
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_800f654c(0x80);
      FUN_800f8188(0x3978);
      FUN_800f6564(0x28a2);
      FUN_800f4248(0x80);
      iVar2 = FUN_800f4120(0x202);
      if (iVar2 == 0) {
        FUN_800f654c(0x40);
        FUN_800f8188(0x3978);
        FUN_800f971c();
        *DAT_8019ed54 = *DAT_8019ed44;
        FUN_800f7500(0x16);
        do {
          FUN_800f6b68(0x289c);
          FUN_800f8960(0x289c);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f5958(0xb);
          iVar2 = FUN_800f53d4();
        } while (iVar2 == 0);
        FUN_800f971c();
        *DAT_8019ed58 = *DAT_8019ed44;
        do {
          FUN_800f6b68(0x289c);
          FUN_800f8960(0x289c);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f5958(0x16);
          iVar2 = FUN_800f53d4();
        } while (iVar2 == 0);
        FUN_800f7500(0xb);
        do {
          FUN_800f6b68(0x289c);
          FUN_800f8960(0x289c);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f5a90(0x16);
          iVar2 = FUN_800f53d4();
        } while (iVar2 == 0);
      }
      FUN_800f6564(0x3977);
      FUN_800f4248(0x3f);
      *DAT_8019ed40 = *DAT_8019ed40 | 0xa0;
      FUN_800f8188(0x3977);
    }
  }
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f6564(0x28a0);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x28a4);
    FUN_800f824c(0xa9);
  }
  FUN_800f6564(0x28ab);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x28af);
    FUN_800f824c(0xaa);
  }
  FUN_800f6630(0xa9);
  uVar1 = FUN_800f3c3c(0xaa);
  FUN_800f78c4(uVar1);
  FUN_800f7500(0x19);
  FUN_800f82ec(0x80);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f8d6c(0xa9);
  FUN_800f6564(0x28a0);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x28a1);
    FUN_800f824c(0xa9);
  }
  FUN_800f6564(0x28ab);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x28ac);
    FUN_800f824c(0xaa);
  }
  FUN_800f6630(0xa9);
  uVar1 = FUN_800f3c3c(0xaa);
  FUN_800f78c4(uVar1);
  FUN_800f7500(0x1a);
  FUN_800f82ec(0x80);
  FUN_800f6564(0x3966);
  FUN_80152bc4();
  FUN_800f824c(0xa9);
  FUN_800f6564(0x3967);
  FUN_80152b38();
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0xa9);
  FUN_800f3f38(uVar1);
  FUN_800f61e8();
  FUN_800f7500(0x1b);
  FUN_800f82ec(0x80);
  FUN_800f6564(0x3965);
  FUN_80152c50();
  FUN_800f824c(0xa9);
  FUN_800f6564(0x3977);
  FUN_800f4248(0xc0);
  iVar2 = FUN_800f4120(2);
  if (iVar2 == 0) {
    *DAT_8019ed40 = *DAT_8019ed40 ^ 0xc0;
    iVar2 = FUN_800f5f20();
    if (iVar2 != 0) {
      FUN_800f5410();
      FUN_800f6564(0x289e);
      FUN_800f4248(0x7f);
      uVar1 = FUN_800f3c3c(0xa9);
      FUN_800f3f38(uVar1);
      goto LAB_80159a80;
    }
    FUN_800f5410();
    FUN_800f6564(0x289e);
    FUN_800f4248(0x7f);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
    FUN_800f824c(0xaa);
    FUN_800f5410();
    FUN_800f6564(0x28a9);
    FUN_800f4248(0x7f);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
    uVar1 = FUN_800f3c3c(0xaa);
    FUN_800f3f38(uVar1);
    FUN_800f7864();
    FUN_800f5574(99);
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) {
      FUN_800f654c(99);
    }
  }
  else {
    FUN_800f5410(0x202);
    FUN_800f65c8(0xf9102);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
LAB_80159a80:
    FUN_8015a30c();
  }
  FUN_800f7500(0x1c);
  FUN_800f82ec(0x80);
  FUN_800f6564(0x3966);
  FUN_80152c50();
  FUN_800f824c(0xaa);
  FUN_800f6564(0x3977);
  FUN_800f4248(1);
  iVar2 = FUN_800f4120(2);
  if (iVar2 == 0) {
    FUN_800f6564(0x3965);
    FUN_800f5140();
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0xaa);
    FUN_800f3f38(uVar1);
    FUN_800f4008(2);
  }
  else {
    FUN_800f6564(0x3977);
    FUN_800f4248(0xc0);
    iVar2 = FUN_800f4120(2);
    if (iVar2 == 0) {
      *DAT_8019ed40 = *DAT_8019ed40 ^ 0xc0;
      iVar2 = FUN_800f5f20(0x202);
      if (iVar2 == 0) {
        FUN_800f5410();
        FUN_800f6564(0x289d);
        uVar1 = FUN_800f3c3c(0xa9);
        FUN_800f3f38(uVar1);
        uVar1 = FUN_800f3c3c(0xaa);
        FUN_800f3f38(uVar1);
        FUN_800f824c(0xab);
        FUN_800f5410();
        FUN_800f6564(0x28a8);
        uVar1 = FUN_800f3c3c(0xa9);
        FUN_800f3f38(uVar1);
        uVar1 = FUN_800f3c3c(0xaa);
        FUN_800f3f38(uVar1);
        FUN_800f5410();
        uVar1 = FUN_800f3c3c(0xab);
        FUN_800f3f38(uVar1);
        goto LAB_80159d5c;
      }
      FUN_800f6564(0x3977);
      FUN_800f4248(0x20);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6564(0x289d);
        FUN_800f7864();
        FUN_800f5410();
        uVar1 = FUN_800f3b04(0x28a8);
        FUN_800f3f38(uVar1);
        uVar1 = FUN_800f3c3c(0xaa);
        FUN_800f3f38(uVar1);
        FUN_800f824c(0xbf);
        FUN_800f7500(0);
        FUN_800f66d8(0x80);
        FUN_800f4248(0xc0);
        FUN_800f4280(0x3978);
        iVar2 = FUN_800f4120(2);
        if (iVar2 == 0) {
          FUN_800f6630(0xbf);
          *DAT_8019ed54 = *DAT_8019ed44;
          FUN_800f8d00(0x3945);
          FUN_800f71dc(5);
          FUN_800f8d00(0x3947);
          FUN_8015254c();
          FUN_800f5480();
          FUN_800f6630(0xbf);
          uVar1 = FUN_800f3b04(0x3949);
          FUN_800f7f48(uVar1);
          FUN_800f824c(0xbf);
        }
        else {
          FUN_800f6630(0xbf);
        }
        goto LAB_80159d64;
      }
    }
    FUN_800f5410();
    FUN_800f6564(0x289d);
    uVar1 = FUN_800f3c3c(0xa9);
    FUN_800f3f38(uVar1);
    uVar1 = FUN_800f3c3c(0xaa);
    FUN_800f3f38(uVar1);
    *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
    bVar3 = *DAT_8019ed68;
    if (*DAT_8019ed50 == '\0') {
      bVar3 = bVar3 | 2;
    }
    *DAT_8019ed68 = bVar3;
  }
LAB_80159d5c:
  FUN_8015a344();
LAB_80159d64:
  FUN_800f7500(0x1d);
  FUN_800f82ec(0x80);
  FUN_800f6564(0x28a5);
  uVar1 = FUN_800f3b04(0x28b0);
  FUN_800f78c4(uVar1);
  FUN_800f7500(0x1e);
  FUN_800f82ec(0x80);
  FUN_800f6564(0x28a6);
  uVar1 = FUN_800f3b04(0x28b1);
  FUN_800f78c4(uVar1);
  FUN_800f63bc();
  FUN_800f82ec(0x80);
  FUN_800f7500(0x41);
  FUN_800f66d8(0x80);
  FUN_800f824c(0xa9);
  FUN_800f63bc();
  FUN_800f66d8(0x80);
  FUN_800f824c(0xaa);
  FUN_800f6564(0x3977);
  FUN_800f4248(0xc0);
  iVar2 = FUN_800f4120(2);
  if (iVar2 == 0) {
    *DAT_8019ed40 = *DAT_8019ed40 ^ 0xc0;
    iVar2 = FUN_800f5f20(2);
    if (iVar2 == 0) {
      FUN_800f6564(0x3977);
      FUN_800f4248(0x20);
      iVar2 = FUN_800f4120(2);
      if (iVar2 == 0) {
        FUN_800f6630(0xa9);
        FUN_800f5574(0x21);
        iVar2 = FUN_800f53c0();
        if (iVar2 != 0) {
          FUN_800f654c(0x21);
        }
        FUN_800f824c(0xdf);
        FUN_800f654c(3);
        FUN_800f824c(0xe1);
        FUN_8015240c();
        FUN_800f6630(0xe3);
        FUN_800f824c(0xa9);
        FUN_800f5410();
        FUN_800f6630(0xaa);
        uVar1 = FUN_800f3b04(0x28a8);
        FUN_800f3f38(uVar1);
        *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
        bVar3 = *DAT_8019ed68;
        if (*DAT_8019ed50 == '\0') {
          bVar3 = bVar3 | 2;
        }
        *DAT_8019ed68 = bVar3;
        FUN_8015a344();
        FUN_800f824c(0xaa);
      }
      else {
        uVar1 = FUN_800f3c3c(0xa9);
        FUN_800f4f28(uVar1);
        iVar2 = FUN_800f4fac(0x101);
        if (iVar2 == 0) {
          FUN_800f654c(99);
        }
        else {
          FUN_800f6630(0xa9);
        }
        FUN_800f824c(0xa9);
        FUN_800f6564(0x289d);
        FUN_800f7864();
        FUN_800f5410();
        uVar1 = FUN_800f3c3c(0xaa);
        FUN_800f3f38(uVar1);
        *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
        bVar3 = *DAT_8019ed68;
        if (*DAT_8019ed50 == '\0') {
          bVar3 = bVar3 | 2;
        }
        *DAT_8019ed68 = bVar3;
        FUN_8015a344();
        FUN_800f824c(0xaa);
      }
      FUN_800f7500(0x2d);
      FUN_800f6630(0xa9);
      FUN_800f82ec(0x80);
      FUN_800f63bc();
      FUN_800f6630(0xaa);
      FUN_800f82ec(0x80);
    }
  }
  FUN_800f6564(0x3977);
  FUN_800f4248(0x20);
  iVar2 = FUN_800f4120(0x202);
  if (iVar2 == 0) {
    FUN_800f6564(0x289c);
    FUN_800f4248(0x20);
    iVar2 = FUN_800f4120(2);
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_800f7500(1);
  FUN_800f66d8(0x80);
  *DAT_8019ed40 = *DAT_8019ed40 | 0x20;
  FUN_800f82ec(0x80);
  return;
}





void FUN_80150c58(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_80151f28();
  FUN_800f71dc(0xff);
  do {
    FUN_800f6c68(0x14ee00);
    FUN_800f8768(0x1900);
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x8080);
  } while (iVar1 != 0);
  FUN_80151cd8();
  FUN_800f71dc(0x7f);
  FUN_800f971c();
  FUN_800f5410();
  do {
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x600);
    FUN_800f3f38(uVar2);
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x8080);
  } while (iVar1 != 0);
  FUN_800f824c(0x97);
  FUN_8005a234();
  FUN_800f6564(0x1802);
  FUN_800f9200();
  FUN_800f9200();
  FUN_800f4248(0x80);
  FUN_800f8188(0x352c);
  FUN_800f93dc();
  FUN_800f4248(0x40);
  FUN_800f824c(0xa9);
  FUN_800f93dc();
  FUN_800f4248(0x3f);
  FUN_800f8188(0x1802);
  FUN_800f6630(0xa9);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(7);
    FUN_800f8188(0x1802);
  }
  FUN_800f6564(0x1801);
  FUN_800f4248(0x80);
  FUN_800f8188(0x38ef);
  FUN_800f6564(0x1801);
  FUN_800f4248(0x7f);
  FUN_800f8188(0x1801);
  FUN_800f9644(0x20);
  FUN_800f658c(0x1800);
  FUN_800f55c0(0x100);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f5480();
    FUN_800f80d0(0);
    FUN_800f81b0(0x1800);
  }
  FUN_800f658c(0x1800);
  FUN_800f81b0(0x393d);
  FUN_800f6558(8);
  FUN_800f81b0(0x393f);
  FUN_8015236c();
  FUN_800f971c();
  FUN_800f9660(0x20);
  FUN_800f7210(0x3941);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0xe8000);
    FUN_800f8960(0x299c);
    FUN_800f63bc();
    FUN_800f6364();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x299c);
  FUN_800f8188(0x29a4);
  FUN_800f4248(8);
  FUN_800f8188(0x3581);
  FUN_800f71dc(3);
  *DAT_8019ed58 = *DAT_8019ed54;
  FUN_800f5ea0();
  do {
    FUN_800f6b68(0x299c);
    FUN_800f8960(0x29ad);
    FUN_800f8960(0x29b1);
    FUN_800f5e48();
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x8080);
  } while (iVar1 != 0);
  FUN_800f654c(0xff);
  FUN_800f8188(0x29b0);
  FUN_800f8188(0x29b4);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6564(0x29a0);
  FUN_800f824c(0xab);
  do {
    FUN_800f90ec(0x29ca);
    uVar2 = FUN_800f3c3c(0xab);
    FUN_800f4f28(uVar2);
    FUN_800f4f4c();
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x29ca);
    FUN_800f7a40(uVar2);
    uVar2 = FUN_800f3c3c(0xab);
    FUN_800f4f28(uVar2);
    FUN_800f4f4c();
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x29ca);
    FUN_800f7a40(uVar2);
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    *DAT_8019ed58 = *DAT_8019ed54;
    FUN_800f63bc();
    do {
      FUN_800f6b68(0x29ad);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) break;
      uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x29ad);
      FUN_800f54d4(uVar2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f5410();
        FUN_800f6b68(0x29ca);
        uVar2 = FUN_800f3b04(*DAT_8019ed58 + 0x29ca);
        FUN_800f3f38(uVar2);
        FUN_800f8768(0x29ca);
        FUN_800f971c();
        FUN_800f8960(0x29ca);
        FUN_800f5ccc();
        FUN_800f8960(0x29ad);
      }
      FUN_800f63bc();
      FUN_800f5a90(3);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6364();
    FUN_800f5958(2);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0xff);
  FUN_800f7500(7);
  do {
    FUN_800f8960(0x29b5);
    FUN_800f8960(0x29bd);
    FUN_800f5ea0();
    iVar1 = FUN_800f5c64(0x8080);
  } while (iVar1 != 0);
  FUN_800f63bc();
  *DAT_8019ed54 = *DAT_8019ed58;
  do {
    FUN_800f6b68(0x29ca);
    FUN_800f824c(0xab);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      do {
        *DAT_8019ed40 = *DAT_8019ed5c;
        FUN_800f8960(0x29b5);
        FUN_800f8960(0x29bd);
        FUN_800f63bc();
        FUN_800f5da0(0xab);
        FUN_800f6630(0xab);
        iVar1 = FUN_800f6434(0x202);
      } while (iVar1 != 0);
    }
    FUN_800f6364();
    FUN_800f5958(3);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x29a1);
  FUN_800f824c(0xdf);
  FUN_800f654c(8);
  FUN_800f824c(0xe1);
  FUN_8015240c();
  FUN_800f7270(0xe3);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0xe9000);
    FUN_800f8960(0x29a5);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(8);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f5410();
  FUN_800f6564(0x29ca);
  uVar2 = FUN_800f3b04(0x29cb);
  FUN_800f3f38(uVar2);
  uVar2 = FUN_800f3b04(0x29cc);
  FUN_800f3f38(uVar2);
  FUN_800f8188(0x29cd);
  FUN_800f6564(0x29ca);
  FUN_800f8188(0x38f0);
  FUN_800f6564(0x29cb);
  FUN_800f8188(0x38f1);
  FUN_800f6564(0x29cc);
  FUN_800f8188(0x38f2);
  FUN_800f6564(0x29a3);
  FUN_800f824c(0xdf);
  FUN_800f654c(0x10);
  FUN_800f824c(0xe1);
  FUN_8015240c();
  FUN_800f7270(0xe3);
  FUN_800f971c();
  *DAT_8019ed58 = *DAT_8019ed44;
  do {
    FUN_800f6c68(0xebac0);
    FUN_800f8960(0x29cf);
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f5a90(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_801539c4();
  FUN_800f6564(0x2282);
  FUN_800f5574(0x61);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f5480();
    FUN_800f8058(0x61);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x13ff0f);
    FUN_800f8188(0x38d6);
  }
  FUN_800f6564(0x38e5);
  FUN_800f4248(0xc);
  *DAT_8019ed40 = *DAT_8019ed40 >> 2;
  FUN_800f5574(3);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6c68(0x13ff0c);
    FUN_8016e500();
  }
  FUN_800f654c(3);
  FUN_80150c38();
LAB_8015146c:
  FUN_800f6564(0x16ac);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0x13ff06);
  FUN_800f61e8();
  FUN_800f8188(0x3538);
  FUN_800f8f74(0x38e6);
  do {
    do {
      FUN_800f654c(2);
      FUN_80150c38();
      FUN_800f6564(0x38d9);
      uVar2 = FUN_800f3b04(0x38da);
      FUN_800f78c4(uVar2);
      iVar1 = FUN_800f7918(0x202);
    } while (iVar1 != 0);
    FUN_800f5d24(0x3538);
    FUN_800f6564(0x3538);
    iVar1 = FUN_800f6434(0x202);
  } while (iVar1 != 0);
  FUN_800f6564(0x38d7);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x3581);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) goto LAB_80151540;
  }
  else {
LAB_80151540:
    FUN_800f6564(0x3581);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(4);
    }
    else {
      FUN_800f6564(0x38d7);
      iVar1 = FUN_800f6434(0x80);
      if (iVar1 == 0) {
        FUN_800f654c(2);
      }
      else {
        FUN_800f654c(3);
      }
    }
    FUN_800f8188(0x34ca);
    FUN_800f654c(0xff);
    FUN_800f8188(0x34cb);
    FUN_800f8188(0x33c4);
    FUN_80153264();
    FUN_800f654c(5);
    FUN_80150c38();
    FUN_800f8f74(0x38d7);
    FUN_800f8f74(0x3581);
  }
  FUN_800f6564(0x2282);
  FUN_800f5574(99);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6564(0x352d);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0xf);
      FUN_800f8188(0x38d6);
    }
  }
  FUN_80157ad0();
  FUN_800f6564(0x3601);
  FUN_800f5574(0xff);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_80150b88();
    FUN_8015d9a8();
  }
  FUN_8015ac7c();
  FUN_800f6630(0xa8);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f6564(0x3601);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_8015dca4();
      FUN_8015bd34();
    }
    FUN_80157f30();
    FUN_800f6630(0xd1);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_80158190();
      FUN_80151c0c();
      FUN_800f6564(0x352e);
      FUN_800f5574(2);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_8005f188();
      }
    }
    goto LAB_8015146c;
  }
  FUN_8016e560();
  FUN_800f654c(0x85);
  FUN_800f8188(0x35f3);
  FUN_800f6630(0xd7);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(1);
    FUN_80150c38();
  }
  FUN_800f6630(0xa8);
  FUN_800f8188(0x1803);
  FUN_800f4248(0x60);
  iVar1 = FUN_800f4120(0x202);
  if (iVar1 == 0) {
    FUN_800f6630(0xa8);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x15);
      FUN_80150c38();
      FUN_80153518();
      FUN_8016571c();
    }
    else {
      FUN_800f6564(0x38e5);
      FUN_800f4248(0xc);
      FUN_800f5574(0xc);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f654c(0x8b);
        FUN_800f8188(0x35f3);
      }
      FUN_800f654c(0xc);
      FUN_80150c38();
      FUN_800f654c(2);
      FUN_80150c38();
      FUN_800f654c(0x15);
      FUN_80150c38();
      FUN_80153264();
      FUN_800f654c(0x24);
      FUN_800f8188(0x34ca);
      FUN_800f654c(0xff);
      FUN_800f8188(0x34cb);
      FUN_800f8188(0x33c4);
      FUN_800f8f74(0x359a);
      FUN_800f654c(0x40);
      FUN_800f8188(0x34c2);
      FUN_800f6564(0x388b);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(5);
        FUN_80150c38();
      }
    }
  }
  else {
    FUN_800f4248(0x40);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x13);
      FUN_80150c38();
      FUN_80153518();
      FUN_8016571c();
      FUN_800f6564(0x38f3);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_80153608();
      }
    }
    else {
      FUN_801533bc();
      FUN_800f6630(0xa9);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f6564(0x38e5);
        FUN_800f4248(0xc);
        FUN_800f5574(0xc);
        iVar1 = FUN_800f53d4();
        if (iVar1 == 0) goto LAB_80151950;
      }
      else {
LAB_80151950:
        FUN_800f654c(8);
        FUN_800f8188(0x38be);
        FUN_800f6240(0x38bd);
      }
      FUN_80153518();
      FUN_800f654c(2);
      FUN_80150c38();
      FUN_801534d8();
      FUN_800f6630(0xa9);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(0x12);
        FUN_80150c38();
      }
      FUN_8016571c();
      FUN_800f6630(0xa8);
      FUN_800f4248(0x10);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_80163f68();
        FUN_80153518();
        FUN_8016571c();
      }
    }
  }
  FUN_800f971c();
  *DAT_8019ed54 = *DAT_8019ed44;
  do {
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f8fb8(0xab);
  FUN_800f7210(0x1800);
  FUN_800f5958(0x1c0);
  iVar1 = FUN_800f53c0();
  if (iVar1 != 0) {
    FUN_800f62bc(0xab);
  }
  FUN_800f71dc(7);
  do {
    FUN_800f6b68(0x1804);
    uVar2 = FUN_800f3c3c(0xab);
    FUN_800f78c4(uVar2);
    FUN_800f824c(0xab);
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x8080);
  } while (iVar1 != 0);
  FUN_800f6364();
  do {
    FUN_800f5e48();
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_800f6564(0x38e5);
  FUN_800f4248(0xc);
  FUN_800f5574(0xc);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6630(0xab);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x1800);
      FUN_800f5574(0xb7);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6564(0x1801);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 != 0) goto LAB_80151b4c;
      }
      FUN_800f6564(0x35f3);
      FUN_800f8188(0x1e00);
      FUN_80169128();
    }
  }
LAB_80151b4c:
  FUN_800f654c(0xff);
  FUN_800f824c(0xa9);
  FUN_800f654c(0x10);
  FUN_800f824c(0xaa);
  while( true ) {
    FUN_800f62bc(0xa9);
    FUN_800f5da0(0xaa);
    FUN_800f6630(0xaa);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) break;
    FUN_800f6630(0xa9);
    FUN_80152908();
    *DAT_8019ed40 = *DAT_8019ed40 | 3;
    FUN_800f8188(0x6cc2);
    FUN_800f6630(0xaa);
    FUN_800f8188(0x6cc1);
    FUN_800f654c(2);
    FUN_80150c38();
  }
  FUN_800f654c(0);
  FUN_800f81e8(0x2106);
  return;
}




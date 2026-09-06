
void FUN_80173008(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1704);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1720);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) goto LAB_8017363c;
    FUN_800f6564(0x1701);
    uVar2 = FUN_800f3b04(0x1723);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_8017363c;
    FUN_800f6630(0xad);
    FUN_800f5574(0x20);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f4248(0xf);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 != 0) goto LAB_8017363c;
    }
    FUN_800f6564(0x1721);
    FUN_800f824c(0xc);
    FUN_800f6564(0x1722);
    FUN_800f824c(0xe);
    FUN_80173ed8();
    FUN_800f6630(0xd7);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_8017363c;
    FUN_800f6630(0xad);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f654c(5);
      FUN_80171e18();
      return;
    }
    FUN_800f654c(3);
  }
  else {
    FUN_800f6630(0xb8);
    FUN_801729e0();
    FUN_800f654c(0x70);
    FUN_800f824c(0xc);
    FUN_800f654c(0x70);
    FUN_800f5480();
    uVar2 = FUN_800f3c3c(0xb8);
    FUN_800f7f48(uVar2);
    FUN_800f824c(0xe);
    FUN_800f8fb8(0xd);
    FUN_800f8fb8(0xf);
    FUN_800f6564(0x1705);
  }
  *DAT_8019ed40 = *DAT_8019ed40 << 5;
  FUN_800f824c(7);
  FUN_800f6564(0x1704);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
LAB_80173240:
    FUN_800f654c(0);
  }
  else {
    FUN_800f6564(0x6fd);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6630(0x7a);
    FUN_800f4960(0xbe37);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 != 0) goto LAB_80173240;
    FUN_800f654c(0x10);
  }
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(7);
  FUN_800f3f38(uVar2);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0);
  do {
    FUN_800f6b68(0xbfb4);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xc);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x458);
    FUN_800f6630(0xd);
    FUN_800f4008(0);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x56);
      FUN_801714c4();
    }
    FUN_800f6b68(0xbfb5);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xe);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x459);
    FUN_800f6b68(0xbfb6);
    FUN_800f5410();
    FUN_800f4008(0xd8);
    FUN_800f8960(0x45a);
    FUN_800f6b68(0xbfb7);
    FUN_800f5410();
    FUN_800f4008(0x1c);
    FUN_800f8960(0x45b);
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f6364();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f63bc();
    FUN_800f5a90(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x1287);
  FUN_800f4248(0x20);
  iVar1 = FUN_800f4120(2);
  if (iVar1 != 0) goto LAB_8017363c;
  FUN_800f6564(0x1704);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6630(0xad);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_8017363c;
    FUN_800f654c(3);
  }
  else {
    FUN_800f6564(0x1705);
  }
  FUN_800f824c(7);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0x15bb14);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6630(7);
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  FUN_800f824c(7);
  FUN_800f6564(0x1704);
  FUN_800f5574(5);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
LAB_801734fc:
    FUN_800f654c(0);
  }
  else {
    FUN_800f6564(0x6fd);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6630(0x7a);
    FUN_800f4960(0xbe37);
    iVar1 = FUN_800f4120(2);
    if (iVar1 != 0) goto LAB_801734fc;
    FUN_800f654c(4);
  }
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(7);
  FUN_800f3f38(uVar2);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6630(0xc);
  FUN_800f5480();
  FUN_800f8058(8);
  FUN_800f824c(0xc);
  FUN_800f6630(0xd);
  FUN_800f8058(0);
  FUN_800f824c(0xd);
  FUN_800f6630(0xc);
  FUN_800f5410();
  uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xbb18);
  FUN_800f3f38(uVar2);
  FUN_800f8960(0x454);
  FUN_800f6630(0xd);
  FUN_800f4008(0);
  FUN_800f4248(1);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x55);
    FUN_801714c4();
  }
  FUN_800f6630(0xe);
  FUN_800f5410();
  uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0xbb19);
  FUN_800f3f38(uVar2);
  FUN_800f8960(0x455);
  FUN_800f6b68(0xbb1a);
  FUN_800f8960(0x456);
  FUN_800f6b68(0xbb1b);
  FUN_800f8960(0x457);
LAB_8017363c:
  FUN_800f9448();
  return;
}




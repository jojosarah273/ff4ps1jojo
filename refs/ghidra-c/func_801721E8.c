
void FUN_801721e8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x1728);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) {
      FUN_800f6564(0x1704);
      FUN_800f5574(7);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f6564(0x1729);
        FUN_800f824c(0xc);
        FUN_800f6564(0x172a);
        FUN_800f824c(0xe);
        FUN_80173ed8();
        FUN_800f6630(0xd7);
        iVar1 = FUN_800f6434(0x202);
        if (iVar1 == 0) goto LAB_801724b8;
        FUN_800f654c(0);
      }
      else {
        FUN_800f8fb8(0xd);
        FUN_800f8fb8(0xf);
        FUN_800f654c(0x70);
        FUN_800f824c(0xc);
        FUN_800f654c(0x70);
        FUN_800f824c(0xe);
        FUN_800f6564(0x1705);
      }
      *DAT_8019ed40 = *DAT_8019ed40 << 5;
      FUN_800f824c(7);
      FUN_800f6564(0x1704);
      FUN_800f5574(7);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f654c(0);
      }
      else {
        FUN_800f6630(0x7a);
        FUN_800f4248(4);
        *DAT_8019ed40 = *DAT_8019ed40 << 2;
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
        FUN_800f8960(0x480);
        FUN_800f6630(0xd);
        FUN_800f4008(0);
        FUN_800f4248(1);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(0x60);
          FUN_801714c4();
        }
        FUN_800f6b68(0xbfb5);
        FUN_800f5410();
        uVar2 = FUN_800f3c3c(0xe);
        FUN_800f3f38(uVar2);
        FUN_800f8960(0x481);
        FUN_800f6b68(0xbfb6);
        FUN_800f5410();
        FUN_800f4008(0x60);
        FUN_800f8960(0x482);
        FUN_800f6b68(0xbfb7);
        FUN_800f5410();
        FUN_800f4008(0x18);
        FUN_800f8960(0x483);
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
    }
  }
LAB_801724b8:
  FUN_800f9448();
  return;
}





void FUN_80171608(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f926c();
  FUN_800f654c(0x15);
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f6564(0x170f);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) goto LAB_801719b0;
  FUN_800f5574(2);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6564(0x1701);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 != 0) goto LAB_801719b0;
    FUN_800f6630(0xad);
    FUN_800f5574(0x10);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) goto LAB_801719b0;
    FUN_800f6564(0x1704);
    FUN_800f5574(1);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x70);
      FUN_800f824c(0xc);
      FUN_800f654c(0x70);
      FUN_800f824c(0xe);
      goto LAB_80171750;
    }
    FUN_800f6564(0x1710);
    FUN_800f824c(0xc);
    FUN_800f6564(0x1711);
    FUN_800f824c(0xe);
    FUN_80173ed8();
    FUN_800f6630(0xd7);
    iVar1 = FUN_800f6434(0x202);
    if (iVar1 == 0) goto LAB_801719b0;
    FUN_800f654c(3);
  }
  else {
    FUN_800f6564(0x1710);
    FUN_800f824c(0xc);
    FUN_800f6564(0x1711);
    FUN_800f824c(0xe);
LAB_80171750:
    FUN_800f8fb8(0xd);
    FUN_800f8fb8(0xf);
    FUN_800f6564(0x1705);
  }
  *DAT_8019ed40 = *DAT_8019ed40 << 5;
  FUN_800f824c(7);
  FUN_800f6564(0x1704);
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f654c(0);
  }
  else {
    FUN_800f6630(0xab);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x7a);
      FUN_800f4248(4);
      *DAT_8019ed40 = *DAT_8019ed40 << 2;
    }
  }
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(7);
  FUN_800f3f38(uVar2);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0);
  do {
    FUN_800f6b68(0xc034);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xc);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x490);
    FUN_800f6630(0xd);
    FUN_800f4008(0);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f654c(100);
      FUN_801714c4();
    }
    FUN_800f6b68(0xc035);
    FUN_800f5410();
    uVar2 = FUN_800f3c3c(0xe);
    FUN_800f3f38(uVar2);
    FUN_800f8960(0x491);
    FUN_800f6b68(0xc036);
    FUN_800f8960(0x492);
    FUN_800f6b68(0xc037);
    FUN_800f8960(0x493);
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
  FUN_800f6564(0x1704);
  FUN_800f5574(1);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0xa2);
    FUN_800f4248(8);
    FUN_800f8188(0x170e);
  }
  FUN_800f6564(0x170e);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6564(0x49b);
    FUN_800f4248(0xcf);
    FUN_800f8188(0x49b);
    FUN_800f6564(0x49f);
    FUN_800f4248(0xcf);
    FUN_800f8188(0x49f);
  }
LAB_801719b0:
  FUN_800f9448();
  return;
}




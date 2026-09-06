
void FUN_801750dc(void)

{
  int iVar1;
  
  FUN_800f6564(0xfdd);
  FUN_800f5574(9);
  iVar1 = FUN_800f53d4();
  if (iVar1 != 0) {
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    FUN_800f4248(0xe);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f6564(0xfe0);
    FUN_800f5574(0xf);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      *DAT_8019ed40 = *DAT_8019ed5c;
      FUN_800f5410();
      FUN_800f4008(0x40);
      *DAT_8019ed54 = *DAT_8019ed44;
    }
    FUN_800f9644(0x20);
    FUN_800f6cf4(0x14fbc6);
    FUN_800f81b0(0xcfd);
    FUN_800f6cf4(0x14fbd6);
    FUN_800f81b0(0xcff);
    FUN_800f81b0(0xd7f);
    FUN_800f6cf4(0x14fbe6);
    FUN_800f81b0(0xd01);
    FUN_800f6cf4(0x14fbf6);
    FUN_800f81b0(0xd7d);
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    return;
  }
  FUN_800f5574(8);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f5574(10);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      return;
    }
    FUN_800f5574(0xc);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      return;
    }
  }
  FUN_800f6630(0x7a);
  *DAT_8019ed40 = *DAT_8019ed40 >> 2;
  FUN_800f4248(0xe);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9644(0x20);
  FUN_800f6cf4(0x14f7d6);
  FUN_800f81b0(0xcfd);
  FUN_800f6cf4(0x14f7e6);
  FUN_800f81b0(0xd1d);
  FUN_800f6cf4(0x14f7f6);
  FUN_800f81b0(0xd5d);
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  FUN_800f6564(0xfdd);
  FUN_800f5574(0xb);
  iVar1 = FUN_800f53d4();
  if (iVar1 == 0) {
    FUN_800f6630(0x7a);
    *DAT_8019ed40 = *DAT_8019ed40 >> 3;
    FUN_800f4248(0xf);
    FUN_800f5574(8);
    iVar1 = FUN_800f53c0();
    if (iVar1 != 0) {
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f5410();
      FUN_800f4008(9);
    }
    FUN_800f5140();
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f7500(0);
    do {
      FUN_800f6c68(0x14f806);
      FUN_800f6364();
      FUN_800f63bc();
      FUN_800f5a90(0x10);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
  }
  FUN_800f6630(0x7a);
  FUN_800f7864();
  FUN_800f4248(0x1e);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0);
  do {
    FUN_800f6c68(0x14f826);
    FUN_800f8960(0xdbd);
    FUN_800f6364();
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(0x1f);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f63bc();
    FUN_800f5a90(0x10);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




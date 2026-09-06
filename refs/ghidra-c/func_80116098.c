
void FUN_80116098(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6b68(0xa6d);
  *DAT_8019ed58 = *DAT_8019ed44;
  *DAT_8019ed40 = (&DAT_80198cb4)[*DAT_8019ed58];
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6b68(0xa6e);
  FUN_800f824c(0x20);
  FUN_800f6b68(0xa6f);
  FUN_800f824c(0x21);
  FUN_800f6630(0x24);
  *DAT_8019ed40 = *DAT_8019ed40 << 2;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9330();
  FUN_800f939c();
  FUN_800f95a0();
  FUN_800f960c();
  do {
    FUN_800f6630(0x20);
    FUN_800f5410();
    iVar1 = FUN_800f3b9c(0x14f9d6,*DAT_8019ed54);
    FUN_800f3f38(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8960(0x300);
    FUN_800f6c68(0x14f9d7);
    FUN_800f5574(0xff);
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) {
      FUN_800f6630(0x21);
      FUN_800f5410();
      iVar1 = FUN_800f3b9c(0x14f9d7,*DAT_8019ed54);
      FUN_800f3f38(iVar1 + (uint)*DAT_8019ed54);
    }
    else {
      FUN_800f654c(0xf0);
    }
    FUN_800f8960(0x301);
    FUN_800f6c68(0x14f9d8);
    FUN_800f8960(0x302);
    FUN_800f6564(0xacd);
    FUN_800f5140();
    uVar2 = FUN_800f3b04(0xace);
    FUN_800f78c4(uVar2);
    iVar1 = FUN_800f3b9c(0x14f9d9,*DAT_8019ed54);
    FUN_800f78c4(iVar1 + (uint)*DAT_8019ed54);
    FUN_800f8960(0x303);
    FUN_800fc0dc();
    *DAT_8019ed40 = *DAT_8019ed5c;
    FUN_800f4248(0xf);
    iVar1 = FUN_800f4120(0x202);
  } while (iVar1 != 0);
  return;
}




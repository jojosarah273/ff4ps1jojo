
void FUN_8013de38(void)

{
  int iVar1;
  undefined4 uVar2;
  byte bVar3;
  
  FUN_800f9330();
  FUN_800f6564(0x6cc0);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f6630(1);
    FUN_800f5410();
    FUN_800f4008(0xf);
    *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
    bVar3 = *DAT_8019ed68;
    if (*DAT_8019ed50 == '\0') {
      bVar3 = bVar3 | 2;
    }
    *DAT_8019ed68 = bVar3;
    iVar1 = FUN_800f53fc();
    if (iVar1 == 0) {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8013e0b0;
    }
    else {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
LAB_8013e0b0:
        FUN_800f654c(0xf0);
        FUN_800f8960(0x340);
        FUN_800f8960(0x341);
        goto LAB_8013e1c8;
      }
    }
    *DAT_8019ed40 = ~*DAT_8019ed40;
  }
  else {
    FUN_800f6630(1);
    iVar1 = FUN_800f6434(0x8080);
    if (iVar1 == 0) {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) goto LAB_8013e0b0;
    }
    else {
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0);
      FUN_800f3f38(uVar2);
      *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
      bVar3 = *DAT_8019ed68;
      if (*DAT_8019ed50 == '\0') {
        bVar3 = bVar3 | 2;
      }
      *DAT_8019ed68 = bVar3;
      iVar1 = FUN_800f53c0();
      if (iVar1 != 0) goto LAB_8013e0b0;
    }
  }
  FUN_800f8960(0x340);
  FUN_800f6630(2);
  FUN_800f5410();
  uVar2 = FUN_800f3c3c(3);
  FUN_800f3f38(uVar2);
  FUN_800f8960(0x341);
  FUN_800f6630(4);
  FUN_800f4248(0x60);
  *DAT_8019ed40 = *DAT_8019ed40 >> 4;
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f6c68(0x16ffe6);
  FUN_800f8960(0x342);
  FUN_800f6c68(0x16ffe7);
  uVar2 = FUN_800f3c3c(5);
  FUN_800f5ecc(uVar2);
  FUN_800f9200();
  FUN_800f6564(0x6cc0);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f93dc();
    *DAT_8019ed40 = *DAT_8019ed40 ^ 0x40;
    FUN_800f9200();
  }
  FUN_800f93dc();
  FUN_800f8960(0x343);
LAB_8013e1c8:
  FUN_800f63bc();
  FUN_800f63bc();
  FUN_800f63bc();
  FUN_800f63bc();
  FUN_800f95a0();
  return;
}




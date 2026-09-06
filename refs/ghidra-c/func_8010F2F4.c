
void FUN_8010f2f4(void)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  
  FUN_800f8f74(0x1704);
  FUN_800f8fb8(0x20);
  FUN_800f8fb8(0x24);
  FUN_8010f484();
  do {
    FUN_800fe778();
    FUN_800fe870();
    FUN_8011416c();
    FUN_800f62bc(0x20);
    FUN_800f6630(0x24);
    FUN_800f5410();
    uVar1 = FUN_800f3c3c(0x20);
    FUN_800f3f38(uVar1);
    FUN_800f824c(0x24);
    *DAT_8019ed68 = *DAT_8019ed68 & 0xfd;
    bVar3 = *DAT_8019ed68;
    if (*DAT_8019ed50 == '\0') {
      bVar3 = bVar3 | 2;
    }
    *DAT_8019ed68 = bVar3;
    iVar2 = FUN_800f53c0();
    if (iVar2 != 0) {
      FUN_800f71dc(0);
      FUN_800f654c(0x60);
      FUN_800f824c(0xc);
      FUN_800f654c(0x50);
      FUN_800f824c(0xe);
      FUN_801105a4();
    }
    FUN_800f6630(0x20);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_8011053c();
  FUN_800f6564(0x1288);
  FUN_800f4248(0xfb);
  FUN_800f8188(0x1288);
  FUN_800f71dc(3);
  do {
    FUN_800f9330();
    FUN_8010f68c();
    FUN_8010f4dc();
    FUN_80118938();
    FUN_800f95a0();
    FUN_800f5e48();
    iVar2 = FUN_800f5c64(0x202);
  } while (iVar2 != 0);
  FUN_8011ea5c();
  return;
}




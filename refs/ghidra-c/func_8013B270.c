
void FUN_8013b270(void)

{
  int iVar1;
  
  FUN_801210ac();
  FUN_800f7500(DAT_80199256);
  FUN_8011ef30();
  FUN_800f7500(DAT_8019925e);
  FUN_8011fb74();
  FUN_800f8fb8(0x48);
  FUN_800f8fb8(0x49);
  FUN_800f7500(0x212);
  do {
    FUN_800f7270(0x48);
    FUN_800f6c68(0x14ff9d);
    FUN_800f939c();
    FUN_80124eac();
    FUN_800f6b68(0);
    FUN_80120a0c();
    FUN_800f960c();
    FUN_800f939c();
    FUN_801224f8();
    FUN_80122518();
    *DAT_8019ed58 = *DAT_8019ed58 + 2;
    *DAT_8019ed54 = *DAT_8019ed58;
    FUN_800f7500(DAT_8019925c);
    FUN_8011f8d4();
    FUN_800f960c();
    FUN_80122334();
    FUN_80122334();
    FUN_800f62bc(0x48);
    FUN_800f6630(0x48);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f6564(0x1bc7);
  FUN_800f824c(0x45);
  while( true ) {
    FUN_800f6630(0x45);
    FUN_8012d1d0();
    iVar1 = FUN_800f53d4();
    if (iVar1 == 0) break;
    FUN_800f62bc(0x45);
    FUN_800f6630(0x45);
    FUN_800f5574(5);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f8fb8(0x45);
    }
  }
  FUN_800f6630(0x45);
  FUN_800f8188(0x1bc7);
  FUN_801241b8();
  FUN_8011f684();
  DAT_8019ed9c = 1;
  DAT_800d212c = DAT_800d212c | 2;
  FUN_80120b6c();
  DAT_8019ed9c = 0;
  while( true ) {
    FUN_8013b764();
    FUN_8013b7b8(0xff);
    FUN_800f6564(0x1bc7);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x4a);
    FUN_800f824c(0x46);
    FUN_800f654c(0x38);
    FUN_800f824c(0x45);
    FUN_8011f6d4();
    FUN_800f8fb8(0x45);
    FUN_800f8fb8(0x46);
    do {
      FUN_800f6630(0x45);
      FUN_800f5140();
      FUN_801224d0();
      FUN_800f9644(0x20);
      *DAT_8019ed40 = (&DAT_8019a0ac)[*DAT_8019ed54];
      DAT_8019ed40[1] = (&DAT_8019a0ad)[*DAT_8019ed54];
      *DAT_8019ed58 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      FUN_800f6630(0x45);
      FUN_8013b804();
      FUN_800f7864();
      FUN_800f5410();
      FUN_800f4008(0x81);
      FUN_800f8960(0xa602);
      FUN_800f62bc(0x45);
      FUN_800f6630(0x45);
      FUN_800f5574(5);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_8013b764();
    FUN_801263f0();
    FUN_8011f6a4();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
    FUN_800f6630(1);
    FUN_800f4248(8);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1bc7);
        FUN_800f5ccc();
        iVar1 = FUN_800f5b8c(0x8080);
        if (iVar1 == 0) {
          FUN_800f654c(4);
        }
        FUN_800f8188(0x1bc7);
        FUN_8013b840();
        iVar1 = FUN_800f53d4();
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      do {
        FUN_800f6564(0x1bc7);
        FUN_800f61e8();
        FUN_800f5574(5);
        iVar1 = FUN_800f53d4();
        if (iVar1 != 0) {
          FUN_800f654c(0);
        }
        FUN_800f8188(0x1bc7);
        FUN_8013b840();
        iVar1 = FUN_800f53d4();
      } while (iVar1 != 0);
    }
    FUN_800f6630(1);
    FUN_800f4248(3);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_8013b7c0();
      FUN_800f5ccc();
      FUN_800f5ccc();
      iVar1 = FUN_800f5b8c(0x8080);
      if (iVar1 == 0) {
        FUN_800f654c(2);
      }
      FUN_800f8768(0x16b9);
    }
  }
  FUN_8013b764();
  FUN_8013b7b8(0xff);
  FUN_801263c8();
  return;
}




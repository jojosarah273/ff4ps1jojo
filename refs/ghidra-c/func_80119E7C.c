
void FUN_80119e7c(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  
  FUN_800f6564(0x1706);
  FUN_800f5480();
  FUN_800f8058(7);
  FUN_800f824c(0x3d);
  FUN_800f6564(0x1707);
  FUN_800f5480();
  FUN_800f8058(7);
  iVar5 = FUN_800f53fc();
  if (iVar5 == 0) {
    FUN_800f4248(0x1f);
    FUN_800f824c(0x3e);
    FUN_800f654c(0xf);
    FUN_800f824c(7);
  }
  else {
    FUN_800f5410();
    FUN_800f4008(0xf);
    FUN_800f824c(7);
    FUN_800f8fb8(0x3e);
  }
  do {
    FUN_800f7270(0x3d);
    FUN_800f7500(0x10);
    do {
      FUN_800f6c68(0x7f5c71);
      FUN_800f5574(0x60);
      iVar5 = FUN_800f53d4();
      if (iVar5 != 0) {
        FUN_800f8d6c(0x3d);
        FUN_800f654c(100);
        FUN_800f885c(0x7f5c71);
        FUN_800f61e8();
        FUN_800f885c(0x7f5c72);
        FUN_800f61e8();
        FUN_800f885c(0x7f5d71);
        FUN_800f61e8();
        FUN_800f885c(0x7f5d72);
        FUN_8011a204();
        FUN_800f71dc(0);
        FUN_800f7500(0);
        do {
          FUN_800f9644(0x20);
          FUN_800f6cf4(0x7f48c8);
          uVar1 = *DAT_8019ed44;
          uVar2 = *DAT_8019ed54;
          FUN_800f6cf4(0x7f49c8);
          uVar3 = *DAT_8019ed44;
          FUN_800f6cf4(0x7f4ac8);
          uVar4 = *DAT_8019ed44;
          FUN_800f6cf4(0x7f4bc8);
          *DAT_8019ed44 =
               uVar1 & 0x2000 | (ushort)((int)(uVar2 + 200) >> 1) | (ushort)((uVar3 & 0x2000) >> 1)
               | (ushort)((uVar4 & 0x2000) >> 2) | (ushort)((*DAT_8019ed44 & 0x2000) >> 3);
          FUN_800f89d4(0xa27);
          FUN_800f89d4(0xa29);
          FUN_800f89d4(0xa2f);
          FUN_800f89d4(0xa31);
          FUN_800f6558(0);
          FUN_800f9660(0x20);
          *DAT_8019ed54 = *DAT_8019ed54 + 2;
          *DAT_8019ed40 = *DAT_8019ed60;
          FUN_800f4248(7);
          iVar5 = FUN_800f4120(2);
          if (iVar5 == 0) {
            *DAT_8019ed40 = *DAT_8019ed60;
            FUN_800f5410();
            FUN_800f4008(8);
            *DAT_8019ed58 = *DAT_8019ed44;
          }
          *DAT_8019ed58 = *DAT_8019ed58 + 4;
          FUN_800f5958(8);
          iVar5 = FUN_800f53d4();
        } while (iVar5 == 0);
        FUN_800f654c(1);
        FUN_800f824c(0xe2);
        FUN_800f654c(0x31);
        FUN_800fd804();
        goto LAB_8011a1ec;
      }
      FUN_800f6364();
      FUN_800f5ea0();
      iVar5 = FUN_800f5c64(0x202);
    } while (iVar5 != 0);
    FUN_800f62bc(0x3e);
    FUN_800f6630(0x3e);
    FUN_800f5574(0x20);
    iVar5 = FUN_800f53c0();
    if (iVar5 != 0) break;
    FUN_800f5da0(7);
    iVar5 = FUN_800f5b8c(0x202);
  } while (iVar5 != 0);
LAB_8011a1ec:
  FUN_8011ea5c();
  return;
}




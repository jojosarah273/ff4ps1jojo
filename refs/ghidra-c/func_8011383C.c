
void FUN_8011383c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f654c(0x51);
  FUN_800fd804();
  FUN_800f654c(0x60);
  FUN_800f824c(0xad);
  FUN_800f8fb8(0x79);
  FUN_800f8fb8(0x7a);
  do {
    FUN_800fe7b0();
    FUN_800f6630(0x7a);
    FUN_800f4248(0x1c);
    *DAT_8019ed40 = *DAT_8019ed40 >> 2;
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f6630(0x83);
    FUN_800f4248(0xe0);
    *DAT_8019ed40 = *DAT_8019ed40 | (&DAT_80198c5c)[*DAT_8019ed58];
    FUN_8017ea90(*DAT_8019ed40);
    FUN_800f6630(0x7a);
    FUN_800f4248(0xf);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f62bc(0x79);
    }
    FUN_8011416c();
    FUN_800f8fb8(0x20);
    do {
      FUN_800f6630(0x20);
      *DAT_8019ed58 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80198c64)[*DAT_8019ed58];
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0x6fb);
      FUN_800f3f38(uVar2);
      FUN_800f824c(0x22);
      FUN_800f5140();
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x22);
      FUN_800f3f38(uVar2);
      FUN_801140a4();
      FUN_80113c04();
      FUN_800f6630(0x20);
      *DAT_8019ed58 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80198c64)[*DAT_8019ed58];
      FUN_800f5410();
      FUN_800f4008(0x40);
      FUN_800f5410();
      uVar2 = FUN_800f3b04(0x6fb);
      FUN_800f3f38(uVar2);
      FUN_800f5140();
      FUN_801140a4();
      FUN_80113c54();
      FUN_800f6630(0x20);
      FUN_800f4248(3);
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_80198c74)[*DAT_8019ed54];
      FUN_800f8960(0x302);
      FUN_800f5574(0xec);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f6630(0x7a);
        FUN_800f4248(4);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) {
          FUN_800f654c(0x79);
        }
      }
      FUN_800f654c(0x39);
      FUN_800f8960(0x303);
      FUN_800f62bc(0x20);
      FUN_800f6630(0x20);
      FUN_800f5574(0x10);
      iVar1 = FUN_800f53d4();
    } while (iVar1 == 0);
    FUN_800f6240(0x6fb);
    FUN_800f6630(0x7a);
    FUN_800f4248(3);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f6630(0x79);
      FUN_800f5574(0x12);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) {
        FUN_800f5da0(0xad);
      }
      else {
        FUN_800f62bc(0xad);
      }
    }
    FUN_800f6630(0xad);
    FUN_800f5574(0x62);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  FUN_800f654c(0);
  FUN_800fd804();
  FUN_8011ea5c();
  return;
}




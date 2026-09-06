
void FUN_8011f9c4(void)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  
  FUN_800f926c();
  FUN_800f9298();
  FUN_800f9330();
  FUN_800f9330();
  FUN_800f71dc(0x100);
  FUN_800f9330();
  FUN_800f94b8();
  FUN_800f95a0();
  FUN_800f9200();
  FUN_800f9448();
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed54;
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x29);
  FUN_800f3f94(uVar1);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f9660(0x20);
  while( true ) {
    FUN_800f6d70(0);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) break;
    FUN_800f63bc();
    FUN_800f5574(1);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_801245b4();
      FUN_800f885c(0x7e0000);
      FUN_800f3d48();
      FUN_800f885c(0x7e0040);
      psVar3 = DAT_8019ed54;
    }
    else {
      FUN_800f9644(0x20);
      FUN_800f6de8(0);
      FUN_800f5410();
      uVar1 = FUN_800f3c3c(0x29);
      FUN_800f3f94(uVar1);
      *DAT_8019ed54 = *DAT_8019ed44;
      FUN_800f9660(0x20);
      psVar3 = DAT_8019ed58;
    }
    *psVar3 = *psVar3 + 2;
  }
  FUN_800f95a0();
  FUN_800f94b8();
  FUN_800f9448();
  return;
}




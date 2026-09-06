
void FUN_8012a678(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f939c();
  FUN_800f654c(0x20);
  FUN_800f824c(0x3f);
  FUN_800f6564(0x1b23);
  *DAT_8019ed40 = *DAT_8019ed40 << 3;
  FUN_800f5140();
  FUN_800f4f4c();
  FUN_800f4008(0x36);
  FUN_800f3d48();
  FUN_800f6564(0x1b22);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_800f654c(0x6c);
  }
  FUN_800f5410();
  FUN_800f4008(4);
  *DAT_8019ed54 = *DAT_8019ed44;
  FUN_800f7500(0x300);
  FUN_8011f724();
  FUN_800f6564(0x1b19);
  iVar1 = FUN_800f6434(2);
  if (iVar1 != 0) goto LAB_8012a850;
  FUN_800f6564(0x1b25);
  FUN_800f5480();
  uVar2 = FUN_800f3b04(0x1b1a);
  FUN_800f7f48(uVar2);
  FUN_800f5574(0xfc);
  iVar1 = FUN_800f53c0();
  if (iVar1 == 0) {
    FUN_800f5574(0);
    iVar1 = FUN_800f53fc();
    if (iVar1 == 0) {
      FUN_800f5574(0xb);
      iVar1 = FUN_800f53c0();
      if (iVar1 == 0) goto LAB_8012a7b0;
    }
    FUN_8012b0d8();
  }
  else {
LAB_8012a7b0:
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x36);
    FUN_800f3d48();
    FUN_800f6564(0x1b24);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x70);
    }
    FUN_800f5410();
    FUN_800f4008(8);
    *DAT_8019ed54 = *DAT_8019ed44;
    FUN_800f7500(0x310);
    FUN_8011f724();
  }
LAB_8012a850:
  FUN_800f960c();
  return;
}




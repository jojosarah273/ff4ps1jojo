
void FUN_8013c094(void)

{
  int iVar1;
  
  while( true ) {
    FUN_800f6564(0x1bb3);
    *DAT_8019ed40 = *DAT_8019ed40 << 3;
    FUN_800f5140();
    FUN_800f4f4c();
    FUN_800f4008(0x30);
    FUN_800f824c(0x5b);
    FUN_800f6564(0x1bb4);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f654c(0x70);
    }
    else {
      FUN_800f654c(0);
    }
    FUN_800f824c(0x5a);
    FUN_800f7270(0x5a);
    FUN_800f7500(0x304);
    FUN_800f971c();
    FUN_8011f724();
    FUN_8011f684();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f8fb8(0x60);
      FUN_800f7500(0x304);
      FUN_8012b100();
      return;
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_8013c554();
    }
    FUN_800f6630(1);
    FUN_800f4248(1);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
LAB_8013c1fc:
    FUN_800f6630(1);
    FUN_800f4248(2);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1bb4);
      FUN_800f61e8();
      FUN_800f4248(1);
      FUN_800f8188(0x1bb4);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) goto LAB_8013c24c;
LAB_8013c26c:
      FUN_800f6564(0x1bb3);
      FUN_800f5ccc();
      iVar1 = FUN_800f5b8c(0x80);
      if (iVar1 == 0) {
        FUN_800f8188(0x1bb3);
      }
    }
    else {
LAB_8013c24c:
      FUN_800f6630(1);
      FUN_800f4248(8);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) goto LAB_8013c26c;
    }
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
LAB_8013c2b4:
      FUN_800f6564(0x1bb3);
      FUN_800f61e8();
      FUN_800f5574(4);
      iVar1 = FUN_800f53d4();
      if (iVar1 == 0) {
        FUN_800f8188(0x1bb3);
      }
    }
  }
  FUN_800f6564(0x1bb4);
  FUN_800f61e8();
  FUN_800f4248(1);
  FUN_800f8188(0x1bb4);
  iVar1 = FUN_800f4120(2);
  if (iVar1 == 0) goto LAB_8013c1fc;
  goto LAB_8013c2b4;
}




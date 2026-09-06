
undefined4 FUN_8011b158(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f824c(0x3d);
  FUN_800f6564(0xfe5);
  iVar2 = FUN_800f6434(0x80);
  if (iVar2 == 0) {
    FUN_800f6564(0x1701);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) goto LAB_8011b1d0;
  }
  FUN_800f62bc(0x3e);
  FUN_800f62bc(0x3e);
LAB_8011b1d0:
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x139802);
  FUN_800f824c(0x40);
  FUN_800f6c68(0x139803);
  FUN_800f824c(0x41);
  FUN_800f7270(0x40);
  FUN_800f5e48();
  while( true ) {
    FUN_800f6c68(0x139c00);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f5e48();
  }
  FUN_800f6364();
  FUN_800f8d00(0xa69);
  FUN_800f6364();
  FUN_800f7500(0);
  while( true ) {
    uVar1 = FUN_800f3c3c(0x40);
    FUN_800f56ac(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f6c68(0x139c00);
    FUN_800f8960(0xa49);
    FUN_800f63bc();
    FUN_800f6364();
  }
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x139800);
  FUN_800f824c(0xbc);
  FUN_800f6c68(0x139801);
  FUN_800f824c(0xbd);
  while( true ) {
    FUN_800f7270(0xbc);
    FUN_800f6c68(0x139c00);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f5574(0xfe);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_8011b6b4();
      FUN_800f5574(0);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) goto LAB_8011b390;
    }
    else {
      FUN_800f7270(0xbc);
      FUN_800f6364();
      FUN_800f8d6c(0xbc);
      FUN_800f6c68(0x139c00);
      FUN_8011b6b4();
      FUN_800f5574(0);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) {
LAB_8011b390:
        FUN_8011b448();
        FUN_800f7270(0xbc);
        uVar1 = FUN_800f3b04(0xa69);
        FUN_800f56ac(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) break;
      }
    }
    FUN_800f7270(0xbc);
    FUN_800f6364();
    FUN_800f8d6c(0xbc);
  }
  FUN_800f654c(1);
  FUN_800f824c(0xb1);
  FUN_800f8fb8(0xab);
  FUN_800f7270(0xbc);
  FUN_800f6c68(0x139c01);
  iVar2 = FUN_800f6434(2);
  if ((iVar2 == 0) && (iVar2 = FUN_801163e8(), iVar2 != 0)) {
    return 1;
  }
  FUN_800f8fb8(0xb1);
  return 0;
}




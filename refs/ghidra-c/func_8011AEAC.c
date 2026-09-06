
undefined4 FUN_8011aeac(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f8fb8(0x3e);
  FUN_800f5140();
  FUN_800f4f4c();
  uVar1 = FUN_800f3c3c(0x3e);
  FUN_800f7a40(uVar1);
  FUN_800f824c(0x3d);
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x12f262);
  FUN_800f824c(0x40);
  FUN_800f6c68(0x12f263);
  FUN_800f824c(0x41);
  FUN_800f7270(0x40);
  FUN_800f5e48();
  while( true ) {
    FUN_800f6c68(0x12f460);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f5e48();
  }
  FUN_800f6364();
  FUN_800f8d00(0xa6b);
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x12f260);
  FUN_800f824c(0xbe);
  FUN_800f6c68(0x12f261);
  FUN_800f824c(0xbf);
  while( true ) {
    FUN_800f7270(0xbe);
    FUN_800f6c68(0x12f460);
    FUN_800f5574(0xff);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) break;
    FUN_800f5574(0xfe);
    iVar2 = FUN_800f53d4();
    if (iVar2 == 0) {
      FUN_8011b6b4();
      FUN_800f5574(0);
      iVar2 = FUN_800f53d4();
      if (iVar2 == 0) goto LAB_8011b048;
    }
    else {
      FUN_800f7270(0xbe);
      FUN_800f6364();
      FUN_800f8d6c(0xbe);
      FUN_800f6c68(0x12f460);
      FUN_8011b6b4();
      FUN_800f5574(0);
      iVar2 = FUN_800f53d4();
      if (iVar2 != 0) {
LAB_8011b048:
        FUN_800f7270(0xbe);
        do {
          FUN_800f6364();
          FUN_800f6c68(0x12f460);
          FUN_800f5574(0xff);
          iVar2 = FUN_800f53d4();
        } while (iVar2 == 0);
        FUN_800f6364();
        FUN_800f8d6c(0xbe);
        FUN_800f7270(0xbe);
        uVar1 = FUN_800f3b04(0xa6b);
        FUN_800f56ac(uVar1);
        iVar2 = FUN_800f53d4();
        if (iVar2 != 0) break;
      }
    }
    FUN_800f7270(0xbe);
    FUN_800f6364();
    FUN_800f8d6c(0xbe);
  }
  FUN_800f654c(1);
  FUN_800f824c(0xb1);
  DAT_800d067b = 0;
  DAT_800d0677 = DAT_800d0677 & 0xf;
  FUN_800f8fb8(0xab);
  FUN_800f7270(0xbe);
  FUN_800f6c68(0x12f461);
  iVar2 = FUN_800f6434(2);
  if ((iVar2 == 0) && (iVar2 = FUN_801163e8(), iVar2 != 0)) {
    return 1;
  }
  FUN_800f8fb8(0xb1);
  return 0;
}




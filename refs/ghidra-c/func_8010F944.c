
void FUN_8010f944(void)

{
  int iVar1;
  
  FUN_800f71dc(0x30);
  FUN_800f8d6c(0xef);
  FUN_800f71dc(0xe0);
  FUN_800f8d6c(0xf1);
  FUN_800f71dc(0x100);
  FUN_800f8d6c(0xf3);
  FUN_800f71dc(0xffe0);
  FUN_800f8d6c(0xf5);
  FUN_8010fca8();
  FUN_800f71dc(0x140);
  FUN_800f8d6c(0x89);
  do {
    FUN_800fe778();
    FUN_800f7270(0x89);
    FUN_800f5958(0xc0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0x2c);
      FUN_80117f40();
    }
    FUN_800fe870();
    FUN_800f7270(0x89);
    FUN_800f5958(0xc0);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) {
      FUN_800f6630(0x7a);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f5da0(0xf1);
      }
    }
    else {
      FUN_80115d2c();
      FUN_800f7270(0x89);
      FUN_800f5958(0x138);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        FUN_800f654c(0x23);
        FUN_800fd804();
        FUN_800f654c(1);
        FUN_800f824c(0xe5);
      }
    }
    FUN_80110474();
    FUN_800f7270(0x89);
    FUN_800f5e48();
    FUN_800f8d6c(0x89);
    iVar1 = FUN_800f5c64(0x202);
  } while (iVar1 != 0);
  FUN_8011ea5c();
  return;
}




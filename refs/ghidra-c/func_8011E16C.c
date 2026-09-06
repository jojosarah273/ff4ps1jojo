
void FUN_8011e16c(void)

{
  int iVar1;
  
  FUN_800f7270(0x3d);
  FUN_800f6c68(0x168200);
  FUN_800f824c(0x3d);
  FUN_800f6c68(0x168201);
  FUN_800f824c(0x3e);
  FUN_800f7270(0x3d);
  while( true ) {
    while( true ) {
      FUN_800f6c68(0x16c480);
      iVar1 = FUN_800f6434(0x8080);
      if (iVar1 == 0) break;
      FUN_800f7270(0x40);
      FUN_800f885c(0x7f5c71);
      FUN_800f6364();
      FUN_800f8d6c(0x40);
      *DAT_8019ed40 = *DAT_8019ed5c;
      iVar1 = FUN_800f6434(2);
      if (iVar1 != 0) {
        return;
      }
      FUN_800f7270(0x3d);
      FUN_800f6364();
      FUN_800f8d6c(0x3d);
    }
    FUN_800f4248(0x7f);
    FUN_800f9200();
    FUN_800f6c68(0x16c481);
    *DAT_8019ed58 = *DAT_8019ed44;
    FUN_800f63bc();
    FUN_800f93dc();
    FUN_800f7270(0x40);
    do {
      FUN_800f885c(0x7f5c71);
      FUN_800f6364();
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f8d6c(0x40);
    *DAT_8019ed40 = *DAT_8019ed5c;
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) break;
    FUN_800f7270(0x3d);
    *DAT_8019ed54 = *DAT_8019ed54 + 2;
    FUN_800f8d6c(0x3d);
  }
  return;
}





void FUN_8013c2fc(void)

{
  int iVar1;
  
  while( true ) {
    FUN_801210ac();
    FUN_800f7500(DAT_80199266);
    FUN_8011fba4();
    FUN_8013c44c();
    FUN_8011f684();
    FUN_80126418();
    FUN_8011f884();
    FUN_800f6630(1);
    FUN_800f4248(3);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x60);
      *DAT_8019ed40 = ~*DAT_8019ed40;
      FUN_800f824c(0x60);
    }
    FUN_800f6630(1);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f6630(0x60);
      FUN_800f5574(0xff);
      iVar1 = FUN_800f53d4();
      if (iVar1 != 0) {
        return;
      }
      FUN_800f654c(0xff);
      FUN_800f824c(0x60);
    }
    FUN_800f6630(0);
    FUN_800f4248(0x80);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) break;
    FUN_800f6630(1);
    FUN_800f4248(4);
    iVar1 = FUN_800f4120(2);
    if (iVar1 == 0) {
      FUN_800f8fb8(0x60);
      FUN_8013c44c();
      FUN_800f6240(0x1a83);
      FUN_8013bffc();
      return;
    }
  }
  return;
}




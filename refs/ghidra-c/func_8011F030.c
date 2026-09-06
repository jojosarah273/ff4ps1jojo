
void FUN_8011f030(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f9644(0x20);
  FUN_800f6658(0x29);
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x2b);
  FUN_800f3f94(uVar1);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6658(0x2d);
  FUN_800f8274(0x31);
  FUN_800f9660(0x20);
  FUN_800f654c(0xf7);
  FUN_8011f118();
  FUN_800f9200();
  FUN_800f6630(0x33);
  iVar2 = FUN_800f6434(2);
  if (iVar2 == 0) {
    FUN_800f93dc();
  }
  else {
    FUN_800f93dc();
    do {
      FUN_8011f210();
      FUN_800f5da0(0x32);
      iVar2 = FUN_800f5b8c(0x202);
    } while (iVar2 != 0);
    FUN_800f654c(0xfc);
    FUN_8011f118();
  }
  return;
}




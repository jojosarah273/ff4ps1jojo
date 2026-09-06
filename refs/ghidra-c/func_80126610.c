
void FUN_80126610(void)

{
  int iVar1;
  
  do {
    FUN_8011f320();
    FUN_800f6630(0x88);
    iVar1 = FUN_800f6434(0x80);
    if (iVar1 != 0) {
      return;
    }
    FUN_800f81e8(0x2100);
    FUN_800f9200();
    FUN_8011f844();
    FUN_800f93dc();
    FUN_800f5ccc();
    FUN_800f824c(0x88);
    iVar1 = FUN_800f5b8c(0x8080);
  } while (iVar1 != 0);
  FUN_800f654c(0x80);
  FUN_800f81e8(0x2100);
  FUN_800f824c(0x88);
  return;
}




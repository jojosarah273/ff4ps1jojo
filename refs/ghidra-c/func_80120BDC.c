
void FUN_80120bdc(void)

{
  int iVar1;
  
  do {
    FUN_8011f320();
    FUN_8011ee34();
    if (DAT_8019ed9c != 0) {
      FUN_8013b764();
      FUN_800f6630(0x45);
      FUN_8013b7b8(*DAT_8019ed40);
    }
    FUN_800f9644(0x20);
    FUN_800f6658(0x1d);
    FUN_800f5410();
    FUN_800f4064(0x40);
    FUN_800f8274(0x1d);
    FUN_800f6658(0x1f);
    FUN_800f5410();
    FUN_800f4064(0x80);
    FUN_800f8274(0x1f);
    FUN_800f9660(0x20);
    FUN_800f5da0(0x45);
    iVar1 = FUN_800f5b8c(0x202);
  } while (iVar1 != 0);
  return;
}





void FUN_8011356c(void)

{
  int iVar1;
  
  FUN_800f654c(0x20);
  FUN_800f8188(0xacf);
  FUN_800f654c(2);
  FUN_800f8188(0xad0);
  FUN_800f8188(0xad1);
  FUN_800f71dc(0x30);
  FUN_800f8d00(0xad2);
  FUN_800f654c(6);
  FUN_800f8188(0xacd);
  FUN_800f8f74(0xace);
  FUN_80115bcc();
  do {
    FUN_800fe7d8();
    FUN_80119ac8();
    FUN_80115d2c();
    FUN_800f6630(0x7a);
    FUN_800f4248(0x3f);
    iVar1 = FUN_800f4120(0x202);
    if (iVar1 == 0) {
      FUN_800f654c(0x23);
      FUN_800fd804();
    }
    FUN_800f7210(0xad2);
    iVar1 = FUN_800f7170(0x202);
  } while (iVar1 != 0);
  FUN_800fe8b4();
  return;
}




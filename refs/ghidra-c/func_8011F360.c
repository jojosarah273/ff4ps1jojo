
void FUN_8011f360(void)

{
  int iVar1;
  
  FUN_800f8fb8(0x45);
  while( true ) {
    FUN_800f5480();
    FUN_800f8058(10);
    iVar1 = FUN_800f53c0();
    if (iVar1 == 0) break;
    FUN_800f62bc(0x45);
  }
  FUN_800f4008(0x8a);
  FUN_800f3d48();
  FUN_800f6630(0x45);
  iVar1 = FUN_800f6434(0x202);
  if (iVar1 == 0) {
    FUN_800f654c(0xff);
  }
  else {
    FUN_800f5410();
    FUN_800f4008(0x80);
  }
  return;
}




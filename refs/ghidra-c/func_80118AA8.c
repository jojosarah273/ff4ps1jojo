
void FUN_80118aa8(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f6364();
  FUN_800f6b68(0x9d5);
  FUN_800f9644(0x20);
  *DAT_8019ed44 = *DAT_8019ed44 << 3;
  FUN_800f8274(0x18);
  FUN_800f516c();
  FUN_800f5410();
  uVar1 = FUN_800f3c3c(0x18);
  FUN_800f3f94(uVar1);
  *DAT_8019ed58 = *DAT_8019ed44;
  FUN_800f6558(0);
  FUN_800f9660(0x20);
  while( true ) {
    FUN_800f6d70(0x1560);
    iVar2 = FUN_800f6434(2);
    if (iVar2 != 0) break;
    FUN_800f63bc();
  }
  FUN_80117594();
  FUN_800f8960(0x1560);
  FUN_8011ea5c();
  return;
}




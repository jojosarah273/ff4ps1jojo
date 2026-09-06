
void FUN_80117fa8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_800f6364();
  FUN_800f8d6c(0xb3);
  FUN_800f71dc(0);
  FUN_800f8d6c(0x3d);
  while( true ) {
    FUN_800f7270(0x3d);
    FUN_800f6b68(0x1000);
    iVar1 = FUN_800f6434(2);
    if (iVar1 != 0) break;
    FUN_800f6630(0x3d);
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_800f824c(0x3d);
    FUN_800f6630(0x3e);
    FUN_800f4008(0);
    FUN_800f824c(0x3e);
  }
  FUN_800f7270(0xb3);
  FUN_800f6b68(0x9d5);
  FUN_800f5ccc();
  *DAT_8019ed58 = *DAT_8019ed44;
  *DAT_8019ed40 = (&DAT_801992ac)[*DAT_8019ed58];
  iVar1 = FUN_800f6434(0x8080);
  if (iVar1 == 0) {
    FUN_8011818c();
    FUN_800f7594(0x3d);
    FUN_800f6d70(0x1000);
    FUN_800f4248(0xe0);
    FUN_800f7270(0xb3);
    uVar2 = FUN_800f3b04(*DAT_8019ed54 + 0x9d5);
    FUN_800f78c4(uVar2);
    FUN_800f8960(0x1000);
    FUN_800f4248(0x1f);
    FUN_800f5574(0x11);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f654c(0xb);
      FUN_800f8960(0x1001);
    }
    FUN_800f6d70(0x1009);
    FUN_800f8960(0x1007);
    FUN_800f6d70(0x100a);
    FUN_800f8960(0x1008);
    FUN_800f6d70(0x100d);
    FUN_800f8960(0x100b);
    FUN_800f6d70(0x100e);
    FUN_800f8960(0x100c);
    FUN_801183d8();
  }
  else {
    FUN_80118244();
  }
  FUN_800fe778();
  return;
}




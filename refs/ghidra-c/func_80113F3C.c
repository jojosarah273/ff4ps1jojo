
void FUN_80113f3c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_8011416c();
  FUN_800f8fb8(0x20);
  FUN_800f8fb8(0x21);
  do {
    FUN_800f9644(0x20);
    FUN_800f6658(0x20);
    *DAT_8019ed44 = *DAT_8019ed44 << 5;
    FUN_800f5410();
    FUN_800f4064(0x100);
    FUN_800f8274(0x18);
    FUN_800f658c(0x6fb);
    FUN_800f8274(0x1a);
    FUN_800f6558(0);
    FUN_800f9660(0x20);
    FUN_80174f0c();
    FUN_800f6630(0x31);
    FUN_801140a4();
    FUN_80113c04();
    FUN_800f6630(0x31);
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_801140a4();
    FUN_80113c54();
    FUN_800f6630(0x8f);
    FUN_800f5574(0xc0);
    iVar1 = FUN_800f53d4();
    if (iVar1 != 0) {
      FUN_800f6630(0x7a);
      FUN_800f4248(2);
      FUN_800f5410();
      uVar2 = FUN_800f3c3c(0x8f);
      FUN_800f3f38(uVar2);
    }
    FUN_800f8960(0x302);
    FUN_800f6630(0x91);
    FUN_800f8960(0x303);
    FUN_800f62bc(0x20);
    FUN_800f6630(0x20);
    uVar2 = FUN_800f3c3c(0x90);
    FUN_800f54d4(uVar2);
    iVar1 = FUN_800f53d4();
  } while (iVar1 == 0);
  return;
}




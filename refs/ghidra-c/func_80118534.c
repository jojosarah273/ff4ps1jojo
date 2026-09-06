
void FUN_80118534(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_800f6364();
  FUN_800f8d6c(0xb3);
  FUN_800f7500(0);
  FUN_800f8ebc(0x3d);
  do {
    FUN_800f7594(0x3d);
    FUN_800f6d70(0x1000);
    FUN_800f4248(0x1f);
    uVar1 = FUN_800f3b04(*DAT_8019ed54 + 0x9d5);
    FUN_800f54d4(uVar1);
    iVar2 = FUN_800f53d4();
    if (iVar2 != 0) {
      FUN_800f6b68(0x9d5);
      FUN_800f5ccc();
      *DAT_8019ed54 = *DAT_8019ed44;
      *DAT_8019ed40 = (&DAT_801992c4)[*DAT_8019ed54];
      iVar2 = FUN_800f6434(0x80);
      if (iVar2 == 0) {
        FUN_800f9644(0x20);
        *DAT_8019ed44 = *DAT_8019ed44 << 6;
        FUN_800f8274(0x40);
        FUN_800f6558(0);
        FUN_800f9660(0x20);
        FUN_800f654c(0x40);
        FUN_800f824c(7);
        FUN_800f7270(0x3d);
        FUN_800f7594(0x40);
        do {
          FUN_800f6b68(0x1000);
          FUN_800f8960(0x1140);
          FUN_800f6364();
          FUN_800f63bc();
          FUN_800f5da0(7);
          iVar2 = FUN_800f5b8c(0x202);
        } while (iVar2 != 0);
        FUN_800f7270(0x40);
        FUN_800f90ec(0x1143);
        FUN_800f90ec(0x1144);
        FUN_800f90ec(0x1145);
        FUN_800f90ec(0x1146);
      }
      FUN_800f7270(0x3d);
      FUN_800f90ec(0x1000);
      FUN_8011ea5c();
      return;
    }
    FUN_800f6630(0x3d);
    FUN_800f5410();
    FUN_800f4008(0x40);
    FUN_800f824c(0x3d);
    FUN_800f6630(0x3e);
    FUN_800f4008(0);
    FUN_800f824c(0x3e);
    FUN_800f7594(0x3d);
    FUN_800f5a90(0x140);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_8011ea5c();
  return;
}




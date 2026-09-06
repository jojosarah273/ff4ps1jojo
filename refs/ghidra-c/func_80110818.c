
void FUN_80110818(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_80110f2c();
  FUN_800f654c(1);
  FUN_800f8188(0x6c8);
  do {
    do {
      FUN_80110fa4();
      FUN_800f654c(0x24);
      FUN_800f5480();
      uVar1 = FUN_800f3c3c(0x24);
      FUN_800f7f48(uVar1);
      FUN_800f824c(0xb9);
      FUN_80173780();
      FUN_80110bc8();
      FUN_800f6630(0x24);
      FUN_800f5574(0x24);
      iVar2 = FUN_800f53c0();
      if (iVar2 != 0) {
        FUN_800f654c(0x68);
        FUN_800f8188(0x300);
        FUN_800f654c(0x78);
        FUN_800f8188(0x304);
        FUN_800f8188(0x301);
        FUN_800f8188(0x305);
        FUN_800f6630(0x7a);
        *DAT_8019ed40 = *DAT_8019ed40 >> 2;
        FUN_800f4248(2);
        FUN_800f5410();
        FUN_800f4008(0xe4);
        FUN_800f8188(0x302);
        *DAT_8019ed40 = *DAT_8019ed40 ^ 2;
        FUN_800f8188(0x306);
        FUN_800f654c(0x37);
        FUN_800f8188(0x303);
        FUN_800f8188(0x307);
      }
      FUN_800f6630(0x7a);
      FUN_800f4248(7);
      iVar2 = FUN_800f4120(0x202);
    } while (iVar2 != 0);
    FUN_800f62bc(0x24);
    FUN_800f6630(0x24);
    FUN_800f5574(0x48);
    iVar2 = FUN_800f53d4();
  } while (iVar2 == 0);
  FUN_800f8fb8(200);
  FUN_8011ea5c();
  return;
}




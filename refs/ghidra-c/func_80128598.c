
void FUN_80128598(void)

{
  int iVar1;
  
  FUN_800f6564(0x1b9a);
  iVar1 = FUN_800f6434(2);
  if (iVar1 == 0) {
    FUN_80128750();
    FUN_8016ea7c();
    FUN_80126590();
  }
  else {
    FUN_800f6240(0x1b9a);
    FUN_800f971c();
    FUN_800f824c(0x88);
    FUN_800f71dc(0xffe8);
    FUN_800f8d6c(0x93);
    FUN_800f8d6c(0x99);
    FUN_800f8d6c(0x9f);
    FUN_800f654c(3);
    FUN_800f824c(0x4e);
    FUN_800f7500(0x30);
    do {
      FUN_801266c8();
      FUN_800f9644(0x20);
      FUN_800f5dd4(0x93);
      FUN_800f5dd4(0x99);
      FUN_800f5dd4(0x99);
      FUN_800f5dd4(0x9f);
      FUN_800f5dd4(0x9f);
      FUN_800f5dd4(0x9f);
      FUN_800f9660(0x20);
      FUN_800f5da0(0x4e);
      iVar1 = FUN_800f5b8c(0x202);
      if (iVar1 == 0) {
        FUN_800f654c(3);
        FUN_800f824c(0x4e);
        FUN_800f62bc(0x88);
      }
      FUN_8011f884();
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(0x202);
      if (iVar1 == 0) {
        FUN_800f6630(1);
        FUN_800f4248(0xc);
        iVar1 = FUN_800f4120(2);
        if (iVar1 == 0) goto LAB_801286e8;
      }
      else {
LAB_801286e8:
        FUN_80128750();
        FUN_800f654c(3);
        FUN_800f824c(0x4e);
        FUN_800f654c(0xf);
        FUN_800f824c(0x88);
        FUN_800f7500(2);
      }
      FUN_800f5ea0();
      iVar1 = FUN_800f5c64(0x202);
    } while (iVar1 != 0);
    FUN_800f654c(0xf);
    FUN_800f824c(0x88);
  }
  return;
}




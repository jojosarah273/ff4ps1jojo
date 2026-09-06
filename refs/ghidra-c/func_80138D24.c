
void FUN_80138d24(void)

{
  int iVar1;
  
  FUN_80139afc();
  do {
    FUN_80120e2c();
    FUN_800f6564(0x1a88);
    iVar1 = FUN_800f6434(2);
    if (iVar1 == 0) {
      FUN_800f6564(0x1a02);
      iVar1 = FUN_800f6434(0x202);
      if (iVar1 != 0) goto LAB_80138d9c;
      FUN_800f7500(DAT_8019924c);
      *DAT_8019ed58 = *DAT_8019ed58 + 0x18;
    }
    else {
LAB_80138d9c:
      FUN_800f7500(DAT_8019924c);
    }
    FUN_8011fba4();
    FUN_800f8f74(0x1a88);
    FUN_80126528();
    FUN_800f654c(0x17);
    FUN_800f81e8(0x212c);
    FUN_800f5448();
    do {
      FUN_800f6564(0x1baf);
      iVar1 = FUN_800f6434(2);
      if (iVar1 == 0) {
        FUN_800f71dc(0x4040);
      }
      else {
        FUN_800f71dc(0x4010);
      }
      FUN_800f7500(0x310);
      FUN_8011f724();
      FUN_80139ca4();
      FUN_800f71dc(0x3188);
      FUN_80126070();
      FUN_8011f684();
      FUN_8011f884();
      FUN_800f6630(1);
      FUN_800f4248(3);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        FUN_800f6564(0x1baf);
        FUN_800f61e8();
        FUN_800f4248(1);
        FUN_800f8188(0x1baf);
      }
      FUN_800f6630(1);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
      if (iVar1 == 0) {
        return;
      }
      FUN_800f6630(0);
      FUN_800f4248(0x80);
      iVar1 = FUN_800f4120(2);
    } while (iVar1 != 0);
    FUN_800f8f74(0x1bb2);
    FUN_800f8f74(0x1bb0);
    FUN_800f8f74(0x1bb1);
    FUN_800f71dc(0x1340);
    FUN_8012e844();
    FUN_800f71dc(0xed00);
    FUN_800f8d00(0x1b1d);
    FUN_800f71dc(0xce28);
    FUN_800f6564(0x1baf);
    FUN_80120070();
    FUN_80124130();
    FUN_80124158();
    FUN_80138cb0();
    FUN_8012b168();
    FUN_8012b0d8();
    FUN_801264c0();
    FUN_80126528();
    FUN_8011f6a4();
  } while( true );
}



